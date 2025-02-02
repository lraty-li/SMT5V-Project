#pragma once
#include "CoreMinimal.h"
#include "E_MISSION_STATE.generated.h"

UENUM(BlueprintType)
enum class E_MISSION_STATE : uint8 {
    E_MISSION_STATE_NOT_ENTRY,
    E_MISSION_STATE_CAN_ENTRY,
    E_MISSION_STATE_CAN_ENTRY_COMPLETE,
    E_MISSION_STATE_NOW_ENTRY,
    E_MISSION_STATE_CAN_COMPLETE,
    E_MISSION_STATE_END_COMPLETE,
    E_MISSION_STATE_COMPLETE_REPEAT,
    E_MISSION_STATE_REPEAT_DELIVERY,
};

