#pragma once
#include "CoreMinimal.h"
#include "E_AXIS_MAPPING_TYPE.generated.h"

UENUM(BlueprintType)
enum E_AXIS_MAPPING_TYPE {
    E_AXIS_MAPPING_MOVE_FORWARD,
    E_AXIS_MAPPING_MOVE_RIGHT,
    E_AXIS_MAPPING_LOOK_UP,
    E_AXIS_MAPPING_LOOK_RIGHT,
    E_AXIS_MAPPING_LOOK_UP_MOUSE,
    E_AXIS_MAPPING_LOOK_RIGHT_MOUSE,
    E_AXIS_MAPPING_SCROLL_UP,
    E_AXIS_MAPPING_SCROLL_RIGHT,
    E_AXIS_MAPPING_GARDEN_MOVE_UP,
    E_AXIS_MAPPING_GARDEN_MOVE_RIGHT,
    E_AXIS_MAPPING_AUTOMAP_ZOOM,
    E_AXIS_MAPPING_TOPCAMERA_MOVE_UP,
    E_AXIS_MAPPING_TOPCAMERA_MOVE_RIGHT,
    E_AXIS_MAPPING_TOPCAMERA_ZOOM,
};

