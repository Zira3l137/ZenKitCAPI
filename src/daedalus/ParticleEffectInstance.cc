#include "zenkit-capi/daedalus/ParticleEffectInstance.hh"
#include "../Internal.hh"

float ZkParticleEffectInstance_getPpsValue(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_value;
}

void ZkParticleEffectInstance_setPpsValue(ZkParticleEffectInstance* slf, float ppsValue) {
	ZKC_CHECK_NULLV(slf);
	slf->pps_value = ppsValue;
}

ZkString ZkParticleEffectInstance_getPpsScaleKeysS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_scale_keys_s.c_str();
}

void ZkParticleEffectInstance_setPpsScaleKeysS(ZkParticleEffectInstance* slf, ZkString ppsScaleKeysS) {
	ZKC_CHECK_NULLV(slf);
	slf->pps_scale_keys_s = ppsScaleKeysS;
}

int32_t ZkParticleEffectInstance_getPpsIsLooping(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_is_looping;
}

void ZkParticleEffectInstance_setPpsIsLooping(ZkParticleEffectInstance* slf, int32_t ppsIsLooping) {
	ZKC_CHECK_NULLV(slf);
	slf->pps_is_looping = ppsIsLooping;
}

int32_t ZkParticleEffectInstance_getPpsIsSmooth(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_is_smooth;
}

void ZkParticleEffectInstance_setPpsIsSmooth(ZkParticleEffectInstance* slf, int32_t ppsIsSmooth) {
	ZKC_CHECK_NULLV(slf);
	slf->pps_is_smooth = ppsIsSmooth;
}

float ZkParticleEffectInstance_getPpsFps(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_fps;
}

void ZkParticleEffectInstance_setPpsFps(ZkParticleEffectInstance* slf, float ppsFps) {
	ZKC_CHECK_NULLV(slf);
	slf->pps_fps = ppsFps;
}

ZkString ZkParticleEffectInstance_getPpsCreateEmS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_create_em_s.c_str();
}

void ZkParticleEffectInstance_setPpsCreateEmS(ZkParticleEffectInstance* slf, ZkString ppsCreateEmS) {
	ZKC_CHECK_NULLV(slf);
	slf->pps_create_em_s = ppsCreateEmS;
}

float ZkParticleEffectInstance_getPpsCreateEmDelay(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pps_create_em_delay;
}

void ZkParticleEffectInstance_setPpsCreateEmDelay(ZkParticleEffectInstance* slf, float ppsCreateEmDelay) {
	ZKC_CHECK_NULLV(slf);
	slf->pps_create_em_delay = ppsCreateEmDelay;
}

ZkString ZkParticleEffectInstance_getShpTypeS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_type_s.c_str();
}

void ZkParticleEffectInstance_setShpTypeS(ZkParticleEffectInstance* slf, ZkString shpTypeS) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_type_s = shpTypeS;
}

ZkString ZkParticleEffectInstance_getShpForS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_for_s.c_str();
}

void ZkParticleEffectInstance_setShpForS(ZkParticleEffectInstance* slf, ZkString shpForS) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_for_s = shpForS;
}

ZkString ZkParticleEffectInstance_getShpOffsetVecS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_offset_vec_s.c_str();
}

void ZkParticleEffectInstance_setShpOffsetVecS(ZkParticleEffectInstance* slf, ZkString shpOffsetVecS) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_offset_vec_s = shpOffsetVecS;
}

ZkString ZkParticleEffectInstance_getShpDistribTypeS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_distrib_type_s.c_str();
}

void ZkParticleEffectInstance_setShpDistribTypeS(ZkParticleEffectInstance* slf, ZkString shpDistribTypeS) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_distrib_type_s = shpDistribTypeS;
}

float ZkParticleEffectInstance_getShpDistribWalkSpeed(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_distrib_walk_speed;
}

void ZkParticleEffectInstance_setShpDistribWalkSpeed(ZkParticleEffectInstance* slf, float shpDistribWalkSpeed) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_distrib_walk_speed = shpDistribWalkSpeed;
}

int32_t ZkParticleEffectInstance_getShpIsVolume(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_is_volume;
}

void ZkParticleEffectInstance_setShpIsVolume(ZkParticleEffectInstance* slf, int32_t shpIsVolume) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_is_volume = shpIsVolume;
}

ZkString ZkParticleEffectInstance_getShpDimS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_dim_s.c_str();
}

void ZkParticleEffectInstance_setShpDimS(ZkParticleEffectInstance* slf, ZkString shpDimS) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_dim_s = shpDimS;
}

