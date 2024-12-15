// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClimbGameJamGameMode.h"
#include "ClimbGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AClimbGameJamGameMode::AClimbGameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
