// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryProjectCharacter.h"

#ifdef INVENTORYPROJECT_InventoryProjectCharacter_generated_h
#error "InventoryProjectCharacter.generated.h already included, missing '#pragma once' in InventoryProjectCharacter.h"
#endif
#define INVENTORYPROJECT_InventoryProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInventoryProjectCharacter ***********************************************
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


INVENTORYPROJECT_API UClass* Z_Construct_UClass_AInventoryProjectCharacter_NoRegister();

#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventoryProjectCharacter(); \
	friend struct Z_Construct_UClass_AInventoryProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYPROJECT_API UClass* Z_Construct_UClass_AInventoryProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AInventoryProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryProject"), Z_Construct_UClass_AInventoryProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(AInventoryProjectCharacter)


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInventoryProjectCharacter(AInventoryProjectCharacter&&) = delete; \
	AInventoryProjectCharacter(const AInventoryProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventoryProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventoryProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInventoryProjectCharacter) \
	NO_API virtual ~AInventoryProjectCharacter();


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h_21_PROLOG
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInventoryProjectCharacter;

// ********** End Class AInventoryProjectCharacter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Source_InventoryProject_InventoryProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
