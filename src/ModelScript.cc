// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/ModelScript.h"

ZkModelScript* ZkModelScript_load(ZkRead* buf) {
	if (buf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_load");
		return nullptr;
	}

	try {
		ZkModelScript obj {};
		obj.load(buf);
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkModelScript_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModelScript* ZkModelScript_loadPath(ZkString path) {
	if (path == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkModelScript obj {};
		obj.load(buf.get());
		return CZK_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		CZK_LOG_ERROR("ZkModelScript_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModelScript* ZkModelScript_loadVfs(ZkVfs* vfs, ZkString name)  {
	if (vfs == nullptr || name == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkModelScript_load(rd.get());
}

void ZkModelScript_del(ZkModelScript* slf) {
	delete slf;
}

ZkString ZkModelScript_getSkeletonName(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getSkeletonName");
		return nullptr;
	}

	return slf->skeleton.name.c_str();
}

ZkBool ZkModelScript_getSkeletonMeshDisabled(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getSkeletonMeshDisabled");
		return false;
	}

	return slf->skeleton.disable_mesh;
}

ZkSize ZkModelScript_getMeshCount(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getMeshCount");
		return 0;
	}

	return slf->meshes.size();
}

ZkSize ZkModelScript_getDisabledAnimationsCount(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getDisabledAnimationsCount");
		return 0;
	}

	return slf->disabled_animations.size();
}

ZkSize ZkModelScript_getAnimationCombineCount(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getAnimationCombineCount");
		return 0;
	}

	return slf->combinations.size();
}

ZkSize ZkModelScript_getAnimationBlendCount(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getAnimationBlendCount");
		return 0;
	}

	return slf->blends.size();
}

ZkSize ZkModelScript_getAnimationAliasCount(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getAnimationAliasCount");
		return 0;
	}

	return slf->aliases.size();
}

ZkSize ZkModelScript_getModelTagCount(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getModelTagCount");
		return 0;
	}

	return slf->model_tags.size();
}

ZkSize ZkModelScript_getAnimationCount(ZkModelScript const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getAnimationCount");
		return 0;
	}

	return slf->animations.size();
}


ZkString ZkModelScript_getDisabledAnimation(ZkModelScript const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getDisabledAnimation");
		return nullptr;
	}

	if (i >= slf->disabled_animations.size()) {
		CZK_LOG_ERROR("ZkModelScript_getDisabledAnimation() failed: index out of bounds");
		return nullptr;
	}

	return slf->disabled_animations[i].c_str();
}

ZkString ZkModelScript_getMesh(ZkModelScript const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getMesh");
		return nullptr;
	}

	if (i >= slf->meshes.size()) {
		CZK_LOG_ERROR("ZkModelScript_getMesh() failed: index out of bounds");
		return nullptr;
	}

	return slf->meshes[i].c_str();
}

ZkAnimationCombine const* ZkModelScript_getAnimationCombine(ZkModelScript const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getAnimationCombine");
		return nullptr;
	}

	if (i >= slf->combinations.size()) {
		CZK_LOG_ERROR("ZkModelScript_getAnimationCombine() failed: index out of bounds");
		return nullptr;
	}

	return &slf->combinations[i];
}

ZkAnimationBlend const* ZkModelScript_getAnimationBlend(ZkModelScript const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getAnimationBlend");
		return nullptr;
	}

	if (i >= slf->blends.size()) {
		CZK_LOG_ERROR("ZkModelScript_getAnimationBlend() failed: index out of bounds");
		return nullptr;
	}

	return &slf->blends[i];
}

ZkAnimationAlias const* ZkModelScript_getAnimationAlias(ZkModelScript const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getAnimationAlias");
		return nullptr;
	}

	if (i >= slf->aliases.size()) {
		CZK_LOG_ERROR("ZkModelScript_getAnimationAlias() failed: index out of bounds");
		return nullptr;
	}

	return &slf->aliases[i];
}

ZkString ZkModelScript_getModelTag(ZkModelScript const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getModelTag");
		return nullptr;
	}

	if (i >= slf->model_tags.size()) {
		CZK_LOG_ERROR("ZkModelScript_getModelTag() failed: index out of bounds");
		return nullptr;
	}

	return slf->model_tags[i].bone.c_str();
}

ZkAnimation const* ZkModelScript_getAnimation(ZkModelScript const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_getAnimation");
		return nullptr;
	}

	if (i >= slf->animations.size()) {
		CZK_LOG_ERROR("ZkModelScript_getAnimation() failed: index out of bounds");
		return nullptr;
	}

	return &slf->animations[i];
}


