// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/MorphMesh.h"

#include "Internal.hh"

ZKC_LOADER(ZkMorphMesh);
ZKC_PATH_LOADER(ZkMorphMesh);
ZKC_VFS_LOADER(ZkMorphMesh);
ZKC_DELETER(ZkMorphMesh);

ZkString ZkMorphMesh_getName(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkMultiResolutionMesh const* ZkMorphMesh_getMesh(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->mesh;
}

ZkSize ZkMorphMesh_getMorphPositionCount(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->morph_positions.size();
}

ZkVec3f ZkMorphMesh_getMorphPosition(ZkMorphMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->morph_positions, i);
	return slf->morph_positions[i];
}

void ZkMorphMesh_enumerateMorphPositions(ZkMorphMesh const* slf, ZkVec3fEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->morph_positions) {
		if (cb(ctx, v)) break;
	}
}

ZkSize ZkMorphMesh_getAnimationCount(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->animations.size();
}

ZkMorphAnimation const* ZkMorphMesh_getAnimation(ZkMorphMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->animations, i);
	return &slf->animations[i];
}

void ZkMorphMesh_enumerateAnimations(ZkMorphMesh const* slf, ZkMorphAnimationEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& ani : slf->animations) {
		if (cb(ctx, &ani)) break;
	}
}

ZkSize ZkMorphMesh_getSourceCount(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->sources.size();
}

ZkMorphSource const* ZkMorphMesh_getSource(ZkMorphMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->sources, i);
	return &slf->sources[i];
}

void ZkMorphMesh_enumerateSources(ZkMorphMesh const* slf, ZkMorphSourceEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& src : slf->sources) {
		if (cb(ctx, &src)) break;
	}
}

ZkString ZkMorphAnimation_getName(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

int32_t ZkMorphAnimation_getLayer(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->layer;
}

float ZkMorphAnimation_getBlendIn(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_in;
}

float ZkMorphAnimation_getBlendOut(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->blend_out;
}

float ZkMorphAnimation_getDuration(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->duration;
}

float ZkMorphAnimation_getSpeed(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->speed;
}

uint8_t ZkMorphAnimation_getFlags(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->flags;
}

uint32_t ZkMorphAnimation_getFrameCount(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame_count;
}

uint32_t const* ZkMorphAnimation_getVertices(ZkMorphAnimation const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, count);

	*count = slf->vertices.size();
	return slf->vertices.data();
}

ZkSize ZkMorphAnimation_getSampleCount(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->samples.size();
}

ZkVec3f ZkMorphAnimation_getSample(ZkMorphAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->samples, i);
	return slf->samples[i];
}

void ZkMorphAnimation_enumerateSamples(ZkMorphAnimation const* slf, ZkVec3fEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& v : slf->samples) {
		if (cb(ctx, v)) break;
	}
}

ZkDate ZkMorphSource_getFileDate(ZkMorphSource const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->file_date;
}

ZkString ZkMorphSource_getFileName(ZkMorphSource const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->file_name.c_str();
}
