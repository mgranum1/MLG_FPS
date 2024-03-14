// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MLG_FPS/Character/MLGFPSCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "MLGFPSSkeletalMeshComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,BlueprintType, meta = (BlueprintSpawnableComponent)) 
class MLG_FPS_API UMLGFPSSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	UMLGFPSSkeletalMeshComponent();

	UFUNCTION(Blueprintable, BlueprintCallable, Category = "Object")
	void AttachComponentToPlayer(AMLGFPSCharacter* TargetCharacter);

	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason)override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Settings")
	FVector GuntipOffset;

	//Input actions

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* FireIMC;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	class UInputAction* FireAction;

	UFUNCTION(BlueprintCallable, Category = "Input")
	void Fire();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile")
	TSubclassOf<AActor> ProjectileToSpawn;

protected:
	AMLGFPSCharacter* Character;
};
