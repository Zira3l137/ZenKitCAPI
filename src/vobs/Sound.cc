// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/vobs/Sound.h"

#include "../Internal.hh"

CZK_VOB_LOADER(ZkSound);
CZK_VOB_PATH_LOADER(ZkSound);
CZK_DELETER(ZkSound);

float ZkSound_getVolume(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->volume;
}

ZkSoundMode ZkSound_getMode(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkSoundMode>(slf->mode);
}

float ZkSound_getRandomDelay(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->random_delay;
}

float ZkSound_getRandomDelayVar(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->random_delay_var;
}

ZkBool ZkSound_getInitiallyPlaying(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->initially_playing;
}

ZkBool ZkSound_getAmbient3d(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->ambient3d;
}

ZkBool ZkSound_getObstruction(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->obstruction;
}

float ZkSound_getConeAngle(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->cone_angle;
}

ZkSoundTriggerVolumeType ZkSound_getVolumeType(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkSoundTriggerVolumeType>(slf->volume_type);
}

float ZkSound_getRadius(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->radius;
}

ZkString ZkSound_getSoundName(ZkSound const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sound_name.c_str();
}

CZK_VOB_LOADER(ZkSoundDaytime);
CZK_VOB_PATH_LOADER(ZkSoundDaytime);
CZK_DELETER(ZkSoundDaytime);

float ZkSoundDaytime_getStartTime(ZkSoundDaytime const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->start_time;
}

float ZkSoundDaytime_getEndTime(ZkSoundDaytime const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->end_time;
}

ZkString ZkSoundDaytime_getSoundNameDaytime(ZkSoundDaytime const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sound_name2.c_str();
}
