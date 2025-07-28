// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Items/Fragments/Inv_ItemFragment.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_ItemFragment() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_GridFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ImageFragment();
INVENTORY_API UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemFragment();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FInv_ItemFragment *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ItemFragment;
class UScriptStruct* FInv_ItemFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ItemFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ItemFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ItemFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_ItemFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ItemFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ItemFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentTag_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ItemFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::NewProp_FragmentTag = { "FragmentTag", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ItemFragment, FragmentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentTag_MetaData), NewProp_FragmentTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::NewProp_FragmentTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	nullptr,
	&NewStructOps,
	"Inv_ItemFragment",
	Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::PropPointers),
	sizeof(FInv_ItemFragment),
	alignof(FInv_ItemFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ItemFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ItemFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ItemFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ItemFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_ItemFragment ***************************************************

// ********** Begin ScriptStruct FInv_GridFragment *************************************************
static_assert(std::is_polymorphic<FInv_GridFragment>() == std::is_polymorphic<FInv_ItemFragment>(), "USTRUCT FInv_GridFragment cannot be polymorphic unless super FInv_ItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_GridFragment;
class UScriptStruct* FInv_GridFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_GridFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_GridFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_GridFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_GridFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_GridFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_GridFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPadding_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridPadding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_GridFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_GridFragment, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewProp_GridPadding = { "GridPadding", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_GridFragment, GridPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPadding_MetaData), NewProp_GridPadding_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_GridFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewProp_GridPadding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_GridFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_GridFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ItemFragment,
	&NewStructOps,
	"Inv_GridFragment",
	Z_Construct_UScriptStruct_FInv_GridFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_GridFragment_Statics::PropPointers),
	sizeof(FInv_GridFragment),
	alignof(FInv_GridFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_GridFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_GridFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_GridFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_GridFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_GridFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_GridFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_GridFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_GridFragment ***************************************************

// ********** Begin ScriptStruct FInv_ImageFragment ************************************************
static_assert(std::is_polymorphic<FInv_ImageFragment>() == std::is_polymorphic<FInv_ItemFragment>(), "USTRUCT FInv_ImageFragment cannot be polymorphic unless super FInv_ItemFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInv_ImageFragment;
class UScriptStruct* FInv_ImageFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ImageFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInv_ImageFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInv_ImageFragment, (UObject*)Z_Construct_UPackage__Script_Inventory(), TEXT("Inv_ImageFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInv_ImageFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInv_ImageFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconDimensions_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Items/Fragments/Inv_ItemFragment.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconDimensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInv_ImageFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ImageFragment, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewProp_IconDimensions = { "IconDimensions", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInv_ImageFragment, IconDimensions), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconDimensions_MetaData), NewProp_IconDimensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewProp_IconDimensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
	Z_Construct_UScriptStruct_FInv_ItemFragment,
	&NewStructOps,
	"Inv_ImageFragment",
	Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::PropPointers),
	sizeof(FInv_ImageFragment),
	alignof(FInv_ImageFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInv_ImageFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInv_ImageFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInv_ImageFragment.InnerSingleton, Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInv_ImageFragment.InnerSingleton;
}
// ********** End ScriptStruct FInv_ImageFragment **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInv_ItemFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ItemFragment_Statics::NewStructOps, TEXT("Inv_ItemFragment"), &Z_Registration_Info_UScriptStruct_FInv_ItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ItemFragment), 1956021152U) },
		{ FInv_GridFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_GridFragment_Statics::NewStructOps, TEXT("Inv_GridFragment"), &Z_Registration_Info_UScriptStruct_FInv_GridFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_GridFragment), 2545756036U) },
		{ FInv_ImageFragment::StaticStruct, Z_Construct_UScriptStruct_FInv_ImageFragment_Statics::NewStructOps, TEXT("Inv_ImageFragment"), &Z_Registration_Info_UScriptStruct_FInv_ImageFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInv_ImageFragment), 2993036604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_1017251699(TEXT("/Script/Inventory"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Items_Fragments_Inv_ItemFragment_h__Script_Inventory_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
