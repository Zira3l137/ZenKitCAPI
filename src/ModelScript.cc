// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/ModelScript.h"

#include "Internal.hh"

ZKC_LOADER(ZkModelScript);
ZKC_PATH_LOADER(ZkModelScript);
ZKC_VFS_LOADER(ZkModelScript);
ZKC_DELETER(ZkModelScript);

ZkString ZkModelScript_getSkeletonName(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->skeleton.name.c_str();
}

ZkBool ZkModelScript_getSkeletonMeshDisabled(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->skeleton.disable_mesh;
}

ZkSize ZkModelScript_getMeshCount(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->meshes.size();
}

ZkSize ZkModelScript_getDisabledAnimationsCount(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->disabled_animations.size();
}

ZkSize ZkModelScript_getAnimationCombineCount(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->combinations.size();
}

ZkSize ZkModelScript_getAnimationBlendCount(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blends.size();
}

ZkSize ZkModelScript_getAnimationAliasCount(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->aliases.size();
}

ZkSize ZkModelScript_getModelTagCount(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->model_tags.size();
}

ZkSize ZkModelScript_getAnimationCount(ZkModelScript const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->animations.size();
}

ZkString ZkModelScript_getDisabledAnimation(ZkModelScript const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->disabled_animations, i);
	return slf->disabled_animations[i].c_str();
}

ZkString ZkModelScript_getMesh(ZkModelScript const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->meshes, i);
	return slf->meshes[i].c_str();
}

ZkAnimationCombine const* ZkModelScript_getAnimationCombine(ZkModelScript const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->combinations, i);
	return &slf->combinations[i];
}

ZkAnimationBlend const* ZkModelScript_getAnimationBlend(ZkModelScript const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->blends, i);
	return &slf->blends[i];
}

ZkAnimationAlias const* ZkModelScript_getAnimationAlias(ZkModelScript const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->aliases, i);
	return &slf->aliases[i];
}

ZkString ZkModelScript_getModelTag(ZkModelScript const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->model_tags, i);
	return slf->model_tags[i].bone.c_str();
}

ZkAnimation const* ZkModelScript_getAnimation(ZkModelScript const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->animations, i);
	return &slf->animations[i];
}

void ZkModelScript_enumerateAnimationCombines(ZkModelScript const* slf, ZkAnimationCombineEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->combinations) {
		if (cb(ctx, &v)) break;
	}
}

void ZkModelScript_enumerateMeshes(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->meshes) {
		if (cb(ctx, v.c_str())) break;
	}
}

void ZkModelScript_enumerateDisabledAnimations(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->disabled_animations) {
		if (cb(ctx, v.c_str())) break;
	}
}

void ZkModelScript_enumerateAnimationBlends(ZkModelScript const* slf, ZkAnimationBlendEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->blends) {
		if (cb(ctx, &v)) break;
	}
}

void ZkModelScript_enumerateAnimationAliases(ZkModelScript const* slf, ZkAnimationAliasEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->aliases) {
		if (cb(ctx, &v)) break;
	}
}

void ZkModelScript_enumerateModelTags(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->model_tags) {
		if (cb(ctx, v.bone.c_str())) break;
	}
}

void ZkModelScript_enumerateAnimations(ZkModelScript const* slf, ZkAnimationEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->animations) {
		if (cb(ctx, &v)) break;
	}
}

// ZkAnimation

