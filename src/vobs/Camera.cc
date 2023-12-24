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
	return static_cast<ZkCameraTrajectory>(slf->trajectory_for);
}

void ZkCutsceneCamera_setTrajectoryFOR(ZkCutsceneCamera* slf, ZkCameraTrajectory trajectoryFOR) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->trajectory_for = static_cast<zenkit::CameraTrajectory>(trajectoryFOR);
}

ZkCameraTrajectory ZkCutsceneCamera_getTargetTrajectoryFOR(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraTrajectory>(slf->target_trajectory_for);
}

void ZkCutsceneCamera_setTargetTrajectoryFOR(ZkCutsceneCamera* slf, ZkCameraTrajectory targetTrajectoryFOR) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->target_trajectory_for = static_cast<zenkit::CameraTrajectory>(targetTrajectoryFOR);
}

ZkCameraLoopType ZkCutsceneCamera_getLoopMode(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraLoopType>(slf->loop_mode);
}

void ZkCutsceneCamera_setLoopMode(ZkCutsceneCamera* slf, ZkCameraLoopType loopMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->loop_mode = static_cast<zenkit::CameraLoop>(loopMode);
}

ZkCameraLerpType ZkCutsceneCamera_getLerpMode(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraLerpType>(slf->lerp_mode);
}

void ZkCutsceneCamera_setLerpMode(ZkCutsceneCamera* slf, ZkCameraLerpType lerpMode) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->lerp_mode = static_cast<zenkit::CameraLerpType>(lerpMode);
}

ZkBool ZkCutsceneCamera_getIgnoreFORVobRotation(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->ignore_for_vob_rotation;
}

void ZkCutsceneCamera_setIgnoreFORVobRotation(ZkCutsceneCamera* slf, ZkBool ignoreFORVobRotation) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->ignore_for_vob_rotation = ignoreFORVobRotation;
}

ZkBool ZkCutsceneCamera_getIgnoreFORVobRotationTarget(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->ignore_for_vob_rotation_target;
}

void ZkCutsceneCamera_setIgnoreFORVobRotationTarget(ZkCutsceneCamera* slf, ZkBool ignoreFORVobRotationTarget) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->ignore_for_vob_rotation_target = ignoreFORVobRotationTarget;
}

ZkBool ZkCutsceneCamera_getAdapt(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->adapt;
}

void ZkCutsceneCamera_setAdapt(ZkCutsceneCamera* slf, ZkBool adapt) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->adapt = adapt;
}

ZkBool ZkCutsceneCamera_getEaseFirst(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->ease_first;
}

void ZkCutsceneCamera_setEaseFirst(ZkCutsceneCamera* slf, ZkBool easeFirst) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->ease_first = easeFirst;
}

ZkBool ZkCutsceneCamera_getEaseLast(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->ease_last;
}

void ZkCutsceneCamera_setEaseLast(ZkCutsceneCamera* slf, ZkBool easeLast) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->ease_last = easeLast;
}

float ZkCutsceneCamera_getTotalDuration(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->total_duration;
}

void ZkCutsceneCamera_setTotalDuration(ZkCutsceneCamera* slf, float totalDuration) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->total_duration = totalDuration;
}

ZkString ZkCutsceneCamera_getAutoFocusVob(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->auto_focus_vob.c_str();
}

void ZkCutsceneCamera_setAutoFocusVob(ZkCutsceneCamera* slf, ZkString autoFocusVob) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->auto_focus_vob = autoFocusVob;
}

ZkBool ZkCutsceneCamera_getAutoPlayerMovable(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->auto_player_movable;
}

void ZkCutsceneCamera_setAutoPlayerMovable(ZkCutsceneCamera* slf, ZkBool autoPlayerMovable) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->auto_player_movable = autoPlayerMovable;
}

ZkBool ZkCutsceneCamera_getAutoUntriggerLast(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->auto_untrigger_last;
}

void ZkCutsceneCamera_setAutoUntriggerLast(ZkCutsceneCamera* slf, ZkBool autoUntriggerLast) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->auto_untrigger_last = autoUntriggerLast;
}

float ZkCutsceneCamera_getAutoUntriggerLastDelay(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->auto_untrigger_last_delay;
}

