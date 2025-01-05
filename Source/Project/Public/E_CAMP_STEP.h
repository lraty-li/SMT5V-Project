#pragma once
#include "CoreMinimal.h"
#include "E_CAMP_STEP.generated.h"

UENUM(BlueprintType)
enum class E_CAMP_STEP : uint8 {
    E_CAMP_STEP_NONE,
    E_CAMP_STEP_SEL_COMMAND,
    E_CAMP_STEP_SKILL,
    E_CAMP_STEP_SKILL_LIB,
    E_CAMP_STEP_ITEM,
    E_CAMP_STEP_PARTY,
    E_CAMP_STEP_PROPERTY,
    E_CAMP_STEP_PARTNER,
    E_CAMP_STEP_QUEST,
    E_CAMP_STEP_DATA_BASE,
    E_CAMP_STEP_CHARACTERS,
    E_CAMP_STEP_UNIT,
    E_CAMP_STEP_DDS,
    E_CAMP_STEP_PARTY_SEL,
    E_CAMP_STEP_CAM_CHRA_VIEW,
    E_CAMP_STEP_GIFT,
    E_CAMP_STEP_STATUS,
    E_CAMP_STEP_FORCEEND,
    E_CAMP_STEP_END,
};

