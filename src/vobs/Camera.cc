// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/vobs/Camera.h"

#include "../Internal.hh"

#include <zenkit/Archive.hh>

ZKC_VOB_LOADER(ZkCutsceneCamera);
ZKC_VOB_PATH_LOADER(ZkCutsceneCamera);
ZKC_DELETER(ZkCutsceneCamera);

ZkCameraTrajectory ZkCutsceneCamera_getTrajectoryFOR(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraTrajectory>(SLF->trajectory_for);
}

void ZkCutsceneCamera_setTrajectoryFOR(ZkCutsceneCamera* slf, ZkCameraTrajectory trajectoryFOR) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->trajectory_for = static_cast<zenkit::CameraCoordinateReference>(trajectoryFOR);
}

ZkCameraTrajectory ZkCutsceneCamera_getTargetTrajectoryFOR(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraTrajectory>(SLF->target_trajectory_for);
}

void ZkCutsceneCamera_setTargetTrajectoryFOR(ZkCutsceneCamera* slf, ZkCameraTrajectory targetTrajectoryFOR) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->target_trajectory_for = static_cast<zenkit::CameraCoordinateReference>(targetTrajectoryFOR);
}

ZkCameraLoopType ZkCutsceneCamera_getLoopMode(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraLoopType>(SLF->loop_mode);
}

void ZkCutsceneCamera_setLoopMode(ZkCutsceneCamera* slf, ZkCameraLoopType loopMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->loop_mode = static_cast<zenkit::CameraLoop>(loopMode);
}

ZkCameraLerpType ZkCutsceneCamera_getLerpMode(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraLerpType>(SLF->lerp_mode);
}

void ZkCutsceneCamera_setLerpMode(ZkCutsceneCamera* slf, ZkCameraLerpType lerpMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->lerp_mode = static_cast<zenkit::CameraLerpType>(lerpMode);
}

ZkBool ZkCutsceneCamera_getIgnoreFORVobRotation(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ignore_for_vob_rotation;
}

void ZkCutsceneCamera_setIgnoreFORVobRotation(ZkCutsceneCamera* slf, ZkBool ignoreFORVobRotation) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ignore_for_vob_rotation = ignoreFORVobRotation;
}

ZkBool ZkCutsceneCamera_getIgnoreFORVobRotationTarget(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ignore_for_vob_rotation_target;
}

void ZkCutsceneCamera_setIgnoreFORVobRotationTarget(ZkCutsceneCamera* slf, ZkBool ignoreFORVobRotationTarget) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ignore_for_vob_rotation_target = ignoreFORVobRotationTarget;
}

ZkBool ZkCutsceneCamera_getAdapt(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->adapt;
}

void ZkCutsceneCamera_setAdapt(ZkCutsceneCamera* slf, ZkBool adapt) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->adapt = adapt;
}

ZkBool ZkCutsceneCamera_getEaseFirst(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ease_first;
}

void ZkCutsceneCamera_setEaseFirst(ZkCutsceneCamera* slf, ZkBool easeFirst) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ease_first = easeFirst;
}

ZkBool ZkCutsceneCamera_getEaseLast(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->ease_last;
}

void ZkCutsceneCamera_setEaseLast(ZkCutsceneCamera* slf, ZkBool easeLast) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->ease_last = easeLast;
}

float ZkCutsceneCamera_getTotalDuration(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->total_duration;
}

void ZkCutsceneCamera_setTotalDuration(ZkCutsceneCamera* slf, float totalDuration) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->total_duration = totalDuration;
}

ZkString ZkCutsceneCamera_getAutoFocusVob(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->auto_focus_vob.c_str();
}

void ZkCutsceneCamera_setAutoFocusVob(ZkCutsceneCamera* slf, ZkString autoFocusVob) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->auto_focus_vob = autoFocusVob;
}

ZkBool ZkCutsceneCamera_getAutoPlayerMovable(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->auto_player_movable;
}

void ZkCutsceneCamera_setAutoPlayerMovable(ZkCutsceneCamera* slf, ZkBool autoPlayerMovable) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->auto_player_movable = autoPlayerMovable;
}

ZkBool ZkCutsceneCamera_getAutoUntriggerLast(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->auto_untrigger_last;
}

void ZkCutsceneCamera_setAutoUntriggerLast(ZkCutsceneCamera* slf, ZkBool autoUntriggerLast) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->auto_untrigger_last = autoUntriggerLast;
}

float ZkCutsceneCamera_getAutoUntriggerLastDelay(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->auto_untrigger_last_delay;
}

void ZkCutsceneCamera_setAutoUntriggerLastDelay(ZkCutsceneCamera* slf, float autoUntriggerLastDelay) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->auto_untrigger_last_delay = autoUntriggerLastDelay;
}

int32_t ZkCutsceneCamera_getPositionCount(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->position_count;
}