ZkString ZkAnimation_getName(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

uint32_t ZkAnimation_getLayer(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->layer;
}

ZkString ZkAnimation_getNext(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->next.c_str();
}

float ZkAnimation_getBlendIn(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_in;
}

float ZkAnimation_getBlendOut(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_out;
}

ZkAnimationFlag ZkAnimation_getFlags(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationFlag>(slf->flags);
}

ZkString ZkAnimation_getModel(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->model.c_str();
}

ZkAnimationDirection ZkAnimation_getDirection(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationDirection>(slf->direction);
}

int32_t ZkAnimation_getFirstFrame(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->first_frame;
}

int32_t ZkAnimation_getLastFrame(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->last_frame;
}

float ZkAnimation_getFps(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->fps;
}

float ZkAnimation_getSpeed(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->speed;
}

float ZkAnimation_getCollisionVolumeScale(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->collision_volume_scale;
}

ZkSize ZkAnimation_getEventTagCount(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->events.size();
}

ZkSize ZkAnimation_getParticleEffectCount(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->pfx.size();
}

ZkSize ZkAnimation_getParticleEffectStopCount(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->pfx_stop.size();
}

ZkSize ZkAnimation_getSoundEffectCount(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx.size();
}

ZkSize ZkAnimation_getSoundEffectGroundCount(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sfx_ground.size();
}

ZkSize ZkAnimation_getMorphAnimationCount(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->morph.size();
}

ZkSize ZkAnimation_getCameraTremorCount(ZkAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->tremors.size();
}

ZkEventTag const* ZkAnimation_getEventTag(ZkAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->events, i);
	return &slf->events[i];
}

ZkEventParticleEffect const* ZkAnimation_getParticleEffect(ZkAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->pfx, i);
	return &slf->pfx[i];
}

ZkEventParticleEffectStop const* ZkAnimation_getParticleEffectStop(ZkAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->pfx_stop, i);
	return &slf->pfx_stop[i];
}

ZkEventSoundEffect const* ZkAnimation_getSoundEffect(ZkAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->sfx, i);
	return &slf->sfx[i];
}

ZkEventSoundEffectGround const* ZkAnimation_getSoundEffectGround(ZkAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->sfx_ground, i);
	return &slf->sfx_ground[i];
}

ZkEventMorphAnimation const* ZkAnimation_getMorphAnimation(ZkAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->morph, i);
	return &slf->morph[i];
}

ZkEventCameraTremor const* ZkAnimation_getCameraTremor(ZkAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->tremors, i);
	return &slf->tremors[i];
}

void ZkAnimation_enumerateEventTags(ZkAnimation const* slf, ZkEventTagEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->events) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateParticleEffects(ZkAnimation const* slf, ZkEventParticlEffectEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->pfx) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateParticleEffectStops(ZkAnimation const* slf,
                                              ZkEventParticleEffectStopEnumerator cb,
                                              void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);
	for (auto& v : slf->pfx_stop) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateSoundEffects(ZkAnimation const* slf, ZkEventSoundEffectEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->sfx) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateSoundEffectGrounds(ZkAnimation const* slf, ZkEventSoundEffectGroundEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->sfx_ground) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateMorphAnimations(ZkAnimation const* slf, ZkEventMorphAnimationEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->morph) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateCameraTremors(ZkAnimation const* slf, ZkEventCameraTremorEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->tremors) {
		if (cb(ctx, &v)) break;
	}
}

// ZkEventTag

int32_t ZkEventTag_getFrame(ZkEventTag const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame;
}

ZkEventType ZkEventTag_getType(ZkEventTag const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkEventType>(slf->type);
}

ZkString ZkEventTag_getSlot(ZkEventTag const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	if (i != 0) {
		return slf->slot2.c_str();
	}

	return slf->slot.c_str();
}

ZkString ZkEventTag_getItem(ZkEventTag const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->item.c_str();
}

int32_t const* ZkEventTag_getFrames(ZkEventTag const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->frames.size();
	return slf->frames.data();
}

ZkFightMode ZkEventTag_getFightMode(ZkEventTag const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkFightMode>(slf->fight_mode);
}

ZkBool ZkEventTag_getIsAttached(ZkEventTag const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->attached;
}

// ZkEventParticleEffect

int32_t ZkEventParticleEffect_getFrame(ZkEventParticleEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame;
}

int32_t ZkEventParticleEffect_getIndex(ZkEventParticleEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->index;
}

