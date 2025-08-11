// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshDeformationComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMeshDeformationComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UMeshDeformationComponent();
INVENTORYPROJECT_API UClass* Z_Construct_UClass_UMeshDeformationComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMeshDeformationComponent Function ApplyDeformation **********************
struct Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics
{
	struct MeshDeformationComponent_eventApplyDeformation_Parms
	{
		FVector WorldLocation;
		float Force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// G\xc5\x82\xc3\xb3wna funkcja do wywo\xc5\x82""ania deformacji\n" },
#endif
		{ "CPP_Default_Force", "1.000000" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "G\xc5\x82\xc3\xb3wna funkcja do wywo\xc5\x82""ania deformacji" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDeformationComponent_eventApplyDeformation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDeformationComponent_eventApplyDeformation_Parms, Force), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMeshDeformationComponent, nullptr, "ApplyDeformation", Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::MeshDeformationComponent_eventApplyDeformation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::MeshDeformationComponent_eventApplyDeformation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDeformationComponent::execApplyDeformation)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDeformation(Z_Param_WorldLocation,Z_Param_Force);
	P_NATIVE_END;
}
// ********** End Class UMeshDeformationComponent Function ApplyDeformation ************************

// ********** Begin Class UMeshDeformationComponent Function ApplyDeformationAtUV ******************
struct Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics
{
	struct MeshDeformationComponent_eventApplyDeformationAtUV_Parms
	{
		FVector2D UVLocation;
		float Force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Alternatywna funkcja u\xc5\xbcywaj\xc4\x85""ca wsp\xc3\xb3\xc5\x82rz\xc4\x99""dnych UV\n" },
#endif
		{ "CPP_Default_Force", "1.000000" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Alternatywna funkcja u\xc5\xbcywaj\xc4\x85""ca wsp\xc3\xb3\xc5\x82rz\xc4\x99""dnych UV" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::NewProp_UVLocation = { "UVLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDeformationComponent_eventApplyDeformationAtUV_Parms, UVLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDeformationComponent_eventApplyDeformationAtUV_Parms, Force), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::NewProp_UVLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMeshDeformationComponent, nullptr, "ApplyDeformationAtUV", Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::MeshDeformationComponent_eventApplyDeformationAtUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::MeshDeformationComponent_eventApplyDeformationAtUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDeformationComponent::execApplyDeformationAtUV)
{
	P_GET_STRUCT(FVector2D,Z_Param_UVLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDeformationAtUV(Z_Param_UVLocation,Z_Param_Force);
	P_NATIVE_END;
}
// ********** End Class UMeshDeformationComponent Function ApplyDeformationAtUV ********************

// ********** Begin Class UMeshDeformationComponent Function GetDeformationMultiplier **************
struct Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics
{
	struct MeshDeformationComponent_eventGetDeformationMultiplier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformation" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDeformationComponent_eventGetDeformationMultiplier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMeshDeformationComponent, nullptr, "GetDeformationMultiplier", Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::MeshDeformationComponent_eventGetDeformationMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::MeshDeformationComponent_eventGetDeformationMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDeformationComponent::execGetDeformationMultiplier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDeformationMultiplier();
	P_NATIVE_END;
}
// ********** End Class UMeshDeformationComponent Function GetDeformationMultiplier ****************

// ********** Begin Class UMeshDeformationComponent Function ResetDeformation **********************
struct Z_Construct_UFunction_UMeshDeformationComponent_ResetDeformation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reset deformacji\n" },
#endif
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset deformacji" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDeformationComponent_ResetDeformation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMeshDeformationComponent, nullptr, "ResetDeformation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_ResetDeformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDeformationComponent_ResetDeformation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMeshDeformationComponent_ResetDeformation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDeformationComponent_ResetDeformation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDeformationComponent::execResetDeformation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDeformation();
	P_NATIVE_END;
}
// ********** End Class UMeshDeformationComponent Function ResetDeformation ************************

// ********** Begin Class UMeshDeformationComponent Function SetDeformationMultiplier **************
struct Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics
{
	struct MeshDeformationComponent_eventSetDeformationMultiplier_Parms
	{
		float NewMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deformation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gettery i settery\n" },
#endif
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gettery i settery" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::NewProp_NewMultiplier = { "NewMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MeshDeformationComponent_eventSetDeformationMultiplier_Parms, NewMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::NewProp_NewMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMeshDeformationComponent, nullptr, "SetDeformationMultiplier", Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::MeshDeformationComponent_eventSetDeformationMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::MeshDeformationComponent_eventSetDeformationMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMeshDeformationComponent::execSetDeformationMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeformationMultiplier(Z_Param_NewMultiplier);
	P_NATIVE_END;
}
// ********** End Class UMeshDeformationComponent Function SetDeformationMultiplier ****************

// ********** Begin Class UMeshDeformationComponent ************************************************
void UMeshDeformationComponent::StaticRegisterNativesUMeshDeformationComponent()
{
	UClass* Class = UMeshDeformationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDeformation", &UMeshDeformationComponent::execApplyDeformation },
		{ "ApplyDeformationAtUV", &UMeshDeformationComponent::execApplyDeformationAtUV },
		{ "GetDeformationMultiplier", &UMeshDeformationComponent::execGetDeformationMultiplier },
		{ "ResetDeformation", &UMeshDeformationComponent::execResetDeformation },
		{ "SetDeformationMultiplier", &UMeshDeformationComponent::execSetDeformationMultiplier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMeshDeformationComponent;
UClass* UMeshDeformationComponent::GetPrivateStaticClass()
{
	using TClass = UMeshDeformationComponent;
	if (!Z_Registration_Info_UClass_UMeshDeformationComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MeshDeformationComponent"),
			Z_Registration_Info_UClass_UMeshDeformationComponent.InnerSingleton,
			StaticRegisterNativesUMeshDeformationComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMeshDeformationComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMeshDeformationComponent_NoRegister()
{
	return UMeshDeformationComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMeshDeformationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MeshDeformationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformationMultiplier_MetaData[] = {
		{ "Category", "Deformation Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parametry deformacji\n" },
#endif
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parametry deformacji" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinVelocity_MetaData[] = {
		{ "Category", "Deformation Settings" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[] = {
		{ "Category", "Deformation Settings" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushScale_MetaData[] = {
		{ "Category", "Deformation Settings" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushSquish_MetaData[] = {
		{ "Category", "Deformation Settings" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetResolution_MetaData[] = {
		{ "Category", "Deformation Settings" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushMaterial_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Materia\xc5\x82y\n" },
#endif
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Materia\xc5\x82y" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformationMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencje\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencje" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeformationRenderTarget_MetaData[] = {
		{ "Category", "Render Target" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialInstance_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/MeshDeformationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeformationMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrushSquish;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderTargetResolution;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformationMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeformationRenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformation, "ApplyDeformation" }, // 50131796
		{ &Z_Construct_UFunction_UMeshDeformationComponent_ApplyDeformationAtUV, "ApplyDeformationAtUV" }, // 4087659006
		{ &Z_Construct_UFunction_UMeshDeformationComponent_GetDeformationMultiplier, "GetDeformationMultiplier" }, // 1422527392
		{ &Z_Construct_UFunction_UMeshDeformationComponent_ResetDeformation, "ResetDeformation" }, // 3498048747
		{ &Z_Construct_UFunction_UMeshDeformationComponent_SetDeformationMultiplier, "SetDeformationMultiplier" }, // 4135450842
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshDeformationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_DeformationMultiplier = { "DeformationMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, DeformationMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformationMultiplier_MetaData), NewProp_DeformationMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, MinVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinVelocity_MetaData), NewProp_MinVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, BrushSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSize_MetaData), NewProp_BrushSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_BrushScale = { "BrushScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, BrushScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushScale_MetaData), NewProp_BrushScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_BrushSquish = { "BrushSquish", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, BrushSquish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushSquish_MetaData), NewProp_BrushSquish_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_RenderTargetResolution = { "RenderTargetResolution", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, RenderTargetResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetResolution_MetaData), NewProp_RenderTargetResolution_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_BrushMaterial = { "BrushMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, BrushMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushMaterial_MetaData), NewProp_BrushMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_DeformationMaterial = { "DeformationMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, DeformationMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformationMaterial_MetaData), NewProp_DeformationMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_DeformationRenderTarget = { "DeformationRenderTarget", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, DeformationRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeformationRenderTarget_MetaData), NewProp_DeformationRenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_DynamicMaterialInstance = { "DynamicMaterialInstance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeshDeformationComponent, DynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterialInstance_MetaData), NewProp_DynamicMaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshDeformationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_DeformationMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_MinVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_BrushSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_BrushScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_BrushSquish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_RenderTargetResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_BrushMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_DeformationMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_DeformationRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshDeformationComponent_Statics::NewProp_DynamicMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDeformationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeshDeformationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDeformationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshDeformationComponent_Statics::ClassParams = {
	&UMeshDeformationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMeshDeformationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDeformationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDeformationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeshDeformationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeshDeformationComponent()
{
	if (!Z_Registration_Info_UClass_UMeshDeformationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshDeformationComponent.OuterSingleton, Z_Construct_UClass_UMeshDeformationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeshDeformationComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDeformationComponent);
UMeshDeformationComponent::~UMeshDeformationComponent() {}
// ********** End Class UMeshDeformationComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h__Script_InventoryProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeshDeformationComponent, UMeshDeformationComponent::StaticClass, TEXT("UMeshDeformationComponent"), &Z_Registration_Info_UClass_UMeshDeformationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshDeformationComponent), 1282522016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h__Script_InventoryProject_4131118155(TEXT("/Script/InventoryProject"),
	Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h__Script_InventoryProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h__Script_InventoryProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
