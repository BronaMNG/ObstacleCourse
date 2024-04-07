// Fill out your copyright notice in the Description page of Project Settings.


#include "movingPlatform.h"

// Sets default values
AmovingPlatform::AmovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AmovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AmovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector LocalVector = FVector(1, 2, 3);
	LocalVector = MyVector;
	LocalVector.Z += 0;
	MyVector.Y += 1;
	SetActorLocation(LocalVector);

}
	
