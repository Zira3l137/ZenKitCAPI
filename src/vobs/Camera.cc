// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/vobs/Camera.h"

#include <zenkit/Archive.hh>

ZkCutsceneCamera* ZkCutsceneCamera_load(ZkRead* buf, ZkGameVersion version) {
	if (buf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_load");
		return nullptr;
	}

	try {
		auto ar = zenkit::ReadArchive::from(buf);

		zenkit::ArchiveObject o {};
		ar->read_object_begin(o);

		ZkCutsceneCamera obj {};
		obj.type = zenkit::VobType::zCCSCamera;
		obj.load(*ar, static_cast<zenkit::GameVersion>(version));
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkCutsceneCamera_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkCutsceneCamera* ZkCutsceneCamera_loadPath(ZkString path, ZkGameVersion version) {
	if (path == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);
		auto ar = zenkit::ReadArchive::from(buf.get());

		zenkit::ArchiveObject o {};
		ar->read_object_begin(o);

		ZkCutsceneCamera obj {};
		obj.type = zenkit::VobType::zCCSCamera;
		obj.load(*ar, static_cast<zenkit::GameVersion>(version));
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkCutsceneCamera_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

void ZkCutsceneCamera_del(ZkCutsceneCamera* slf) {
	delete slf;
}

ZkCameraTrajectory ZkCutsceneCamera_getTrajectoryFOR(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getTrajectoryFOR");
		return {};
	}

	return static_cast<ZkCameraTrajectory>(slf->trajectory_for);
}

ZkCameraTrajectory ZkCutsceneCamera_getTargetTrajectoryFOR(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getTargetTrajectoryFOR");
		return {};
	}

	return static_cast<ZkCameraTrajectory>(slf->target_trajectory_for);
}

ZkCameraLoopType ZkCutsceneCamera_getLoopMode(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getLoopMode");
		return {};
	}

	return static_cast<ZkCameraLoopType>(slf->loop_mode);
}

ZkCameraLerpType ZkCutsceneCamera_getLerpMode(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getLerpMode");
		return {};
	}

	return static_cast<ZkCameraLerpType>(slf->lerp_mode);
}

ZkBool ZkCutsceneCamera_getIgnoreFORVobRotation(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getIgnoreFORVobRotation");
		return {};
	}

	return slf->ignore_for_vob_rotation;
}

ZkBool ZkCutsceneCamera_getIgnoreFORVobRotationTarget(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getIgnoreFORVobRotationTarget");
		return {};
	}

	return slf->ignore_for_vob_rotation_target;
}

ZkBool ZkCutsceneCamera_getAdapt(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getAdapt");
		return {};
	}

	return slf->adapt;
}

ZkBool ZkCutsceneCamera_getEaseFirst(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getEaseFirst");
		return {};
	}

	return slf->ease_first;
}

ZkBool ZkCutsceneCamera_getEaseLast(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getEaseLast");
		return {};
	}

	return slf->ease_last;
}

float ZkCutsceneCamera_getTotalDuration(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getTotalDuration");
		return {};
	}

	return slf->total_duration;
}

ZkString ZkCutsceneCamera_getAutoFocusVob(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getAutoFocusVob");
		return {};
	}

	return slf->auto_focus_vob.c_str();
}

ZkBool ZkCutsceneCamera_getAutoPlayerMovable(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getAutoPlayerMovable");
		return {};
	}

	return slf->auto_player_movable;
}

ZkBool ZkCutsceneCamera_getAutoUntriggerLast(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getAutoUntriggerLast");
		return {};
	}

	return slf->auto_untrigger_last;
}

float ZkCutsceneCamera_getAutoUntriggerLastDelay(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getAutoUntriggerLastDelay");
		return {};
	}

	return slf->auto_untrigger_last_delay;
}

int32_t ZkCutsceneCamera_getPositionCount(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getPositionCount");
		return {};
	}

	return slf->position_count;
}

int32_t ZkCutsceneCamera_getTargetCount(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getTargetCount");
		return {};
	}

	return slf->target_count;
}

ZkSize ZkCutsceneCamera_getFrameCount(ZkCutsceneCamera const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getFrameCount");
		return 0;
	}

	return slf->frames.size();
}

ZkCameraTrajectoryFrame const* ZkCutsceneCamera_getFrame(ZkCutsceneCamera const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_getFrame");
		return nullptr;
	}

	if (i >= slf->frames.size()) {
		CZK_LOG_ERROR("ZkCutsceneCamera_getFrame() failed: index out of range");
		return nullptr;
	}

	return slf->frames[i].get();
}

void ZkCutsceneCamera_enumerateFrames(ZkCutsceneCamera const* slf, ZkCameraTrajectoryFrameEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkCutsceneCamera_enumerateFrames");
		return;
	}

	for (auto& frame : slf->frames) {
		if (cb(ctx, frame.get())) break;
	}
}

float ZkCameraTrajectoryFrame_getTime(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getTime");
		return {};
	}

	return slf->time;
}

float ZkCameraTrajectoryFrame_getRollAngle(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getRollAngle");
		return {};
	}

	return slf->roll_angle;
}

float ZkCameraTrajectoryFrame_getFovScale(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getFovScale");
		return {};
	}

	return slf->fov_scale;
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionType(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getMotionType");
		return {};
	}

	return static_cast<ZkCameraMotion>(slf->motion_type);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeFov(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getMotionTypeFov");
		return {};
	}

	return static_cast<ZkCameraMotion>(slf->motion_type_fov);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeRoll(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getMotionTypeRoll");
		return {};
	}

	return static_cast<ZkCameraMotion>(slf->motion_type_roll);
}

ZkCameraMotion ZkCameraTrajectoryFrame_getMotionTypeTimeScale(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getMotionTypeTimeScale");
		return {};
	}

	return static_cast<ZkCameraMotion>(slf->motion_type_time_scale);
}

float ZkCameraTrajectoryFrame_getTension(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getTension");
		return {};
	}

	return slf->tension;
}

float ZkCameraTrajectoryFrame_getCamBias(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getCamBias");
		return {};
	}

	return slf->cam_bias;
}

float ZkCameraTrajectoryFrame_getContinuity(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getContinuity");
		return {};
	}

	return slf->continuity;
}

float ZkCameraTrajectoryFrame_getTimeScale(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getTimeScale");
		return {};
	}

	return slf->time_scale;
}

ZkBool ZkCameraTrajectoryFrame_getTimeFixed(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getTimeFixed");
		return {};
	}

	return slf->time_fixed;
}

ZkMat4x4 ZkCameraTrajectoryFrame_getOriginalPose(ZkCameraTrajectoryFrame const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkCameraTrajectoryFrame_getOriginalPose");
		return {};
	}

	return slf->original_pose;
}
