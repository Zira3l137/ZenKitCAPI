#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkMusicSystemInstance = zenkit::IMusicSystem;
#else
typedef struct ZkInternal_MusicSystemInstance ZkMusicSystemInstance;
#endif

ZKC_API float ZkMusicSystemInstance_getVolume(ZkMusicSystemInstance const* slf);
ZKC_API int32_t ZkMusicSystemInstance_getBitResolution(ZkMusicSystemInstance const* slf);
ZKC_API int32_t ZkMusicSystemInstance_getGlobalReverbEnabled(ZkMusicSystemInstance const* slf);
ZKC_API int32_t ZkMusicSystemInstance_getSampleRate(ZkMusicSystemInstance const* slf);
ZKC_API int32_t ZkMusicSystemInstance_getNumChannels(ZkMusicSystemInstance const* slf);
ZKC_API int32_t ZkMusicSystemInstance_getReverbBufferSize(ZkMusicSystemInstance const* slf);
