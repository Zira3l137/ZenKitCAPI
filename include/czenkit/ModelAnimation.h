// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Boxes.h"
#include "Date.h"
#include "Library.h"
#include "Stream.h"
#include "Vector.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/ModelAnimation.hh>
using ZkModelAnimation = zenkit::ModelAnimation;
#else
typedef struct ZkInternal_ModelAnimation ZkModelAnimation;
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ZkInternal_AnimationSample {
#ifdef __cplusplus
	inline ZkInternal_AnimationSample() : position(ZkVec3f {0, 0, 0}), rotation(ZkQuat {0, 0, 0, 0}) {}
	inline ZkInternal_AnimationSample(zenkit::AnimationSample const& sample)
	    : position(sample.position), rotation(sample.rotation) {}
#endif

	ZkVec3f position;
	ZkQuat rotation;
} ZkAnimationSample;

#ifdef __cplusplus
};
#endif

typedef ZkBool (*ZkAnimationSampleEnumerator)(void* ctx, ZkAnimationSample* sample);

CZK_API ZkModelAnimation* ZkModelAnimation_load(ZkRead* buf);
CZK_API ZkModelAnimation* ZkModelAnimation_loadPath(ZkString path);
CZK_API ZkModelAnimation* ZkModelAnimation_loadVfs(ZkVfs* vfs, ZkString name);
CZK_API void ZkModelAnimation_del(ZkModelAnimation* slf);

CZK_API ZkString ZkModelAnimation_getName(ZkModelAnimation const* slf);
CZK_API ZkString ZkModelAnimation_getNext(ZkModelAnimation const* slf);
CZK_API uint32_t ZkModelAnimation_getLayer(ZkModelAnimation const* slf);
CZK_API uint32_t ZkModelAnimation_getFrameCount(ZkModelAnimation const* slf);
CZK_API uint32_t ZkModelAnimation_getNodeCount(ZkModelAnimation const* slf);
CZK_API float ZkModelAnimation_getFps(ZkModelAnimation const* slf);
CZK_API float ZkModelAnimation_getFpsSource(ZkModelAnimation const* slf);
CZK_API ZkAxisAlignedBoundingBox ZkModelAnimation_getBbox(ZkModelAnimation const* slf);
CZK_API uint32_t ZkModelAnimation_getChecksum(ZkModelAnimation const* slf);
CZK_API ZkString ZkModelAnimation_getSourcePath(ZkModelAnimation const* slf);
CZK_API ZkDate ZkModelAnimation_getSourceDate(ZkModelAnimation const* slf);
CZK_API ZkString ZkModelAnimation_getSourceScript(ZkModelAnimation const* slf);
CZK_API ZkSize ZkModelAnimation_getSampleCount(ZkModelAnimation const* slf);
CZK_API ZkAnimationSample ZkModelAnimation_getSample(ZkModelAnimation const* slf, ZkSize i);
CZK_API void ZkModelAnimation_enumerateSamples(ZkModelAnimation const* slf, ZkAnimationSampleEnumerator cb, void* ctx);
CZK_API uint32_t const* ZkModelAnimation_getNodeIndices(ZkModelAnimation const* slf, ZkSize* length);
