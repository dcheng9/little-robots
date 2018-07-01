// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ThrobotsGameMode.h"
#include "ThrobotsPlayerController.h"
#include "ThrobotsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThrobotsGameMode::AThrobotsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AThrobotsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}