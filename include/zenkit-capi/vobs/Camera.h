// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Material.h"
#include "../Matrix.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Camera.hh>
using ZkCutsceneCamera = zenkit::vobs::CutsceneCamera;
using ZkCameraTrajectoryFrame = zenkit::vobs::CameraTrajectoryFrame;
#else
typedef struct ZkInternal_CutsceneCamera ZkCutsceneCamera;
typedef struct ZkInternal_CameraTrajectoryFrame ZkCameraTrajectoryFrame;
#endif

typedef enum {
	ZkCameraMotion_UNDEFINED = 0,
	ZkCameraMotion_SMOOTH = 1,
	ZkCameraMotion_LINEAR = 2,
	ZkCameraMotion_STEP = 3,
	ZkCameraMotion_SLOW = 4,
	ZkCameraMotion_FAST = 5,
	ZkCameraMotion_CUSTOM = 6,
} ZkCameraMotion;

typedef enum {
	ZkCameraTrajectory_WORLD = 0,
	ZkCameraTrajectory_OBJECT = 1,
} ZkCameraTrajectory;

typedef enum {
	ZkCameraLerpType_UNDEFINED = 0,
	ZkCameraLerpType_PATH = 1,
	ZkCameraLerpType_PATH_IGNORE_ROLL = 2,
	ZkCameraLerpType_PATH_ROTATION_SAMPLES = 3,
} ZkCameraLerpType;

typedef enum {
	ZkCameraLoop_NONE = 0,
	ZkCameraLoop_RESTART = 1,
	ZkCameraLoop_PINGPONG = 2,
} ZkCameraLoopType;

typedef ZkBool (*ZkCameraTrajectoryFrameEnumerator)(void* ctx, ZkCameraTrajectoryFrame const* frame);

ZKC_API ZkCutsceneCamera* ZkCutsceneCamera_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkCutsceneCamera* ZkCutsceneCamera_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkCutsceneCamera_del(ZkCutsceneCamera* slf);

ZKC_API ZkCameraTrajectory ZkCutsceneCamera_getTrajectoryFOR(ZkCutsceneCamera const* slf);
ZKC_API ZkCameraTrajectory ZkCutsceneCamera_getTargetTrajectoryFOR(ZkCutsceneCamera const* slf);
ZKC_API ZkCameraLoopType ZkCutsceneCamera_getLoopMode(ZkCutsceneCamera const* slf);
ZKC_API ZkCameraLerpType ZkCutsceneCamera_getLerpMode(ZkCutsceneCamera const* slf);
ZKC_API ZkBool ZkCutsceneCamera_getIgnoreFORVobRotation(ZkCutsceneCamera const* slf);
ZKC_API ZkBool ZkCutsceneCamera_getIgnoreFORVobRotationTarget(ZkCutsceneCamera const* slf);
ZKC_API ZkBool ZkCutsceneCamera_getAdapt(ZkCutsceneCamera const* slf);
ZKC_API ZkBool ZkCutsceneCamera_getEaseFirst(ZkCutsceneCamera const* slf);
ZKC_API ZkBool ZkCutsceneCamera_getEaseLast(ZkCutsceneCamera const* slf);
ZKC_API float ZkCutsceneCamera_getTotalDuration(ZkCutsceneCamera const* slf);
ZKC_API ZkString ZkCutsceneCamera_getAutoFocusVob(ZkCutsceneCamera const* slf);
ZKC_API ZkBool ZkCutsceneCamera_getAutoPlayerMovable(ZkCutsceneCamera const* slf);
ZKC_API ZkBool ZkCutsceneCamera_getAutoUntriggerLast(ZkCutsceneCamera const* slf);
ZKC_API float ZkCutsceneCamera_getAutoUntriggerLastDelay(ZkCutsceneCamera const* slf);
ZKC_API int32_t ZkCutsceneCamera_getPositionCount(ZkCutsceneCamera const* slf);
ZKC_API int32_t ZkCutsceneCamera_getTargetCount(ZkCutsceneCamera const* slf);

ZKC_API ZkSize ZkCutsceneCamera_getFrameCount(ZkCutsceneCamera const* slf);
ZKC_API ZkCameraTrajectoryFrame const* ZkCutsceneCamera_getFrame(ZkCutsceneCamera const* slf, ZkSize i);
ZKC_API void ZkCutsceneCamera_enumerateFrames(ZkCutsceneCamera const* slf, ZkCameraTrajectoryFrameEnumerator cb, void* ctx);


ZKC_API float ZkCameraTrajectoryFrame_getTime(ZkCameraTrajectoryFrame const* slf);
ZKC_API float ZkCameraTrajectoryFrame_getRollAngle(ZkCameraTrajectoryFrame const* slf);
ZKC_API float ZkCameraTrajectoryFrame_getFovScale(ZkCameraTrajectoryFrame const* slf);
ZKC_API ZkCameraMotion ZkCameraTrajectoryFrame_getMotionType(ZkCameraTrajectoryFrame const* slf);
ZKC_API ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeFov(ZkCameraTrajectoryFrame const* slf);
ZKC_API ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeRoll(ZkCameraTrajectoryFrame const* slf);
ZKC_API ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeTimeScale(ZkCameraTrajectoryFrame const* slf);
ZKC_API float ZkCameraTrajectoryFrame_getTension(ZkCameraTrajectoryFrame const* slf);
ZKC_API float ZkCameraTrajectoryFrame_getCamBias(ZkCameraTrajectoryFrame const* slf);
ZKC_API float ZkCameraTrajectoryFrame_getContinuity(ZkCameraTrajectoryFrame const* slf);
ZKC_API float ZkCameraTrajectoryFrame_getTimeScale(ZkCameraTrajectoryFrame const* slf);
ZKC_API ZkBool ZkCameraTrajectoryFrame_getTimeFixed(ZkCameraTrajectoryFrame const* slf);
ZKC_API ZkMat4x4 ZkCameraTrajectoryFrame_getOriginalPose(ZkCameraTrajectoryFrame const* slf);
