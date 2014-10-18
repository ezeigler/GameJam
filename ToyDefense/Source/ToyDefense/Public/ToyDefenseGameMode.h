// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "ToyDefenseGameMode.generated.h"

UCLASS(minimalapi)
class AToyDefenseGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()

	virtual void StartPlay() override;

};



