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
	return slf->name.c_str();
}

void ZkMovableObject_setName(ZkMovableObject* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->name = name;
}

int32_t ZkMovableObject_getHp(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->hp;
}

void ZkMovableObject_setHp(ZkMovableObject* slf, int32_t hp) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->hp = hp;
}

int32_t ZkMovableObject_getDamage(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->damage;
}

void ZkMovableObject_setDamage(ZkMovableObject* slf, int32_t damage) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->damage = damage;
}

ZkBool ZkMovableObject_getMovable(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->movable;
}

void ZkMovableObject_setMovable(ZkMovableObject* slf, ZkBool movable) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->movable = movable;
}

ZkBool ZkMovableObject_getTakable(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->takable;
}

void ZkMovableObject_setTakable(ZkMovableObject* slf, ZkBool takable) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->takable = takable;
}

ZkBool ZkMovableObject_getFocusOverride(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->focus_override;
}

void ZkMovableObject_setFocusOverride(ZkMovableObject* slf, ZkBool focusOverride) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->focus_override = focusOverride;
}

ZkSoundMaterialType ZkMovableObject_getMaterial(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSoundMaterialType>(slf->material);
}

void ZkMovableObject_setMaterial(ZkMovableObject* slf, ZkSoundMaterialType material) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->material = static_cast<zenkit::SoundMaterialType>(material);
}

ZkString ZkMovableObject_getVisualDestroyed(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->visual_destroyed.c_str();
}

void ZkMovableObject_setVisualDestroyed(ZkMovableObject* slf, ZkString visualDestroyed) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->visual_destroyed = visualDestroyed;
}

ZkString ZkMovableObject_getOwner(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->owner.c_str();
}

void ZkMovableObject_setOwner(ZkMovableObject* slf, ZkString owner) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->owner = owner;
}

ZkString ZkMovableObject_getOwnerGuild(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->owner_guild.c_str();
}

void ZkMovableObject_setOwnerGuild(ZkMovableObject* slf, ZkString ownerGuild) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->owner_guild = ownerGuild;
}

ZkBool ZkMovableObject_getDestroyed(ZkMovableObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->destroyed;
}

void ZkMovableObject_setDestroyed(ZkMovableObject* slf, ZkBool destroyed) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->destroyed = destroyed;
}

ZKC_VOB_LOADER(ZkInteractiveObject)
ZKC_VOB_PATH_LOADER(ZkInteractiveObject)
ZKC_DELETER(ZkInteractiveObject)

int32_t ZkInteractiveObject_getState(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->state;
}

void ZkInteractiveObject_setState(ZkInteractiveObject* slf, int32_t state) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->state = state;
}

ZkString ZkInteractiveObject_getTarget(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->target.c_str();
}

void ZkInteractiveObject_setTarget(ZkInteractiveObject* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->target = target;
}

ZkString ZkInteractiveObject_getItem(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->item.c_str();
}

void ZkInteractiveObject_setItem(ZkInteractiveObject* slf, ZkString item) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->item = item;
}

ZkString ZkInteractiveObject_getConditionFunction(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->condition_function.c_str();
}

void ZkInteractiveObject_setConditionFunction(ZkInteractiveObject* slf, ZkString conditionFunction) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->condition_function = conditionFunction;
}

ZkString ZkInteractiveObject_getOnStateChangeFunction(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->on_state_change_function.c_str();
}

void ZkInteractiveObject_setOnStateChangeFunction(ZkInteractiveObject* slf, ZkString onStateChangeFunction) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->on_state_change_function = onStateChangeFunction;
}

ZkBool ZkInteractiveObject_getRewind(ZkInteractiveObject const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->rewind;
}

void ZkInteractiveObject_setRewind(ZkInteractiveObject* slf, ZkBool rewind) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->rewind = rewind;
}

ZKC_VOB_LOADER(ZkFire)
ZKC_VOB_PATH_LOADER(ZkFire)
ZKC_DELETER(ZkFire)

ZkString ZkFire_getSlot(ZkFire const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->slot.c_str();
}

void ZkFire_setSlot(ZkFire* slf, ZkString slot) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->slot = slot;
}

ZkString ZkFire_getVobTree(ZkFire const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->vob_tree.c_str();
}

void ZkFire_setVobTree(ZkFire* slf, ZkString vobTree) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->vob_tree = vobTree;
}

ZKC_VOB_LOADER(ZkContainer)
ZKC_VOB_PATH_LOADER(ZkContainer)
ZKC_DELETER(ZkContainer)

ZkBool ZkContainer_getIsLocked(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->locked;
}

void ZkContainer_setIsLocked(ZkContainer* slf, ZkBool isLocked) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->locked = isLocked;
}

ZkString ZkContainer_getKey(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->key.c_str();
}

void ZkContainer_setKey(ZkContainer* slf, ZkString key) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->key = key;
}

ZkString ZkContainer_getPickString(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->pick_string.c_str();
}

void ZkContainer_setPickString(ZkContainer* slf, ZkString pickString) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->pick_string = pickString;
}

ZkString ZkContainer_getContents(ZkContainer const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->contents.c_str();
}

void ZkContainer_setContents(ZkContainer* slf, ZkString contents) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->contents = contents;
}

ZKC_VOB_LOADER(ZkDoor)
ZKC_VOB_PATH_LOADER(ZkDoor)
ZKC_DELETER(ZkDoor)

ZkBool ZkDoor_getIsLocked(ZkDoor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->locked;
}

void ZkDoor_setIsLocked(ZkDoor* slf, ZkBool isLocked) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->locked = isLocked;
}

ZkString ZkDoor_getKey(ZkDoor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->key.c_str();
}

void ZkDoor_setKey(ZkDoor* slf, ZkString key) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->key = key;
}

ZkString ZkDoor_getPickString(ZkDoor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->pick_string.c_str();
}

void ZkDoor_setPickString(ZkDoor* slf, ZkString pickString) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->pick_string = pickString;
}
