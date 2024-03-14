// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MLGFPSCharacter.generated.h"

struct FInputActionValue;
class uInputComponent;
class uInputAction;


UCLASS()
class MLG_FPS_API AMLGFPSCharacter : public ACharacter //A prefix for ACTOR
{													//U prefor for OBJECT
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMLGFPSCharacter();
// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* SKFPV;

	//Input Actions
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction; 

	void Move(FInputActionValue)

protected: //all children of this derived class will be able to access it
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
