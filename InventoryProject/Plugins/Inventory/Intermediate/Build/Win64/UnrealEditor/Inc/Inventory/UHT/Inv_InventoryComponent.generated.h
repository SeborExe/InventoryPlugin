// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryManagement/Components/Inv_InventoryComponent.h"

#ifdef INVENTORY_Inv_InventoryComponent_generated_h
#error "Inv_InventoryComponent.generated.h already included, missing '#pragma once' in Inv_InventoryComponent.h"
#endif
#define INVENTORY_Inv_InventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInv_InventoryItem;
class UInv_ItemComponent;

// ********** Begin Delegate FInventoryItemChanged *************************************************
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_14_DELEGATE \
INVENTORY_API void FInventoryItemChanged_DelegateWrapper(const FMulticastScriptDelegate& InventoryItemChanged, UInv_InventoryItem* Item);


// ********** End Delegate FInventoryItemChanged ***************************************************

// ********** Begin Delegate FNoRoomInInventory ****************************************************
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_15_DELEGATE \
INVENTORY_API void FNoRoomInInventory_DelegateWrapper(const FMulticastScriptDelegate& NoRoomInInventory);


// ********** End Delegate FNoRoomInInventory ******************************************************

// ********** Begin Class UInv_InventoryComponent **************************************************
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_AddStacksToItem_Implementation(UInv_ItemComponent* Item, int32 StackCount, int32 Remainder); \
	virtual void Server_AddNewItem_Implementation(UInv_ItemComponent* ItemComponent, int32 StackCount); \
	DECLARE_FUNCTION(execServer_AddStacksToItem); \
	DECLARE_FUNCTION(execServer_AddNewItem); \
	DECLARE_FUNCTION(execTryAddItem);


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_CALLBACK_WRAPPERS
INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister();

#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInv_InventoryComponent(); \
	friend struct Z_Construct_UClass_UInv_InventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORY_API UClass* Z_Construct_UClass_UInv_InventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInv_InventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Inventory"), Z_Construct_UClass_UInv_InventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UInv_InventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InventoryList=NETFIELD_REP_START, \
		NETFIELD_REP_END=InventoryList	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInv_InventoryComponent(UInv_InventoryComponent&&) = delete; \
	UInv_InventoryComponent(const UInv_InventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInv_InventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInv_InventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInv_InventoryComponent) \
	NO_API virtual ~UInv_InventoryComponent();


#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_17_PROLOG
#define FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_CALLBACK_WRAPPERS \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInv_InventoryComponent;

// ********** End Class UInv_InventoryComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_harad_Documents_Unreal_Projects_InventoryPlugin_InventoryProject_Plugins_Inventory_Source_Inventory_Public_InventoryManagement_Components_Inv_InventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
