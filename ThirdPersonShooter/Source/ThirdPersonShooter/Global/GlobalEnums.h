#pragma once

#include "CoreMinimal.h"
#include "GlobalEnums.generated.h"

UENUM(BlueprintType)
enum class AnimEnum_CardinalDirection : uint8
{
	Forward,
	Backward,
	Left,
	Right,
};