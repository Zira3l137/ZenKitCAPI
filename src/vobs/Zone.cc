// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Zone.h"

#include "../Internal.hh"

ZKC_VOB_LOADER(ZkZoneMusic)
ZKC_VOB_PATH_LOADER(ZkZoneMusic)
ZKC_DELETER(ZkZoneMusic)

ZkBool ZkZoneMusic_getIsEnabled(ZkZoneMusic const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->enabled;
}

int32_t ZkZoneMusic_getPriority(ZkZoneMusic const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->priority;
}

ZkBool ZkZoneMusic_getIsEllipsoid(ZkZoneMusic const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ellipsoid;
}

float ZkZoneMusic_getReverb(ZkZoneMusic const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->reverb;
}

float ZkZoneMusic_getVolume(ZkZoneMusic const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->volume;
}

ZkBool ZkZoneMusic_getIsLoop(ZkZoneMusic const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop;
}

ZKC_VOB_LOADER(ZkZoneFarPlane)
ZKC_VOB_PATH_LOADER(ZkZoneFarPlane)
ZKC_DELETER(ZkZoneFarPlane)

float ZkZoneFarPlane_getVobFarPlaneZ(ZkZoneFarPlane const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vob_far_plane_z;
}

float ZkZoneFarPlane_getInnerRangePercentage(ZkZoneFarPlane const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->inner_range_percentage;
}

ZKC_VOB_LOADER(ZkZoneFog)
ZKC_VOB_PATH_LOADER(ZkZoneFog)
ZKC_DELETER(ZkZoneFog)

float ZkZoneFog_getRangeCenter(ZkZoneFog const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->range_center;
}

float ZkZoneFog_getInnerRangePercentage(ZkZoneFog const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->inner_range_percentage;
}

ZkColor ZkZoneFog_getColor(ZkZoneFog const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->color;
}

ZkBool ZkZoneFog_getFadeOutSky(ZkZoneFog const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fade_out_sky;
}

ZkBool ZkZoneFog_getOverrideColor(ZkZoneFog const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->override_color;
}
