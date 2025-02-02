#pragma once
#include "CoreMinimal.h"
#include "E_CAMPHELPLIST_CONDITIONTYPE.generated.h"

UENUM(BlueprintType)
enum class E_CAMPHELPLIST_CONDITIONTYPE : uint8 {
    TUTORIAL_OPEN,
    JYAKYOU_OPEN,
    UNLOCKING_DEVILFUSION,
    NAHOBINO,
    UNLOCKING_SAFETY,
    LOCKING_SEFETY,
    DLC_SAFETY,
    DLC_MAKKA,
    DLC_EXP,
    DLC_MIITSU,
    DLC_JP_VOICE,
    DLC_EN_VOICE,
    DLC_OPEN_RESERVE,
    DEMO_TUTORIAL,
    MAX = 255,
};

