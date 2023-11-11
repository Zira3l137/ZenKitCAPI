#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkMenuInstance = zenkit::IMenu;
#else
typedef struct ZkInternal_MenuInstance ZkMenuInstance;
#endif

#define ZkMenuInstance_ItemCount 150

typedef enum {
	ZkMenuFlag_OVERTOP = 1 << 0,
	ZkMenuFlag_EXCLUSIVE = 1 << 1,
	ZkMenuFlag_NO_ANIMATION = 1 << 2,
	ZkMenuFlag_DONT_SCALE_DIMENSION = 1 << 3,
	ZkMenuFlag_DONT_SCALE_POSITION = 1 << 4,
	ZkMenuFlag_ALIGN_CENTER = 1 << 5,
	ZkMenuFlag_SHOW_INFO = 1 << 6,
} ZkMenuFlag;

ZKC_API ZkString ZkMenuInstance_getBackPic(ZkMenuInstance const* slf);
ZKC_API ZkString ZkMenuInstance_getBackWorld(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getPosX(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getPosY(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getDimX(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getDimY(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getAlpha(ZkMenuInstance const* slf);
ZKC_API ZkString ZkMenuInstance_getMusicTheme(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getEventTimerMsec(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getFlags(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getDefaultOutgame(ZkMenuInstance const* slf);
ZKC_API int32_t ZkMenuInstance_getDefaultIngame(ZkMenuInstance const* slf);
ZKC_API ZkString ZkMenuInstance_getItem(ZkMenuInstance const* slf, ZkSize i);
