// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Test_cppGameMode.h"
#include "Test_cppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_cppGameMode::ATest_cppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
