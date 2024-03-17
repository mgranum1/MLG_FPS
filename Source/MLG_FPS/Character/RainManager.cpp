// Fill out your copyright notice in the Description page of Project Settings.


#include "RainManager.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ARainManager::ARainManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TimeToLive = 0.0f;

}

// Called when the game starts or when spawned
void ARainManager::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ARainManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeToLive += DeltaTime;
	if (TimeToLive >= 0.1f)
	{
		TimeToLive -= 0.1f;


		//Calculate a random spawn point
		float SpawnX = FMath::RandRange(10.0f, 1000.0f);
		float SpawnY = FMath::RandRange(10.0f, 1000.0f);
		float SpawnZ = 1000.0f; //spawn above ground
		FVector SpawnPosition = FVector(SpawnX, SpawnY, SpawnZ);

		//Spawn the raindrop 
		GetWorld()->SpawnActor<ARainActor>(RainDropClass, SpawnPosition, FRotator::ZeroRotator);
	}


}