void ZkModelScript_enumerateAnimationCombines(ZkModelScript const* slf, ZkAnimationCombineEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_enumerateAnimationCombines");
		return;
	}

	for (auto& v : slf->combinations) {
		if (cb(ctx, &v)) break;
	}
}

void ZkModelScript_enumerateMeshes(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_enumerateMeshes");
		return;
	}

	for (auto& v : slf->meshes) {
		if (cb(ctx, v.c_str())) break;
	}
}

void ZkModelScript_enumerateDisabledAnimations(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_enumerateDisabledAnimations");
		return;
	}

	for (auto& v : slf->disabled_animations) {
		if (cb(ctx, v.c_str())) break;
	}
}

void ZkModelScript_enumerateAnimationBlends(ZkModelScript const* slf, ZkAnimationBlendEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_enumerateAnimationBlends");
		return;
	}

	for (auto& v : slf->blends) {
		if (cb(ctx, &v)) break;
	}
}

void ZkModelScript_enumerateAnimationAliases(ZkModelScript const* slf, ZkAnimationAliasEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_enumerateAnimationAliases");
		return;
	}

	for (auto& v : slf->aliases) {
		if (cb(ctx, &v)) break;
	}
}

void ZkModelScript_enumerateModelTags(ZkModelScript const* slf, ZkStringEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_enumerateModelTags");
		return;
	}

	for (auto& v : slf->model_tags) {
		if (cb(ctx, v.bone.c_str())) break;
	}
}

void ZkModelScript_enumerateAnimations(ZkModelScript const* slf, ZkAnimationEnumerator cb, void* ctx) {
	if (slf == nullptr || cb == nullptr) {
		CZK_LOG_WARN_NULL("ZkModelScript_enumerateAnimations");
		return;
	}

	for (auto& v : slf->animations) {
		if (cb(ctx, &v)) break;
	}
}


// ZkAnimation

ZkString ZkAnimation_getName(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getName");
		return {};
	}

	return slf->name.c_str();
}

uint32_t ZkAnimation_getLayer(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getLayer");
		return {};
	}

	return slf->layer;
}

ZkString ZkAnimation_getNext(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getNext");
		return {};
	}

	return slf->next.c_str();
}

float ZkAnimation_getBlendIn(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getBlendIn");
		return {};
	}

	return slf->blend_in;
}

float ZkAnimation_getBlendOut(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getBlendOut");
		return {};
	}

	return slf->blend_out;
}

ZkAnimationFlag ZkAnimation_getFlags(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getFlags");
		return {};
	}

	return static_cast<ZkAnimationFlag>(slf->flags);
}

ZkString ZkAnimation_getModel(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getModel");
		return {};
	}

	return slf->model.c_str();
}

ZkAnimationDirection ZkAnimation_getDirection(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getDirection");
		return {};
	}

	return static_cast<ZkAnimationDirection>(slf->direction);
}

int32_t ZkAnimation_getFirstFrame(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getFirstFrame");
		return {};
	}

	return slf->first_frame;
}

int32_t ZkAnimation_getLastFrame(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getLastFrame");
		return {};
	}

	return slf->last_frame;
}

float ZkAnimation_getFps(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation");
		return {};
	}

	return slf->fps;
}

float ZkAnimation_getSpeed(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("(");
		return {};
	}

	return slf->speed;
}

float ZkAnimation_getCollisionVolumeScale(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getCollisionVolumeScale");
		return {};
	}

	return slf->collision_volume_scale;
}


ZkSize ZkAnimation_getEventTagCount(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getEventCountTag");
		return 0;
	}

	return slf->events.size();
}

ZkSize ZkAnimation_getParticleEffectCount(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getParticleEffectCount");
		return 0;
	}

	return slf->pfx.size();
}

ZkSize ZkAnimation_getParticleEffectStopCount(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getParticleEffectStopCount");
		return 0;
	}

	return slf->pfx_stop.size();
}

ZkSize ZkAnimation_getSoundEffectCount(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getSoundEffectCount");
		return 0;
	}

	return slf->sfx.size();
}

ZkSize ZkAnimation_getSoundEffectGroundCount(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getSoundEffectGroundCount");
		return 0;
	}

	return slf->sfx_ground.size();
}

ZkSize ZkAnimation_getMorphAnimationCount(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getMorphAnimationCount");
		return 0;
	}

	return slf->morph.size();
}