ZkString ZkParticleEffectInstance_getShpMeshS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_mesh_s.c_str();
}

void ZkParticleEffectInstance_setShpMeshS(ZkParticleEffectInstance* slf, ZkString shpMeshS) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_mesh_s = shpMeshS;
}

int32_t ZkParticleEffectInstance_getShpMeshRenderB(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_mesh_render_b;
}

void ZkParticleEffectInstance_setShpMeshRenderB(ZkParticleEffectInstance* slf, int32_t shpMeshRenderB) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_mesh_render_b = shpMeshRenderB;
}

ZkString ZkParticleEffectInstance_getShpScaleKeysS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_scale_keys_s.c_str();
}

void ZkParticleEffectInstance_setShpScaleKeysS(ZkParticleEffectInstance* slf, ZkString shpScaleKeysS) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_scale_keys_s = shpScaleKeysS;
}

int32_t ZkParticleEffectInstance_getShpScaleIsLooping(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_scale_is_looping;
}

void ZkParticleEffectInstance_setShpScaleIsLooping(ZkParticleEffectInstance* slf, int32_t shpScaleIsLooping) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_scale_is_looping = shpScaleIsLooping;
}

int32_t ZkParticleEffectInstance_getShpScaleIsSmooth(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_scale_is_smooth;
}

void ZkParticleEffectInstance_setShpScaleIsSmooth(ZkParticleEffectInstance* slf, int32_t shpScaleIsSmooth) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_scale_is_smooth = shpScaleIsSmooth;
}

float ZkParticleEffectInstance_getShpScaleFps(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shp_scale_fps;
}

void ZkParticleEffectInstance_setShpScaleFps(ZkParticleEffectInstance* slf, float shpScaleFps) {
	ZKC_CHECK_NULLV(slf);
	slf->shp_scale_fps = shpScaleFps;
}

ZkString ZkParticleEffectInstance_getDirModeS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_mode_s.c_str();
}

void ZkParticleEffectInstance_setDirModeS(ZkParticleEffectInstance* slf, ZkString dirModeS) {
	ZKC_CHECK_NULLV(slf);
	slf->dir_mode_s = dirModeS;
}

ZkString ZkParticleEffectInstance_getDirForS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_for_s.c_str();
}

void ZkParticleEffectInstance_setDirForS(ZkParticleEffectInstance* slf, ZkString dirForS) {
	ZKC_CHECK_NULLV(slf);
	slf->dir_for_s = dirForS;
}

ZkString ZkParticleEffectInstance_getDirModeTargetForS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_mode_target_for_s.c_str();
}

void ZkParticleEffectInstance_setDirModeTargetForS(ZkParticleEffectInstance* slf, ZkString dirModeTargetForS) {
	ZKC_CHECK_NULLV(slf);
	slf->dir_mode_target_for_s = dirModeTargetForS;
}

ZkString ZkParticleEffectInstance_getDirModeTargetPosS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_mode_target_pos_s.c_str();
}

void ZkParticleEffectInstance_setDirModeTargetPosS(ZkParticleEffectInstance* slf, ZkString dirModeTargetPosS) {
	ZKC_CHECK_NULLV(slf);
	slf->dir_mode_target_pos_s = dirModeTargetPosS;
}

float ZkParticleEffectInstance_getDirAngleHead(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_angle_head;
}

void ZkParticleEffectInstance_setDirAngleHead(ZkParticleEffectInstance* slf, float dirAngleHead) {
	ZKC_CHECK_NULLV(slf);
	slf->dir_angle_head = dirAngleHead;
}

float ZkParticleEffectInstance_getDirAngleHeadVar(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_angle_head_var;
}

void ZkParticleEffectInstance_setDirAngleHeadVar(ZkParticleEffectInstance* slf, float dirAngleHeadVar) {
	ZKC_CHECK_NULLV(slf);
	slf->dir_angle_head_var = dirAngleHeadVar;
}

float ZkParticleEffectInstance_getDirAngleElev(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_angle_elev;
}

void ZkParticleEffectInstance_setDirAngleElev(ZkParticleEffectInstance* slf, float dirAngleElev) {
	ZKC_CHECK_NULLV(slf);
	slf->dir_angle_elev = dirAngleElev;
}

float ZkParticleEffectInstance_getDirAngleElevVar(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dir_angle_elev_var;
}

void ZkParticleEffectInstance_setDirAngleElevVar(ZkParticleEffectInstance* slf, float dirAngleElevVar) {
	ZKC_CHECK_NULLV(slf);
	slf->dir_angle_elev_var = dirAngleElevVar;
}

