// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomArPawn.h"
#include "ARBlueprintLibrary.h"


// Sets default values
ACustomArPawn::ACustomArPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SetRootComponent(SceneComponent);
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SceneComponent);
}

// Called when the game starts or when spawned
void ACustomArPawn::BeginPlay()
{
	Super::BeginPlay();
	UARSessionConfig* Config = NewObject<UARSessionConfig>();
	UARBlueprintLibrary::StartARSession(Config);
}

// Called every frame
void ACustomArPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACustomArPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

