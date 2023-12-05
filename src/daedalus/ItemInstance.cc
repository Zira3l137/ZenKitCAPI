#include "zenkit-capi/daedalus/ItemInstance.h"
#include "../Internal.hh"

int32_t ZkItemInstance_getId(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->id;
}

void ZkItemInstance_setId(ZkItemInstance* slf, int32_t id) {
	ZKC_CHECK_NULLV(slf);
	slf->id = id;
}

ZkString ZkItemInstance_getName(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

void ZkItemInstance_setName(ZkItemInstance* slf, ZkString name) {
	ZKC_CHECK_NULLV(slf);
	slf->name = name;
}

ZkString ZkItemInstance_getNameId(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->name_id.c_str();
}

void ZkItemInstance_setNameId(ZkItemInstance* slf, ZkString nameId) {
	ZKC_CHECK_NULLV(slf);
	slf->name_id = nameId;
}

int32_t ZkItemInstance_getHp(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hp;
}

void ZkItemInstance_setHp(ZkItemInstance* slf, int32_t hp) {
	ZKC_CHECK_NULLV(slf);
	slf->hp = hp;
}

int32_t ZkItemInstance_getHpMax(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hp_max;
}

void ZkItemInstance_setHpMax(ZkItemInstance* slf, int32_t hpMax) {
	ZKC_CHECK_NULLV(slf);
	slf->hp_max = hpMax;
}

int32_t ZkItemInstance_getMainFlag(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->main_flag;
}

void ZkItemInstance_setMainFlag(ZkItemInstance* slf, int32_t mainFlag) {
	ZKC_CHECK_NULLV(slf);
	slf->main_flag = mainFlag;
}

int32_t ZkItemInstance_getFlags(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<int32_t>(slf->flags);
}

void ZkItemInstance_setFlags(ZkItemInstance* slf, int32_t flags) {
	ZKC_CHECK_NULLV(slf);
	slf->flags = static_cast<zenkit::ItemFlag>(flags);
}

int32_t ZkItemInstance_getWeight(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->weight;
}

void ZkItemInstance_setWeight(ZkItemInstance* slf, int32_t weight) {
	ZKC_CHECK_NULLV(slf);
	slf->weight = weight;
}

int32_t ZkItemInstance_getValue(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->value;
}

void ZkItemInstance_setValue(ZkItemInstance* slf, int32_t value) {
	ZKC_CHECK_NULLV(slf);
	slf->value = value;
}

int32_t ZkItemInstance_getDamageType(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->damage_type;
}

void ZkItemInstance_setDamageType(ZkItemInstance* slf, int32_t damageType) {
	ZKC_CHECK_NULLV(slf);
	slf->damage_type = damageType;
}

int32_t ZkItemInstance_getDamageTotal(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->damage_total;
}

void ZkItemInstance_setDamageTotal(ZkItemInstance* slf, int32_t damageTotal) {
	ZKC_CHECK_NULLV(slf);
	slf->damage_total = damageTotal;
}

int32_t ZkItemInstance_getWear(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->wear;
}

void ZkItemInstance_setWear(ZkItemInstance* slf, int32_t wear) {
	ZKC_CHECK_NULLV(slf);
	slf->wear = wear;
}

int32_t ZkItemInstance_getNutrition(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nutrition;
}

void ZkItemInstance_setNutrition(ZkItemInstance* slf, int32_t nutrition) {
	ZKC_CHECK_NULLV(slf);
	slf->nutrition = nutrition;
}

int32_t ZkItemInstance_getMagic(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->magic;
}

void ZkItemInstance_setMagic(ZkItemInstance* slf, int32_t magic) {
	ZKC_CHECK_NULLV(slf);
	slf->magic = magic;
}

int32_t ZkItemInstance_getOnEquip(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->on_equip;
}

void ZkItemInstance_setOnEquip(ZkItemInstance* slf, int32_t onEquip) {
	ZKC_CHECK_NULLV(slf);
	slf->on_equip = onEquip;
}

int32_t ZkItemInstance_getOnUnequip(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->on_unequip;
}

void ZkItemInstance_setOnUnequip(ZkItemInstance* slf, int32_t onUnequip) {
	ZKC_CHECK_NULLV(slf);
	slf->on_unequip = onUnequip;
}

int32_t ZkItemInstance_getOwner(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->owner;
}

void ZkItemInstance_setOwner(ZkItemInstance* slf, int32_t owner) {
	ZKC_CHECK_NULLV(slf);
	slf->owner = owner;
}

int32_t ZkItemInstance_getOwnerGuild(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->owner_guild;
}

void ZkItemInstance_setOwnerGuild(ZkItemInstance* slf, int32_t ownerGuild) {
	ZKC_CHECK_NULLV(slf);
	slf->owner_guild = ownerGuild;
}

int32_t ZkItemInstance_getDisguiseGuild(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->disguise_guild;
}

void ZkItemInstance_setDisguiseGuild(ZkItemInstance* slf, int32_t disguiseGuild) {
	ZKC_CHECK_NULLV(slf);
	slf->disguise_guild = disguiseGuild;
}

ZkString ZkItemInstance_getVisual(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->visual.c_str();
}

void ZkItemInstance_setVisual(ZkItemInstance* slf, ZkString visual) {
	ZKC_CHECK_NULLV(slf);
	slf->visual = visual;
}

ZkString ZkItemInstance_getVisualChange(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->visual_change.c_str();
}

void ZkItemInstance_setVisualChange(ZkItemInstance* slf, ZkString visualChange) {
	ZKC_CHECK_NULLV(slf);
	slf->visual_change = visualChange;
}

ZkString ZkItemInstance_getEffect(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->effect.c_str();
}

void ZkItemInstance_setEffect(ZkItemInstance* slf, ZkString effect) {
	ZKC_CHECK_NULLV(slf);
	slf->effect = effect;
}

int32_t ZkItemInstance_getVisualSkin(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->visual_skin;
}

void ZkItemInstance_setVisualSkin(ZkItemInstance* slf, int32_t visualSkin) {
	ZKC_CHECK_NULLV(slf);
	slf->visual_skin = visualSkin;
}

ZkString ZkItemInstance_getSchemeName(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->scheme_name.c_str();
}

void ZkItemInstance_setSchemeName(ZkItemInstance* slf, ZkString schemeName) {
	ZKC_CHECK_NULLV(slf);
	slf->scheme_name = schemeName;
}

int32_t ZkItemInstance_getMaterial(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->material;
}

void ZkItemInstance_setMaterial(ZkItemInstance* slf, int32_t material) {
	ZKC_CHECK_NULLV(slf);
	slf->material = material;
}

int32_t ZkItemInstance_getMunition(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->munition;
}

void ZkItemInstance_setMunition(ZkItemInstance* slf, int32_t munition) {
	ZKC_CHECK_NULLV(slf);
	slf->munition = munition;
}

int32_t ZkItemInstance_getSpell(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->spell;
}

void ZkItemInstance_setSpell(ZkItemInstance* slf, int32_t spell) {
	ZKC_CHECK_NULLV(slf);
	slf->spell = spell;
}

int32_t ZkItemInstance_getRange(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->range;
}

void ZkItemInstance_setRange(ZkItemInstance* slf, int32_t range) {
	ZKC_CHECK_NULLV(slf);
	slf->range = range;
}

int32_t ZkItemInstance_getMagCircle(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mag_circle;
}

void ZkItemInstance_setMagCircle(ZkItemInstance* slf, int32_t magCircle) {
	ZKC_CHECK_NULLV(slf);
	slf->mag_circle = magCircle;
}

ZkString ZkItemInstance_getDescription(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->description.c_str();
}

void ZkItemInstance_setDescription(ZkItemInstance* slf, ZkString description) {
	ZKC_CHECK_NULLV(slf);
	slf->description = description;
}

int32_t ZkItemInstance_getInvZBias(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->inv_zbias;
}

void ZkItemInstance_setInvZBias(ZkItemInstance* slf, int32_t invZBias) {
	ZKC_CHECK_NULLV(slf);
	slf->inv_zbias = invZBias;
}

int32_t ZkItemInstance_getInvRotX(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->inv_rot_x;
}

void ZkItemInstance_setInvRotX(ZkItemInstance* slf, int32_t invRotX) {
	ZKC_CHECK_NULLV(slf);
	slf->inv_rot_x = invRotX;
}

int32_t ZkItemInstance_getInvRotY(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->inv_rot_y;
}

void ZkItemInstance_setInvRotY(ZkItemInstance* slf, int32_t invRotY) {
	ZKC_CHECK_NULLV(slf);
	slf->inv_rot_y = invRotY;
}

int32_t ZkItemInstance_getInvRotZ(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->inv_rot_z;
}

void ZkItemInstance_setInvRotZ(ZkItemInstance* slf, int32_t invRotZ) {
	ZKC_CHECK_NULLV(slf);
	slf->inv_rot_z = invRotZ;
}

int32_t ZkItemInstance_getInvAnimate(ZkItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->inv_animate;
}

void ZkItemInstance_setInvAnimate(ZkItemInstance* slf, int32_t invAnimate) {
	ZKC_CHECK_NULLV(slf);
	slf->inv_animate = invAnimate;
}

int32_t ZkItemInstance_getDamage(ZkItemInstance const* slf, ZkDamageType type) {
	ZKC_CHECK_NULL(slf);
	return slf->damage[type];
}

void ZkItemInstance_setDamage(ZkItemInstance* slf, ZkDamageType type, int32_t damage) {
	ZKC_CHECK_NULLV(slf);
	slf->damage[static_cast<ZkSize>(type)] = damage;
}

int32_t ZkItemInstance_getProtection(ZkItemInstance const* slf, ZkDamageType type) {
	ZKC_CHECK_NULL(slf);
	return slf->protection[type];
}

void ZkItemInstance_setProtection(ZkItemInstance* slf, ZkDamageType type, int32_t protection) {
	ZKC_CHECK_NULLV(slf);
	slf->protection[static_cast<ZkSize>(type)] = protection;
}

int32_t ZkItemInstance_getCondAtr(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot) {
	ZKC_CHECK_NULL(slf);
	return slf->cond_atr[slot];
}

void ZkItemInstance_setCondAtr(ZkItemInstance* slf, ZkItemInstanceConditionSlot slot, int32_t condAtr) {
	ZKC_CHECK_NULLV(slf);
	slf->cond_atr[static_cast<ZkSize>(slot)] = condAtr;
}

int32_t ZkItemInstance_getCondValue(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot) {
	ZKC_CHECK_NULL(slf);
	return slf->cond_value[slot];
}

void ZkItemInstance_setCondValue(ZkItemInstance* slf, ZkItemInstanceConditionSlot slot, int32_t condValue) {
	ZKC_CHECK_NULLV(slf);
	slf->cond_value[static_cast<ZkSize>(slot)] = condValue;
}

int32_t ZkItemInstance_getChangeAtr(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot) {
	ZKC_CHECK_NULL(slf);
	return slf->change_atr[slot];
}

void ZkItemInstance_setChangeAtr(ZkItemInstance* slf, ZkItemInstanceConditionSlot slot, int32_t changeAtr) {
	ZKC_CHECK_NULLV(slf);
	slf->change_atr[static_cast<ZkSize>(slot)] = changeAtr;
}

int32_t ZkItemInstance_getChangeValue(ZkItemInstance const* slf, ZkItemInstanceConditionSlot slot) {
	ZKC_CHECK_NULL(slf);
	return slf->change_value[slot];
}

void ZkItemInstance_setChangeValue(ZkItemInstance* slf, ZkItemInstanceConditionSlot slot, int32_t changeValue) {
	ZKC_CHECK_NULLV(slf);
	slf->change_value[static_cast<ZkSize>(slot)] = changeValue;
}

int32_t ZkItemInstance_getOnState(ZkItemInstance const* slf, ZkItemInstanceStateSlot slot) {
	ZKC_CHECK_NULL(slf);
	return slf->on_state[slot];
}

void ZkItemInstance_setOnState(ZkItemInstance* slf, ZkItemInstanceStateSlot slot, int32_t onState) {
	ZKC_CHECK_NULLV(slf);
	slf->on_state[static_cast<ZkSize>(slot)] = onState;
}

ZkString ZkItemInstance_getText(ZkItemInstance const* slf, ZkItemInstanceTextSlot slot) {
	ZKC_CHECK_NULL(slf);
	return slf->text[slot].c_str();
}

void ZkItemInstance_setText(ZkItemInstance* slf, ZkItemInstanceTextSlot slot, ZkString text) {
	ZKC_CHECK_NULLV(slf);
	slf->text[static_cast<ZkSize>(slot)] = text;
}

int32_t ZkItemInstance_getCount(ZkItemInstance const* slf, ZkItemInstanceTextSlot slot) {
	ZKC_CHECK_NULL(slf);
	return slf->count[slot];
}

void ZkItemInstance_setCount(ZkItemInstance* slf, ZkItemInstanceTextSlot slot, int32_t count) {
	ZKC_CHECK_NULLV(slf);
	slf->count[static_cast<ZkSize>(slot)] = count;
}