float ZkParticleEffectInstance_getVelAvg(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vel_avg;
}

void ZkParticleEffectInstance_setVelAvg(ZkParticleEffectInstance* slf, float velAvg) {
	ZKC_CHECK_NULLV(slf);
	slf->vel_avg = velAvg;
}

float ZkParticleEffectInstance_getVelVar(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vel_var;
}

void ZkParticleEffectInstance_setVelVar(ZkParticleEffectInstance* slf, float velVar) {
	ZKC_CHECK_NULLV(slf);
	slf->vel_var = velVar;
}

float ZkParticleEffectInstance_getLspPartAvg(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->lsp_part_avg;
}

void ZkParticleEffectInstance_setLspPartAvg(ZkParticleEffectInstance* slf, float lspPartAvg) {
	ZKC_CHECK_NULLV(slf);
	slf->lsp_part_avg = lspPartAvg;
}

float ZkParticleEffectInstance_getLspPartVar(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->lsp_part_var;
}

void ZkParticleEffectInstance_setLspPartVar(ZkParticleEffectInstance* slf, float lspPartVar) {
	ZKC_CHECK_NULLV(slf);
	slf->lsp_part_var = lspPartVar;
}

ZkString ZkParticleEffectInstance_getFlyGravityS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fly_gravity_s.c_str();
}

void ZkParticleEffectInstance_setFlyGravityS(ZkParticleEffectInstance* slf, ZkString flyGravityS) {
	ZKC_CHECK_NULLV(slf);
	slf->fly_gravity_s = flyGravityS;
}

int32_t ZkParticleEffectInstance_getFlyColldetB(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->fly_colldet_b;
}

void ZkParticleEffectInstance_setFlyColldetB(ZkParticleEffectInstance* slf, int32_t flyColldetB) {
	ZKC_CHECK_NULLV(slf);
	slf->fly_colldet_b = flyColldetB;
}

ZkString ZkParticleEffectInstance_getVisNameS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_name_s.c_str();
}

void ZkParticleEffectInstance_setVisNameS(ZkParticleEffectInstance* slf, ZkString visNameS) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_name_s = visNameS;
}

ZkString ZkParticleEffectInstance_getVisOrientationS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_orientation_s.c_str();
}

void ZkParticleEffectInstance_setVisOrientationS(ZkParticleEffectInstance* slf, ZkString visOrientationS) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_orientation_s = visOrientationS;
}

int32_t ZkParticleEffectInstance_getVisTexIsQuadpoly(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_is_quadpoly;
}

void ZkParticleEffectInstance_setVisTexIsQuadpoly(ZkParticleEffectInstance* slf, int32_t visTexIsQuadpoly) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_tex_is_quadpoly = visTexIsQuadpoly;
}

float ZkParticleEffectInstance_getVisTexAniFps(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_ani_fps;
}

void ZkParticleEffectInstance_setVisTexAniFps(ZkParticleEffectInstance* slf, float visTexAniFps) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_tex_ani_fps = visTexAniFps;
}

int32_t ZkParticleEffectInstance_getVisTexAniIsLooping(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_ani_is_looping;
}

void ZkParticleEffectInstance_setVisTexAniIsLooping(ZkParticleEffectInstance* slf, int32_t visTexAniIsLooping) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_tex_ani_is_looping = visTexAniIsLooping;
}

ZkString ZkParticleEffectInstance_getVisTexColorStartS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_color_start_s.c_str();
}

void ZkParticleEffectInstance_setVisTexColorStartS(ZkParticleEffectInstance* slf, ZkString visTexColorStartS) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_tex_color_start_s = visTexColorStartS;
}

ZkString ZkParticleEffectInstance_getVisTexColorEndS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_tex_color_end_s.c_str();
}

void ZkParticleEffectInstance_setVisTexColorEndS(ZkParticleEffectInstance* slf, ZkString visTexColorEndS) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_tex_color_end_s = visTexColorEndS;
}

ZkString ZkParticleEffectInstance_getVisSizeStartS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_size_start_s.c_str();
}

void ZkParticleEffectInstance_setVisSizeStartS(ZkParticleEffectInstance* slf, ZkString visSizeStartS) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_size_start_s = visSizeStartS;
}

float ZkParticleEffectInstance_getVisSizeEndScale(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_size_end_scale;
}

void ZkParticleEffectInstance_setVisSizeEndScale(ZkParticleEffectInstance* slf, float visSizeEndScale) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_size_end_scale = visSizeEndScale;
}

ZkString ZkParticleEffectInstance_getVisAlphaFuncS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_alpha_func_s.c_str();
}

