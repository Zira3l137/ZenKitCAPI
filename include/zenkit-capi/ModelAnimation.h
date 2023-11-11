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
using ZkAnimationSample = zenkit::AnimationSample;
#else
typedef struct ZkInternal_ModelAnimation ZkModelAnimation;

typedef struct {
	ZkVec3f position;
	ZkQuat rotation;
} ZkAnimationSample;
#endif

typedef ZkBool (*ZkAnimationSampleEnumerator)(void* ctx, ZkAnimationSample* sample);

ZKC_API ZkModelAnimation* ZkModelAnimation_load(ZkRead* buf);
ZKC_API ZkModelAnimation* ZkModelAnimation_loadPath(ZkString path);
ZKC_API ZkModelAnimation* ZkModelAnimation_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkModelAnimation_del(ZkModelAnimation* slf);

ZKC_API ZkString ZkModelAnimation_getName(ZkModelAnimation const* slf);
ZKC_API ZkString ZkModelAnimation_getNext(ZkModelAnimation const* slf);
ZKC_API uint32_t ZkModelAnimation_getLayer(ZkModelAnimation const* slf);
ZKC_API uint32_t ZkModelAnimation_getFrameCount(ZkModelAnimation const* slf);
ZKC_API uint32_t ZkModelAnimation_getNodeCount(ZkModelAnimation const* slf);
ZKC_API float ZkModelAnimation_getFps(ZkModelAnimation const* slf);
ZKC_API float ZkModelAnimation_getFpsSource(ZkModelAnimation const* slf);
ZKC_API ZkAxisAlignedBoundingBox ZkModelAnimation_getBbox(ZkModelAnimation const* slf);
ZKC_API uint32_t ZkModelAnimation_getChecksum(ZkModelAnimation const* slf);
ZKC_API ZkString ZkModelAnimation_getSourcePath(ZkModelAnimation const* slf);
ZKC_API ZkDate ZkModelAnimation_getSourceDate(ZkModelAnimation const* slf);
ZKC_API ZkString ZkModelAnimation_getSourceScript(ZkModelAnimation const* slf);
ZKC_API ZkSize ZkModelAnimation_getSampleCount(ZkModelAnimation const* slf);
ZKC_API ZkAnimationSample ZkModelAnimation_getSample(ZkModelAnimation const* slf, ZkSize i);
ZKC_API void ZkModelAnimation_enumerateSamples(ZkModelAnimation const* slf, ZkAnimationSampleEnumerator cb, void* ctx);
ZKC_API uint32_t const* ZkModelAnimation_getNodeIndices(ZkModelAnimation const* slf, ZkSize* length);
