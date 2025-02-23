// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor7.generated.h"

UCLASS()
class PROYECTOBRUJA_API AMyActor7 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor7();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		FString DoorName = "Default name";

	UPROPERTY(EditAnywhere)
		FVector Axes;

	UPROPERTY(EditAnywhere)
		float Speed;

	UPROPERTY(EditAnywhere)
		float Desp;
};
