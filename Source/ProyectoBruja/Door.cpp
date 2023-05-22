// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Display, TEXT("Door: %S"), *DoorName);
	StartLocation = GetActorLocation();
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	OpenDoor(DeltaTime);
}

void ADoor::OpenDoor(float DeltaTime)
{
	FVector NewLocation = GetActorLocation() + (Axes * Speed * DeltaTime);
	
	if (ShouldMove(NewLocation))
	{
		SetActorLocation(NewLocation);
	}
}

bool ADoor::ShouldMove(FVector& NewLocation)
{
	return FVector::Dist(StartLocation, NewLocation) <= MaxDistance;
}