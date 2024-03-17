// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RainActor.generated.h"

UCLASS()
class MLG_FPS_API ARainActor : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ARainActor();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rain Mesh")
	UStaticMeshComponent* Mesh;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
