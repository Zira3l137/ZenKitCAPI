#include "zenkit-capi/daedalus/ParticleEffectEmitKeyInstance.hh"
#include "../Internal.hh"

ZkString ZkParticleEffectEmitKeyInstance_getVisNameS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->vis_name_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setVisNameS(ZkParticleEffectEmitKeyInstance* slf, ZkString visNameS) {
	ZKC_CHECK_NULLV(slf);
	SLF->vis_name_s = visNameS;
}

float ZkParticleEffectEmitKeyInstance_getVisSizeScale(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->vis_size_scale;
}

void ZkParticleEffectEmitKeyInstance_setVisSizeScale(ZkParticleEffectEmitKeyInstance* slf, float visSizeScale) {
	ZKC_CHECK_NULLV(slf);
	SLF->vis_size_scale = visSizeScale;
}

float ZkParticleEffectEmitKeyInstance_getScaleDuration(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->scale_duration;
}

void ZkParticleEffectEmitKeyInstance_setScaleDuration(ZkParticleEffectEmitKeyInstance* slf, float scaleDuration) {
	ZKC_CHECK_NULLV(slf);
	SLF->scale_duration = scaleDuration;
}

float ZkParticleEffectEmitKeyInstance_getPfxPpsValue(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_pps_value;
}

void ZkParticleEffectEmitKeyInstance_setPfxPpsValue(ZkParticleEffectEmitKeyInstance* slf, float pfxPpsValue) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_pps_value = pfxPpsValue;
}

int32_t ZkParticleEffectEmitKeyInstance_getPfxPpsIsSmoothChg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_pps_is_smooth_chg;
}

void ZkParticleEffectEmitKeyInstance_setPfxPpsIsSmoothChg(ZkParticleEffectEmitKeyInstance* slf,
                                                          int32_t pfxPpsIsSmoothChg) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_pps_is_smooth_chg = pfxPpsIsSmoothChg;
}

int32_t ZkParticleEffectEmitKeyInstance_getPfxPpsIsLoopingChg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_pps_is_looping_chg;
}

void ZkParticleEffectEmitKeyInstance_setPfxPpsIsLoopingChg(ZkParticleEffectEmitKeyInstance* slf,
                                                           int32_t pfxPpsIsLoopingChg) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_pps_is_looping_chg = pfxPpsIsLoopingChg;
}

float ZkParticleEffectEmitKeyInstance_getPfxScTime(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_sc_time;
}

void ZkParticleEffectEmitKeyInstance_setPfxScTime(ZkParticleEffectEmitKeyInstance* slf, float pfxScTime) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_sc_time = pfxScTime;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxFlyGravityS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_fly_gravity_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setPfxFlyGravityS(ZkParticleEffectEmitKeyInstance* slf, ZkString pfxFlyGravityS) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_fly_gravity_s = pfxFlyGravityS;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxShpDimS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_shp_dim_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setPfxShpDimS(ZkParticleEffectEmitKeyInstance* slf, ZkString pfxShpDimS) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_shp_dim_s = pfxShpDimS;
}

int32_t ZkParticleEffectEmitKeyInstance_getPfxShpIsVolumeChg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_shp_is_volume_chg;
}

void ZkParticleEffectEmitKeyInstance_setPfxShpIsVolumeChg(ZkParticleEffectEmitKeyInstance* slf,
                                                          int32_t pfxShpIsVolumeChg) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_shp_is_volume_chg = pfxShpIsVolumeChg;
}

float ZkParticleEffectEmitKeyInstance_getPfxShpScaleFps(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_shp_scale_fps;
}

void ZkParticleEffectEmitKeyInstance_setPfxShpScaleFps(ZkParticleEffectEmitKeyInstance* slf, float pfxShpScaleFps) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_shp_scale_fps = pfxShpScaleFps;
}

float ZkParticleEffectEmitKeyInstance_getPfxShpDistribWalksPeed(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_shp_distrib_walks_peed;
}

void ZkParticleEffectEmitKeyInstance_setPfxShpDistribWalksPeed(ZkParticleEffectEmitKeyInstance* slf,
                                                               float pfxShpDistribWalksPeed) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_shp_distrib_walks_peed = pfxShpDistribWalksPeed;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxShpOffsetVecS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_shp_offset_vec_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setPfxShpOffsetVecS(ZkParticleEffectEmitKeyInstance* slf,
                                                         ZkString pfxShpOffsetVecS) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_shp_offset_vec_s = pfxShpOffsetVecS;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxShpDistribTypeS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_shp_distrib_type_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setPfxShpDistribTypeS(ZkParticleEffectEmitKeyInstance* slf,
                                                           ZkString pfxShpDistribTypeS) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_shp_distrib_type_s = pfxShpDistribTypeS;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_dir_mode_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setPfxDirModeS(ZkParticleEffectEmitKeyInstance* slf, ZkString pfxDirModeS) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_dir_mode_s = pfxDirModeS;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxDirForS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_dir_for_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setPfxDirForS(ZkParticleEffectEmitKeyInstance* slf, ZkString pfxDirForS) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_dir_for_s = pfxDirForS;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeTargetForS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_dir_mode_target_for_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setPfxDirModeTargetForS(ZkParticleEffectEmitKeyInstance* slf,
                                                             ZkString pfxDirModeTargetForS) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_dir_mode_target_for_s = pfxDirModeTargetForS;
}

ZkString ZkParticleEffectEmitKeyInstance_getPfxDirModeTargetPosS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_dir_mode_target_pos_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setPfxDirModeTargetPosS(ZkParticleEffectEmitKeyInstance* slf,
                                                             ZkString pfxDirModeTargetPosS) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_dir_mode_target_pos_s = pfxDirModeTargetPosS;
}

