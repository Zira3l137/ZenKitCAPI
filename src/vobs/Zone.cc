// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Zone.h"

#include "../Internal.hh"

ZKC_VOB_LOADER(ZkZoneMusic)
ZKC_VOB_PATH_LOADER(ZkZoneMusic)
ZKC_DELETER(ZkZoneMusic)

ZkBool ZkZoneMusic_getIsEnabled(ZkZoneMusic const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->enabled;
}

void ZkZoneMusic_setIsEnabled(ZkZoneMusic* slf, ZkBool isEnabled) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->enabled = isEnabled;
}

int32_t ZkZoneMusic_getPriority(ZkZoneMusic const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->priority;
}

void ZkZoneMusic_setPriority(ZkZoneMusic* slf, int32_t priority) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->priority = priority;
}

ZkBool ZkZoneMusic_getIsEllipsoid(ZkZoneMusic const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ellipsoid;
}

void ZkZoneMusic_setIsEllipsoid(ZkZoneMusic* slf, ZkBool isEllipsoid) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ellipsoid = isEllipsoid;
}

float ZkZoneMusic_getReverb(ZkZoneMusic const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->reverb;
}

void ZkZoneMusic_setReverb(ZkZoneMusic* slf, float reverb) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->reverb = reverb;
}

float ZkZoneMusic_getVolume(ZkZoneMusic const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->volume;
}

void ZkZoneMusic_setVolume(ZkZoneMusic* slf, float volume) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->volume = volume;
}

ZkBool ZkZoneMusic_getIsLoop(ZkZoneMusic const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->loop;
}

void ZkZoneMusic_setIsLoop(ZkZoneMusic* slf, ZkBool isLoop) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->loop = isLoop;
}

ZKC_VOB_LOADER(ZkZoneFarPlane)
ZKC_VOB_PATH_LOADER(ZkZoneFarPlane)
ZKC_DELETER(ZkZoneFarPlane)

float ZkZoneFarPlane_getVobFarPlaneZ(ZkZoneFarPlane const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->vob_far_plane_z;
}

void ZkZoneFarPlane_setVobFarPlaneZ(ZkZoneFarPlane* slf, float vobFarPlaneZ) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->vob_far_plane_z = vobFarPlaneZ;
}

float ZkZoneFarPlane_getInnerRangePercentage(ZkZoneFarPlane const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->inner_range_percentage;
}

void ZkZoneFarPlane_setInnerRangePercentage(ZkZoneFarPlane* slf, float innerRangePercentage) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->inner_range_percentage = innerRangePercentage;
}

ZKC_VOB_LOADER(ZkZoneFog)
ZKC_VOB_PATH_LOADER(ZkZoneFog)
ZKC_DELETER(ZkZoneFog)

float ZkZoneFog_getRangeCenter(ZkZoneFog const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->range_center;
}

void ZkZoneFog_setRangeCenter(ZkZoneFog* slf, float rangeCenter) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->range_center = rangeCenter;
}

float ZkZoneFog_getInnerRangePercentage(ZkZoneFog const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->inner_range_percentage;
}

void ZkZoneFog_setInnerRangePercentage(ZkZoneFog* slf, float innerRangePercentage) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->inner_range_percentage = innerRangePercentage;
}

ZkColor ZkZoneFog_getColor(ZkZoneFog const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->color;
}

void ZkZoneFog_setColor(ZkZoneFog* slf, ZkColor color) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->color = color;
}

ZkBool ZkZoneFog_getFadeOutSky(ZkZoneFog const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fade_out_sky;
}

void ZkZoneFog_setFadeOutSky(ZkZoneFog* slf, ZkBool fadeOutSky) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fade_out_sky = fadeOutSky;
}

ZkBool ZkZoneFog_getOverrideColor(ZkZoneFog const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->override_color;
}

void ZkZoneFog_setOverrideColor(ZkZoneFog* slf, ZkBool overrideColor) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->override_color = overrideColor;
}
