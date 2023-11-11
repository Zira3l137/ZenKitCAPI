#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkMenuItemInstance = zenkit::IMenuItem;
#else
typedef struct ZkInternal_MenuItemInstance ZkMenuItemInstance;
#endif

typedef enum {
	ZkMenuItemType_UNKNOWN = 0,
	ZkMenuItemType_TEXT = 1,
	ZkMenuItemType_SLIDER = 2,
	ZkMenuItemType_INPUT = 3,
	ZkMenuItemType_CURSOR = 4,
	ZkMenuItemType_CHOICEBOX = 5,
	ZkMenuItemType_BUTTON = 6,
	ZkMenuItemType_LISTBOX = 7,
} ZkMenuItemType;

typedef enum {
	ZkMenuItemFlag_CHROMAKEYED = 1 << 0,
	ZkMenuItemFlag_TRANSPARENT = 1 << 1,
	ZkMenuItemFlag_SELECTABLE = 1 << 2,
	ZkMenuItemFlag_MOVABLE = 1 << 3,
	ZkMenuItemFlag_CENTERED = 1 << 4,
	ZkMenuItemFlag_DISABLED = 1 << 5,
	ZkMenuItemFlag_FADE = 1 << 6,
	ZkMenuItemFlag_EFFECTS = 1 << 7,
	ZkMenuItemFlag_ONLY_OUTGAME = 1 << 8,
	ZkMenuItemFlag_ONLY_INGAME = 1 << 9,
	ZkMenuItemFlag_PERF_OPTION = 1 << 10,
	ZkMenuItemFlag_MULTILINE = 1 << 11,
	ZkMenuItemFlag_NEEDS_APPLY = 1 << 12,
	ZkMenuItemFlag_NEEDS_RESTART = 1 << 13,
	ZkMenuItemFlag_EXTENDED_MENU = 1 << 14,
	ZkMenuItemFlag_HOR_SELECTABLE = 1 << 15,
} ZkMenuItemFlag;

#define ZkMenuItemInstance_TextCount 10
#define ZkMenuItemInstance_SelectActionCount 5
#define ZkMenuItemInstance_EventActionCount 10
#define ZkMenuItemInstance_UserItemCount 4

ZKC_API ZkString ZkMenuItemInstance_getFontName(ZkMenuItemInstance const* slf);
ZKC_API ZkString ZkMenuItemInstance_getBackpic(ZkMenuItemInstance const* slf);
ZKC_API ZkString ZkMenuItemInstance_getAlphaMode(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getAlpha(ZkMenuItemInstance const* slf);
ZKC_API ZkMenuItemType ZkMenuItemInstance_getType(ZkMenuItemInstance const* slf);
ZKC_API ZkString ZkMenuItemInstance_getOnChgSetOption(ZkMenuItemInstance const* slf);
ZKC_API ZkString ZkMenuItemInstance_getOnChgSetOptionSection(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getPosX(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getPosY(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getDimX(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getDimY(ZkMenuItemInstance const* slf);
ZKC_API float ZkMenuItemInstance_getSizeStartScale(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getFlags(ZkMenuItemInstance const* slf);
ZKC_API float ZkMenuItemInstance_getOpenDelayTime(ZkMenuItemInstance const* slf);
ZKC_API float ZkMenuItemInstance_getOpenDuration(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getFramePosX(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getFramePosY(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getFrameSizeX(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getFrameSizeY(ZkMenuItemInstance const* slf);
ZKC_API ZkString ZkMenuItemInstance_getHideIfOptionSectionSet(ZkMenuItemInstance const* slf);
ZKC_API ZkString ZkMenuItemInstance_getHideIfOptionSet(ZkMenuItemInstance const* slf);
ZKC_API int32_t ZkMenuItemInstance_getHideOnValue(ZkMenuItemInstance const* slf);
ZKC_API ZkString ZkMenuItemInstance_getText(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API int32_t ZkMenuItemInstance_getOnSelAction(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API ZkString ZkMenuItemInstance_getOnSelActionS(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API int32_t ZkMenuItemInstance_getOnEventAction(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API float ZkMenuItemInstance_getUserFloat(ZkMenuItemInstance const* slf, ZkSize i);
ZKC_API ZkString ZkMenuItemInstance_getUserString(ZkMenuItemInstance const* slf, ZkSize i);
