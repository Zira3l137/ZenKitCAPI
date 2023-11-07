// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/vobs/MovableObject.h"

#include "../Internal.hh"

CZK_VOB_LOADER(ZkMovableObject)
CZK_VOB_PATH_LOADER(ZkMovableObject)
CZK_DELETER(ZkMovableObject)

ZkString ZkMovableObject_getName(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->name.c_str();
}

int32_t ZkMovableObject_getHp(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->hp;
}

int32_t ZkMovableObject_getDamage(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->damage;
}

ZkBool ZkMovableObject_getMovable(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->movable;
}

ZkBool ZkMovableObject_getTakable(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->takable;
}

ZkBool ZkMovableObject_getFocusOverride(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->focus_override;
}

ZkSoundMaterialType ZkMovableObject_getMaterial(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return static_cast<ZkSoundMaterialType>(slf->material);
}

ZkString ZkMovableObject_getVisualDestroyed(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->visual_destroyed.c_str();
}

ZkString ZkMovableObject_getOwner(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->owner.c_str();
}

ZkString ZkMovableObject_getOwnerGuild(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->owner_guild.c_str();
}

ZkBool ZkMovableObject_getDestroyed(ZkMovableObject const* slf){
	CZK_CHECK_NULL(slf);
	return slf->destroyed;
}

CZK_VOB_LOADER(ZkInteractiveObject)
CZK_VOB_PATH_LOADER(ZkInteractiveObject)
CZK_DELETER(ZkInteractiveObject)

int32_t ZkInteractiveObject_getState(ZkInteractiveObject const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->state;
}

ZkString ZkInteractiveObject_getTarget(ZkInteractiveObject const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->target.c_str();
}

ZkString ZkInteractiveObject_getItem(ZkInteractiveObject const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->item.c_str();
}

ZkString ZkInteractiveObject_getConditionFunction(ZkInteractiveObject const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->condition_function.c_str();
}

ZkString ZkInteractiveObject_getOnStateChangeFunction(ZkInteractiveObject const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->on_state_change_function.c_str();
}

ZkBool ZkInteractiveObject_getRewind(ZkInteractiveObject const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->rewind;
}

CZK_VOB_LOADER(ZkFire)
CZK_VOB_PATH_LOADER(ZkFire)
CZK_DELETER(ZkFire)

ZkString ZkFire_getSlot(ZkFire const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->slot.c_str();
}

ZkString ZkFire_getVobTree(ZkFire const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vob_tree.c_str();
}

CZK_VOB_LOADER(ZkContainer)
CZK_VOB_PATH_LOADER(ZkContainer)
CZK_DELETER(ZkContainer)

ZkBool ZkContainer_getIsLocked(ZkContainer const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->locked;
}

ZkString ZkContainer_getKey(ZkContainer const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->key.c_str();
}

ZkString ZkContainer_getPickString(ZkContainer const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->pick_string.c_str();
}

ZkString ZkContainer_getContents(ZkContainer const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->contents.c_str();
}

CZK_VOB_LOADER(ZkDoor)
CZK_VOB_PATH_LOADER(ZkDoor)
CZK_DELETER(ZkDoor)

ZkBool ZkDoor_getIsLocked(ZkDoor const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->locked;
}

ZkString ZkDoor_getKey(ZkDoor const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->key.c_str();
}

ZkString ZkDoor_getPickString(ZkDoor const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->pick_string.c_str();
}