float ZkParticleEffectEmitKeyInstance_getPfxVelAvg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_vel_avg;
}

void ZkParticleEffectEmitKeyInstance_setPfxVelAvg(ZkParticleEffectEmitKeyInstance* slf, float pfxVelAvg) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_vel_avg = pfxVelAvg;
}

float ZkParticleEffectEmitKeyInstance_getPfxLspPartAvg(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_lsp_part_avg;
}

void ZkParticleEffectEmitKeyInstance_setPfxLspPartAvg(ZkParticleEffectEmitKeyInstance* slf, float pfxLspPartAvg) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_lsp_part_avg = pfxLspPartAvg;
}

float ZkParticleEffectEmitKeyInstance_getPfxVisAlphaStart(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->pfx_vis_alpha_start;
}

void ZkParticleEffectEmitKeyInstance_setPfxVisAlphaStart(ZkParticleEffectEmitKeyInstance* slf, float pfxVisAlphaStart) {
	ZKC_CHECK_NULLV(slf);
	SLF->pfx_vis_alpha_start = pfxVisAlphaStart;
}

ZkString ZkParticleEffectEmitKeyInstance_getLightPresetName(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->light_preset_name.c_str();
}

void ZkParticleEffectEmitKeyInstance_setLightPresetName(ZkParticleEffectEmitKeyInstance* slf,
                                                        ZkString lightPresetName) {
	ZKC_CHECK_NULLV(slf);
	SLF->light_preset_name = lightPresetName;
}

float ZkParticleEffectEmitKeyInstance_getLightRange(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->light_range;
}

void ZkParticleEffectEmitKeyInstance_setLightRange(ZkParticleEffectEmitKeyInstance* slf, float lightRange) {
	ZKC_CHECK_NULLV(slf);
	SLF->light_range = lightRange;
}

ZkString ZkParticleEffectEmitKeyInstance_getSfxId(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->sfx_id.c_str();
}

void ZkParticleEffectEmitKeyInstance_setSfxId(ZkParticleEffectEmitKeyInstance* slf, ZkString sfxId) {
	ZKC_CHECK_NULLV(slf);
	SLF->sfx_id = sfxId;
}

int32_t ZkParticleEffectEmitKeyInstance_getSfxIsAmbient(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->sfx_is_ambient;
}

void ZkParticleEffectEmitKeyInstance_setSfxIsAmbient(ZkParticleEffectEmitKeyInstance* slf, int32_t sfxIsAmbient) {
	ZKC_CHECK_NULLV(slf);
	SLF->sfx_is_ambient = sfxIsAmbient;
}

ZkString ZkParticleEffectEmitKeyInstance_getEmCreateFxId(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->em_create_fx_id.c_str();
}

void ZkParticleEffectEmitKeyInstance_setEmCreateFxId(ZkParticleEffectEmitKeyInstance* slf, ZkString emCreateFxId) {
	ZKC_CHECK_NULLV(slf);
	SLF->em_create_fx_id = emCreateFxId;
}

float ZkParticleEffectEmitKeyInstance_getEmFlyGravity(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->em_fly_gravity;
}

void ZkParticleEffectEmitKeyInstance_setEmFlyGravity(ZkParticleEffectEmitKeyInstance* slf, float emFlyGravity) {
	ZKC_CHECK_NULLV(slf);
	SLF->em_fly_gravity = emFlyGravity;
}

ZkString ZkParticleEffectEmitKeyInstance_getEmSelfRotVelS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->em_self_rot_vel_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setEmSelfRotVelS(ZkParticleEffectEmitKeyInstance* slf, ZkString emSelfRotVelS) {
	ZKC_CHECK_NULLV(slf);
	SLF->em_self_rot_vel_s = emSelfRotVelS;
}

ZkString ZkParticleEffectEmitKeyInstance_getEmTrjModeS(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->em_trj_mode_s.c_str();
}

void ZkParticleEffectEmitKeyInstance_setEmTrjModeS(ZkParticleEffectEmitKeyInstance* slf, ZkString emTrjModeS) {
	ZKC_CHECK_NULLV(slf);
	SLF->em_trj_mode_s = emTrjModeS;
}

float ZkParticleEffectEmitKeyInstance_getEmTrjEaseVel(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->em_trj_ease_vel;
}

void ZkParticleEffectEmitKeyInstance_setEmTrjEaseVel(ZkParticleEffectEmitKeyInstance* slf, float emTrjEaseVel) {
	ZKC_CHECK_NULLV(slf);
	SLF->em_trj_ease_vel = emTrjEaseVel;
}

int32_t ZkParticleEffectEmitKeyInstance_getEmCheckCollision(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->em_check_collision;
}

void ZkParticleEffectEmitKeyInstance_setEmCheckCollision(ZkParticleEffectEmitKeyInstance* slf,
                                                         int32_t emCheckCollision) {
	ZKC_CHECK_NULLV(slf);
	SLF->em_check_collision = emCheckCollision;
}

float ZkParticleEffectEmitKeyInstance_getEmFxLifespan(ZkParticleEffectEmitKeyInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return SLF->em_fx_lifespan;
}

void ZkParticleEffectEmitKeyInstance_setEmFxLifespan(ZkParticleEffectEmitKeyInstance* slf, float emFxLifespan) {
	ZKC_CHECK_NULLV(slf);
	SLF->em_fx_lifespan = emFxLifespan;
}
