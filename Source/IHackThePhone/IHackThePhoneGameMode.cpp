// Copyright Epic Games, Inc. All Rights Reserved.

#include "IHackThePhoneGameMode.h"
#include "IHackThePhoneHUD.h"
#include "IHackThePhoneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIHackThePhoneGameMode::AIHackThePhoneGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AIHackThePhoneHUD::StaticClass();
}
