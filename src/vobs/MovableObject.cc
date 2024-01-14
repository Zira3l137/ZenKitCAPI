// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/MovableObject.h"

#include "../Internal.hh"

ZKC_VOB_LOADER(ZkMovableObject)
ZKC_VOB_PATH_LOADER(ZkMovableObject)
ZKC_DELETER(ZkMovableObject)

ZkString ZkMovableObject_getName(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->name.c_str();
}

void ZkMovableObject_setName(ZkMovableObject* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->name = name;
}

int32_t ZkMovableObject_getHp(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->hp;
}

void ZkMovableObject_setHp(ZkMovableObject* slf, int32_t hp) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->hp = hp;
}

int32_t ZkMovableObject_getDamage(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->damage;
}

void ZkMovableObject_setDamage(ZkMovableObject* slf, int32_t damage) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->damage = damage;
}

ZkBool ZkMovableObject_getMovable(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->movable;
}

void ZkMovableObject_setMovable(ZkMovableObject* slf, ZkBool movable) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->movable = movable;
}

ZkBool ZkMovableObject_getTakable(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->takable;
}

void ZkMovableObject_setTakable(ZkMovableObject* slf, ZkBool takable) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->takable = takable;
}

ZkBool ZkMovableObject_getFocusOverride(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->focus_override;
}

void ZkMovableObject_setFocusOverride(ZkMovableObject* slf, ZkBool focusOverride) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->focus_override = focusOverride;
}

ZkSoundMaterialType ZkMovableObject_getMaterial(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSoundMaterialType>(SLF->material);
}

void ZkMovableObject_setMaterial(ZkMovableObject* slf, ZkSoundMaterialType material) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->material = static_cast<zenkit::SoundMaterialType>(material);
}

ZkString ZkMovableObject_getVisualDestroyed(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->visual_destroyed.c_str();
}

void ZkMovableObject_setVisualDestroyed(ZkMovableObject* slf, ZkString visualDestroyed) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->visual_destroyed = visualDestroyed;
}

ZkString ZkMovableObject_getOwner(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->owner.c_str();
}

void ZkMovableObject_setOwner(ZkMovableObject* slf, ZkString owner) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->owner = owner;
}

ZkString ZkMovableObject_getOwnerGuild(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->owner_guild.c_str();
}

void ZkMovableObject_setOwnerGuild(ZkMovableObject* slf, ZkString ownerGuild) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->owner_guild = ownerGuild;
}

ZkBool ZkMovableObject_getDestroyed(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->destroyed;
}

void ZkMovableObject_setDestroyed(ZkMovableObject* slf, ZkBool destroyed) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->destroyed = destroyed;
}

ZKC_VOB_LOADER(ZkInteractiveObject)
ZKC_VOB_PATH_LOADER(ZkInteractiveObject)
ZKC_DELETER(ZkInteractiveObject)

int32_t ZkInteractiveObject_getState(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->state;
}

void ZkInteractiveObject_setState(ZkInteractiveObject* slf, int32_t state) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->state = state;
}

ZkString ZkInteractiveObject_getTarget(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->target.c_str();
}

void ZkInteractiveObject_setTarget(ZkInteractiveObject* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->target = target;
}

ZkString ZkInteractiveObject_getItem(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->item.c_str();
}

void ZkInteractiveObject_setItem(ZkInteractiveObject* slf, ZkString item) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->item = item;
}

ZkString ZkInteractiveObject_getConditionFunction(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->condition_function.c_str();
}

void ZkInteractiveObject_setConditionFunction(ZkInteractiveObject* slf, ZkString conditionFunction) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->condition_function = conditionFunction;
}

ZkString ZkInteractiveObject_getOnStateChangeFunction(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->on_state_change_function.c_str();
}

void ZkInteractiveObject_setOnStateChangeFunction(ZkInteractiveObject* slf, ZkString onStateChangeFunction) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->on_state_change_function = onStateChangeFunction;
}

ZkBool ZkInteractiveObject_getRewind(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->rewind;
}

void ZkInteractiveObject_setRewind(ZkInteractiveObject* slf, ZkBool rewind) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->rewind = rewind;
}

ZKC_VOB_LOADER(ZkFire)
ZKC_VOB_PATH_LOADER(ZkFire)
ZKC_DELETER(ZkFire)

ZkString ZkFire_getSlot(ZkFire const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->slot.c_str();
}

void ZkFire_setSlot(ZkFire* slf, ZkString slot) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->slot = slot;
}

ZkString ZkFire_getVobTree(ZkFire const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->vob_tree.c_str();
}

void ZkFire_setVobTree(ZkFire* slf, ZkString vobTree) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->vob_tree = vobTree;
}

ZKC_VOB_LOADER(ZkContainer)
ZKC_VOB_PATH_LOADER(ZkContainer)
ZKC_DELETER(ZkContainer)

ZkBool ZkContainer_getIsLocked(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->locked;
}

void ZkContainer_setIsLocked(ZkContainer* slf, ZkBool isLocked) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->locked = isLocked;
}

ZkString ZkContainer_getKey(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->key.c_str();
}

void ZkContainer_setKey(ZkContainer* slf, ZkString key) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->key = key;
}

ZkString ZkContainer_getPickString(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->pick_string.c_str();
}

void ZkContainer_setPickString(ZkContainer* slf, ZkString pickString) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->pick_string = pickString;
}

ZkString ZkContainer_getContents(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->contents.c_str();
}

void ZkContainer_setContents(ZkContainer* slf, ZkString contents) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->contents = contents;
}

ZkSize ZkContainer_getItemCount(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->s_items.size();
}

ZkItem* ZkContainer_getItem(ZkContainer const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->s_items, i);
	return &SLF->s_items[i];
}

void ZkContainer_addItem(ZkContainer const* slf, ZkItem* item) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, item);
	SLF->s_items.push_back(*item);
}

void ZkContainer_removeItem(ZkContainer const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->s_items, i);
	SLF->s_items.erase(SLF->s_items.begin() + i);
}

ZKC_VOB_LOADER(ZkDoor)
ZKC_VOB_PATH_LOADER(ZkDoor)
ZKC_DELETER(ZkDoor)

ZkBool ZkDoor_getIsLocked(ZkDoor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->locked;
}

void ZkDoor_setIsLocked(ZkDoor* slf, ZkBool isLocked) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->locked = isLocked;
}

ZkString ZkDoor_getKey(ZkDoor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->key.c_str();
}

void ZkDoor_setKey(ZkDoor* slf, ZkString key) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->key = key;
}

ZkString ZkDoor_getPickString(ZkDoor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->pick_string.c_str();
}

void ZkDoor_setPickString(ZkDoor* slf, ZkString pickString) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->pick_string = pickString;
}