ZkSize ZkAnimation_getCameraTremorCount(ZkAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getCameraTremorCount");
		return 0;
	}

	return slf->tremors.size();
}


ZkEventTag const* ZkAnimation_getEventTag(ZkAnimation const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getEventTag");
		return nullptr;
	}

	if (i >= slf->events.size()) {
		CZK_LOG_ERROR("ZkAnimation_getEventTag() failed: index out of bounds");
		return nullptr;
	}

	return &slf->events[i];
}

ZkEventParticleEffect const* ZkAnimation_getParticleEffect(ZkAnimation const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getParticleEffect");
		return nullptr;
	}

	if (i >= slf->pfx.size()) {
		CZK_LOG_ERROR("ZkAnimation_getParticleEffect() failed: index out of bounds");
		return nullptr;
	}

	return &slf->pfx[i];
}

ZkEventParticleEffectStop const* ZkAnimation_getParticleEffectStop(ZkAnimation const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getParticleEffectStop");
		return nullptr;
	}

	if (i >= slf->pfx_stop.size()) {
		CZK_LOG_ERROR("ZkAnimation_getParticleEffectStop() failed: index out of bounds");
		return nullptr;
	}

	return &slf->pfx_stop[i];
}

ZkEventSoundEffect const* ZkAnimation_getSoundEffect(ZkAnimation const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getSoundEffect");
		return nullptr;
	}

	if (i >= slf->sfx.size()) {
		CZK_LOG_ERROR("ZkAnimation_getSoundEffect() failed: index out of bounds");
		return nullptr;
	}

	return &slf->sfx[i];
}

ZkEventSoundEffectGround const* ZkAnimation_getSoundEffectGround(ZkAnimation const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getSoundEffectGround");
		return nullptr;
	}

	if (i >= slf->sfx_ground.size()) {
		CZK_LOG_ERROR("ZkAnimation_getSoundEffectGround() failed: index out of bounds");
		return nullptr;
	}

	return &slf->sfx_ground[i];
}

ZkEventMorphAnimation const* ZkAnimation_getMorphAnimation(ZkAnimation const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getMorphAnimation");
		return nullptr;
	}

	if (i >= slf->morph.size()) {
		CZK_LOG_ERROR("ZkAnimation_getMorphAnimation() failed: index out of bounds");
		return nullptr;
	}

	return &slf->morph[i];
}

ZkEventCameraTremor const* ZkAnimation_getCameraTremor(ZkAnimation const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_getCameraTremor");
		return nullptr;
	}

	if (i >= slf->tremors.size()) {
		CZK_LOG_ERROR("ZkAnimation_getCameraTremor() failed: index out of bounds");
		return nullptr;
	}

	return &slf->tremors[i];
}


void ZkAnimation_enumerateEventTags(ZkAnimation const* slf, ZkEventTagEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_enumerateEventTags");
		return;
	}

	for (auto& v : slf->events) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateParticleEffects(ZkAnimation const* slf, ZkEventParticlEffectEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_enumerateParticleEffects");
		return;
	}

	for (auto& v : slf->pfx) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateParticleEffectStops(ZkAnimation const* slf,
                                              ZkEventParticleEffectStopEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_enumerateParticleEffectStops");
		return;
	}

	for (auto& v : slf->pfx_stop) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateSoundEffects(ZkAnimation const* slf, ZkEventSoundEffectEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_enumerateSoundEffects");
		return;
	}

	for (auto& v : slf->sfx) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateSoundEffectGrounds(ZkAnimation const* slf, ZkEventSoundEffectGroundEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_enumerateSoundEffectGrounds");
		return;
	}

	for (auto& v : slf->sfx_ground) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateMorphAnimations(ZkAnimation const* slf, ZkEventMorphAnimationEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_enumerateMorphAnimations");
		return;
	}

	for (auto& v : slf->morph) {
		if (cb(ctx, &v)) break;
	}
}

void ZkAnimation_enumerateCameraTremors(ZkAnimation const* slf, ZkEventCameraTremorEnumerator cb, void* ctx) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimation_enumerateCameraTremors");
		return;
	}

	for (auto& v : slf->tremors) {
		if (cb(ctx, &v)) break;
	}
}


// ZkEventTag

int32_t ZkEventTag_getFrame(ZkEventTag const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventTag_getFrame");
		return {};
	}

	return slf->frame;
}

