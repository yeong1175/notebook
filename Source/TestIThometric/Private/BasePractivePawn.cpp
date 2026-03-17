// Fill out your copyright notice in the Description page of Project Settings.


#include "BasePractivePawn.h"
#include "Components/CapsuleComponent.h"

// Sets default values
ABasePractivePawn::ABasePractivePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
	RootComponent = CapsuleComp;

}

// Called when the game starts or when spawned
void ABasePractivePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePractivePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasePractivePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

