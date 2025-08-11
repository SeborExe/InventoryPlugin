// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/Inv_GridTypes.h"

#ifdef INVENTORY_Inv_GridTypes_generated_h
#error "Inv_GridTypes.generated.h already included, missing '#pragma once' in Inv_GridTypes.h"
#endif
#define INVENTORY_Inv_GridTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInv_SlotAvailability *********************************************
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


struct FInv_SlotAvailability;
// ********** End ScriptStruct FInv_SlotAvailability ***********************************************

// ********** Begin ScriptStruct FInv_SlotAvailabilityResult ***************************************
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics; \
	INVENTORY_API static class UScriptStruct* StaticStruct();


struct FInv_SlotAvailabilityResult;
// ********** End ScriptStruct FInv_SlotAvailabilityResult *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h

// ********** Begin Enum EInv_ItemCategory *********************************************************
#define FOREACH_ENUM_EINV_ITEMCATEGORY(op) \
	op(EInv_ItemCategory::Equippable) \
	op(EInv_ItemCategory::Consumable) \
	op(EInv_ItemCategory::Craftable) \
	op(EInv_ItemCategory::None) 

enum class EInv_ItemCategory : uint8;
template<> struct TIsUEnumClass<EInv_ItemCategory> { enum { Value = true }; };
template<> INVENTORY_API UEnum* StaticEnum<EInv_ItemCategory>();
// ********** End Enum EInv_ItemCategory ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
