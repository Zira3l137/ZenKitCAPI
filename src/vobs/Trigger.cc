// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Trigger.h"

#include "../Internal.hh"

ZKC_VOB_LOADER(ZkTrigger)
ZKC_VOB_PATH_LOADER(ZkTrigger)
ZKC_DELETER(ZkTrigger)

ZkString ZkTrigger_getTarget(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->target.c_str();
}

void ZkTrigger_setTarget(ZkTrigger* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->target = target;
}

ZkBool ZkTrigger_getStartEnabled(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->start_enabled;
}

ZkBool ZkTrigger_getSendUntrigger(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->send_untrigger;
}

ZkBool ZkTrigger_getReactToOnTrigger(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->react_to_on_trigger;
}

ZkBool ZkTrigger_getReactToOnTouch(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->react_to_on_touch;
}

ZkBool ZkTrigger_getReactToOnDamage(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->react_to_on_damage;
}

ZkBool ZkTrigger_getRespondToObject(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->respond_to_object;
}

ZkBool ZkTrigger_getRespondToPC(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->respond_to_pc;
}

ZkBool ZkTrigger_getRespondToNPC(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->respond_to_npc;
}

void ZkTrigger_setStartEnabled(ZkTrigger* slf, ZkBool b) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->start_enabled = b;
}

void ZkTrigger_setSendUntrigger(ZkTrigger* slf, ZkBool b) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->send_untrigger = b;
}

void ZkTrigger_setReactToOnTrigger(ZkTrigger* slf, ZkBool b) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->react_to_on_trigger = b;
}

void ZkTrigger_setReactToOnTouch(ZkTrigger* slf, ZkBool b) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->react_to_on_touch = b;
}

void ZkTrigger_setReactToOnDamage(ZkTrigger* slf, ZkBool b) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->react_to_on_damage = b;
}

void ZkTrigger_setRespondToObject(ZkTrigger* slf, ZkBool b) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->respond_to_object = b;
}

void ZkTrigger_setRespondToPC(ZkTrigger* slf, ZkBool b) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->respond_to_pc = b;
}

void ZkTrigger_setRespondToNPC(ZkTrigger* slf, ZkBool b) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->respond_to_npc = b;
}

ZkString ZkTrigger_getVobTarget(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->vob_target.c_str();
}

void ZkTrigger_setVobTarget(ZkTrigger* slf, ZkString vobTarget) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->vob_target = vobTarget;
}

int32_t ZkTrigger_getMaxActivationCount(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->max_activation_count;
}

void ZkTrigger_setMaxActivationCount(ZkTrigger* slf, int32_t maxActivationCount) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->max_activation_count = maxActivationCount;
}

float ZkTrigger_getRetriggerDelaySeconds(ZkTrigger const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->retrigger_delay_sec;
}

void ZkTrigger_setRetriggerDelaySeconds(ZkTrigger* slf, float retriggerDelaySeconds) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->retrigger_delay_sec = retriggerDelaySeconds;
}

float ZkTrigger_getDamageThreshold(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->damage_threshold;
}

void ZkTrigger_setDamageThreshold(ZkTrigger* slf, float damageThreshold) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->damage_threshold = damageThreshold;
}

float ZkTrigger_getFireDelaySeconds(ZkTrigger const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->fire_delay_sec;
}

void ZkTrigger_setFireDelaySeconds(ZkTrigger* slf, float fireDelaySeconds) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->fire_delay_sec = fireDelaySeconds;
}

ZKC_VOB_LOADER(ZkMover)
ZKC_VOB_PATH_LOADER(ZkMover)
ZKC_DELETER(ZkMover)

ZkMoverBehavior ZkMover_getBehavior(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMoverBehavior>(slf->behavior);
}

void ZkMover_setBehavior(ZkMover* slf, ZkMoverBehavior behavior) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->behavior = static_cast<zenkit::MoverBehavior>(behavior);
}

float ZkMover_getTouchBlockerDamage(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->touch_blocker_damage;
}

void ZkMover_setTouchBlockerDamage(ZkMover* slf, float touchBlockerDamage) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->touch_blocker_damage = touchBlockerDamage;
}

