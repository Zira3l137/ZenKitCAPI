// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Sound.h"

#include "../Internal.hh"

ZKC_VOB_LOADER(ZkSound);
ZKC_VOB_PATH_LOADER(ZkSound);
ZKC_DELETER(ZkSound);

float ZkSound_getVolume(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->volume;
}

void ZkSound_setVolume(ZkSound* slf, float volume) {
	ZKC_CHECK_NULLV(slf);
	slf->volume = volume;
}

ZkSoundMode ZkSound_getMode(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSoundMode>(slf->mode);
}

void ZkSound_setMode(ZkSound* slf, ZkSoundMode mode) {
	ZKC_CHECK_NULLV(slf);
	slf->mode = static_cast<zenkit::SoundMode>(mode);
}

float ZkSound_getRandomDelay(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->random_delay;
}

void ZkSound_setRandomDelay(ZkSound* slf, float randomDelay) {
	ZKC_CHECK_NULLV(slf);
	slf->random_delay = randomDelay;
}

float ZkSound_getRandomDelayVar(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->random_delay_var;
}

void ZkSound_setRandomDelayVar(ZkSound* slf, float randomDelayVar) {
	ZKC_CHECK_NULLV(slf);
	slf->random_delay_var = randomDelayVar;
}

ZkBool ZkSound_getInitiallyPlaying(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->initially_playing;
}

void ZkSound_setInitiallyPlaying(ZkSound* slf, ZkBool initiallyPlaying) {
	ZKC_CHECK_NULLV(slf);
	slf->initially_playing = initiallyPlaying;
}

ZkBool ZkSound_getAmbient3d(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ambient3d;
}

void ZkSound_setAmbient3d(ZkSound* slf, ZkBool ambient3d) {
	ZKC_CHECK_NULLV(slf);
	slf->ambient3d = ambient3d;
}

ZkBool ZkSound_getObstruction(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->obstruction;
}

void ZkSound_setObstruction(ZkSound* slf, ZkBool obstruction) {
	ZKC_CHECK_NULLV(slf);
	slf->obstruction = obstruction;
}

float ZkSound_getConeAngle(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cone_angle;
}

void ZkSound_setConeAngle(ZkSound* slf, float coneAngle) {
	ZKC_CHECK_NULLV(slf);
	slf->cone_angle = coneAngle;
}

ZkSoundTriggerVolumeType ZkSound_getVolumeType(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSoundTriggerVolumeType>(slf->volume_type);
}

void ZkSound_setVolumeType(ZkSound* slf, ZkSoundTriggerVolumeType volumeType) {
	ZKC_CHECK_NULLV(slf);
	slf->volume_type = static_cast<zenkit::SoundTriggerVolumeType>(volumeType);
}

float ZkSound_getRadius(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->radius;
}

void ZkSound_setRadius(ZkSound* slf, float radius) {
	ZKC_CHECK_NULLV(slf);
	slf->radius = radius;
}

ZkString ZkSound_getSoundName(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sound_name.c_str();
}

void ZkSound_setSoundName(ZkSound* slf, ZkString soundName) {
	ZKC_CHECK_NULLV(slf);
	slf->sound_name = soundName;
}

ZKC_VOB_LOADER(ZkSoundDaytime);
ZKC_VOB_PATH_LOADER(ZkSoundDaytime);
ZKC_DELETER(ZkSoundDaytime);

float ZkSoundDaytime_getStartTime(ZkSoundDaytime const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->start_time;
}

void ZkSoundDaytime_setStartTime(ZkSoundDaytime* slf, float startTime) {
	ZKC_CHECK_NULLV(slf);
	slf->start_time = startTime;
}

float ZkSoundDaytime_getEndTime(ZkSoundDaytime const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->end_time;
}

void ZkSoundDaytime_setEndTime(ZkSoundDaytime* slf, float endTime) {
	ZKC_CHECK_NULLV(slf);
	slf->end_time = endTime;
}

ZkString ZkSoundDaytime_getSoundNameDaytime(ZkSoundDaytime const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sound_name2.c_str();
}

void ZkSoundDaytime_setSoundNameDaytime(ZkSoundDaytime* slf, ZkString soundNameDaytime) {
	ZKC_CHECK_NULLV(slf);
	slf->sound_name2 = soundNameDaytime;
}
