// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryManagement/Utils/Inv_InventoryStatics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_InventoryStatics() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryStatics();
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryStatics_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_InventoryStatics Function GetInventoryComponent *********************
struct Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics
{
	struct Inv_InventoryStatics_eventGetInventoryComponent_Parms
	{
		const APlayerController* PlayerController;
		UInv_InventoryComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Utils/Inv_InventoryStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventGetInventoryComponent_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Inv_InventoryStatics_eventGetInventoryComponent_Parms, ReturnValue), Z_Construct_UClass_UInv_InventoryComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInv_InventoryStatics, nullptr, "GetInventoryComponent", Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::Inv_InventoryStatics_eventGetInventoryComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::Inv_InventoryStatics_eventGetInventoryComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInv_InventoryStatics::execGetInventoryComponent)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInv_InventoryComponent**)Z_Param__Result=UInv_InventoryStatics::GetInventoryComponent(Z_Param_PlayerController);
	P_NATIVE_END;
}
// ********** End Class UInv_InventoryStatics Function GetInventoryComponent ***********************

// ********** Begin Class UInv_InventoryStatics ****************************************************
void UInv_InventoryStatics::StaticRegisterNativesUInv_InventoryStatics()
{
	UClass* Class = UInv_InventoryStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInventoryComponent", &UInv_InventoryStatics::execGetInventoryComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_InventoryStatics;
UClass* UInv_InventoryStatics::GetPrivateStaticClass()
{
	using TClass = UInv_InventoryStatics;
	if (!Z_Registration_Info_UClass_UInv_InventoryStatics.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_InventoryStatics"),
			Z_Registration_Info_UClass_UInv_InventoryStatics.InnerSingleton,
			StaticRegisterNativesUInv_InventoryStatics,
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
	return Z_Registration_Info_UClass_UInv_InventoryStatics.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_InventoryStatics_NoRegister()
{
	return UInv_InventoryStatics::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_InventoryStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryManagement/Utils/Inv_InventoryStatics.h" },
		{ "ModuleRelativePath", "Public/InventoryManagement/Utils/Inv_InventoryStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInv_InventoryStatics_GetInventoryComponent, "GetInventoryComponent" }, // 1565556824
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_InventoryStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInv_InventoryStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_InventoryStatics_Statics::ClassParams = {
	&UInv_InventoryStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_InventoryStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_InventoryStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_InventoryStatics()
{
	if (!Z_Registration_Info_UClass_UInv_InventoryStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_InventoryStatics.OuterSingleton, Z_Construct_UClass_UInv_InventoryStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_InventoryStatics.OuterSingleton;
}
UInv_InventoryStatics::UInv_InventoryStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_InventoryStatics);
UInv_InventoryStatics::~UInv_InventoryStatics() {}
// ********** End Class UInv_InventoryStatics ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_InventoryStatics, UInv_InventoryStatics::StaticClass, TEXT("UInv_InventoryStatics"), &Z_Registration_Info_UClass_UInv_InventoryStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_InventoryStatics), 374422275U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h__Script_Inventory_4239624461(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Utils_Inv_InventoryStatics_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
