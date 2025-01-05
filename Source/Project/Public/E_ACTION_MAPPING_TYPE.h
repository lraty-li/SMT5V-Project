#pragma once
#include "CoreMinimal.h"
#include "E_ACTION_MAPPING_TYPE.generated.h"

UENUM(BlueprintType)
enum E_ACTION_MAPPING_TYPE {
    E_ACTION_MAPPING_ACTION,
    E_ACTION_MAPPING_CANCEL,
    E_ACTION_MAPPING_UP,
    E_ACTION_MAPPING_DOWN,
    E_ACTION_MAPPING_LEFT,
    E_ACTION_MAPPING_RIGHT,
    E_ACTION_MAPPING_FACE_TOP,
    E_ACTION_MAPPING_FACE_LEFT,
    E_ACTION_MAPPING_SHOULDER_LEFT,
    E_ACTION_MAPPING_SHOULDER_RIGHT,
    E_ACTION_MAPPING_TRIGGER_LEFT,
    E_ACTION_MAPPING_TRIGGER_RIGHT,
    E_ACTION_MAPPING_SPECIAL_LEFT,
    E_ACTION_MAPPING_SPECIAL_RIGHT,
    E_ACTION_MAPPING_RSTICK_UP,
    E_ACTION_MAPPING_RSTICK_DOWN,
    E_ACTION_MAPPING_STICKBUTTON_RIGHT,
    E_ACTION_MAPPING_MOUSE_ACTION,
    E_ACTION_MAPPING_MOUSE_CANCEL,
    E_ACTION_MAPPING_MOVIE_SKIP,
    E_ACTION_MAPPING_KEYCONFIG_DEL,
    E_ACTION_MAPPING_MAP_ACTION,
    E_ACTION_MAPPING_MAP_ATTACK,
    E_ACTION_MAPPING_CAMPOPEN,
    E_ACTION_MAPPING_MAP_ACTION_JUMP,
    E_ACTION_MAPPING_MAP_CAMERARESET,
    E_ACTION_MAPPING_MAP_TRAPORT,
    E_ACTION_MAPPING_MAP_AUTO_HEAL,
    E_ACTION_MAPPING_MAP_DASH,
    E_ACTION_MAPPING_MAP_DASH_R,
    E_ACTION_MAPPING_AUTO_MAP,
    E_ACTION_MAPPING_MAP_VIEW_DOWN,
    E_ACTION_MAPPING_MAP_TOGGLE_AUTORUN,
    E_ACTION_MAPPING_MAP_ESTOMA,
    E_ACTION_MAPPING_MAP_SAVE,
    E_ACTION_MAPPING_CALL_DEBUG_MENU,
    E_ACTION_MAPPING_MENU_UP,
    E_ACTION_MAPPING_MENU_DOWN,
    E_ACTION_MAPPING_MENU_LEFT,
    E_ACTION_MAPPING_MENU_RIGHT,
    E_ACTION_MAPPING_CURSOR_SKIP,
    E_ACTION_MAPPING_CURSOR_SKIP_LARGE,
    E_ACTION_MAPPING_DBG_SWITCH_GOST,
    E_ACTION_MAPPING_DEBUG_PLAYER_UP,
    E_ACTION_MAPPING_DEBUG_PLAYER_DOWN,
    E_ACTION_MAPPING_BTL_DBG_CENTER,
    E_ACTION_MAPPING_BTL_DBG_OPTION,
    E_ACTION_MAPPING_BTL_DBG_R1,
    E_ACTION_MAPPING_BTL_DBG_R2,
    E_ACTION_MAPPING_BTL_DBG_L1,
    E_ACTION_MAPPING_BTL_DBG_L2,
    E_ACTION_MAPPING_EVT_DBG_1,
    E_ACTION_MAPPING_EVT_DBG_2,
    E_ACTION_MAPPING_AUTOMAP_ZOOM_UP,
    E_ACTION_MAPPING_AUTOMAP_ZOOM_DOWN,
};

