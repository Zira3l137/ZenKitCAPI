// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/daedalus/NpcInstance.h"
#include "../Internal.hh"

int32_t ZkNpcInstance_getId(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->id;
}

void ZkNpcInstance_setId(ZkNpcInstance* slf, int32_t id) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->id = id;
}

ZkString ZkNpcInstance_getSlot(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->slot.c_str();
}

void ZkNpcInstance_setSlot(ZkNpcInstance* slf, ZkString slot) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->slot = slot;
}

ZkString ZkNpcInstance_getEffect(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->effect.c_str();
}

void ZkNpcInstance_setEffect(ZkNpcInstance* slf, ZkString effect) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->effect = effect;
}

ZkNpcInstanceType ZkNpcInstance_getType(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return static_cast<ZkNpcInstanceType>(SLF->type);
}

void ZkNpcInstance_setType(ZkNpcInstance* slf, ZkNpcInstanceType type) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->type = static_cast<zenkit::NpcType>(type);
}

uint32_t ZkNpcInstance_getFlags(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return static_cast<uint32_t>(SLF->flags);
}

void ZkNpcInstance_setFlags(ZkNpcInstance* slf, uint32_t flags) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->flags = static_cast<zenkit::NpcFlag>(flags);
}

int32_t ZkNpcInstance_getDamageType(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->damage_type;
}

void ZkNpcInstance_setDamageType(ZkNpcInstance* slf, int32_t damageType) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->damage_type = damageType;
}

int32_t ZkNpcInstance_getGuild(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->guild;
}

void ZkNpcInstance_setGuild(ZkNpcInstance* slf, int32_t guild) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->guild = guild;
}

int32_t ZkNpcInstance_getLevel(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->level;
}

void ZkNpcInstance_setLevel(ZkNpcInstance* slf, int32_t level) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->level = level;
}

int32_t ZkNpcInstance_getFightTactic(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->fight_tactic;
}

void ZkNpcInstance_setFightTactic(ZkNpcInstance* slf, int32_t fightTactic) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->fight_tactic = fightTactic;
}

int32_t ZkNpcInstance_getWeapon(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->weapon;
}

void ZkNpcInstance_setWeapon(ZkNpcInstance* slf, int32_t weapon) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->weapon = weapon;
}

int32_t ZkNpcInstance_getVoice(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->voice;
}

void ZkNpcInstance_setVoice(ZkNpcInstance* slf, int32_t voice) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->voice = voice;
}

int32_t ZkNpcInstance_getVoicePitch(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->voice_pitch;
}

void ZkNpcInstance_setVoicePitch(ZkNpcInstance* slf, int32_t voicePitch) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->voice_pitch = voicePitch;
}

int32_t ZkNpcInstance_getBodyMass(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->body_mass;
}

void ZkNpcInstance_setBodyMass(ZkNpcInstance* slf, int32_t bodyMass) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->body_mass = bodyMass;
}

int32_t ZkNpcInstance_getDailyRoutine(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->daily_routine;
}

void ZkNpcInstance_setDailyRoutine(ZkNpcInstance* slf, int32_t dailyRoutine) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->daily_routine = dailyRoutine;
}

int32_t ZkNpcInstance_getStartAiState(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->start_aistate;
}

void ZkNpcInstance_setStartAiState(ZkNpcInstance* slf, int32_t startAiState) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->start_aistate = startAiState;
}

ZkString ZkNpcInstance_getSpawnPoint(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->spawnpoint.data();
}

void ZkNpcInstance_setSpawnPoint(ZkNpcInstance* slf, ZkString spawnPoint) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->spawnpoint = spawnPoint;
}

int32_t ZkNpcInstance_getSpawnDelay(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->spawn_delay;
}

void ZkNpcInstance_setSpawnDelay(ZkNpcInstance* slf, int32_t spawnDelay) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->spawn_delay = spawnDelay;
}

int32_t ZkNpcInstance_getSenses(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->senses;
}

void ZkNpcInstance_setSenses(ZkNpcInstance* slf, int32_t senses) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->senses = senses;
}

