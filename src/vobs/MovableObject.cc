// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/MovableObject.h"

#include "../Internal.hh"

ZKC_VOB_LOADER(ZkMovableObject)
ZKC_VOB_PATH_LOADER(ZkMovableObject)
ZKC_DELETER(ZkMovableObject)

ZkString ZkMovableObject_getName(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

int32_t ZkMovableObject_getHp(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->hp;
}

int32_t ZkMovableObject_getDamage(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->damage;
}

ZkBool ZkMovableObject_getMovable(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->movable;
}

ZkBool ZkMovableObject_getTakable(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->takable;
}

ZkBool ZkMovableObject_getFocusOverride(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->focus_override;
}

ZkSoundMaterialType ZkMovableObject_getMaterial(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSoundMaterialType>(slf->material);
}

ZkString ZkMovableObject_getVisualDestroyed(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->visual_destroyed.c_str();
}

ZkString ZkMovableObject_getOwner(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->owner.c_str();
}

ZkString ZkMovableObject_getOwnerGuild(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->owner_guild.c_str();
}

ZkBool ZkMovableObject_getDestroyed(ZkMovableObject const* slf){
	ZKC_CHECK_NULL(slf);
	return slf->destroyed;
}

ZKC_VOB_LOADER(ZkInteractiveObject)
ZKC_VOB_PATH_LOADER(ZkInteractiveObject)
ZKC_DELETER(ZkInteractiveObject)

int32_t ZkInteractiveObject_getState(ZkInteractiveObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->state;
}

ZkString ZkInteractiveObject_getTarget(ZkInteractiveObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target.c_str();
}

ZkString ZkInteractiveObject_getItem(ZkInteractiveObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->item.c_str();
}

ZkString ZkInteractiveObject_getConditionFunction(ZkInteractiveObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->condition_function.c_str();
}

ZkString ZkInteractiveObject_getOnStateChangeFunction(ZkInteractiveObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->on_state_change_function.c_str();
}

ZkBool ZkInteractiveObject_getRewind(ZkInteractiveObject const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->rewind;
}

ZKC_VOB_LOADER(ZkFire)
ZKC_VOB_PATH_LOADER(ZkFire)
ZKC_DELETER(ZkFire)

ZkString ZkFire_getSlot(ZkFire const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->slot.c_str();
}

ZkString ZkFire_getVobTree(ZkFire const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vob_tree.c_str();
}

ZKC_VOB_LOADER(ZkContainer)
ZKC_VOB_PATH_LOADER(ZkContainer)
ZKC_DELETER(ZkContainer)

ZkBool ZkContainer_getIsLocked(ZkContainer const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->locked;
}

ZkString ZkContainer_getKey(ZkContainer const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->key.c_str();
}

ZkString ZkContainer_getPickString(ZkContainer const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pick_string.c_str();
}

ZkString ZkContainer_getContents(ZkContainer const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->contents.c_str();
}

ZKC_VOB_LOADER(ZkDoor)
ZKC_VOB_PATH_LOADER(ZkDoor)
ZKC_DELETER(ZkDoor)

ZkBool ZkDoor_getIsLocked(ZkDoor const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->locked;
}

ZkString ZkDoor_getKey(ZkDoor const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->key.c_str();
}

ZkString ZkDoor_getPickString(ZkDoor const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pick_string.c_str();
}
