// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Misc.h"

#include "../Internal.hh"

#include <zenkit/Archive.hh>

ZKC_VOB_LOADER(ZkAnimate)
ZKC_VOB_PATH_LOADER(ZkAnimate)
ZKC_DELETER(ZkAnimate)

ZkBool ZkAnimate_getStartOn(ZkAnimate const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->start_on;
}

void ZkAnimate_setStartOn(ZkAnimate* slf, ZkBool startOn) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->start_on = startOn;
}

ZkBool ZkAnimate_getIsRunning(ZkAnimate const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->s_is_running;
}

void ZkAnimate_setIsRunning(ZkAnimate* slf, ZkBool isRunning) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->s_is_running = isRunning;
}

ZKC_VOB_LOADER(ZkItem)
ZKC_VOB_PATH_LOADER(ZkItem)
ZKC_DELETER(ZkItem)

ZkString ZkItem_getInstance(ZkItem const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->instance.c_str();
}

void ZkItem_setInstance(ZkItem* slf, ZkString instance) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->instance = instance;
}

int ZkItem_getAmount(ZkItem const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->s_amount;
}

void ZkItem_setAmount(ZkItem* slf, int amount) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->s_amount = amount;
}

int ZkItem_getFlags(ZkItem const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->s_flags;
}

void ZkItem_setFlags(ZkItem* slf, int flags) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->s_flags = flags;
}

ZKC_VOB_LOADER(ZkLensFlare)
ZKC_VOB_PATH_LOADER(ZkLensFlare)
ZKC_DELETER(ZkLensFlare)

ZkString ZkLensFlare_getEffect(ZkLensFlare const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fx.c_str();
}

void ZkLensFlare_setEffect(ZkLensFlare* slf, ZkString effect) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fx = effect;
}

ZKC_VOB_LOADER(ZkParticleEffectController)
ZKC_VOB_PATH_LOADER(ZkParticleEffectController)
ZKC_DELETER(ZkParticleEffectController)

ZkString ZkParticleEffectController_getEffectName(ZkParticleEffectController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_name.c_str();
}

void ZkParticleEffectController_setEffectName(ZkParticleEffectController* slf, ZkString effectName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_name = effectName;
}

ZkBool ZkParticleEffectController_getKillWhenDone(ZkParticleEffectController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->kill_when_done;
}

void ZkParticleEffectController_setKillWhenDone(ZkParticleEffectController* slf, ZkBool killWhenDone) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->kill_when_done = killWhenDone;
}

ZkBool ZkParticleEffectController_getInitiallyRunning(ZkParticleEffectController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->initially_running;
}

void ZkParticleEffectController_setInitiallyRunning(ZkParticleEffectController* slf, ZkBool initiallyRunning) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->initially_running = initiallyRunning;
}

ZKC_VOB_LOADER(ZkMessageFilter)
ZKC_VOB_PATH_LOADER(ZkMessageFilter)
ZKC_DELETER(ZkMessageFilter)

ZkString ZkMessageFilter_getTarget(ZkMessageFilter const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->target.c_str();
}

void ZkMessageFilter_setTarget(ZkMessageFilter* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->target = target;
}

ZkMessageFilterAction ZkMessageFilter_getOnTrigger(ZkMessageFilter const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMessageFilterAction>(SLF->on_trigger);
}

void ZkMessageFilter_setOnTrigger(ZkMessageFilter* slf, ZkMessageFilterAction onTrigger) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->on_trigger = static_cast<zenkit::MessageFilterAction>(onTrigger);
}

ZkMessageFilterAction ZkMessageFilter_getOnUntrigger(ZkMessageFilter const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMessageFilterAction>(SLF->on_untrigger);
}

void ZkMessageFilter_setOnUntrigger(ZkMessageFilter* slf, ZkMessageFilterAction onUntrigger) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->on_untrigger = static_cast<zenkit::MessageFilterAction>(onUntrigger);
}

ZKC_VOB_LOADER(ZkCodeMaster)
ZKC_VOB_PATH_LOADER(ZkCodeMaster)
ZKC_DELETER(ZkCodeMaster)

ZkString ZkCodeMaster_getTarget(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->target.c_str();
}

void ZkCodeMaster_setTarget(ZkCodeMaster* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->target = target;
}

ZkBool ZkCodeMaster_getOrdered(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ordered;
}

void ZkCodeMaster_setOrdered(ZkCodeMaster* slf, ZkBool ordered) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ordered = ordered;
}

ZkBool ZkCodeMaster_getFirstFalseIsFailure(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->first_false_is_failure;
}

void ZkCodeMaster_setFirstFalseIsFailure(ZkCodeMaster* slf, ZkBool firstFalseIsFailure) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->first_false_is_failure = firstFalseIsFailure;
}

ZkString ZkCodeMaster_getFailureTarget(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->failure_target.c_str();
}

void ZkCodeMaster_setFailureTarget(ZkCodeMaster* slf, ZkString failureTarget) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->failure_target = failureTarget;
}

ZkBool ZkCodeMaster_getUntriggeredCancels(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->untriggered_cancels;
}

void ZkCodeMaster_setUntriggeredCancels(ZkCodeMaster* slf, ZkBool untriggeredCancels) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->untriggered_cancels = untriggeredCancels;
}

ZkSize ZkCodeMaster_getSlaveCount(ZkCodeMaster const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->slaves.size();
}

ZkString ZkCodeMaster_getSlave(ZkCodeMaster const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->slaves, i);
	return SLF->slaves[i].c_str();
}

