// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RainActor.h"
#include "RainManager.generated.h"

UCLASS()
class MLG_FPS_API ARainManager : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ARainManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:
	float TimeToLive;
	UPROPERTY(EditAnywhere, Category = "Rain")
	TSubclassOf<class ARainActor> RainDropClass;
};
