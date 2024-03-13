// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GlobalGameInstance.generated.h"

struct FGunData;

class UDataTable;

UCLASS()
class FPSPORTFOLIO_API UGlobalGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UGlobalGameInstance();

	FGunData* GetGunData(FName _Name);

private:
	UPROPERTY()
	UDataTable* GunTable;
};
