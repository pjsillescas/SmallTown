// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SmallTownGameMode.h"
#include "SmallTownPlayerController.h"
#include "SmallTownCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASmallTownGameMode::ASmallTownGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASmallTownPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}