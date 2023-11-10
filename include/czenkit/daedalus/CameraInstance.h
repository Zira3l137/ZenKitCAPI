#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkCameraInstance = zenkit::ICamera;
#else
typedef struct ZkInternal_CameraInstance ZkCameraInstance;
#endif

CZK_API float ZkCameraInstance_getBestRange(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getMinRange(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getMaxRange(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getBestElevation(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getMinElevation(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getMaxElevation(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getBestAzimuth(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getMinAzimuth(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getMaxAzimuth(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getBestRotZ(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getMinRotZ(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getMaxRotZ(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getRotOffsetX(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getRotOffsetY(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getRotOffsetZ(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getTargetOffsetX(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getTargetOffsetY(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getTargetOffsetZ(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getVeloTrans(ZkCameraInstance const* slf);
CZK_API float ZkCameraInstance_getVeloRot(ZkCameraInstance const* slf);
CZK_API int32_t ZkCameraInstance_getTranslate(ZkCameraInstance const* slf);
CZK_API int32_t ZkCameraInstance_getRotate(ZkCameraInstance const* slf);
CZK_API int32_t ZkCameraInstance_getCollision(ZkCameraInstance const* slf);
