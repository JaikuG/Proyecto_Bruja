// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door.generated.h"

UCLASS()
class PROYECTOBRUJA_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OpenDoor(float DeltaTime);

	bool ShouldMove(FVector& NewLocation);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		FString DoorName = "Default name";
	
	UPROPERTY(EditAnywhere)
		FVector Axes = FVector(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere)
		float Speed = 0.0f;

	UPROPERTY(EditAnywhere)
		float MaxDistance = 0.0f;

	FVector StartLocation;
};
