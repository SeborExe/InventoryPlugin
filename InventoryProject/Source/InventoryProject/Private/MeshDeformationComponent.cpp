// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryProject/Public/MeshDeformationComponent.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/MaterialParameterCollection.h"
#include "Engine/Canvas.h"
#include "DrawDebugHelpers.h"


UMeshDeformationComponent::UMeshDeformationComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    
    // Domyślne wartości
    DeformationMultiplier = 5.0f;
    MinVelocity = 100.0f;
    BrushSize = 0.5f;
    BrushScale = 0.25f;
    BrushSquish = FVector(1.0f, 1.0f, 1.0f);
    RenderTargetResolution = 1024;
}

void UMeshDeformationComponent::BeginPlay()
{
    Super::BeginPlay();
    
    InitializeMeshComponent();
    CreateRenderTarget();
    CreateMaterialInstance();
    
    bIsInitialized = true;
}

void UMeshDeformationComponent::InitializeMeshComponent()
{
    // Znajdź StaticMeshComponent w tym samym Actorze
    MeshComponent = GetOwner()->FindComponentByClass<UStaticMeshComponent>();
    
    if (!MeshComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("MeshDeformationComponent: No StaticMeshComponent found on %s"), 
               *GetOwner()->GetName());
        return;
    }

    // Sprawdź czy mesh ma odpowiedni UV mapping
    if (MeshComponent->GetStaticMesh())
    {
        UE_LOG(LogTemp, Log, TEXT("MeshDeformationComponent: Initialized with mesh %s"), 
               *MeshComponent->GetStaticMesh()->GetName());
    }
}

