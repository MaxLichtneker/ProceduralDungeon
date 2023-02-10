// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PROCEDURALGAME_API ASGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	ASGameModeBase();

	virtual void StartPlay() override;
	
protected:

	void SpawnDungeonActors();

	UPROPERTY(EditDefaultsOnly, Category= "Spawning")
	TSubclassOf<AActor> dungeonPlatform;

	UPROPERTY(EditDefaultsOnly, Category = "Variables")
	int amountOfPlatformsToSpawn;
};
