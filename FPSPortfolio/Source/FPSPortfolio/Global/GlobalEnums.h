#pragma once

#include "CoreMinimal.h"
#include "GlobalEnums.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	None,
	MainWeapon,
};

UENUM(BlueprintType)
enum class EUseTypeOfWeapon : uint8
{
	None,
	Unarmed,
};