float ZkMover_getStayOpenTimeSeconds(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->stay_open_time_sec;
}

void ZkMover_setStayOpenTimeSeconds(ZkMover* slf, float stayOpenTimeSeconds) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->stay_open_time_sec = stayOpenTimeSeconds;
}

ZkBool ZkMover_getIsLocked(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->locked;
}

void ZkMover_setIsLocked(ZkMover* slf, ZkBool isLocked) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->locked = isLocked;
}

ZkBool ZkMover_getAutoLink(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->auto_link;
}

void ZkMover_setAutoLink(ZkMover* slf, ZkBool autoLink) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->auto_link = autoLink;
}

ZkBool ZkMover_getAutoRotate(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->auto_rotate;
}

void ZkMover_setAutoRotate(ZkMover* slf, ZkBool autoRotate) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->auto_rotate = autoRotate;
}

float ZkMover_getSpeed(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->speed;
}

void ZkMover_setSpeed(ZkMover* slf, float speed) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->speed = speed;
}

ZkMoverLerpType ZkMover_getLerpType(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMoverLerpType>(slf->lerp_mode);
}

void ZkMover_setLerpType(ZkMover* slf, ZkMoverLerpType lerpType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->lerp_mode = static_cast<zenkit::MoverLerpType>(lerpType);
}

ZkMoverSpeedType ZkMover_getSpeedType(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMoverSpeedType>(slf->speed_mode);
}

void ZkMover_setSpeedType(ZkMover* slf, ZkMoverSpeedType speedType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->speed_mode = static_cast<zenkit::MoverSpeedType>(speedType);
}

ZkSize ZkMover_getKeyframeCount(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->keyframes.size();
}

ZkAnimationSample ZkMover_getKeyframe(ZkMover const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->keyframes, i);
	return slf->keyframes[i];
}

void ZkMover_enumerateKeyframes(ZkMover const* slf, ZkAnimationSampleEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	ZkAnimationSample sample;
	for (auto& k : slf->keyframes) {
		sample = k;
		if (cb(ctx, &sample)) break;
	}
}

ZkString ZkMover_getSfxOpenStart(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_open_start.c_str();
}

void ZkMover_setSfxOpenStart(ZkMover* slf, ZkString sfxOpenStart) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->sfx_open_start = sfxOpenStart;
}

ZkString ZkMover_getSfxOpenEnd(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_open_end.c_str();
}

void ZkMover_setSfxOpenEnd(ZkMover* slf, ZkString sfxOpenEnd) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->sfx_open_end = sfxOpenEnd;
}

ZkString ZkMover_getSfxTransitioning(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_transitioning.c_str();
}

void ZkMover_setSfxTransitioning(ZkMover* slf, ZkString sfxTransitioning) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->sfx_transitioning = sfxTransitioning;
}

ZkString ZkMover_getSfxCloseStart(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_close_start.c_str();
}

void ZkMover_setSfxCloseStart(ZkMover* slf, ZkString sfxCloseStart) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->sfx_close_start = sfxCloseStart;
}

ZkString ZkMover_getSfxCloseEnd(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_close_end.c_str();
}

void ZkMover_setSfxCloseEnd(ZkMover* slf, ZkString sfxCloseEnd) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->sfx_close_end = sfxCloseEnd;
}

ZkString ZkMover_getSfxLock(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_lock.c_str();
}

void ZkMover_setSfxLock(ZkMover* slf, ZkString sfxLock) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->sfx_lock = sfxLock;
}

ZkString ZkMover_getSfxUnlock(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_unlock.c_str();
}

void ZkMover_setSfxUnlock(ZkMover* slf, ZkString sfxUnlock) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->sfx_unlock = sfxUnlock;
}

ZkString ZkMover_getSfxUseLocked(ZkMover const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_use_locked.c_str();
}

void ZkMover_setSfxUseLocked(ZkMover* slf, ZkString sfxUseLocked) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->sfx_use_locked = sfxUseLocked;
}

ZKC_VOB_LOADER(ZkTriggerList)
ZKC_VOB_PATH_LOADER(ZkTriggerList)
ZKC_DELETER(ZkTriggerList)