void ZkCodeMaster_enumerateSlaves(ZkCodeMaster const* slf, ZkStringEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& it : SLF->slaves) {
		if (cb(ctx, it.c_str())) break;
	}
}

void ZkCodeMaster_addSlave(ZkCodeMaster* slf, ZkString slave) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, slave);
	SLF->slaves.push_back(slave);
}

void ZkCodeMaster_removeSlave(ZkCodeMaster* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(SLF->slaves, i);
	SLF->slaves.erase(SLF->slaves.begin() + static_cast<long>(i));
}

void ZkCodeMaster_removeSlaves(ZkCodeMaster* slf, ZkStringEnumerator pred, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, pred);

	for (auto it = SLF->slaves.begin(); it != SLF->slaves.end();) {
		if (pred(ctx, it->c_str())) {
			it = SLF->slaves.erase(it);
		} else {
			++it;
		}
	}
}

ZKC_VOB_LOADER(ZkMoverController)
ZKC_VOB_PATH_LOADER(ZkMoverController)
ZKC_DELETER(ZkMoverController)

ZkString ZkMoverController_getTarget(ZkMoverController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->target.c_str();
}

void ZkMoverController_setTarget(ZkMoverController* slf, ZkString target) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->target = target;
}

ZkMoverMessageType ZkMoverController_getMessage(ZkMoverController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMoverMessageType>(SLF->message);
}

void ZkMoverController_setMessage(ZkMoverController* slf, ZkMoverMessageType message) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->message = static_cast<zenkit::MoverMessageType>(message);
}

int32_t ZkMoverController_getKey(ZkMoverController const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->key;
}

void ZkMoverController_setKey(ZkMoverController* slf, int32_t key) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->key = key;
}

ZKC_VOB_LOADER(ZkTouchDamage)
ZKC_VOB_PATH_LOADER(ZkTouchDamage)
ZKC_DELETER(ZkTouchDamage)

float ZkTouchDamage_getDamage(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->damage;
}

void ZkTouchDamage_setDamage(ZkTouchDamage* slf, float damage) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->damage = damage;
}

ZkBool ZkTouchDamage_getIsBarrier(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->barrier;
}

void ZkTouchDamage_setIsBarrier(ZkTouchDamage* slf, ZkBool isBarrier) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->barrier = isBarrier;
}

ZkBool ZkTouchDamage_getIsBlunt(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->blunt;
}

void ZkTouchDamage_setIsBlunt(ZkTouchDamage* slf, ZkBool isBlunt) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->blunt = isBlunt;
}

ZkBool ZkTouchDamage_getIsEdge(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->edge;
}

void ZkTouchDamage_setIsEdge(ZkTouchDamage* slf, ZkBool isEdge) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->edge = isEdge;
}

ZkBool ZkTouchDamage_getIsFire(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fire;
}

void ZkTouchDamage_setIsFire(ZkTouchDamage* slf, ZkBool isFire) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fire = isFire;
}

ZkBool ZkTouchDamage_getIsFly(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fly;
}

void ZkTouchDamage_setIsFly(ZkTouchDamage* slf, ZkBool isFly) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fly = isFly;
}

ZkBool ZkTouchDamage_getIsMagic(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->magic;
}

void ZkTouchDamage_setIsMagic(ZkTouchDamage* slf, ZkBool isMagic) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->magic = isMagic;
}

ZkBool ZkTouchDamage_getIsPoint(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->point;
}

void ZkTouchDamage_setIsPoint(ZkTouchDamage* slf, ZkBool isPoint) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->point = isPoint;
}

ZkBool ZkTouchDamage_getIsFall(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fall;
}

void ZkTouchDamage_setIsFall(ZkTouchDamage* slf, ZkBool isFall) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fall = isFall;
}

float ZkTouchDamage_getRepeatDelaySeconds(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->repeat_delay_sec;
}

void ZkTouchDamage_setRepeatDelaySeconds(ZkTouchDamage* slf, float repeatDelaySeconds) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->repeat_delay_sec = repeatDelaySeconds;
}

float ZkTouchDamage_getVolumeScale(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->volume_scale;
}

void ZkTouchDamage_setVolumeScale(ZkTouchDamage* slf, float volumeScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->volume_scale = volumeScale;
}

ZkTouchCollisionType ZkTouchDamage_getCollisionType(ZkTouchDamage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkTouchCollisionType>(SLF->collision);
}

void ZkTouchDamage_setCollisionType(ZkTouchDamage* slf, ZkTouchCollisionType collisionType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->collision = static_cast<zenkit::TouchCollisionType>(collisionType);
}

ZKC_VOB_LOADER(ZkEarthquake)
ZKC_VOB_PATH_LOADER(ZkEarthquake)
ZKC_DELETER(ZkEarthquake)

float ZkEarthquake_getRadius(ZkEarthquake const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->radius;
}

void ZkEarthquake_setRadius(ZkEarthquake* slf, float radius) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->radius = radius;
}

float ZkEarthquake_getDuration(ZkEarthquake const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->duration;
}

void ZkEarthquake_setDuration(ZkEarthquake* slf, float duration) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->duration = duration;
}

ZkVec3f ZkEarthquake_getAmplitude(ZkEarthquake const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->amplitude;
}

void ZkEarthquake_setAmplitude(ZkEarthquake* slf, ZkVec3f amplitude) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->amplitude = amplitude;
}
