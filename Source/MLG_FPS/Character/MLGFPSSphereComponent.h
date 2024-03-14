// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MLGFPSCharacter.h"
#include "Components/SphereComponent.h"
#include "MLGFPSSphereComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickUp, AMLGFPSCharacter*, PickUpCharacter);

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType, meta = (BlueprintSpawnableComponent))
class MLG_FPS_API UMLGFPSSphereComponent : public USphereComponent
{
	GENERATED_BODY()



	public:

		UPROPERTY(BlueprintAssignable, Category = "Interaction")
		FOnPickUp OnPickUp;

		UMLGFPSSphereComponent();

		virtual void BeginPlay() override;

		UFUNCTION()
		void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);



};

