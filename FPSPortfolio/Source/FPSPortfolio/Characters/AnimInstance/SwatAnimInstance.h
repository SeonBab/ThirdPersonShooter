// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SwatAnimInstance.generated.h"

enum class EUseTypeOfWeapon : uint8;

UCLASS()
class FPSPORTFOLIO_API USwatAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"));
	EUseTypeOfWeapon UseTypeOfWeapon;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"));
	float Speed;
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"));
	float Angle;
};
