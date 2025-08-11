// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Inv_GridSlot.generated.h"

class UInv_InventoryItem;
class UImage;

UENUM(BlueprintType)
enum class EInv_GridSlotState : uint8
{
	Unoccupied,
	Occupied,
	Selected,
	GrayedOut
};

UCLASS()
class INVENTORY_API UInv_GridSlot : public UUserWidget
{
	GENERATED_BODY()

public:

	void SetTileIndex(int32 Inxed) { TileIndex = Inxed; }
	int32 GetTileIndex() { return TileIndex; }
	EInv_GridSlotState GetGridSlotState() const { return GridSlotState; }
	int32 GetStackCount() const { return StackCount; }
	void SetStackCount(int32 InStackCount) { StackCount = InStackCount; }
	int32 GetIndex() const { return TileIndex; }
	void SetIndex(int32 Index) { TileIndex = Index; }
	int32 GetUpperLeftIndex() const { return UpperLeftIndex; }
	void SetUpperLeftIndex(int32 Index) { UpperLeftIndex = Index; }
	bool IsAvailable() const { return bAvailable; }
	void SetAvailable(bool bIsAvailable) { bAvailable = bIsAvailable; }

	TWeakObjectPtr<UInv_InventoryItem> GetInventoryItem() const { return InventoryItem; }
	void SetInventoryItem(UInv_InventoryItem* Item);

	void SetOccupiedTexture();
	void SetSelectedTexture();
	void SetGrayedOutTexture();
	void SetUnoccupiedTexture();

private:

	int32 TileIndex;
	int32 StackCount;
	int32 UpperLeftIndex{INDEX_NONE};
	TWeakObjectPtr<UInv_InventoryItem> InventoryItem;
	bool bAvailable;

	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UImage> Image_GridSlot;

	UPROPERTY(EditAnywhere, Category="Inventory")
	FSlateBrush Brush_Occupied;
	UPROPERTY(EditAnywhere, Category="Inventory")
	FSlateBrush Brush_Selected;
	UPROPERTY(EditAnywhere, Category="Inventory")
	FSlateBrush Brush_GrayedOut;
	UPROPERTY(EditAnywhere, Category="Inventory")
	FSlateBrush Brush_Unoccupied;

	EInv_GridSlotState GridSlotState;
};
