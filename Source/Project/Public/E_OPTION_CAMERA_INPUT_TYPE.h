#pragma once
#include "CoreMinimal.h"
#include "E_OPTION_CAMERA_INPUT_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_OPTION_CAMERA_INPUT_TYPE : uint8 {
    E_OPTION_CAMERA_INPUT_TYPE_STANDARD,
    E_OPTION_CAMERA_INPUT_TYPE_REVERSE,
    E_OPTION_CAMERA_INPUT_TYPE_INVALID,
};

