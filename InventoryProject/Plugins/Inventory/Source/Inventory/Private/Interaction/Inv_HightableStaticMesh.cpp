// Fill out your copyright notice in the Description page of Project Settings.


#include "Interaction/Inv_HightableStaticMesh.h"

void UInv_HightableStaticMesh::Highlight_Implementation()
{
	SetOverlayMaterial(HighlightMaterial);
}

void UInv_HightableStaticMesh::UnHighlight_Implementation()
{
	SetOverlayMaterial(nullptr);
}
