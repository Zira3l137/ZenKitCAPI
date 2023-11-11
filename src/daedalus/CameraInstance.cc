#include "zenkit-capi/daedalus/CameraInstance.h"

#include "../Internal.hh"

float ZkCameraInstance_getBestRange(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->best_range;
}

float ZkCameraInstance_getMinRange(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->min_range;
}

float ZkCameraInstance_getMaxRange(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->max_range;
}

float ZkCameraInstance_getBestElevation(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->best_elevation;
}

float ZkCameraInstance_getMinElevation(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->min_elevation;
}

float ZkCameraInstance_getMaxElevation(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->max_elevation;
}

float ZkCameraInstance_getBestAzimuth(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->best_azimuth;
}

float ZkCameraInstance_getMinAzimuth(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->min_azimuth;
}

float ZkCameraInstance_getMaxAzimuth(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->max_azimuth;
}

float ZkCameraInstance_getBestRotZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->best_rot_z;
}

float ZkCameraInstance_getMinRotZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->min_rot_z;
}

float ZkCameraInstance_getMaxRotZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->max_rot_z;
}

float ZkCameraInstance_getRotOffsetX(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->rot_offset_x;
}

float ZkCameraInstance_getRotOffsetY(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->rot_offset_y;
}

float ZkCameraInstance_getRotOffsetZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->rot_offset_z;
}

float ZkCameraInstance_getTargetOffsetX(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target_offset_x;
}

float ZkCameraInstance_getTargetOffsetY(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target_offset_y;
}

float ZkCameraInstance_getTargetOffsetZ(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->target_offset_z;
}

float ZkCameraInstance_getVeloTrans(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->velo_trans;
}

float ZkCameraInstance_getVeloRot(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->velo_rot;
}

int32_t ZkCameraInstance_getTranslate(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->translate;
}

int32_t ZkCameraInstance_getRotate(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->rotate;
}

int32_t ZkCameraInstance_getCollision(ZkCameraInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->collision;
}
