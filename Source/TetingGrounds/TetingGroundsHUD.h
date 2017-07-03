// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "TetingGroundsHUD.generated.h"

UCLASS()
class ATetingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATetingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

