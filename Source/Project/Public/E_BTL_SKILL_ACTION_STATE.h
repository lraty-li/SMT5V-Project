#pragma once
#include "CoreMinimal.h"
#include "E_BTL_SKILL_ACTION_STATE.generated.h"

UENUM(BlueprintType)
enum class E_BTL_SKILL_ACTION_STATE : uint8 {
    E_BTL_SKILL_ACTION_STATE_INTRODUCTION,
    E_BTL_SKILL_ACTION_STATE_HIT,
    E_BTL_SKILL_ACTION_STATE_CRITICAL,
    E_BTL_SKILL_ACTION_STATE_UPDATE_STATE,
    E_BTL_SKILL_ACTION_STATE_COUNTER,
    E_BTL_SKILL_ACTION_STATE_DEAD,
    E_BTL_SKILL_ACTION_STATE_IDLE,
    E_BTL_SKILL_ACTION_STATE_FINISH,
    E_BTL_SKILL_ACTION_STATE_FINALIZE,
};

