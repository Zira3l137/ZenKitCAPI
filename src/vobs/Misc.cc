// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Misc.h"

#include "../Internal.hh"

#include <zenkit/Archive.hh>

ZKC_VOB_LOADER(ZkAnimate)
ZKC_VOB_PATH_LOADER(ZkAnimate)
ZKC_DELETER(ZkAnimate)

ZkBool ZkAnimate_getStartOn(ZkAnimate const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->start_on;
}

void ZkAnimate_setStartOn(ZkAnimate* slf, ZkBool startOn) {
	ZKC_CHECK_NULLV(slf);
	slf->start_on = startOn;
}

ZKC_VOB_LOADER(ZkItem)
ZKC_VOB_PATH_LOADER(ZkItem)
ZKC_DELETER(ZkItem)

ZkString ZkItem_getInstance(ZkItem const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->instance.c_str();
}

void ZkItem_setInstance(ZkItem* slf, ZkString instance) {
	ZKC_CHECK_NULLV(slf);
	slf->instance = instance;
}

ZKC_VOB_LOADER(ZkLensFlare)
ZKC_VOB_PATH_LOADER(ZkLensFlare)
ZKC_DELETER(ZkLensFlare)

ZkString ZkLensFlare_getEffect(ZkLensFlare const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fx.c_str();
}

void ZkLensFlare_setEffect(ZkLensFlare* slf, ZkString effect) {
	ZKC_CHECK_NULLV(slf);
	slf->fx = effect;
}

ZKC_VOB_LOADER(ZkParticleEffectController)
ZKC_VOB_PATH_LOADER(ZkParticleEffectController)
ZKC_DELETER(ZkParticleEffectController)

ZkString ZkParticleEffectController_getEffectName(ZkParticleEffectController const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_name.c_str();
}

void ZkParticleEffectController_setEffectName(ZkParticleEffectController* slf, ZkString effectName) {
	ZKC_CHECK_NULLV(slf);
	slf->pfx_name = effectName;
}

ZkBool ZkParticleEffectController_getKillWhenDone(ZkParticleEffectController const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->kill_when_done;
}

void ZkParticleEffectController_setKillWhenDone(ZkParticleEffectController* slf, ZkBool killWhenDone) {
	ZKC_CHECK_NULLV(slf);
	slf->kill_when_done = killWhenDone;
}

ZkBool ZkParticleEffectController_getInitiallyRunning(ZkParticleEffectController const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->initially_running;
}

void ZkParticleEffectController_setInitiallyRunning(ZkParticleEffectController* slf, ZkBool initiallyRunning) {
	ZKC_CHECK_NULLV(slf);
	slf->initially_running = initiallyRunning;
}

ZKC_VOB_LOADER(ZkMessageFilter)
ZKC_VOB_PATH_LOADER(ZkMessageFilter)
ZKC_DELETER(ZkMessageFilter)

ZkString ZkMessageFilter_getTarget(ZkMessageFilter const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target.c_str();
}

void ZkMessageFilter_setTarget(ZkMessageFilter* slf, ZkString target) {
	ZKC_CHECK_NULLV(slf);
	slf->target = target;
}

ZkMessageFilterAction ZkMessageFilter_getOnTrigger(ZkMessageFilter const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMessageFilterAction>(slf->on_trigger);
}

void ZkMessageFilter_setOnTrigger(ZkMessageFilter* slf, ZkMessageFilterAction onTrigger) {
	ZKC_CHECK_NULLV(slf);
	slf->on_trigger = static_cast<zenkit::MessageFilterAction>(onTrigger);
}

ZkMessageFilterAction ZkMessageFilter_getOnUntrigger(ZkMessageFilter const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMessageFilterAction>(slf->on_untrigger);
}

void ZkMessageFilter_setOnUntrigger(ZkMessageFilter* slf, ZkMessageFilterAction onUntrigger) {
	ZKC_CHECK_NULLV(slf);
	slf->on_untrigger = static_cast<zenkit::MessageFilterAction>(onUntrigger);
}

ZKC_VOB_LOADER(ZkCodeMaster)
ZKC_VOB_PATH_LOADER(ZkCodeMaster)
ZKC_DELETER(ZkCodeMaster)

