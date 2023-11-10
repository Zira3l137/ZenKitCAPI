#include "czenkit/daedalus/MenuInstance.h"
#include "../Internal.hh"

ZkString ZkMenuInstance_getBackPic(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->back_pic.c_str();
}

ZkString ZkMenuInstance_getBackWorld(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->back_world.c_str();
}

int32_t ZkMenuInstance_getPosX(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->pos_x;
}

int32_t ZkMenuInstance_getPosY(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->pos_y;
}

int32_t ZkMenuInstance_getDimX(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->dim_x;
}

int32_t ZkMenuInstance_getDimY(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->dim_y;
}

int32_t ZkMenuInstance_getAlpha(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->alpha;
}

ZkString ZkMenuInstance_getMusicTheme(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->music_theme.c_str();
}

int32_t ZkMenuInstance_getEventTimerMsec(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->event_timer_msec;
}

int32_t ZkMenuInstance_getFlags(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<int32_t>(slf->flags);
}

int32_t ZkMenuInstance_getDefaultOutgame(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->default_outgame;
}

int32_t ZkMenuInstance_getDefaultIngame(ZkMenuInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->default_ingame;
}

ZkString ZkMenuInstance_getItem(ZkMenuInstance const* slf, ZkSize i) {
	CZK_CHECK_NULL(slf);
	CZK_CHECK_LENA(ZkMenuInstance_ItemCount, i);
	return slf->items[i].c_str();
}
