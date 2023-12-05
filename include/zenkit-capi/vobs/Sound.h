// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "../Stream.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Sound.hh>
using ZkSound = zenkit::VSound;
using ZkSoundDaytime = zenkit::VSoundDaytime;
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
ZKC_API ZkSoundMode ZkSound_getMode(ZkSound const* slf);
ZKC_API float ZkSound_getRandomDelay(ZkSound const* slf);
ZKC_API float ZkSound_getRandomDelayVar(ZkSound const* slf);
ZKC_API ZkBool ZkSound_getInitiallyPlaying(ZkSound const* slf);
ZKC_API ZkBool ZkSound_getAmbient3d(ZkSound const* slf);
ZKC_API ZkBool ZkSound_getObstruction(ZkSound const* slf);
ZKC_API float ZkSound_getConeAngle(ZkSound const* slf);
ZKC_API ZkSoundTriggerVolumeType ZkSound_getVolumeType(ZkSound const* slf);
ZKC_API float ZkSound_getRadius(ZkSound const* slf);
ZKC_API ZkString ZkSound_getSoundName(ZkSound const* slf);

ZKC_API ZkSoundDaytime* ZkSoundDaytime_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkSoundDaytime* ZkSoundDaytime_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkSoundDaytime_del(ZkSoundDaytime* slf);

ZKC_API float ZkSoundDaytime_getStartTime(ZkSoundDaytime const* slf);
ZKC_API float ZkSoundDaytime_getEndTime(ZkSoundDaytime const* slf);
ZKC_API ZkString ZkSoundDaytime_getSoundNameDaytime(ZkSoundDaytime const* slf);