ZkEventType ZkEventTag_getType(ZkEventTag const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventTag_getType");
		return {};
	}

	return static_cast<ZkEventType>(slf->type);
}

ZkString ZkEventTag_getSlot(ZkEventTag const* slf, ZkSize i) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventTag_getSlot");
		return {};
	}

	if (i != 0) {
		return slf->slot2.c_str();
	}

	return slf->slot.c_str();
}

ZkString ZkEventTag_getItem(ZkEventTag const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventTag_getItem");
		return {};
	}

	return slf->item.c_str();
}

int32_t const* ZkEventTag_getFrames(ZkEventTag const* slf, ZkSize* count) {
	if (slf == nullptr || count == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventTag_getFrames");
		return {};
	}

	*count = slf->frames.size();
	return slf->frames.data();
}

ZkFightMode ZkEventTag_getFightMode(ZkEventTag const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventTag_getFightMode");
		return {};
	}

	return static_cast<ZkFightMode>(slf->fight_mode);
}

ZkBool ZkEventTag_getIsAttached(ZkEventTag const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventTag_getIsAttached");
		return {};
	}

	return slf->attached;
}

// ZkEventParticleEffect

int32_t ZkEventParticleEffect_getFrame(ZkEventParticleEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventParticleEffect_getFrame");
		return {};
	}

	return slf->frame;
}

int32_t ZkEventParticleEffect_getIndex(ZkEventParticleEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventParticleEffect_getIndex");
		return {};
	}

	return slf->index;
}

ZkString ZkEventParticleEffect_getName(ZkEventParticleEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventParticleEffect_getName");
		return {};
	}

	return slf->name.c_str();
}

ZkString ZkEventParticleEffect_getPosition(ZkEventParticleEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventParticleEffect_getPosition");
		return {};
	}

	return slf->position.c_str();
}

ZkBool ZkEventParticleEffect_getIsAttached(ZkEventParticleEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventParticleEffect_getIsAttached");
		return {};
	}

	return slf->attached;
}

// ZkEventParticleEffectStop

int32_t ZkEventParticleEffectStop_getFrame(ZkEventParticleEffectStop const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventParticleEffectStop_getFrame");
		return {};
	}

	return slf->frame;
}

int32_t ZkEventParticleEffectStop_getIndex(ZkEventParticleEffectStop const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventParticleEffectStop_getIndex");
		return {};
	}

	return slf->index;
}

// ZkEventCameraTremor

int32_t ZkEventCameraTremor_getFrame(ZkEventCameraTremor const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventCameraTremor_getFrame");
		return {};
	}

	return slf->frame;
}

int32_t ZkEventCameraTremor_getField1(ZkEventCameraTremor const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventCameraTremor_getField1");
		return {};
	}

	return slf->field1;
}

int32_t ZkEventCameraTremor_getField2(ZkEventCameraTremor const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventCameraTremor_getField2");
		return {};
	}

	return slf->field2;
}

int32_t ZkEventCameraTremor_getField3(ZkEventCameraTremor const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventCameraTremor_getField3");
		return {};
	}

	return slf->field3;
}

int32_t ZkEventCameraTremor_getField4(ZkEventCameraTremor const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventCameraTremor_getField4");
		return {};
	}

	return slf->field4;
}

// ZkEventSoundEffect

int32_t ZkEventSoundEffect_getFrame(ZkEventSoundEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventSoundEffect_getFrame");
		return {};
	}

	return slf->frame;
}

ZkString ZkEventSoundEffect_getName(ZkEventSoundEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventSoundEffect_getName");
		return {};
	}

	return slf->name.c_str();
}

float ZkEventSoundEffect_getRange(ZkEventSoundEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventSoundEffect_getRange");
		return {};
	}

	return slf->range;
}

ZkBool ZkEventSoundEffect_getEmptySlot(ZkEventSoundEffect const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventSoundEffect_getEmptySlot");
		return {};
	}

	return slf->empty_slot;
}

// ZkEventSoundEffectGround

int32_t ZkEventSoundEffectGround_getFrame(ZkEventSoundEffectGround const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventSoundEffectGround_getFrame");
		return {};
	}

	return slf->frame;
}

ZkString ZkEventSoundEffectGround_getName(ZkEventSoundEffectGround const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventSoundEffectGround_getName");
		return {};
	}

	return slf->name.c_str();
}

