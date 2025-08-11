// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inv_SlottedItem.generated.h"

class UInv_InventoryItem;
class UImage;
class UTextBlock;

UCLASS()
class INVENTORY_API UInv_SlottedItem : public UUserWidget
{
	GENERATED_BODY()

public:

	void SetIsStackable(bool bStackable) { bIsStackable = bStackable; }
	bool IsStackable() { return bIsStackable; }
	UImage* GetImage_Icon() { return Image_Icon; }
	void SetGridIndex(int32 InGridIndex) { GridIndex = InGridIndex; }
	int32 GetGridIndex() { return GridIndex; }
	void SetGridDimensions(FIntPoint InGridDimensions) { GridDimensions = InGridDimensions; }
	FIntPoint GetGridDimensions() { return GridDimensions; }
	void SetInventoryItem(UInv_InventoryItem* InInventoryItem);
	UInv_InventoryItem* GetInventoryItem() { return InventoryItem.Get(); }
	void SetImageBrush(const FSlateBrush& Brush) const;
	void UpdateStackCount(int32 StackCount);

private:

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UImage> Image_Icon;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UTextBlock> Text_StackCount;

	int32 GridIndex;
	FIntPoint GridDimensions;
	TWeakObjectPtr<UInv_InventoryItem> InventoryItem;
	bool bIsStackable = false;
};
