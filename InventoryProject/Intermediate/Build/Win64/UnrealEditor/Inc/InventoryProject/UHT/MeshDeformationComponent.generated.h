// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MeshDeformationComponent.h"

#ifdef INVENTORYPROJECT_MeshDeformationComponent_generated_h
#error "MeshDeformationComponent.generated.h already included, missing '#pragma once' in MeshDeformationComponent.h"
#endif
#define INVENTORYPROJECT_MeshDeformationComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMeshDeformationComponent ************************************************
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeformationMultiplier); \
	DECLARE_FUNCTION(execSetDeformationMultiplier); \
	DECLARE_FUNCTION(execResetDeformation); \
	DECLARE_FUNCTION(execApplyDeformationAtUV); \
	DECLARE_FUNCTION(execApplyDeformation);


INVENTORYPROJECT_API UClass* Z_Construct_UClass_UMeshDeformationComponent_NoRegister();

#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshDeformationComponent(); \
	friend struct Z_Construct_UClass_UMeshDeformationComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYPROJECT_API UClass* Z_Construct_UClass_UMeshDeformationComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMeshDeformationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryProject"), Z_Construct_UClass_UMeshDeformationComponent_NoRegister) \
	DECLARE_SERIALIZER(UMeshDeformationComponent)


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMeshDeformationComponent(UMeshDeformationComponent&&) = delete; \
	UMeshDeformationComponent(const UMeshDeformationComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshDeformationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshDeformationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMeshDeformationComponent) \
	NO_API virtual ~UMeshDeformationComponent();


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h_15_PROLOG
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMeshDeformationComponent;

// ********** End Class UMeshDeformationComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_Public_MeshDeformationComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
