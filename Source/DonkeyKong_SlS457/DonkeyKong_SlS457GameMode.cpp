// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SlS457GameMode.h"
#include "DonkeyKong_SlS457Character.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong_SlS457GameMode::ADonkeyKong_SlS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
