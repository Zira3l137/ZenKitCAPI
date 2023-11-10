#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkSoundSystemInstance = zenkit::ISoundSystem;
#else
typedef struct ZkInternal_SoundSystemInstance ZkSoundSystemInstance;
#endif

CZK_API float ZkSoundSystemInstance_getVolume(ZkSoundSystemInstance const* slf);
CZK_API int32_t ZkSoundSystemInstance_getBitResolution(ZkSoundSystemInstance const* slf);
CZK_API int32_t ZkSoundSystemInstance_getSampleRate(ZkSoundSystemInstance const* slf);
CZK_API int32_t ZkSoundSystemInstance_getUseStereo(ZkSoundSystemInstance const* slf);
CZK_API int32_t ZkSoundSystemInstance_getNumSfxChannels(ZkSoundSystemInstance const* slf);
CZK_API ZkString ZkSoundSystemInstance_getUsed3DProviderName(ZkSoundSystemInstance const* slf);
