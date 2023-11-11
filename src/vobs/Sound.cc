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

ZkSoundMode ZkSound_getMode(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSoundMode>(slf->mode);
}

float ZkSound_getRandomDelay(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->random_delay;
}

float ZkSound_getRandomDelayVar(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->random_delay_var;
}

ZkBool ZkSound_getInitiallyPlaying(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->initially_playing;
}

ZkBool ZkSound_getAmbient3d(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ambient3d;
}

ZkBool ZkSound_getObstruction(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->obstruction;
}

float ZkSound_getConeAngle(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cone_angle;
}

ZkSoundTriggerVolumeType ZkSound_getVolumeType(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkSoundTriggerVolumeType>(slf->volume_type);
}

float ZkSound_getRadius(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->radius;
}

ZkString ZkSound_getSoundName(ZkSound const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sound_name.c_str();
}

ZKC_VOB_LOADER(ZkSoundDaytime);
ZKC_VOB_PATH_LOADER(ZkSoundDaytime);
ZKC_DELETER(ZkSoundDaytime);

float ZkSoundDaytime_getStartTime(ZkSoundDaytime const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->start_time;
}

float ZkSoundDaytime_getEndTime(ZkSoundDaytime const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->end_time;
}

ZkString ZkSoundDaytime_getSoundNameDaytime(ZkSoundDaytime const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sound_name2.c_str();
}