ZkString ZkCodeMaster_getTarget(ZkCodeMaster const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target.c_str();
}

void ZkCodeMaster_setTarget(ZkCodeMaster* slf, ZkString target) {
	ZKC_CHECK_NULLV(slf);
	slf->target = target;
}

ZkBool ZkCodeMaster_getOrdered(ZkCodeMaster const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ordered;
}

void ZkCodeMaster_setOrdered(ZkCodeMaster* slf, ZkBool ordered) {
	ZKC_CHECK_NULLV(slf);
	slf->ordered = ordered;
}

ZkBool ZkCodeMaster_getFirstFalseIsFailure(ZkCodeMaster const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->first_false_is_failure;
}

void ZkCodeMaster_setFirstFalseIsFailure(ZkCodeMaster* slf, ZkBool firstFalseIsFailure) {
	ZKC_CHECK_NULLV(slf);
	slf->first_false_is_failure = firstFalseIsFailure;
}

ZkString ZkCodeMaster_getFailureTarget(ZkCodeMaster const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->failure_target.c_str();
}

void ZkCodeMaster_setFailureTarget(ZkCodeMaster* slf, ZkString failureTarget) {
	ZKC_CHECK_NULLV(slf);
	slf->failure_target = failureTarget;
}

ZkBool ZkCodeMaster_getUntriggeredCancels(ZkCodeMaster const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->untriggered_cancels;
}

void ZkCodeMaster_setUntriggeredCancels(ZkCodeMaster* slf, ZkBool untriggeredCancels) {
	ZKC_CHECK_NULLV(slf);
	slf->untriggered_cancels = untriggeredCancels;
}

ZkSize ZkCodeMaster_getSlaveCount(ZkCodeMaster const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->slaves.size();
}

ZkString ZkCodeMaster_getSlave(ZkCodeMaster const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->slaves, i);
	return slf->slaves[i].c_str();
}

void ZkCodeMaster_enumerateSlaves(ZkCodeMaster const* slf, ZkStringEnumerator cb, void* ctx) {
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& it : slf->slaves) {
		if (cb(ctx, it.c_str())) break;
	}
}

void ZkCodeMaster_addSlave(ZkCodeMaster* slf, ZkString slave) {
	ZKC_CHECK_NULLV(slf, slave);
	slf->slaves.push_back(slave);
}

void ZkCodeMaster_removeSlave(ZkCodeMaster* slf, ZkSize i) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->slaves, i);
	slf->slaves.erase(slf->slaves.begin() + static_cast<long>(i));
}

void ZkCodeMaster_removeSlaves(ZkCodeMaster* slf, ZkStringEnumerator pred, void* ctx) {
	ZKC_CHECK_NULLV(slf, pred);

	for (auto it = slf->slaves.begin(); it != slf->slaves.end();) {
		if (pred(ctx, it->c_str())) {
			it = slf->slaves.erase(it);
		} else {
			++it;
		}
	}
}

ZKC_VOB_LOADER(ZkMoverController)
ZKC_VOB_PATH_LOADER(ZkMoverController)
ZKC_DELETER(ZkMoverController)

ZkString ZkMoverController_getTarget(ZkMoverController const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target.c_str();
}

void ZkMoverController_setTarget(ZkMoverController* slf, ZkString target) {
	ZKC_CHECK_NULLV(slf);
	slf->target = target;
}

ZkMoverMessageType ZkMoverController_getMessage(ZkMoverController const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMoverMessageType>(slf->message);
}

void ZkMoverController_setMessage(ZkMoverController* slf, ZkMoverMessageType message) {
	ZKC_CHECK_NULLV(slf);
	slf->message = static_cast<zenkit::MoverMessageType>(message);
}

int32_t ZkMoverController_getKey(ZkMoverController const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->key;
}

void ZkMoverController_setKey(ZkMoverController* slf, int32_t key) {
	ZKC_CHECK_NULLV(slf);
	slf->key = key;
}

ZKC_VOB_LOADER(ZkTouchDamage)
ZKC_VOB_PATH_LOADER(ZkTouchDamage)
ZKC_DELETER(ZkTouchDamage)

float ZkTouchDamage_getDamage(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->damage;
}

void ZkTouchDamage_setDamage(ZkTouchDamage* slf, float damage) {
	ZKC_CHECK_NULLV(slf);
	slf->damage = damage;
}

