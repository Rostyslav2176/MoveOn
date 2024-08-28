// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoveOnGameMode.h"
#include "MoveOnCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMoveOnGameMode::AMoveOnGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
