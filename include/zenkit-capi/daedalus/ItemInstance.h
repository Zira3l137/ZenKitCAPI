// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "NpcInstance.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkItemInstance = zenkit::IItem;
#else
typedef struct ZkInternal_ItemInstance ZkItemInstance;
#endif

typedef enum {
	ZkItemInstanceFlag_DAGGER = 1U << 13U,
	ZkItemInstanceFlag_SWORD = 1U << 14U,
	ZkItemInstanceFlag_AXE = 1U << 15U,
	ZkItemInstanceFlag_TWO_HANDED_SWORD = 1U << 16U,
	ZkItemInstanceFlag_TWO_HANDED_AXE = 1U << 17U,
	ZkItemInstanceFlag_BOW = 1U << 19U,
	ZkItemInstanceFlag_CROSSBOW = 1U << 20U,
	ZkItemInstanceFlag_AMULET = 1U << 22U,
	ZkItemInstanceFlag_RING = 1U << 11U,
	ZkItemInstanceFlag_BELT = 1U << 24U,
	ZkItemInstanceFlag_MISSION = 1U << 12U,
} ZkItemInstanceFlag;

typedef enum {
	ZkItemInstanceConditionSlot_Slot0 = 0,
	ZkItemInstanceConditionSlot_Slot1 = 1,
	ZkItemInstanceConditionSlot_Slot2 = 2,
} ZkItemInstanceConditionSlot;

typedef enum {
	ZkItemInstanceState_Slot0 = 0,
	ZkItemInstanceState_Slot1 = 1,
	ZkItemInstanceState_Slot2 = 2,
	ZkItemInstanceState_Slot3 = 3,
} ZkItemInstanceStateSlot;

typedef enum {
	ZkItemInstanceText_Slot0 = 0,
	ZkItemInstanceText_Slot1 = 1,
	ZkItemInstanceText_Slot2 = 2,
	ZkItemInstanceText_Slot3 = 3,
	ZkItemInstanceText_Slot4 = 4,
	ZkItemInstanceText_Slot5 = 5,
} ZkItemInstanceTextSlot;

ZKC_API int32_t ZkItemInstance_getId(ZkItemInstance const* slf);
ZKC_API ZkString ZkItemInstance_getName(ZkItemInstance const* slf);
ZKC_API ZkString ZkItemInstance_getNameId(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getHp(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getHpMax(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getMainFlag(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getFlags(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getWeight(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getValue(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getDamageType(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getDamageTotal(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getWear(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getNutrition(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getMagic(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getOnEquip(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getOnUnequip(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getOwner(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getOwnerGuild(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getDisguiseGuild(ZkItemInstance const* slf);
ZKC_API ZkString ZkItemInstance_getVisual(ZkItemInstance const* slf);
ZKC_API ZkString ZkItemInstance_getVisualChange(ZkItemInstance const* slf);
ZKC_API ZkString ZkItemInstance_getEffect(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getVisualSkin(ZkItemInstance const* slf);
ZKC_API ZkString ZkItemInstance_getSchemeName(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getMaterial(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getMunition(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getSpell(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getRange(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getMagCircle(ZkItemInstance const* slf);
ZKC_API ZkString ZkItemInstance_getDescription(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getInvZBias(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getInvRotX(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getInvRotY(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getInvRotZ(ZkItemInstance const* slf);
ZKC_API int32_t ZkItemInstance_getInvAnimate(ZkItemInstance const* slf);

ZKC_API int32_t ZkItemInstance_getDamage(ZkItemInstance const* slf, ZkDamageType type);
ZKC_API int32_t ZkItemInstance_getProtection(ZkItemInstance const* slf, ZkDamageType type);
ZKC_API int32_t ZkItemInstance_getCondAtr(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot);
ZKC_API int32_t ZkItemInstance_getCondValue(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot);
ZKC_API int32_t ZkItemInstance_getChangeAtr(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot);
ZKC_API int32_t ZkItemInstance_getChangeValue(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot);
ZKC_API int32_t ZkItemInstance_getOnState(ZkItemInstance const* slf, ZkItemInstanceStateSlot slot);
ZKC_API ZkString ZkItemInstance_getText(ZkItemInstance const* slf, ZkItemInstanceTextSlot slot);
ZKC_API int32_t ZkItemInstance_getCount(ZkItemInstance const* slf, ZkItemInstanceTextSlot slot);
