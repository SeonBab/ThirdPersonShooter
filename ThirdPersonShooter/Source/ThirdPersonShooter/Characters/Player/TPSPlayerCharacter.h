// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/BaseCharacter.h"
#include "TPSPlayerCharacter.generated.h"

class UCameraComponent;

UCLASS()
class THIRDPERSONSHOOTER_API ATPSPlayerCharacter : public ABaseCharacter
{
	GENERATED_BODY()
	
public:
	ATPSPlayerCharacter();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> ThirdPersonCameraComponent;

};
