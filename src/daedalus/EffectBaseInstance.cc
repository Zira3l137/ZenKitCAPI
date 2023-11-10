#include "czenkit/daedalus/EffectBaseInstance.hh"

#include "../Internal.hh"

ZkString ZkEffectBaseInstance_getVisNameS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vis_name_s.c_str();
}

ZkString ZkEffectBaseInstance_getVisSizeS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vis_size_s.c_str();
}

float ZkEffectBaseInstance_getVisAlpha(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vis_alpha;
}

ZkString ZkEffectBaseInstance_getVisAlphaBlendFuncS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vis_alpha_blend_func_s.c_str();
}

float ZkEffectBaseInstance_getVisTexAniFps(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vis_tex_ani_fps;
}

int32_t ZkEffectBaseInstance_getVisTexAniIsLooping(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vis_tex_ani_is_looping;
}

ZkString ZkEffectBaseInstance_getEmTrjModeS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_mode_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmTrjOriginNode(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_origin_node.c_str();
}

ZkString ZkEffectBaseInstance_getEmTrjTargetNode(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_target_node.c_str();
}

float ZkEffectBaseInstance_getEmTrjTargetRange(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_target_range;
}

float ZkEffectBaseInstance_getEmTrjTargetAzi(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_target_azi;
}

float ZkEffectBaseInstance_getEmTrjTargetElev(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_target_elev;
}

int32_t ZkEffectBaseInstance_getEmTrjNumKeys(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_num_keys;
}

int32_t ZkEffectBaseInstance_getEmTrjNumKeysVar(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_num_keys_var;
}

float ZkEffectBaseInstance_getEmTrjAngleElevVar(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_angle_elev_var;
}

float ZkEffectBaseInstance_getEmTrjAngleHeadVar(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_angle_head_var;
}

float ZkEffectBaseInstance_getEmTrjKeyDistVar(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_key_dist_var;
}

ZkString ZkEffectBaseInstance_getEmTrjLoopModeS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_loop_mode_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmTrjEaseFuncS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_ease_func_s.c_str();
}

float ZkEffectBaseInstance_getEmTrjEaseVel(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_ease_vel;
}

float ZkEffectBaseInstance_getEmTrjDynUpdateDelay(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_dyn_update_delay;
}

int32_t ZkEffectBaseInstance_getEmTrjDynUpdateTargetOnly(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_trj_dyn_update_target_only;
}

ZkString ZkEffectBaseInstance_getEmFxCreateS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_create_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmFxInvestOriginS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_invest_origin_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmFxInvestTargetS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_invest_target_s.c_str();
}

float ZkEffectBaseInstance_getEmFxTriggerDelay(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_trigger_delay;
}

int32_t ZkEffectBaseInstance_getEmFxCreateDownTrj(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_create_down_trj;
}

ZkString ZkEffectBaseInstance_getEmActionCollDynS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_action_coll_dyn_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmActionCollStatS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_action_coll_stat_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmFxCollStatS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_coll_stat_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmFxCollDynS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_coll_dyn_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmFxCollStatAlignS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_coll_stat_align_s.c_str();
}

ZkString ZkEffectBaseInstance_getEmFxCollDynAlignS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_coll_dyn_align_s.c_str();
}

float ZkEffectBaseInstance_getEmFxLifespan(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_lifespan;
}

int32_t ZkEffectBaseInstance_getEmCheckCollision(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_check_collision;
}

int32_t ZkEffectBaseInstance_getEmAdjustShpToOrigin(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_adjust_shp_to_origin;
}

float ZkEffectBaseInstance_getEmInvestNextKeyDuration(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_invest_next_key_duration;
}

float ZkEffectBaseInstance_getEmFlyGravity(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fly_gravity;
}

ZkString ZkEffectBaseInstance_getEmSelfRotVelS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_self_rot_vel_s.c_str();
}

ZkString ZkEffectBaseInstance_getLightPresetName(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->light_preset_name.c_str();
}

ZkString ZkEffectBaseInstance_getSfxId(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_id.c_str();
}

int32_t ZkEffectBaseInstance_getSfxIsAmbient(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sfx_is_ambient;
}

int32_t ZkEffectBaseInstance_getSendAssessMagic(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->send_assess_magic;
}

float ZkEffectBaseInstance_getSecsPerDamage(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->secs_per_damage;
}

ZkString ZkEffectBaseInstance_getEmFxCollDynPercS(ZkEffectBaseInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->em_fx_coll_dyn_perc_s.c_str();
}

ZkString ZkEffectBaseInstance_getUserString(ZkEffectBaseInstance const* slf, ZkSize i) {
	CZK_CHECK_NULL(slf);
	return slf->user_string[i].c_str();
}
