// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Player/TPSPlayerCharacter.h"
#include "Camera/CameraComponent.h"

ATPSPlayerCharacter::ATPSPlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	ThirdPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));

}

void ATPSPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ATPSPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATPSPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