ZkTriggerBatchMode ZkTriggerList_getMode(ZkTriggerList const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkTriggerBatchMode>(slf->mode);
}

void ZkTriggerList_setMode(ZkTriggerList* slf, ZkTriggerBatchMode mode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->mode = static_cast<zenkit::TriggerBatchMode>(mode);
}

ZkSize ZkTriggerList_getTargetCount(ZkTriggerList const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->targets.size();
}

ZkTriggerListTarget* ZkTriggerList_getTarget(ZkTriggerList* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->targets, i);
	return &slf->targets[i];
}

void ZkTriggerList_enumerateTargets(ZkTriggerList const* slf, ZkTriggerListTargetEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& target : slf->targets) {
		if (cb(ctx, &target)) break;
	}
}

ZkTriggerListTarget* ZkTriggerList_addTarget(ZkTriggerList* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->targets.emplace_back();
}

void ZkTriggerList_removeTarget(ZkTriggerList* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->targets, i);
	slf->targets.erase(slf->targets.begin() + static_cast<long>(i));
}

void ZkTriggerList_removeTargets(ZkTriggerList* slf, ZkTriggerListTargetEnumerator pred, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, pred);
	for (auto it = slf->targets.begin(); it != slf->targets.end();) {
		if (pred(ctx, &*it)) {
			it = slf->targets.erase(it);
		} else {
			++it;
		}
	}
}

ZkString ZkTriggerListTarget_getName(ZkTriggerListTarget const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

void ZkTriggerListTarget_setName(ZkTriggerListTarget* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->name = name;
}

float ZkTriggerListTarget_getDelaySeconds(ZkTriggerListTarget const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->delay;
}

void ZkTriggerListTarget_setDelaySeconds(ZkTriggerListTarget* slf, float delaySeconds) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->delay = delaySeconds;
}

ZKC_VOB_LOADER(ZkTriggerScript)
ZKC_VOB_PATH_LOADER(ZkTriggerScript)
ZKC_DELETER(ZkTriggerScript)

ZkString ZkTriggerScript_getFunction(ZkTriggerScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->function.c_str();
}

void ZkTriggerScript_setFunction(ZkTriggerScript* slf, ZkString function) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->function = function;
}

ZKC_VOB_LOADER(ZkTriggerChangeLevel)
ZKC_VOB_PATH_LOADER(ZkTriggerChangeLevel)
ZKC_DELETER(ZkTriggerChangeLevel)

ZkString ZkTriggerChangeLevel_getLevelName(ZkTriggerChangeLevel const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->level_name.c_str();
}

void ZkTriggerChangeLevel_setLevelName(ZkTriggerChangeLevel* slf, ZkString levelName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->level_name = levelName;
}

ZkString ZkTriggerChangeLevel_getStartVob(ZkTriggerChangeLevel const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->start_vob.c_str();
}

void ZkTriggerChangeLevel_setStartVob(ZkTriggerChangeLevel* slf, ZkString startVob) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->start_vob = startVob;
}

ZKC_VOB_LOADER(ZkTriggerWorldStart)
ZKC_VOB_PATH_LOADER(ZkTriggerWorldStart)
ZKC_DELETER(ZkTriggerWorldStart)

ZkString ZkTriggerWorldStart_getTarget(ZkTriggerWorldStart const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->target.c_str();
}

void ZkTriggerWorldStart_setTarget(ZkTriggerWorldStart* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->target = target;
}

ZkBool ZkTriggerWorldStart_getFireOnce(ZkTriggerWorldStart const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->fire_once;
}

void ZkTriggerWorldStart_setFireOnce(ZkTriggerWorldStart* slf, ZkBool fireOnce) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->fire_once = fireOnce;
}

ZKC_VOB_LOADER(ZkTriggerUntouch)
ZKC_VOB_PATH_LOADER(ZkTriggerUntouch)
ZKC_DELETER(ZkTriggerUntouch)

ZkString ZkTriggerUntouch_getTarget(ZkTriggerUntouch const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->target.c_str();
}

void ZkTriggerUntouch_setTarget(ZkTriggerUntouch* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->target = target;
}