float ZkEventSoundEffectGround_getRange(ZkEventSoundEffectGround const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventSoundEffectGround_getRange");
		return {};
	}

	return slf->range;
}

ZkBool ZkEventSoundEffectGround_getEmptySlot(ZkEventSoundEffectGround const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkEventSoundEffectGround_getEmptySlot");
		return {};
	}

	return slf->empty_slot;
}

// ZkMorphAnimation

int32_t ZkMorphAnimation_getFrame(ZkEventMorphAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMorphAnimation_getFrame");
		return {};
	}

	return slf->frame;
}

ZkString ZkMorphAnimation_getAnimation(ZkEventMorphAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMorphAnimation_getAnimation");
		return {};
	}

	return slf->animation.c_str();
}

ZkString ZkMorphAnimation_getNode(ZkEventMorphAnimation const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkMorphAnimation_getNode");
		return {};
	}

	return slf->node.c_str();
}

// ZkAnimationCombine

ZkString ZkAnimationCombine_getName(ZkAnimationCombine const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationCombine_getName");
		return {};
	}

	return slf->name.c_str();
}

uint32_t ZkAnimationCombine_getLayer(ZkAnimationCombine const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationCombine_getLayer");
		return {};
	}

	return slf->layer;
}

ZkString ZkAnimationCombine_getNext(ZkAnimationCombine const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationCombine_getNext");
		return {};
	}

	return slf->next.c_str();
}

float ZkAnimationCombine_getBlendIn(ZkAnimationCombine const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationCombine_getBlendIn");
		return {};
	}

	return slf->blend_in;
}

float ZkAnimationCombine_getBlendOut(ZkAnimationCombine const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationCombine_getBlendOut");
		return {};
	}

	return slf->blend_out;
}

ZkAnimationFlag ZkAnimationCombine_getFlags(ZkAnimationCombine const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationCombine_getFlags");
		return {};
	}

	return static_cast<ZkAnimationFlag>(slf->flags);
}

ZkString ZkAnimationCombine_getModel(ZkAnimationCombine const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationCombine_getModel");
		return {};
	}

	return slf->model.c_str();
}

int32_t ZkAnimationCombine_getLastFrame(ZkAnimationCombine const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationCombine_getLastFrame");
		return {};
	}

	return slf->last_frame;
}

// ZkAnimationBlend

ZkString ZkAnimationBlend_getName(ZkAnimationBlend const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationBlend_getName");
		return {};
	}

	return slf->name.c_str();
}

ZkString ZkAnimationBlend_getNext(ZkAnimationBlend const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationBlend_getNext");
		return {};
	}

	return slf->next.c_str();
}

float ZkAnimationBlend_getBlendIn(ZkAnimationBlend const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationBlend_getBlendIn");
		return {};
	}

	return slf->blend_in;
}

float ZkAnimationBlend_getBlendOut(ZkAnimationBlend const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationBlend_getBlendOut");
		return {};
	}

	return slf->blend_out;
}

// ZkAnimationAlias

ZkString ZkAnimationAlias_getName(ZkAnimationAlias const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationAlias_getName");
		return {};
	}

	return slf->name.c_str();
}

uint32_t ZkAnimationAlias_getLayer(ZkAnimationAlias const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationAlias_getLayer");
		return {};
	}

	return slf->layer;
}

ZkString ZkAnimationAlias_getNext(ZkAnimationAlias const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationAlias_getNext");
		return {};
	}

	return slf->next.c_str();
}

float ZkAnimationAlias_getBlendIn(ZkAnimationAlias const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationAlias_getBlendIn");
		return {};
	}

	return slf->blend_in;
}

float ZkAnimationAlias_getBlendOut(ZkAnimationAlias const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationAlias_getBlendOut");
		return {};
	}

	return slf->blend_out;
}

ZkAnimationFlag ZkAnimationAlias_getFlags(ZkAnimationAlias const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationAlias_getFlags");
		return {};
	}

	return static_cast<ZkAnimationFlag>(slf->flags);
}

ZkString ZkAnimationAlias_getAlias(ZkAnimationAlias const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationAlias_getAlias");
		return {};
	}

	return slf->alias.c_str();
}

ZkAnimationDirection ZkAnimationAlias_getDirection(ZkAnimationAlias const* slf) {
	if (slf == nullptr) {
		CZK_LOG_WARN_NULL("ZkAnimationAlias_getDirection");
		return {};
	}

	return static_cast<ZkAnimationDirection>(slf->direction);
}

