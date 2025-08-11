// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryProject_init() {}
	INVENTORYPROJECT_API UFunction* Z_Construct_UDelegateFunction_InventoryProject_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InventoryProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InventoryProject()
	{
		if (!Z_Registration_Info_UPackage__Script_InventoryProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_InventoryProject_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InventoryProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5BECF391,
				0xA941EEA8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InventoryProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InventoryProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InventoryProject(Z_Construct_UPackage__Script_InventoryProject, TEXT("/Script/InventoryProject"), Z_Registration_Info_UPackage__Script_InventoryProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5BECF391, 0xA941EEA8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
