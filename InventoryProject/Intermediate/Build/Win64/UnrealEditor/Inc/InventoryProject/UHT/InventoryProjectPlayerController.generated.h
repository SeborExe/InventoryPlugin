// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryProjectPlayerController.h"

#ifdef INVENTORYPROJECT_InventoryProjectPlayerController_generated_h
#error "InventoryProjectPlayerController.generated.h already included, missing '#pragma once' in InventoryProjectPlayerController.h"
#endif
#define INVENTORYPROJECT_InventoryProjectPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInventoryProjectPlayerController ****************************************
INVENTORYPROJECT_API UClass* Z_Construct_UClass_AInventoryProjectPlayerController_NoRegister();

#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventoryProjectPlayerController(); \
	friend struct Z_Construct_UClass_AInventoryProjectPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYPROJECT_API UClass* Z_Construct_UClass_AInventoryProjectPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AInventoryProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryProject"), Z_Construct_UClass_AInventoryProjectPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AInventoryProjectPlayerController)


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventoryProjectPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInventoryProjectPlayerController(AInventoryProjectPlayerController&&) = delete; \
	AInventoryProjectPlayerController(const AInventoryProjectPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryProjectPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryProjectPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventoryProjectPlayerController) \
	NO_API virtual ~AInventoryProjectPlayerController();


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectPlayerController_h_15_PROLOG
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInventoryProjectPlayerController;

// ********** End Class AInventoryProjectPlayerController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