int32_t ZkCutsceneCamera_getTargetCount(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->target_count;
}

ZkSize ZkCutsceneCamera_getFrameCount(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->trajectory_frames.size();
}

ZkCameraTrajectoryFrame* ZkCutsceneCamera_getFrame(ZkCutsceneCamera const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(SLF->trajectory_frames, i);
	return &SLF->trajectory_frames[i];
}

void ZkCutsceneCamera_enumerateFrames(ZkCutsceneCamera const* slf, ZkCameraTrajectoryFrameEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto frame : SLF->trajectory_frames) {
		if (cb(ctx, &frame)) break;
	}
}

void ZkCameraTrajectoryFrame_del(ZkCameraTrajectoryFrame const* slf) {
	delete slf;
}

float ZkCameraTrajectoryFrame_getTime(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->time;
}

void ZkCameraTrajectoryFrame_setTime(ZkCameraTrajectoryFrame* slf, float time) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->time = time;
}

float ZkCameraTrajectoryFrame_getRollAngle(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->roll_angle;
}

void ZkCameraTrajectoryFrame_setRollAngle(ZkCameraTrajectoryFrame* slf, float rollAngle) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->roll_angle = rollAngle;
}

float ZkCameraTrajectoryFrame_getFovScale(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->fov_scale;
}

void ZkCameraTrajectoryFrame_setFovScale(ZkCameraTrajectoryFrame* slf, float fovScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->fov_scale = fovScale;
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionType(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraMotion>(SLF->motion_type);
}

void ZkCameraTrajectoryFrame_setMotionType(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->motion_type = static_cast<zenkit::CameraMotion>(motionType);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeFov(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraMotion>(SLF->motion_type_fov);
}

void ZkCameraTrajectoryFrame_setMotionTypeFov(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionTypeFov) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->motion_type_fov = static_cast<zenkit::CameraMotion>(motionTypeFov);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeRoll(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraMotion>(SLF->motion_type_roll);
}

void ZkCameraTrajectoryFrame_setMotionTypeRoll(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionTypeRoll) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->motion_type_roll = static_cast<zenkit::CameraMotion>(motionTypeRoll);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeTimeScale(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraMotion>(SLF->motion_type_time_scale);
}

void ZkCameraTrajectoryFrame_setMotionTypeTimeScale(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionTypeTimeScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->motion_type_time_scale = static_cast<zenkit::CameraMotion>(motionTypeTimeScale);
}

float ZkCameraTrajectoryFrame_getTension(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->tension;
}

void ZkCameraTrajectoryFrame_setTension(ZkCameraTrajectoryFrame* slf, float tension) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->tension = tension;
}

float ZkCameraTrajectoryFrame_getCamBias(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->cam_bias;
}

void ZkCameraTrajectoryFrame_setCamBias(ZkCameraTrajectoryFrame* slf, float camBias) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->cam_bias = camBias;
}

float ZkCameraTrajectoryFrame_getContinuity(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->continuity;
}

void ZkCameraTrajectoryFrame_setContinuity(ZkCameraTrajectoryFrame* slf, float continuity) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->continuity = continuity;
}

float ZkCameraTrajectoryFrame_getTimeScale(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->time_scale;
}

void ZkCameraTrajectoryFrame_setTimeScale(ZkCameraTrajectoryFrame* slf, float timeScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->time_scale = timeScale;
}

ZkBool ZkCameraTrajectoryFrame_getTimeFixed(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->time_fixed;
}

void ZkCameraTrajectoryFrame_setTimeFixed(ZkCameraTrajectoryFrame* slf, ZkBool timeFixed) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->time_fixed = timeFixed;
}

ZkMat4x4 ZkCameraTrajectoryFrame_getOriginalPose(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->original_pose;
}

void ZkCameraTrajectoryFrame_setOriginalPose(ZkCameraTrajectoryFrame* slf, ZkMat4x4 originalPose) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->original_pose = originalPose;
}

ZkBool ZkCutsceneCamera_getIsPaused(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->paused;
}

void ZkCutsceneCamera_setIsPaused(ZkCutsceneCamera* slf, ZkBool isPaused) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->paused = isPaused;
}

ZkBool ZkCutsceneCamera_getIsStarted(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->started;
}

void ZkCutsceneCamera_setIsStarted(ZkCutsceneCamera* slf, ZkBool isStarted) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->started = isStarted;
}

ZkBool ZkCutsceneCamera_getGotoTimeMode(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->goto_time_mode;
}

void ZkCutsceneCamera_setGotoTimeMode(ZkCutsceneCamera* slf, ZkBool gotoTimeMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->goto_time_mode = gotoTimeMode;
}

float ZkCutsceneCamera_getTime(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return SLF->cs_time;
}

void ZkCutsceneCamera_setTime(ZkCutsceneCamera* slf, float time) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	SLF->cs_time = time;
}
