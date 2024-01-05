// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "../Object.h"
#include "../Stream.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Sound.hh>
using ZkSound = ZkSharedHandle<zenkit::VSound>;
using ZkSoundDaytime = ZkSharedHandle<zenkit::VSoundDaytime>;
#else
typedef struct ZkInternal_Sound ZkSound;
typedef struct ZkInternal_SoundDaytime ZkSoundDaytime;
#endif

typedef enum {
	ZkSoundMode_LOOP = 0,
	ZkSoundMode_ONCE = 1,
	ZkSoundMode_RANDOM = 2,
} ZkSoundMode;

typedef enum {
	SoundTriggerVolumeType_SPHERICAL = 0,
	SoundTriggerVolumeType_ELLIPSOIDAL = 1,
} ZkSoundTriggerVolumeType;

ZKC_API ZkSound* ZkSound_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkSound* ZkSound_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkSound_del(ZkSound* slf);

ZKC_API float ZkSound_getVolume(ZkSound const* slf);
ZKC_API void ZkSound_setVolume(ZkSound* slf, float volume);
ZKC_API ZkSoundMode ZkSound_getMode(ZkSound const* slf);
ZKC_API void ZkSound_setMode(ZkSound* slf, ZkSoundMode mode);
ZKC_API float ZkSound_getRandomDelay(ZkSound const* slf);
ZKC_API void ZkSound_setRandomDelay(ZkSound* slf, float randomDelay);
ZKC_API float ZkSound_getRandomDelayVar(ZkSound const* slf);
ZKC_API void ZkSound_setRandomDelayVar(ZkSound* slf, float randomDelayVar);
ZKC_API ZkBool ZkSound_getInitiallyPlaying(ZkSound const* slf);
ZKC_API void ZkSound_setInitiallyPlaying(ZkSound* slf, ZkBool initiallyPlaying);
ZKC_API ZkBool ZkSound_getAmbient3d(ZkSound const* slf);
ZKC_API void ZkSound_setAmbient3d(ZkSound* slf, ZkBool ambient3d);
ZKC_API ZkBool ZkSound_getObstruction(ZkSound const* slf);
ZKC_API void ZkSound_setObstruction(ZkSound* slf, ZkBool obstruction);
ZKC_API float ZkSound_getConeAngle(ZkSound const* slf);
ZKC_API void ZkSound_setConeAngle(ZkSound* slf, float coneAngle);
ZKC_API ZkSoundTriggerVolumeType ZkSound_getVolumeType(ZkSound const* slf);
ZKC_API void ZkSound_setVolumeType(ZkSound* slf, ZkSoundTriggerVolumeType volumeType);
ZKC_API float ZkSound_getRadius(ZkSound const* slf);
ZKC_API void ZkSound_setRadius(ZkSound* slf, float radius);
ZKC_API ZkString ZkSound_getSoundName(ZkSound const* slf);
ZKC_API void ZkSound_setSoundName(ZkSound* slf, ZkString soundName);

ZKC_API ZkSoundDaytime* ZkSoundDaytime_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkSoundDaytime* ZkSoundDaytime_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkSoundDaytime_del(ZkSoundDaytime* slf);

ZKC_API float ZkSoundDaytime_getStartTime(ZkSoundDaytime const* slf);
ZKC_API void ZkSoundDaytime_setStartTime(ZkSoundDaytime* slf, float startTime);
ZKC_API float ZkSoundDaytime_getEndTime(ZkSoundDaytime const* slf);
ZKC_API void ZkSoundDaytime_setEndTime(ZkSoundDaytime* slf, float endTime);
ZKC_API ZkString ZkSoundDaytime_getSoundNameDaytime(ZkSoundDaytime const* slf);
ZKC_API void ZkSoundDaytime_setSoundNameDaytime(ZkSoundDaytime* slf, ZkString soundNameDaytime);
