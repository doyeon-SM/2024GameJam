// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJam24WinterGameMode.h"
#include "GameJam24WinterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameJam24WinterGameMode::AGameJam24WinterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
