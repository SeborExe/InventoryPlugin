// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "MeshDeformationComponent.generated.h"


UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INVENTORYPROJECT_API UMeshDeformationComponent : public UActorComponent
{
	GENERATED_BODY()

public:    
    UMeshDeformationComponent();

protected:
    virtual void BeginPlay() override;

    // Parametry deformacji
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deformation Settings")
    float DeformationMultiplier = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deformation Settings")
    float MinVelocity = 100.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deformation Settings")
    float BrushSize = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deformation Settings")
    float BrushScale = 0.25f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deformation Settings")
    FVector BrushSquish = FVector(1.0f, 1.0f, 1.0f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deformation Settings")
    int32 RenderTargetResolution = 1024;

    // Materiały
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
    UMaterialInterface* BrushMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Materials")
    UMaterialInterface* DeformationMaterial;

    // Referencje
    UPROPERTY(BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComponent;

    UPROPERTY(BlueprintReadOnly, Category = "Render Target")
    UTextureRenderTarget2D* DeformationRenderTarget;

    UPROPERTY(BlueprintReadOnly, Category = "Materials")
    UMaterialInstanceDynamic* DynamicMaterialInstance;

public:
    // Główna funkcja do wywołania deformacji
    UFUNCTION(BlueprintCallable, Category = "Deformation")
    void ApplyDeformation(FVector WorldLocation, float Force = 1.0f);

    // Alternatywna funkcja używająca współrzędnych UV
    UFUNCTION(BlueprintCallable, Category = "Deformation")
    void ApplyDeformationAtUV(FVector2D UVLocation, float Force = 1.0f);

    // Reset deformacji
    UFUNCTION(BlueprintCallable, Category = "Deformation")
    void ResetDeformation();

    // Gettery i settery
    UFUNCTION(BlueprintCallable, Category = "Deformation")
    void SetDeformationMultiplier(float NewMultiplier);

    UFUNCTION(BlueprintCallable, Category = "Deformation")
    float GetDeformationMultiplier() const { return DeformationMultiplier; }

private:
    // Inicjalizacja komponentów
    void InitializeMeshComponent();
    void CreateRenderTarget();
    void CreateMaterialInstance();

    // Funkcje pomocnicze
    FVector2D WorldLocationToUV(FVector WorldLocation);
    void PaintToRenderTarget(FVector2D UVLocation, float Force);
    void UpdateMaterialParameters();

    // Sprawdzenie czy deformacja może zostać zastosowana
    bool CanApplyDeformation(float Force) const;

    // Flaga czy komponent jest zainicjalizowany
    bool bIsInitialized = false;
};
