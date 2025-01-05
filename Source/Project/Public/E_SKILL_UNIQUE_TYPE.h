#pragma once
#include "CoreMinimal.h"
#include "E_SKILL_UNIQUE_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_SKILL_UNIQUE_TYPE : uint8 {
    E_SKILL_UNIQUE_TYPE_ALL,
    E_SKILL_UNIQUE_TYPE_PLAYER,
    E_SKILL_UNIQUE_TYPE_NAKAMA,
    E_SKILL_UNIQUE_TYPE_ENEMY,
    E_SKILL_UNIQUE_TYPE_PARTNER,
    E_SKILL_UNIQUE_TYPE_UNIQUE,
};

