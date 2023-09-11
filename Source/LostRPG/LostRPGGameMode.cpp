// Copyright Epic Games, Inc. All Rights Reserved.

#include "LostRPGGameMode.h"
#include "LostRPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALostRPGGameMode::ALostRPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