void ZkCutsceneCamera_setAutoUntriggerLastDelay(ZkCutsceneCamera* slf, float autoUntriggerLastDelay) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->auto_untrigger_last_delay = autoUntriggerLastDelay;
}

int32_t ZkCutsceneCamera_getPositionCount(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->position_count;
}

int32_t ZkCutsceneCamera_getTargetCount(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->target_count;
}

ZkSize ZkCutsceneCamera_getFrameCount(ZkCutsceneCamera const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frames.size();
}

ZkCameraTrajectoryFrame* ZkCutsceneCamera_getFrame(ZkCutsceneCamera const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->frames, i);
	return slf->frames[i].get();
}

void ZkCutsceneCamera_enumerateFrames(ZkCutsceneCamera const* slf, ZkCameraTrajectoryFrameEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& frame : slf->frames) {
		if (cb(ctx, frame.get())) break;
	}
}

float ZkCameraTrajectoryFrame_getTime(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->time;
}

void ZkCameraTrajectoryFrame_setTime(ZkCameraTrajectoryFrame* slf, float time) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->time = time;
}

float ZkCameraTrajectoryFrame_getRollAngle(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->roll_angle;
}

void ZkCameraTrajectoryFrame_setRollAngle(ZkCameraTrajectoryFrame* slf, float rollAngle) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->roll_angle = rollAngle;
}

float ZkCameraTrajectoryFrame_getFovScale(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->fov_scale;
}

void ZkCameraTrajectoryFrame_setFovScale(ZkCameraTrajectoryFrame* slf, float fovScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->fov_scale = fovScale;
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionType(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraMotion>(slf->motion_type);
}

void ZkCameraTrajectoryFrame_setMotionType(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionType) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->motion_type = static_cast<zenkit::CameraMotion>(motionType);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeFov(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraMotion>(slf->motion_type_fov);
}

void ZkCameraTrajectoryFrame_setMotionTypeFov(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionTypeFov) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->motion_type_fov = static_cast<zenkit::CameraMotion>(motionTypeFov);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeRoll(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraMotion>(slf->motion_type_roll);
}

void ZkCameraTrajectoryFrame_setMotionTypeRoll(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionTypeRoll) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->motion_type_roll = static_cast<zenkit::CameraMotion>(motionTypeRoll);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeTimeScale(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkCameraMotion>(slf->motion_type_time_scale);
}

void ZkCameraTrajectoryFrame_setMotionTypeTimeScale(ZkCameraTrajectoryFrame* slf, ZkCameraMotion motionTypeTimeScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->motion_type_time_scale = static_cast<zenkit::CameraMotion>(motionTypeTimeScale);
}

float ZkCameraTrajectoryFrame_getTension(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->tension;
}

void ZkCameraTrajectoryFrame_setTension(ZkCameraTrajectoryFrame* slf, float tension) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->tension = tension;
}

float ZkCameraTrajectoryFrame_getCamBias(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->cam_bias;
}

void ZkCameraTrajectoryFrame_setCamBias(ZkCameraTrajectoryFrame* slf, float camBias) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->cam_bias = camBias;
}

float ZkCameraTrajectoryFrame_getContinuity(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->continuity;
}

void ZkCameraTrajectoryFrame_setContinuity(ZkCameraTrajectoryFrame* slf, float continuity) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->continuity = continuity;
}

float ZkCameraTrajectoryFrame_getTimeScale(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->time_scale;
}

void ZkCameraTrajectoryFrame_setTimeScale(ZkCameraTrajectoryFrame* slf, float timeScale) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->time_scale = timeScale;
}

ZkBool ZkCameraTrajectoryFrame_getTimeFixed(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->time_fixed;
}

void ZkCameraTrajectoryFrame_setTimeFixed(ZkCameraTrajectoryFrame* slf, ZkBool timeFixed) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->time_fixed = timeFixed;
}

ZkMat4x4 ZkCameraTrajectoryFrame_getOriginalPose(ZkCameraTrajectoryFrame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->original_pose;
}

void ZkCameraTrajectoryFrame_setOriginalPose(ZkCameraTrajectoryFrame* slf, ZkMat4x4 originalPose) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->original_pose = originalPose;
}