ZkBool ZkTouchDamage_getIsBarrier(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->barrier;
}

void ZkTouchDamage_setIsBarrier(ZkTouchDamage* slf, ZkBool isBarrier) {
	ZKC_CHECK_NULLV(slf);
	slf->barrier = isBarrier;
}

ZkBool ZkTouchDamage_getIsBlunt(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->blunt;
}

void ZkTouchDamage_setIsBlunt(ZkTouchDamage* slf, ZkBool isBlunt) {
	ZKC_CHECK_NULLV(slf);
	slf->blunt = isBlunt;
}

ZkBool ZkTouchDamage_getIsEdge(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->edge;
}

void ZkTouchDamage_setIsEdge(ZkTouchDamage* slf, ZkBool isEdge) {
	ZKC_CHECK_NULLV(slf);
	slf->edge = isEdge;
}

ZkBool ZkTouchDamage_getIsFire(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fire;
}

void ZkTouchDamage_setIsFire(ZkTouchDamage* slf, ZkBool isFire) {
	ZKC_CHECK_NULLV(slf);
	slf->fire = isFire;
}

ZkBool ZkTouchDamage_getIsFly(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fly;
}

void ZkTouchDamage_setIsFly(ZkTouchDamage* slf, ZkBool isFly) {
	ZKC_CHECK_NULLV(slf);
	slf->fly = isFly;
}

ZkBool ZkTouchDamage_getIsMagic(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->magic;
}

void ZkTouchDamage_setIsMagic(ZkTouchDamage* slf, ZkBool isMagic) {
	ZKC_CHECK_NULLV(slf);
	slf->magic = isMagic;
}

ZkBool ZkTouchDamage_getIsPoint(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->point;
}

void ZkTouchDamage_setIsPoint(ZkTouchDamage* slf, ZkBool isPoint) {
	ZKC_CHECK_NULLV(slf);
	slf->point = isPoint;
}

ZkBool ZkTouchDamage_getIsFall(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fall;
}

void ZkTouchDamage_setIsFall(ZkTouchDamage* slf, ZkBool isFall) {
	ZKC_CHECK_NULLV(slf);
	slf->fall = isFall;
}

float ZkTouchDamage_getRepeatDelaySeconds(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->repeat_delay_sec;
}

void ZkTouchDamage_setRepeatDelaySeconds(ZkTouchDamage* slf, float repeatDelaySeconds) {
	ZKC_CHECK_NULLV(slf);
	slf->repeat_delay_sec = repeatDelaySeconds;
}

float ZkTouchDamage_getVolumeScale(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->volume_scale;
}

void ZkTouchDamage_setVolumeScale(ZkTouchDamage* slf, float volumeScale) {
	ZKC_CHECK_NULLV(slf);
	slf->volume_scale = volumeScale;
}

ZkTouchCollisionType ZkTouchDamage_getCollisionType(ZkTouchDamage const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkTouchCollisionType>(slf->collision);
}

void ZkTouchDamage_setCollisionType(ZkTouchDamage* slf, ZkTouchCollisionType collisionType) {
	ZKC_CHECK_NULLV(slf);
	slf->collision = static_cast<zenkit::TouchCollisionType>(collisionType);
}

ZKC_VOB_LOADER(ZkEarthquake)
ZKC_VOB_PATH_LOADER(ZkEarthquake)
ZKC_DELETER(ZkEarthquake)

float ZkEarthquake_getRadius(ZkEarthquake const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->radius;
}

void ZkEarthquake_setRadius(ZkEarthquake* slf, float radius) {
	ZKC_CHECK_NULLV(slf);
	slf->radius = radius;
}

float ZkEarthquake_getDuration(ZkEarthquake const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->duration;
}

void ZkEarthquake_setDuration(ZkEarthquake* slf, float duration) {
	ZKC_CHECK_NULLV(slf);
	slf->duration = duration;
}

ZkVec3f ZkEarthquake_getAmplitude(ZkEarthquake const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->amplitude;
}

void ZkEarthquake_setAmplitude(ZkEarthquake* slf, ZkVec3f amplitude) {
	ZKC_CHECK_NULLV(slf);
	slf->amplitude = amplitude;
}