int32_t ZkNpcInstance_getSensesRange(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->senses_range;
}

void ZkNpcInstance_setSensesRange(ZkNpcInstance* slf, int32_t sensesRange) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->senses_range = sensesRange;
}

ZkString ZkNpcInstance_getWp(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->wp.c_str();
}

void ZkNpcInstance_setWp(ZkNpcInstance* slf, ZkString wp) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->wp = wp;
}

int32_t ZkNpcInstance_getExp(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->exp;
}

void ZkNpcInstance_setExp(ZkNpcInstance* slf, int32_t exp) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->exp = exp;
}

int32_t ZkNpcInstance_getExpNext(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->exp_next;
}

void ZkNpcInstance_setExpNext(ZkNpcInstance* slf, int32_t expNext) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->exp_next = expNext;
}

int32_t ZkNpcInstance_getLp(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->lp;
}

void ZkNpcInstance_setLp(ZkNpcInstance* slf, int32_t lp) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->lp = lp;
}

int32_t ZkNpcInstance_getBodyStateInterruptableOverride(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->bodystate_interruptable_override;
}

void ZkNpcInstance_setBodyStateInterruptableOverride(ZkNpcInstance* slf, int32_t bodyStateInterruptableOverride) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->bodystate_interruptable_override = bodyStateInterruptableOverride;
}

int32_t ZkNpcInstance_getNoFocus(ZkNpcInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->no_focus;
}

void ZkNpcInstance_setNoFocus(ZkNpcInstance* slf, int32_t noFocus) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->no_focus = noFocus;
}

ZkString ZkNpcInstance_getName(ZkNpcInstance const* slf, ZkNpcInstanceNameSlot slot) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->name[slot].c_str();
}

void ZkNpcInstance_setName(ZkNpcInstance* slf, ZkNpcInstanceNameSlot slot, ZkString name) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->name[static_cast<ZkSize>(slot)] = name;
}

int32_t ZkNpcInstance_getMission(ZkNpcInstance const* slf, ZkNpcInstanceMissionSlot slot) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->mission[slot];
}

void ZkNpcInstance_setMission(ZkNpcInstance* slf, ZkNpcInstanceMissionSlot slot, int32_t mission) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->mission[static_cast<ZkSize>(slot)] = mission;
}

int32_t ZkNpcInstance_getAttribute(ZkNpcInstance const* slf, ZkNpcInstanceAttribute attribute) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->attribute[attribute];
}

void ZkNpcInstance_setAttribute(ZkNpcInstance* slf, ZkNpcInstanceAttribute attribute, int32_t value) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->attribute[static_cast<ZkSize>(attribute)] = value;
}

int32_t ZkNpcInstance_getHitChance(ZkNpcInstance const* slf, ZkNpcInstanceTalent talent) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->hitchance[talent];
}

void ZkNpcInstance_setHitChance(ZkNpcInstance* slf, ZkNpcInstanceTalent talent, int32_t hitChance) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->hitchance[static_cast<ZkSize>(talent)] = hitChance;
}

int32_t ZkNpcInstance_getProtection(ZkNpcInstance const* slf, ZkDamageType type) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->protection[type];
}

void ZkNpcInstance_setProtection(ZkNpcInstance* slf, ZkDamageType type, int32_t protection) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->protection[static_cast<ZkSize>(type)] = protection;
}

int32_t ZkNpcInstance_getDamage(ZkNpcInstance const* slf, ZkDamageType type) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->damage[type];
}

void ZkNpcInstance_setDamage(ZkNpcInstance* slf, ZkDamageType type, int32_t damage) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->damage[static_cast<ZkSize>(type)] = damage;
}

int32_t ZkNpcInstance_getAiVar(ZkNpcInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LENA(100, i);
	return SLF->aivar[i];
}

void ZkNpcInstance_setAiVar(ZkNpcInstance* slf, ZkSize i, int32_t aiVar) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	ZKC_CHECK_LENAV(100, i);
	SLF->aivar[i] = aiVar;
}
