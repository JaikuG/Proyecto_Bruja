// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor7.h"

// Sets default values
AMyActor7::AMyActor7()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor7::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("AAAAAAAAAAAAAAAA"));
}

// Called every frame
void AMyActor7::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector StartPos = GetActorLocation();
	FVector EndPos = StartPos + (Axes * Speed * DeltaTime);

	if(FVector::Dist(StartPos, EndPos) <= Desp)
	{
		SetActorLocation(EndPos);
	}



	UE_LOG(LogTemp, Warning, TEXT("This is my door %s"), *DoorName);

}