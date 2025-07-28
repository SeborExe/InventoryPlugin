// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/Inv_GridTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_GridTypes() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UEnum* Z_Construct_UEnum_Inventory_EInv_ItemCategory();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailability();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInv_ItemCategory *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInv_ItemCategory;
static UEnum* EInv_ItemCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Inventory_EInv_ItemCategory, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("EInv_ItemCategory"));
	}
	return Z_Registration_Info_UEnum_EInv_ItemCategory.OuterSingleton;
}
template<> INVENTORY_API UEnum* StaticEnum<EInv_ItemCategory>()
{
	return EInv_ItemCategory_StaticEnum();
}
struct Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Consumable.Name", "EInv_ItemCategory::Consumable" },
		{ "Craftable.Name", "EInv_ItemCategory::Craftable" },
		{ "Equippable.Name", "EInv_ItemCategory::Equippable" },
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
		{ "None.Name", "EInv_ItemCategory::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInv_ItemCategory::Equippable", (int64)EInv_ItemCategory::Equippable },
		{ "EInv_ItemCategory::Consumable", (int64)EInv_ItemCategory::Consumable },
		{ "EInv_ItemCategory::Craftable", (int64)EInv_ItemCategory::Craftable },
		{ "EInv_ItemCategory::None", (int64)EInv_ItemCategory::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	"EInv_ItemCategory",
	"EInv_ItemCategory",
	Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Inventory_EInv_ItemCategory()
{
	if (!Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton, Z_Construct_UEnum_Inventory_EInv_ItemCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInv_ItemCategory.InnerSingleton;
}
// ********** End Enum EInv_ItemCategory ***********************************************************

// ********** Begin ScriptStruct FInv_SlotAvailability *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_SlotAvailability;
class UScriptStruct* FInv_SlotAvailability::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_SlotAvailability, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_SlotAvailability"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_SlotAvailability>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_SlotAvailability",
	nullptr,
	0,
	sizeof(FInv_SlotAvailability),
	alignof(FInv_SlotAvailability),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailability()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton, Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailability.InnerSingleton;
}
// ********** End ScriptStruct FInv_SlotAvailability ***********************************************

// ********** Begin ScriptStruct FInv_SlotAvailabilityResult ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult;
class UScriptStruct* FInv_SlotAvailabilityResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_SlotAvailabilityResult"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Types/Inv_GridTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_SlotAvailabilityResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_SlotAvailabilityResult",
	nullptr,
	0,
	sizeof(FInv_SlotAvailabilityResult),
	alignof(FInv_SlotAvailabilityResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton, Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult.InnerSingleton;
}
// ********** End ScriptStruct FInv_SlotAvailabilityResult *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInv_ItemCategory_StaticEnum, TEXT("EInv_ItemCategory"), &Z_Registration_Info_UEnum_EInv_ItemCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4149887105U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_SlotAvailability::StaticStruct, Z_Construct_UScriptStruct_FInv_SlotAvailability_Statics::NewStructOps, TEXT("Inv_SlotAvailability"), &Z_Registration_Info_UScriptStruct_FInv_SlotAvailability, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SlotAvailability), 1719608740U) },
		{ FInv_SlotAvailabilityResult::StaticStruct, Z_Construct_UScriptStruct_FInv_SlotAvailabilityResult_Statics::NewStructOps, TEXT("Inv_SlotAvailabilityResult"), &Z_Registration_Info_UScriptStruct_FInv_SlotAvailabilityResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_SlotAvailabilityResult), 412004226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_1430616200(TEXT("/Script/Inventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Types_Inv_GridTypes_h__Script_Inventory_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
