// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Material.h"
#include "../Matrix.h"
#include "../Object.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Camera.hh>
using ZkCutsceneCamera = ZkSharedHandle<zenkit::VCutsceneCamera>;
using ZkCameraTrajectoryFrame = ZkSharedHandle<zenkit::VCameraTrajectoryFrame>;
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
ZKC_API void ZkCutsceneCamera_setTrajectoryFOR(ZkCutsceneCamera* slf, ZkCameraTrajectory trajectoryFOR);
ZKC_API ZkCameraTrajectory ZkCutsceneCamera_getTargetTrajectoryFOR(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setTargetTrajectoryFOR(ZkCutsceneCamera* slf, ZkCameraTrajectory targetTrajectoryFOR);
ZKC_API ZkCameraLoopType ZkCutsceneCamera_getLoopMode(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setLoopMode(ZkCutsceneCamera* slf, ZkCameraLoopType loopMode);
ZKC_API ZkCameraLerpType ZkCutsceneCamera_getLerpMode(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setLerpMode(ZkCutsceneCamera* slf, ZkCameraLerpType lerpMode);
ZKC_API ZkBool ZkCutsceneCamera_getIgnoreFORVobRotation(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setIgnoreFORVobRotation(ZkCutsceneCamera* slf, ZkBool ignoreFORVobRotation);
ZKC_API ZkBool ZkCutsceneCamera_getIgnoreFORVobRotationTarget(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setIgnoreFORVobRotationTarget(ZkCutsceneCamera* slf, ZkBool ignoreFORVobRotationTarget);
ZKC_API ZkBool ZkCutsceneCamera_getAdapt(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setAdapt(ZkCutsceneCamera* slf, ZkBool adapt);
ZKC_API ZkBool ZkCutsceneCamera_getEaseFirst(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setEaseFirst(ZkCutsceneCamera* slf, ZkBool easeFirst);
ZKC_API ZkBool ZkCutsceneCamera_getEaseLast(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setEaseLast(ZkCutsceneCamera* slf, ZkBool easeLast);
ZKC_API float ZkCutsceneCamera_getTotalDuration(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setTotalDuration(ZkCutsceneCamera* slf, float totalDuration);
ZKC_API ZkString ZkCutsceneCamera_getAutoFocusVob(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setAutoFocusVob(ZkCutsceneCamera* slf, ZkString autoFocusVob);
ZKC_API ZkBool ZkCutsceneCamera_getAutoPlayerMovable(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setAutoPlayerMovable(ZkCutsceneCamera* slf, ZkBool autoPlayerMovable);
ZKC_API ZkBool ZkCutsceneCamera_getAutoUntriggerLast(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setAutoUntriggerLast(ZkCutsceneCamera* slf, ZkBool autoUntriggerLast);
ZKC_API float ZkCutsceneCamera_getAutoUntriggerLastDelay(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setAutoUntriggerLastDelay(ZkCutsceneCamera* slf, float autoUntriggerLastDelay);
ZKC_API int32_t ZkCutsceneCamera_getPositionCount(ZkCutsceneCamera const* slf);
ZKC_API int32_t ZkCutsceneCamera_getTargetCount(ZkCutsceneCamera const* slf);
ZKC_API ZkBool ZkCutsceneCamera_getIsPaused(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setIsPaused(ZkCutsceneCamera* slf, ZkBool isPaused);
ZKC_API ZkBool ZkCutsceneCamera_getIsStarted(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setIsStarted(ZkCutsceneCamera* slf, ZkBool isStarted);
ZKC_API ZkBool ZkCutsceneCamera_getGotoTimeMode(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setGotoTimeMode(ZkCutsceneCamera* slf, ZkBool gotoTimeMode);
ZKC_API float ZkCutsceneCamera_getTime(ZkCutsceneCamera const* slf);
ZKC_API void ZkCutsceneCamera_setTime(ZkCutsceneCamera* slf, float time);

ZKC_API ZkSize ZkCutsceneCamera_getFrameCount(ZkCutsceneCamera const* slf);
ZKC_API ZkCameraTrajectoryFrame* ZkCutsceneCamera_getFrame(ZkCutsceneCamera const* slf, ZkSize i);
ZKC_API void
ZkCutsceneCamera_enumerateFrames(ZkCutsceneCamera const* slf, ZkCameraTrajectoryFrameEnumerator cb, void* ctx);
ZKC_API void ZkCameraTrajectoryFrame_del(ZkCameraTrajectoryFrame const* slf);

ZKC_API float ZkCameraTrajectoryFrame_getTime(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setTime(ZkCameraTrajectoryFrame* slf, float time);
ZKC_API float ZkCameraTrajectoryFrame_getRollAngle(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setRollAngle(ZkCameraTrajectoryFrame* slf, float rollAngle);
ZKC_API float ZkCameraTrajectoryFrame_getFovScale(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setFovScale(ZkCameraTrajectoryFrame* slf, float fovScale);
ZKC_API ZkCameraMotion ZkCameraTrajectoryFrame_getMotionType(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setMotionType(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionType);
ZKC_API ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeFov(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setMotionTypeFov(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionTypeFov);
ZKC_API ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeRoll(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setMotionTypeRoll(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionTypeRoll);
ZKC_API ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeTimeScale(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setMotionTypeTimeScale(ZkCameraTrajectoryFrame* slf,
                                                            ZkCameraMotion motionTypeTimeScale);
ZKC_API float ZkCameraTrajectoryFrame_getTension(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setTension(ZkCameraTrajectoryFrame* slf, float tension);
ZKC_API float ZkCameraTrajectoryFrame_getCamBias(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setCamBias(ZkCameraTrajectoryFrame* slf, float camBias);
ZKC_API float ZkCameraTrajectoryFrame_getContinuity(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setContinuity(ZkCameraTrajectoryFrame* slf, float continuity);
ZKC_API float ZkCameraTrajectoryFrame_getTimeScale(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setTimeScale(ZkCameraTrajectoryFrame* slf, float timeScale);
ZKC_API ZkBool ZkCameraTrajectoryFrame_getTimeFixed(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setTimeFixed(ZkCameraTrajectoryFrame* slf, ZkBool timeFixed);
ZKC_API ZkMat4x4 ZkCameraTrajectoryFrame_getOriginalPose(ZkCameraTrajectoryFrame const* slf);
ZKC_API void ZkCameraTrajectoryFrame_setOriginalPose(ZkCameraTrajectoryFrame* slf, ZkMat4x4 originalPose);
