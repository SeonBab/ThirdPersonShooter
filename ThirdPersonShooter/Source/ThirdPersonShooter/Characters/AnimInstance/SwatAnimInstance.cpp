// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AnimInstance/SwatAnimInstance.h"

void USwatAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* ASC)
{
	check(ASC);

	GameplayTagPropertyMap.Initialize(this, ASC);
}

void USwatAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
}

void USwatAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
}
