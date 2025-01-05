#pragma once
#include "CoreMinimal.h"
#include "E_UI_STATUS_FUSION_ORDER.generated.h"

UENUM(BlueprintType)
enum class E_UI_STATUS_FUSION_ORDER : uint8 {
    E_UI_STATUS_FUSION_ORDER_FIRST,
    E_UI_STATUS_FUSION_ORDER_SECOND,
    E_UI_STATUS_FUSION_ORDER_THIRD,
    E_UI_STATUS_FUSION_ORDER_FOURTH,
    E_UI_STATUS_FUSION_ORDER_RESULT,
    E_UI_STATUS_FUSION_ORDER_INVISIBLE,
};

