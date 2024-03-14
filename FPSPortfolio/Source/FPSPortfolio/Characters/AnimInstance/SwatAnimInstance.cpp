// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AnimInstance/SwatAnimInstance.h"
#include "Global/GlobalEnums.h"
#include "KismetAnimationLibrary.h"

void USwatAnimInstance::NativeInitializeAnimation()
{
}

void USwatAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	APawn* OwnerPawn = TryGetPawnOwner();

	if (nullptr == OwnerPawn)
	{
		return;
	}

	Speed = OwnerPawn->GetVelocity().Size();
	Angle = UKismetAnimationLibrary::CalculateDirection(OwnerPawn->GetVelocity(), OwnerPawn->GetActorRotation());
}