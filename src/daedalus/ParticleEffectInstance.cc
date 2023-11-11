#include "zenkit-capi/daedalus/ParticleEffectInstance.hh"
#include "../Internal.hh"

float ZkParticleEffectInstance_getPpsValue(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_value;
}

ZkString ZkParticleEffectInstance_getPpsScaleKeysS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_scale_keys_s.c_str();
}

int32_t ZkParticleEffectInstance_getPpsIsLooping(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_is_looping;
}

int32_t ZkParticleEffectInstance_getPpsIsSmooth(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_is_smooth;
}

float ZkParticleEffectInstance_getPpsFps(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_fps;
}

ZkString ZkParticleEffectInstance_getPpsCreateEmS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_create_em_s.c_str();
}

float ZkParticleEffectInstance_getPpsCreateEmDelay(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_create_em_delay;
}

ZkString ZkParticleEffectInstance_getShpTypeS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_type_s.c_str();
}

ZkString ZkParticleEffectInstance_getShpForS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_for_s.c_str();
}

ZkString ZkParticleEffectInstance_getShpOffsetVecS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_offset_vec_s.c_str();
}

ZkString ZkParticleEffectInstance_getShpDistribTypeS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_distrib_type_s.c_str();
}

float ZkParticleEffectInstance_getShpDistribWalkSpeed(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_distrib_walk_speed;
}

int32_t ZkParticleEffectInstance_getShpIsVolume(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_is_volume;
}

ZkString ZkParticleEffectInstance_getShpDimS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_dim_s.c_str();
}

ZkString ZkParticleEffectInstance_getShpMeshS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_mesh_s.c_str();
}

int32_t ZkParticleEffectInstance_getShpMeshRenderB(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_mesh_render_b;
}

ZkString ZkParticleEffectInstance_getShpScaleKeysS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_scale_keys_s.c_str();
}

int32_t ZkParticleEffectInstance_getShpScaleIsLooping(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_scale_is_looping;
}

int32_t ZkParticleEffectInstance_getShpScaleIsSmooth(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_scale_is_smooth;
}

float ZkParticleEffectInstance_getShpScaleFps(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_scale_fps;
}

ZkString ZkParticleEffectInstance_getDirModeS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_mode_s.c_str();
}

ZkString ZkParticleEffectInstance_getDirForS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_for_s.c_str();
}

ZkString ZkParticleEffectInstance_getDirModeTargetForS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_mode_target_for_s.c_str();
}

ZkString ZkParticleEffectInstance_getDirModeTargetPosS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_mode_target_pos_s.c_str();
}

float ZkParticleEffectInstance_getDirAngleHead(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_angle_head;
}

float ZkParticleEffectInstance_getDirAngleHeadVar(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_angle_head_var;
}

float ZkParticleEffectInstance_getDirAngleElev(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_angle_elev;
}

float ZkParticleEffectInstance_getDirAngleElevVar(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_angle_elev_var;
}

float ZkParticleEffectInstance_getVelAvg(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vel_avg;
}

float ZkParticleEffectInstance_getVelVar(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vel_var;
}

float ZkParticleEffectInstance_getLspPartAvg(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->lsp_part_avg;
}

float ZkParticleEffectInstance_getLspPartVar(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->lsp_part_var;
}

ZkString ZkParticleEffectInstance_getFlyGravityS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fly_gravity_s.c_str();
}

int32_t ZkParticleEffectInstance_getFlyColldetB(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fly_colldet_b;
}

ZkString ZkParticleEffectInstance_getVisNameS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_name_s.c_str();
}

ZkString ZkParticleEffectInstance_getVisOrientationS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_orientation_s.c_str();
}

int32_t ZkParticleEffectInstance_getVisTexIsQuadpoly(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_is_quadpoly;
}

float ZkParticleEffectInstance_getVisTexAniFps(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_ani_fps;
}

int32_t ZkParticleEffectInstance_getVisTexAniIsLooping(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_ani_is_looping;
}

ZkString ZkParticleEffectInstance_getVisTexColorStartS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_color_start_s.c_str();
}

ZkString ZkParticleEffectInstance_getVisTexColorEndS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_color_end_s.c_str();
}

ZkString ZkParticleEffectInstance_getVisSizeStartS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_size_start_s.c_str();
}

float ZkParticleEffectInstance_getVisSizeEndScale(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_size_end_scale;
}

ZkString ZkParticleEffectInstance_getVisAlphaFuncS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_alpha_func_s.c_str();
}

float ZkParticleEffectInstance_getVisAlphaStart(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_alpha_start;
}

float ZkParticleEffectInstance_getVisAlphaEnd(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_alpha_end;
}

float ZkParticleEffectInstance_getTrlFadeSpeed(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trl_fade_speed;
}

ZkString ZkParticleEffectInstance_getTrlTextureS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trl_texture_s.c_str();
}

float ZkParticleEffectInstance_getTrlWidth(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trl_width;
}

float ZkParticleEffectInstance_getMrkFadesPeed(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mrk_fades_peed;
}

ZkString ZkParticleEffectInstance_getMrktExtureS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mrkt_exture_s.c_str();
}

float ZkParticleEffectInstance_getMrkSize(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mrk_size;
}

ZkString ZkParticleEffectInstance_getFlockMode(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->flock_mode.c_str();
}

float ZkParticleEffectInstance_getFlockStrength(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->flock_strength;
}

int32_t ZkParticleEffectInstance_getUseEmittersFor(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->use_emitters_for;
}

ZkString ZkParticleEffectInstance_getTimeStartEndS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->time_start_end_s.c_str();
}

int32_t ZkParticleEffectInstance_getMBiasAmbientPfx(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->m_bis_ambient_pfx;
}
