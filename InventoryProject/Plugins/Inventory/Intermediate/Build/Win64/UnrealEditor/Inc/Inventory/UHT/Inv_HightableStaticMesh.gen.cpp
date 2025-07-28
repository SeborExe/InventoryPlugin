// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Inv_HightableStaticMesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInv_HightableStaticMesh() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
INVENTORY_API UClass* Z_Construct_UClass_UInv_Highlightable_NoRegister();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HightableStaticMesh();
INVENTORY_API UClass* Z_Construct_UClass_UInv_HightableStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Inventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInv_HightableStaticMesh *************************************************
void UInv_HightableStaticMesh::StaticRegisterNativesUInv_HightableStaticMesh()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInv_HightableStaticMesh;
UClass* UInv_HightableStaticMesh::GetPrivateStaticClass()
{
	using TClass = UInv_HightableStaticMesh;
	if (!Z_Registration_Info_UClass_UInv_HightableStaticMesh.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Inv_HightableStaticMesh"),
			Z_Registration_Info_UClass_UInv_HightableStaticMesh.InnerSingleton,
			StaticRegisterNativesUInv_HightableStaticMesh,
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
	return Z_Registration_Info_UClass_UInv_HightableStaticMesh.InnerSingleton;
}
UClass* Z_Construct_UClass_UInv_HightableStaticMesh_NoRegister()
{
	return UInv_HightableStaticMesh::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInv_HightableStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Interaction/Inv_HightableStaticMesh.h" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_HightableStaticMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMaterial_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Interaction/Inv_HightableStaticMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInv_HightableStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInv_HightableStaticMesh_Statics::NewProp_HighlightMaterial = { "HighlightMaterial", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInv_HightableStaticMesh, HighlightMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightMaterial_MetaData), NewProp_HighlightMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInv_HightableStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInv_HightableStaticMesh_Statics::NewProp_HighlightMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HightableStaticMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInv_HightableStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HightableStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInv_HightableStaticMesh_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInv_Highlightable_NoRegister, (int32)VTABLE_OFFSET(UInv_HightableStaticMesh, IInv_Highlightable), false },  // 51339795
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInv_HightableStaticMesh_Statics::ClassParams = {
	&UInv_HightableStaticMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInv_HightableStaticMesh_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HightableStaticMesh_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInv_HightableStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UInv_HightableStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInv_HightableStaticMesh()
{
	if (!Z_Registration_Info_UClass_UInv_HightableStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInv_HightableStaticMesh.OuterSingleton, Z_Construct_UClass_UInv_HightableStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInv_HightableStaticMesh.OuterSingleton;
}
UInv_HightableStaticMesh::UInv_HightableStaticMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInv_HightableStaticMesh);
UInv_HightableStaticMesh::~UInv_HightableStaticMesh() {}
// ********** End Class UInv_HightableStaticMesh ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HightableStaticMesh_h__Script_Inventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInv_HightableStaticMesh, UInv_HightableStaticMesh::StaticClass, TEXT("UInv_HightableStaticMesh"), &Z_Registration_Info_UClass_UInv_HightableStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInv_HightableStaticMesh), 2765283031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HightableStaticMesh_h__Script_Inventory_3146156118(TEXT("/Script/Inventory"),
	Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HightableStaticMesh_h__Script_Inventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_harad_Documents_Unreal_Projects_InventoryProject_Plugins_Inventory_Source_Inventory_Public_Interaction_Inv_HightableStaticMesh_h__Script_Inventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
