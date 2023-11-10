#include "czenkit/daedalus/ItemInstance.h"
#include "../Internal.hh"

int32_t ZkItemInstance_getId(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->id;
}

ZkString ZkItemInstance_getName(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkString ZkItemInstance_getNameId(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->name_id.c_str();
}

int32_t ZkItemInstance_getHp(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->hp;
}

int32_t ZkItemInstance_getHpMax(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->hp_max;
}

int32_t ZkItemInstance_getMainFlag(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->main_flag;
}

int32_t ZkItemInstance_getFlags(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<int32_t>(slf->flags);
}

int32_t ZkItemInstance_getWeight(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->weight;
}

int32_t ZkItemInstance_getValue(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->value;
}

int32_t ZkItemInstance_getDamageType(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->damage_type;
}

int32_t ZkItemInstance_getDamageTotal(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->damage_total;
}

int32_t ZkItemInstance_getWear(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->wear;
}

int32_t ZkItemInstance_getNutrition(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->nutrition;
}

int32_t ZkItemInstance_getMagic(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->magic;
}

int32_t ZkItemInstance_getOnEquip(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->on_equip;
}

int32_t ZkItemInstance_getOnUnequip(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->on_unequip;
}

int32_t ZkItemInstance_getOwner(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->owner;
}

int32_t ZkItemInstance_getOwnerGuild(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->owner_guild;
}

int32_t ZkItemInstance_getDisguiseGuild(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->disguise_guild;
}

ZkString ZkItemInstance_getVisual(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->visual.c_str();
}

ZkString ZkItemInstance_getVisualChange(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->visual_change.c_str();
}

ZkString ZkItemInstance_getEffect(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->effect.c_str();
}

int32_t ZkItemInstance_getVisualSkin(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->visual_skin;
}

ZkString ZkItemInstance_getSchemeName(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->scheme_name.c_str();
}

int32_t ZkItemInstance_getMaterial(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->material;
}

int32_t ZkItemInstance_getMunition(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->munition;
}

int32_t ZkItemInstance_getSpell(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->spell;
}

int32_t ZkItemInstance_getRange(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->range;
}

int32_t ZkItemInstance_getMagCircle(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->mag_circle;
}

ZkString ZkItemInstance_getDescription(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->description.c_str();
}

int32_t ZkItemInstance_getInvZBias(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->inv_zbias;
}

int32_t ZkItemInstance_getInvRotX(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->inv_rot_x;
}

int32_t ZkItemInstance_getInvRotY(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->inv_rot_y;
}

int32_t ZkItemInstance_getInvRotZ(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->inv_rot_z;
}

int32_t ZkItemInstance_getInvAnimate(ZkItemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->inv_animate;
}

int32_t ZkItemInstance_getDamage(ZkItemInstance const* slf, ZkDamageType type) {
	CZK_CHECK_NULL(slf);
	return slf->damage[type];
}

int32_t ZkItemInstance_getProtection(ZkItemInstance const* slf, ZkDamageType type) {
	CZK_CHECK_NULL(slf);
	return slf->protection[type];
}

int32_t ZkItemInstance_getCondAtr(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->cond_atr[slot];
}

int32_t ZkItemInstance_getCondValue(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->cond_value[slot];
}

int32_t ZkItemInstance_getChangeAtr(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->change_atr[slot];
}

int32_t ZkItemInstance_getChangeValue(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->change_value[slot];
}

int32_t ZkItemInstance_getOnState(ZkItemInstance const* slf, ZkItemInstanceStateSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->on_state[slot];
}

ZkString ZkItemInstance_getText(ZkItemInstance const* slf, ZkItemInstanceTextSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->text[slot].c_str();
}

int32_t ZkItemInstance_getCount(ZkItemInstance const* slf, ZkItemInstanceTextSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->count[slot];
}
