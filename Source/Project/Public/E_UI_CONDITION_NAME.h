#pragma once
#include "CoreMinimal.h"
#include "E_UI_CONDITION_NAME.generated.h"

UENUM(BlueprintType)
enum class E_UI_CONDITION_NAME : uint8 {
    E_UI_CONDITION_NAME_NONE,
    E_UI_CONDITION_NAME_SLEEP,
    E_UI_CONDITION_NAME_CONFUSE,
    E_UI_CONDITION_NAME_CHARM,
    E_UI_CONDITION_NAME_CLOSE,
    E_UI_CONDITION_NAME_POISON,
    E_UI_CONDITION_NAME_MUD,
    E_UI_CONDITION_NAME_DARKNESS,
    E_UI_CONDITION_NAME_DEAD,
    E_UI_CONDITION_NAME_VERTIGO,
    E_UI_CONDITION_NAME_STRAY,
    E_UI_CONDITION_NAME_STONE,
    E_UI_CONDITION_NAME_DAZZLE,
    E_UI_CONDITION_NAME_ATTACK_UP,
    E_UI_CONDITION_NAME_DEFENCE_UP,
    E_UI_CONDITION_NAME_HIT_ESC_UP,
    E_UI_CONDITION_NAME_ATTACK_DOWN,
    E_UI_CONDITION_NAME_DEFENCE_DOWN,
    E_UI_CONDITION_NAME_HIT_ESC_DOWN,
    E_UI_CONDITION_NAME_ATTACK_REF,
    E_UI_CONDITION_NAME_MAGIC_REF,
    E_UI_CONDITION_NAME_TETORAJYA,
    E_UI_CONDITION_NAME_ATTACK_CHARGE,
    E_UI_CONDITION_NAME_MAGIC_CHARGE,
    E_UI_CONDITION_NAME_CRITICAL_ABS_CHARGE,
    E_UI_CONDITION_NAME_RECOVERLY_CHARGE,
    E_UI_CONDITION_NAME_PENETRATE_CHARGE,
    E_UI_CONDITION_NAME_PROVOKE,
    E_UI_CONDITION_NAME_NO_ABNORMAL,
    E_UI_CONDITION_NAME_SHIELD,
    E_UI_CONDITION_NAME_MAGA_GOD_SHIELD,
    E_UI_CONDITION_NAME_MAGA_GOD_PENETRATE,
    E_UI_CONDITION_NAME_MAGA_CRITICAL_CHARGE,
    E_UI_CONDITION_NAME_MAGA_PENETRATE_CHARGE,
    E_UI_CONDITION_NAME_MAGA_BST_HIT_UP,
    E_UI_CONDITION_NAME_MAGA_ADVERSITY,
    E_UI_CONDITION_NAME_MAGA_COST1,
    E_UI_CONDITION_NAME_MAGA_AID_RATE,
    E_UI_CONDITION_NAME_MAGA_MAX_HIT,
    E_UI_CONDITION_NAME_MAGA_TALK_FAILED_BLOCK,
    E_UI_CONDITION_NAME_MAGA_COST_ATTACK_UP,
    E_UI_CONDITION_NAME_MAGA_RESULT_BONUS,
    E_UI_CONDITION_NAME_MAGA_POTENTIAL_MAX UMETA(Hidden),
    E_UI_CONDITION_NAME_MAGA_CHAGE_NO_CANCEL,
    E_UI_CONDITION_NAME_BLOCK_PHISICS,
    E_UI_CONDITION_NAME_BLOCK_FIRE,
    E_UI_CONDITION_NAME_BLOCK_ICE,
    E_UI_CONDITION_NAME_BLOCK_THUNDER,
    E_UI_CONDITION_NAME_BLOCK_WIND,
    E_UI_CONDITION_NAME_BLOCK_LIGHT,
    E_UI_CONDITION_NAME_BLOCK_DARK,
    E_UI_CONDITION_NAME_MAGA_ENEMY_CHARGE,
    E_UI_CONDITION_NAME_ATTACK_UP2,
    E_UI_CONDITION_NAME_DEFENCE_UP2,
    E_UI_CONDITION_NAME_HIT_ESC_UP2,
    E_UI_CONDITION_NAME_ATTACK_DOWN2,
    E_UI_CONDITION_NAME_DEFENCE_DOWN2,
    E_UI_CONDITION_NAME_HIT_ESC_DOWN2,
    E_UI_CONDITION_NAME_MAGA_ENEMY_PENETRATE_CHARGE,
    E_UI_CONDITION_NAME_RENZOKU_SKILL,
    E_UI_CONDITION_NAME_FORCE_AVOID,
    E_UI_CONDITION_NAME_MAGA_WEAK_DAMAGE_UP,
    E_UI_CONDITION_NAME_MAGA_ITEM_DROP,
    E_UI_CONDITION_NAME_MAGA_ENEMY_KILLED_PRESS_ADD,
    E_UI_CONDITION_NAME_MAGA_PRESS_HALF,
    E_UI_CONDITION_NAME_MAGA_NOPRESS_CHANGE_PASS,
    E_UI_CONDITION_NAME_MAGA_AURA_ONLY,
};