void UMeshDeformationComponent::CreateRenderTarget()
{
    if (!IsValid(GetWorld()))
    {
        return;
    }

    // Tworzenie Render Target
    DeformationRenderTarget = UKismetRenderingLibrary::CreateRenderTarget2D(
        GetWorld(),
        RenderTargetResolution,
        RenderTargetResolution,
        RTF_RGBA8
    );

    if (DeformationRenderTarget)
    {
        // Wyczyść render target (czarny kolor = brak deformacji)
        UKismetRenderingLibrary::ClearRenderTarget2D(
            GetWorld(),
            DeformationRenderTarget,
            FLinearColor::Black
        );

        UE_LOG(LogTemp, Log, TEXT("MeshDeformationComponent: Render Target created successfully"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MeshDeformationComponent: Failed to create Render Target"));
    }
}

void UMeshDeformationComponent::CreateMaterialInstance()
{
    if (!MeshComponent || !DeformationMaterial)
    {
        UE_LOG(LogTemp, Warning, TEXT("MeshDeformationComponent: Missing MeshComponent or DeformationMaterial"));
        return;
    }

    // Tworzenie Dynamic Material Instance
    DynamicMaterialInstance = UMaterialInstanceDynamic::Create(DeformationMaterial, this);
    
    if (DynamicMaterialInstance)
    {
        // Ustawienie parametrów materiału zgodnie z Twoim M_DeformableMesh
        DynamicMaterialInstance->SetTextureParameterValue(TEXT("DamageRT"), DeformationRenderTarget);
        DynamicMaterialInstance->SetScalarParameterValue(TEXT("DeformMultiplier"), DeformationMultiplier);
        
        // Przypisanie materiału do mesh componentu
        MeshComponent->SetMaterial(0, DynamicMaterialInstance);
        
        UE_LOG(LogTemp, Log, TEXT("MeshDeformationComponent: Dynamic Material Instance created"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MeshDeformationComponent: Failed to create Dynamic Material Instance"));
    }
}

void UMeshDeformationComponent::ApplyDeformation(FVector WorldLocation, float Force)
{
    if (!bIsInitialized || !CanApplyDeformation(Force))
    {
        return;
    }

    // Konwersja world location na UV coordinates
    FVector2D UVLocation = WorldLocationToUV(WorldLocation);
    
    // Zastosowanie deformacji
    ApplyDeformationAtUV(UVLocation, Force);
    
    // Debug log
    UE_LOG(LogTemp, Log, TEXT("Applied deformation at World: %s, UV: %s, Force: %f"), 
           *WorldLocation.ToString(), *UVLocation.ToString(), Force);
}

void UMeshDeformationComponent::ApplyDeformationAtUV(FVector2D UVLocation, float Force)
{
    if (!bIsInitialized || !CanApplyDeformation(Force))
    {
        return;
    }

    // Malowanie na Render Target
    PaintToRenderTarget(UVLocation, Force);
    
    // Aktualizacja parametrów materiału
    UpdateMaterialParameters();
}

FVector2D UMeshDeformationComponent::WorldLocationToUV(FVector WorldLocation)
{
    if (!MeshComponent)
    {
        return FVector2D::ZeroVector;
    }

    // Konwersja world space na local space
    FVector LocalLocation = MeshComponent->GetComponentTransform().InverseTransformPosition(WorldLocation);
    
    // Dla uproszczenia używamy projekcji cylindrycznej
    // To może wymagać dostosowania w zależności od kształtu mesh'a
    FVector MeshBounds = MeshComponent->GetStaticMesh()->GetBounds().GetBox().GetSize();
    
    float U = (LocalLocation.Y / MeshBounds.Y) + 0.5f;
    float V = (LocalLocation.Z / MeshBounds.Z) + 0.5f;
    
    // Ograniczenie do zakresu [0,1]
    U = FMath::Clamp(U, 0.0f, 1.0f);
    V = FMath::Clamp(V, 0.0f, 1.0f);
    
    return FVector2D(U, V);
}

void UMeshDeformationComponent::PaintToRenderTarget(FVector2D UVLocation, float Force)
{
    if (!DeformationRenderTarget || !BrushMaterial)
    {
        UE_LOG(LogTemp, Warning, TEXT("Missing DeformationRenderTarget or BrushMaterial"));
        return;
    }

    // Tworzenie dynamic instance brush materiału
    UMaterialInstanceDynamic* DynamicBrush = UMaterialInstanceDynamic::Create(BrushMaterial, this);
    
    if (!DynamicBrush)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create dynamic brush material"));
        return;
    }

    // Ustawienie parametrów brush'a zgodnie z Twoim M_BrushMaterial
    DynamicBrush->SetVectorParameterValue(TEXT("UV_Transform"), FLinearColor(UVLocation.X, UVLocation.Y, 0, 0));
    DynamicBrush->SetScalarParameterValue(TEXT("Scale"), BrushScale);
    DynamicBrush->SetScalarParameterValue(TEXT("SizeMultiplier"), BrushSize * 10.0f);
    DynamicBrush->SetVectorParameterValue(TEXT("Squish"), FLinearColor(BrushSquish.X, BrushSquish.Y, BrushSquish.Z, 0.0f));

    // Malowanie na Render Target
    UKismetRenderingLibrary::DrawMaterialToRenderTarget(
        GetWorld(),
        DeformationRenderTarget,
        DynamicBrush
    );

    UE_LOG(LogTemp, Log, TEXT("Painted to render target at UV: %s with force: %f"), 
           *UVLocation.ToString(), Force);
}

void UMeshDeformationComponent::UpdateMaterialParameters()
{
    if (DynamicMaterialInstance)
    {
        // Ustawienie parametrów zgodnie z Twoim M_DeformableMesh
        DynamicMaterialInstance->SetScalarParameterValue(TEXT("DeformMultiplier"), DeformationMultiplier);
        DynamicMaterialInstance->SetTextureParameterValue(TEXT("DamageRT"), DeformationRenderTarget);
    }
}

bool UMeshDeformationComponent::CanApplyDeformation(float Force) const
{
    return Force >= MinVelocity && 
           IsValid(MeshComponent) && 
           IsValid(DeformationRenderTarget) && 
           IsValid(DynamicMaterialInstance);
}

void UMeshDeformationComponent::ResetDeformation()
{
    if (DeformationRenderTarget)
    {
        UKismetRenderingLibrary::ClearRenderTarget2D(
            GetWorld(),
            DeformationRenderTarget,
            FLinearColor::Black
        );
        
        UpdateMaterialParameters();
        
        UE_LOG(LogTemp, Log, TEXT("Deformation reset"));
    }
}

void UMeshDeformationComponent::SetDeformationMultiplier(float NewMultiplier)
{
    DeformationMultiplier = FMath::Max(0.0f, NewMultiplier);
    UpdateMaterialParameters();
}