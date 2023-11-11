#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkMusicJingleInstance = zenkit::IMusicJingle;
#else
typedef struct ZkInternal_MusicJingleInstance ZkMusicJingleInstance;
#endif

ZKC_API ZkString ZkMusicJingleInstance_getName(ZkMusicJingleInstance const* slf);
ZKC_API int32_t ZkMusicJingleInstance_getLoop(ZkMusicJingleInstance const* slf);
ZKC_API float ZkMusicJingleInstance_getVol(ZkMusicJingleInstance const* slf);
ZKC_API int32_t ZkMusicJingleInstance_getTranssubtype(ZkMusicJingleInstance const* slf);