void ZkParticleEffectInstance_setVisAlphaFuncS(ZkParticleEffectInstance* slf, ZkString visAlphaFuncS) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_alpha_func_s = visAlphaFuncS;
}

float ZkParticleEffectInstance_getVisAlphaStart(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_alpha_start;
}

void ZkParticleEffectInstance_setVisAlphaStart(ZkParticleEffectInstance* slf, float visAlphaStart) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_alpha_start = visAlphaStart;
}

float ZkParticleEffectInstance_getVisAlphaEnd(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vis_alpha_end;
}

void ZkParticleEffectInstance_setVisAlphaEnd(ZkParticleEffectInstance* slf, float visAlphaEnd) {
	ZKC_CHECK_NULLV(slf);
	slf->vis_alpha_end = visAlphaEnd;
}

float ZkParticleEffectInstance_getTrlFadeSpeed(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trl_fade_speed;
}

void ZkParticleEffectInstance_setTrlFadeSpeed(ZkParticleEffectInstance* slf, float trlFadeSpeed) {
	ZKC_CHECK_NULLV(slf);
	slf->trl_fade_speed = trlFadeSpeed;
}

ZkString ZkParticleEffectInstance_getTrlTextureS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trl_texture_s.c_str();
}

void ZkParticleEffectInstance_setTrlTextureS(ZkParticleEffectInstance* slf, ZkString trlTextureS) {
	ZKC_CHECK_NULLV(slf);
	slf->trl_texture_s = trlTextureS;
}

float ZkParticleEffectInstance_getTrlWidth(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trl_width;
}

void ZkParticleEffectInstance_setTrlWidth(ZkParticleEffectInstance* slf, float trlWidth) {
	ZKC_CHECK_NULLV(slf);
	slf->trl_width = trlWidth;
}

float ZkParticleEffectInstance_getMrkFadesPeed(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mrk_fades_peed;
}

void ZkParticleEffectInstance_setMrkFadesPeed(ZkParticleEffectInstance* slf, float mrkFadesPeed) {
	ZKC_CHECK_NULLV(slf);
	slf->mrk_fades_peed = mrkFadesPeed;
}

ZkString ZkParticleEffectInstance_getMrktExtureS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mrkt_exture_s.c_str();
}

void ZkParticleEffectInstance_setMrktExtureS(ZkParticleEffectInstance* slf, ZkString mrktExtureS) {
	ZKC_CHECK_NULLV(slf);
	slf->mrkt_exture_s = mrktExtureS;
}

float ZkParticleEffectInstance_getMrkSize(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mrk_size;
}

void ZkParticleEffectInstance_setMrkSize(ZkParticleEffectInstance* slf, float mrkSize) {
	ZKC_CHECK_NULLV(slf);
	slf->mrk_size = mrkSize;
}

ZkString ZkParticleEffectInstance_getFlockMode(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->flock_mode.c_str();
}

void ZkParticleEffectInstance_setFlockMode(ZkParticleEffectInstance* slf, ZkString flockMode) {
	ZKC_CHECK_NULLV(slf);
	slf->flock_mode = flockMode;
}

float ZkParticleEffectInstance_getFlockStrength(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->flock_strength;
}

void ZkParticleEffectInstance_setFlockStrength(ZkParticleEffectInstance* slf, float flockStrength) {
	ZKC_CHECK_NULLV(slf);
	slf->flock_strength = flockStrength;
}

int32_t ZkParticleEffectInstance_getUseEmittersFor(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->use_emitters_for;
}

void ZkParticleEffectInstance_setUseEmittersFor(ZkParticleEffectInstance* slf, int32_t useEmittersFor) {
	ZKC_CHECK_NULLV(slf);
	slf->use_emitters_for = useEmittersFor;
}

ZkString ZkParticleEffectInstance_getTimeStartEndS(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->time_start_end_s.c_str();
}

void ZkParticleEffectInstance_setTimeStartEndS(ZkParticleEffectInstance* slf, ZkString timeStartEndS) {
	ZKC_CHECK_NULLV(slf);
	slf->time_start_end_s = timeStartEndS;
}

int32_t ZkParticleEffectInstance_getMBiasAmbientPfx(ZkParticleEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->m_bis_ambient_pfx;
}

void ZkParticleEffectInstance_setMBiasAmbientPfx(ZkParticleEffectInstance* slf, int32_t mBiasAmbientPfx) {
	ZKC_CHECK_NULLV(slf);
	slf->m_bis_ambient_pfx = mBiasAmbientPfx;
}
