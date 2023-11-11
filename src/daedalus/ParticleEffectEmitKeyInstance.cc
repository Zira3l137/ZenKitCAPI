#include "zenkit-capi/daedalus/ParticleEffectEmitKeyInstance.hh"
#include "../Internal.hh"

ZkString ZkParticleEffectEmitKeyInstance_getVisNameS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_name_s.c_str();
}

float ZkParticleEffectEmitKeyInstance_getVisSizeScale(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_size_scale;
}

float ZkParticleEffectEmitKeyInstance_getScaleDuration(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->scale_duration;
}

float ZkParticleEffectEmitKeyInstance_getPfxPpsValue(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_pps_value;
}

int32_t ZkParticleEffectEmitKeyInstance_getPfxPpsIsSmoothChg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_pps_is_smooth_chg;
}

int32_t ZkParticleEffectEmitKeyInstance_getPfxPpsIsLoopingChg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_pps_is_looping_chg;
}

float ZkParticleEffectEmitKeyInstance_getPfxScTime(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_sc_time;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxFlyGravityS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_fly_gravity_s.c_str();
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxShpDimS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_shp_dim_s.c_str();
}

int32_t ZkParticleEffectEmitKeyInstance_getPfxShpIsVolumeChg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_shp_is_volume_chg;
}

float ZkParticleEffectEmitKeyInstance_getPfxShpScaleFps(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_shp_scale_fps;
}

float ZkParticleEffectEmitKeyInstance_getPfxShpDistribWalksPeed(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_shp_distrib_walks_peed;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxShpOffsetVecS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_shp_offset_vec_s.c_str();
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxShpDistribTypeS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_shp_distrib_type_s.c_str();
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_dir_mode_s.c_str();
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxDirForS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_dir_for_s.c_str();
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeTargetForS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_dir_mode_target_for_s.c_str();
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeTargetPosS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_dir_mode_target_pos_s.c_str();
}

float ZkParticleEffectEmitKeyInstance_getPfxVelAvg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_vel_avg;
}

float ZkParticleEffectEmitKeyInstance_getPfxLspPartAvg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_lsp_part_avg;
}

float ZkParticleEffectEmitKeyInstance_getPfxVisAlphaStart(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_vis_alpha_start;
}

ZkString ZkParticleEffectEmitKeyInstance_getLightPresetName(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->light_preset_name.c_str();
}

float ZkParticleEffectEmitKeyInstance_getLightRange(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->light_range;
}

ZkString ZkParticleEffectEmitKeyInstance_getSfxId(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sfx_id.c_str();
}

int32_t ZkParticleEffectEmitKeyInstance_getSfxIsAmbient(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sfx_is_ambient;
}

ZkString ZkParticleEffectEmitKeyInstance_getEmCreateFxId(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->em_create_fx_id.c_str();
}

float ZkParticleEffectEmitKeyInstance_getEmFlyGravity(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->em_fly_gravity;
}

ZkString ZkParticleEffectEmitKeyInstance_getEmSelfRotVelS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->em_self_rot_vel_s.c_str();
}

ZkString ZkParticleEffectEmitKeyInstance_getEmTrjModeS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->em_trj_mode_s.c_str();
}

float ZkParticleEffectEmitKeyInstance_getEmTrjEaseVel(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->em_trj_ease_vel;
}

int32_t ZkParticleEffectEmitKeyInstance_getEmCheckCollision(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->em_check_collision;
}

float ZkParticleEffectEmitKeyInstance_getEmFxLifespan(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->em_fx_lifespan;
}
