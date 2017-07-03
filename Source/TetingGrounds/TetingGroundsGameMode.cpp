// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TetingGrounds.h"
#include "TetingGroundsGameMode.h"
#include "TetingGroundsHUD.h"
#include "TetingGroundsCharacter.h"

ATetingGroundsGameMode::ATetingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATetingGroundsHUD::StaticClass();
}
