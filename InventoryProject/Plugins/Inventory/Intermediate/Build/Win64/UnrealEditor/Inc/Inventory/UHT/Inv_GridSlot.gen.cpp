// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WIdgets/Inventory/GridSlots/Inv_GridSlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_GridSlot() {}

// ********** Begin Cross Module References ********************************************************
INVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot();
INVENTORY_API UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_GridSlot ************************************************************
void UInv_GridSlot::StaticRegisterNativesUInv_GridSlot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_GridSlot;
UClass* UInv_GridSlot::GetPrivateStaticClass()
{
	using TClass = UInv_GridSlot;
	if (!Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_GridSlot"),
			Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton,
			StaticRegisterNativesUInv_GridSlot,
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
	return Z_Registration_Info_UClass_UInv_GridSlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_GridSlot_NoRegister()
{
	return UInv_GridSlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_GridSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WIdgets/Inventory/GridSlots/Inv_GridSlot.h" },
		{ "ModuleRelativePath", "Public/WIdgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_GridSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WIdgets/Inventory/GridSlots/Inv_GridSlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_GridSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_GridSlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Image_GridSlot = { "Image_GridSlot", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_GridSlot, Image_GridSlot), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_GridSlot_MetaData), NewProp_Image_GridSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_GridSlot_Statics::NewProp_Image_GridSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_GridSlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_GridSlot_Statics::ClassParams = {
	&UInv_GridSlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_GridSlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_GridSlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_GridSlot()
{
	if (!Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton, Z_Construct_UClass_UInv_GridSlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_GridSlot.OuterSingleton;
}
UInv_GridSlot::UInv_GridSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_GridSlot);
UInv_GridSlot::~UInv_GridSlot() {}
// ********** End Class UInv_GridSlot **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_WIdgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_GridSlot, UInv_GridSlot::StaticClass, TEXT("UInv_GridSlot"), &Z_Registration_Info_UClass_UInv_GridSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_GridSlot), 3903757492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_WIdgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_2063389668(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_WIdgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_WIdgets_Inventory_GridSlots_Inv_GridSlot_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