ZkString ZkEventParticleEffect_getName(ZkEventParticleEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkString ZkEventParticleEffect_getPosition(ZkEventParticleEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->position.c_str();
}

ZkBool ZkEventParticleEffect_getIsAttached(ZkEventParticleEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->attached;
}

// ZkEventParticleEffectStop

int32_t ZkEventParticleEffectStop_getFrame(ZkEventParticleEffectStop const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame;
}

int32_t ZkEventParticleEffectStop_getIndex(ZkEventParticleEffectStop const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->index;
}

// ZkEventCameraTremor

int32_t ZkEventCameraTremor_getFrame(ZkEventCameraTremor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame;
}

int32_t ZkEventCameraTremor_getField1(ZkEventCameraTremor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->field1;
}

int32_t ZkEventCameraTremor_getField2(ZkEventCameraTremor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->field2;
}

int32_t ZkEventCameraTremor_getField3(ZkEventCameraTremor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->field3;
}

int32_t ZkEventCameraTremor_getField4(ZkEventCameraTremor const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->field4;
}

// ZkEventSoundEffect

int32_t ZkEventSoundEffect_getFrame(ZkEventSoundEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame;
}

ZkString ZkEventSoundEffect_getName(ZkEventSoundEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

float ZkEventSoundEffect_getRange(ZkEventSoundEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->range;
}

ZkBool ZkEventSoundEffect_getEmptySlot(ZkEventSoundEffect const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->empty_slot;
}

// ZkEventSoundEffectGround

int32_t ZkEventSoundEffectGround_getFrame(ZkEventSoundEffectGround const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame;
}

ZkString ZkEventSoundEffectGround_getName(ZkEventSoundEffectGround const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

float ZkEventSoundEffectGround_getRange(ZkEventSoundEffectGround const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->range;
}

ZkBool ZkEventSoundEffectGround_getEmptySlot(ZkEventSoundEffectGround const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->empty_slot;
}

// ZkMorphAnimation

int32_t ZkMorphAnimation_getFrame(ZkEventMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame;
}

ZkString ZkMorphAnimation_getAnimation(ZkEventMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->animation.c_str();
}

ZkString ZkMorphAnimation_getNode(ZkEventMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->node.c_str();
}

// ZkAnimationCombine

ZkString ZkAnimationCombine_getName(ZkAnimationCombine const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

uint32_t ZkAnimationCombine_getLayer(ZkAnimationCombine const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->layer;
}

ZkString ZkAnimationCombine_getNext(ZkAnimationCombine const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->next.c_str();
}

float ZkAnimationCombine_getBlendIn(ZkAnimationCombine const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_in;
}

float ZkAnimationCombine_getBlendOut(ZkAnimationCombine const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_out;
}

ZkAnimationFlag ZkAnimationCombine_getFlags(ZkAnimationCombine const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationFlag>(slf->flags);
}

ZkString ZkAnimationCombine_getModel(ZkAnimationCombine const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->model.c_str();
}

int32_t ZkAnimationCombine_getLastFrame(ZkAnimationCombine const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->last_frame;
}

// ZkAnimationBlend

ZkString ZkAnimationBlend_getName(ZkAnimationBlend const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkString ZkAnimationBlend_getNext(ZkAnimationBlend const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->next.c_str();
}

float ZkAnimationBlend_getBlendIn(ZkAnimationBlend const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_in;
}

float ZkAnimationBlend_getBlendOut(ZkAnimationBlend const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_out;
}

// ZkAnimationAlias

ZkString ZkAnimationAlias_getName(ZkAnimationAlias const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

uint32_t ZkAnimationAlias_getLayer(ZkAnimationAlias const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->layer;
}

ZkString ZkAnimationAlias_getNext(ZkAnimationAlias const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->next.c_str();
}

float ZkAnimationAlias_getBlendIn(ZkAnimationAlias const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_in;
}

float ZkAnimationAlias_getBlendOut(ZkAnimationAlias const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_out;
}

ZkAnimationFlag ZkAnimationAlias_getFlags(ZkAnimationAlias const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationFlag>(slf->flags);
}

ZkString ZkAnimationAlias_getAlias(ZkAnimationAlias const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->alias.c_str();
}

ZkAnimationDirection ZkAnimationAlias_getDirection(ZkAnimationAlias const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkAnimationDirection>(slf->direction);
}
