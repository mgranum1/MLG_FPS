// Fill out your copyright notice in the Description page of Project Settings.


#include "MLG_FPS/Character/MLGFPSCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"

// Sets default values     //Constructor
AMLGFPSCharacter::AMLGFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SKFPV = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FPSMesh"));

}

void AMLGFPSCharacter::Move(FInputActionValue)
{
	//TO-DO MAKE THE CHARACTER MOVE
}

// Called when the game starts or when spawned
void AMLGFPSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMLGFPSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMLGFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (EnhancedInputComponent)
	{

		//EnhancedInputComponent->BindAction(MoveAction)

	}

}

