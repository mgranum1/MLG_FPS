// Fill out your copyright notice in the Description page of Project Settings.


#include "MLGFPSSphereComponent.h"


UMLGFPSSphereComponent::UMLGFPSSphereComponent()
{
	SphereRadius = 30.f;
}

void UMLGFPSSphereComponent::BeginPlay()
{
	Super::BeginPlay();

	OnComponentBeginOverlap.AddDynamic(this, &UMLGFPSSphereComponent::OnSphereBeginOverlap);
}

void UMLGFPSSphereComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMLGFPSCharacter* Character = Cast<AMLGFPSCharacter>(OtherActor);
	if (Character != nullptr)
	{
		OnPickUp.Broadcast(Character);

		OnComponentBeginOverlap.RemoveAll(this);
	}
}
