﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryManagement/Components/Inv_InventoryComponent.h"
#include "Inv_InventoryStatics.generated.h"

class UInv_InventoryComponent;

UCLASS()
class INVENTORY_API UInv_InventoryStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category="Inventory")
	static UInv_InventoryComponent* GetInventoryComponent(const APlayerController* PlayerController);

	static EInv_ItemCategory GetItemCategoryFromItemComp(UInv_ItemComponent* ItemComponent);
};
