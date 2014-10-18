// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "ToyDefense.h"
#include "ToyDefenseGameMode.h"
#include "ToyDefensePawn.h"

AToyDefenseGameMode::AToyDefenseGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AToyDefensePawn::StaticClass();
}

void AToyDefenseGameMode::StartPlay()
{
	Super::StartPlay();
}
