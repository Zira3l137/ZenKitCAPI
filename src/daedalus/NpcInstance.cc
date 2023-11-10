// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/daedalus/NpcInstance.h"
#include "../Internal.hh"

int32_t ZkNpcInstance_getId(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->id;
}

ZkString ZkNpcInstance_getSlot(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->slot.c_str();
}

ZkString ZkNpcInstance_getEffect(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->effect.c_str();
}

ZkNpcInstanceType ZkNpcInstance_getType(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkNpcInstanceType>(slf->type);
}

uint32_t ZkNpcInstance_getFlags(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<uint32_t>(slf->flags);
}

int32_t ZkNpcInstance_getDamageType(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->damage_type;
}

int32_t ZkNpcInstance_getGuild(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->guild;
}

int32_t ZkNpcInstance_getLevel(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->level;
}

int32_t ZkNpcInstance_getFightTactic(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->fight_tactic;
}

int32_t ZkNpcInstance_getWeapon(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->weapon;
}

int32_t ZkNpcInstance_getVoice(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->voice;
}

int32_t ZkNpcInstance_getVoicePitch(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->voice_pitch;
}

int32_t ZkNpcInstance_getBodyMass(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->body_mass;
}

int32_t ZkNpcInstance_getDailyRoutine(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->daily_routine;
}

int32_t ZkNpcInstance_getStartAiState(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->start_aistate;
}

ZkString ZkNpcInstance_getSpawnPoint(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->spawnpoint.data();
}

int32_t ZkNpcInstance_getSpawnDelay(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->spawn_delay;
}

int32_t ZkNpcInstance_getSenses(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->senses;
}

int32_t ZkNpcInstance_getSensesRange(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->senses_range;
}

ZkString ZkNpcInstance_getWp(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->wp.c_str();
}

int32_t ZkNpcInstance_getExp(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->exp;
}

int32_t ZkNpcInstance_getExpNext(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->exp_next;
}

int32_t ZkNpcInstance_getLp(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->lp;
}

int32_t ZkNpcInstance_getBodyStateInterruptableOverride(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->bodystate_interruptable_override;
}

int32_t ZkNpcInstance_getNoFocus(ZkNpcInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->no_focus;
}

ZkString ZkNpcInstance_getName(ZkNpcInstance const* slf, ZkNpcInstanceNameSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->name[slot].c_str();
}

int32_t ZkNpcInstance_getMission(ZkNpcInstance const* slf, ZkNpcInstanceMissionSlot slot) {
	CZK_CHECK_NULL(slf);
	return slf->mission[slot];
}

int32_t ZkNpcInstance_getAttribute(ZkNpcInstance const* slf, ZkNpcInstanceAttribute attribute) {
	CZK_CHECK_NULL(slf);
	return slf->attribute[attribute];
}

int32_t ZkNpcInstance_getHitChance(ZkNpcInstance const* slf, ZkNpcInstanceTalent talent) {
	CZK_CHECK_NULL(slf);
	return slf->hitchance[talent];
}

int32_t ZkNpcInstance_getProtection(ZkNpcInstance const* slf, ZkDamageType type) {
	CZK_CHECK_NULL(slf);
	return slf->protection[type];
}

int32_t ZkNpcInstance_getDamage(ZkNpcInstance const* slf, ZkDamageType type) {
	CZK_CHECK_NULL(slf);
	return slf->damage[type];
}

int32_t ZkNpcInstance_getAiVar(ZkNpcInstance const* slf, ZkSize i) {
	CZK_CHECK_NULL(slf);
	CZK_CHECK_LENA(100, i);
	return slf->aivar[i];
}
