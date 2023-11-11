#include "zenkit-capi/daedalus/MenuItemInstance.h"
#include "../Internal.hh"

ZkString ZkMenuItemInstance_getFontName(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fontname.c_str();
}

ZkString ZkMenuItemInstance_getBackpic(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->backpic.c_str();
}

ZkString ZkMenuItemInstance_getAlphaMode(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->alphamode.c_str();
}

int32_t ZkMenuItemInstance_getAlpha(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->alpha;
}

ZkMenuItemType ZkMenuItemInstance_getType(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMenuItemType>(slf->type);
}

ZkString ZkMenuItemInstance_getOnChgSetOption(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->on_chg_set_option.c_str();
}

ZkString ZkMenuItemInstance_getOnChgSetOptionSection(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->on_chg_set_option_section.c_str();
}

int32_t ZkMenuItemInstance_getPosX(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pos_x;
}

int32_t ZkMenuItemInstance_getPosY(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pos_y;
}

int32_t ZkMenuItemInstance_getDimX(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dim_x;
}

int32_t ZkMenuItemInstance_getDimY(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dim_y;
}

float ZkMenuItemInstance_getSizeStartScale(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->size_start_scale;
}

int32_t ZkMenuItemInstance_getFlags(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<int32_t>(slf->flags);
}

float ZkMenuItemInstance_getOpenDelayTime(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->open_delay_time;
}

float ZkMenuItemInstance_getOpenDuration(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->open_duration;
}

int32_t ZkMenuItemInstance_getFramePosX(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->frame_posx;
}

int32_t ZkMenuItemInstance_getFramePosY(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->frame_posy;
}

int32_t ZkMenuItemInstance_getFrameSizeX(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->frame_sizex;
}

int32_t ZkMenuItemInstance_getFrameSizeY(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->frame_sizey;
}

ZkString ZkMenuItemInstance_getHideIfOptionSectionSet(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hide_if_option_section_set.c_str();
}

ZkString ZkMenuItemInstance_getHideIfOptionSet(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hide_if_option_set.c_str();
}

int32_t ZkMenuItemInstance_getHideOnValue(ZkMenuItemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hide_on_value;
}

ZkString ZkMenuItemInstance_getText(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkMenuItemInstance_TextCount, i);
	return slf->text->c_str();
}

int32_t ZkMenuItemInstance_getOnSelAction(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkMenuItemInstance_SelectActionCount, i);
	return slf->on_sel_action[i];
}

ZkString ZkMenuItemInstance_getOnSelActionS(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkMenuItemInstance_SelectActionCount, i);
	return slf->on_sel_action_s[i].c_str();
}

int32_t ZkMenuItemInstance_getOnEventAction(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkMenuItemInstance_EventActionCount, i);
	return slf->on_event_action[i];
}

float ZkMenuItemInstance_getUserFloat(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkMenuItemInstance_UserItemCount, i);
	return slf->user_float[i];
}

ZkString ZkMenuItemInstance_getUserString(ZkMenuItemInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LENA(ZkMenuItemInstance_UserItemCount, i);
	return slf->user_string[i].c_str();
}
