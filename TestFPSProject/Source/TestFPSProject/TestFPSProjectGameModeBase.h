// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestFPSProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTFPSPROJECT_API ATestFPSProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		virtual void StartPlay() override;
};