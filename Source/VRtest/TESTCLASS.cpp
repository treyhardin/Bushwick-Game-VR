// Fill out your copyright notice in the Description page of Project Settings.


#include "TESTCLASS.h"

// Sets default values
ATESTCLASS::ATESTCLASS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATESTCLASS::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATESTCLASS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

