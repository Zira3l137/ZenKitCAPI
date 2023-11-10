#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkSoundEffectInstance = zenkit::ISoundEffect;
#else
typedef struct ZkInternal_SoundEffectInstance ZkSoundEffectInstance;
#endif

CZK_API ZkString ZkSoundEffectInstance_getFile(ZkSoundEffectInstance const* slf);
CZK_API int32_t ZkSoundEffectInstance_getPitchOff(ZkSoundEffectInstance const* slf);
CZK_API int32_t ZkSoundEffectInstance_getPitchVar(ZkSoundEffectInstance const* slf);
CZK_API int32_t ZkSoundEffectInstance_getVolume(ZkSoundEffectInstance const* slf);
CZK_API int32_t ZkSoundEffectInstance_getLoop(ZkSoundEffectInstance const* slf);
CZK_API int32_t ZkSoundEffectInstance_getLoopStartOffset(ZkSoundEffectInstance const* slf);
CZK_API int32_t ZkSoundEffectInstance_getLoopEndOffset(ZkSoundEffectInstance const* slf);
CZK_API float ZkSoundEffectInstance_getReverbLevel(ZkSoundEffectInstance const* slf);
CZK_API ZkString ZkSoundEffectInstance_getPfxName(ZkSoundEffectInstance const* slf);
