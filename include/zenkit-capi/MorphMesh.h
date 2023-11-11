// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Date.h"
#include "MultiResolutionMesh.h"
#include "Stream.h"
#include "Vector.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/MorphMesh.hh>
using ZkMorphMesh = zenkit::MorphMesh;
using ZkMorphAnimation = zenkit::MorphAnimation;
using ZkMorphSource = zenkit::MorphSource;
#else
typedef struct ZkInternal_MorphMesh ZkMorphMesh;
typedef struct ZkInternal_MorphAnimation ZkMorphAnimation;
typedef struct ZkInternal_MorphSource ZkMorphSource;
#endif

typedef ZkBool (*ZkMorphAnimationEnumerator)(void* ctx, ZkMorphAnimation const* ani);
typedef ZkBool (*ZkMorphSourceEnumerator)(void* ctx, ZkMorphSource const* src);

ZKC_API ZkMorphMesh* ZkMorphMesh_load(ZkRead* buf);
ZKC_API ZkMorphMesh* ZkMorphMesh_loadPath(ZkString path);
ZKC_API ZkMorphMesh* ZkMorphMesh_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkMorphMesh_del(ZkMorphMesh* slf);

ZKC_API ZkString ZkMorphMesh_getName(ZkMorphMesh const* slf);
ZKC_API ZkMultiResolutionMesh const* ZkMorphMesh_getMesh(ZkMorphMesh const* slf);
ZKC_API ZkVec3f const* ZkMorphMesh_getMorphPositions(ZkMorphMesh const* slf, ZkSize* count);

ZKC_API ZkSize ZkMorphMesh_getAnimationCount(ZkMorphMesh const* slf);
ZKC_API ZkMorphAnimation const* ZkMorphMesh_getAnimation(ZkMorphMesh const* slf, ZkSize i);
ZKC_API void ZkMorphMesh_enumerateAnimations(ZkMorphMesh const* slf, ZkMorphAnimationEnumerator cb, void* ctx);

ZKC_API ZkSize ZkMorphMesh_getSourceCount(ZkMorphMesh const* slf);
ZKC_API ZkMorphSource const* ZkMorphMesh_getSource(ZkMorphMesh const* slf, ZkSize i);
ZKC_API void ZkMorphMesh_enumerateSources(ZkMorphMesh const* slf, ZkMorphSourceEnumerator cb, void* ctx);

ZKC_API ZkString ZkMorphAnimation_getName(ZkMorphAnimation const* slf);
ZKC_API int32_t ZkMorphAnimation_getLayer(ZkMorphAnimation const* slf);
ZKC_API float ZkMorphAnimation_getBlendIn(ZkMorphAnimation const* slf);
ZKC_API float ZkMorphAnimation_getBlendOut(ZkMorphAnimation const* slf);
ZKC_API float ZkMorphAnimation_getDuration(ZkMorphAnimation const* slf);
ZKC_API float ZkMorphAnimation_getSpeed(ZkMorphAnimation const* slf);
ZKC_API uint8_t ZkMorphAnimation_getFlags(ZkMorphAnimation const* slf);
ZKC_API uint32_t ZkMorphAnimation_getFrameCount(ZkMorphAnimation const* slf);
ZKC_API uint32_t const* ZkMorphAnimation_getVertices(ZkMorphAnimation const* slf, ZkSize* count);
ZKC_API ZkVec3f const* ZkMorphAnimation_getSamples(ZkMorphAnimation const* slf, ZkSize* count);

ZKC_API ZkDate ZkMorphSource_getFileDate(ZkMorphSource const* slf);
ZKC_API ZkString ZkMorphSource_getFileName(ZkMorphSource const* slf);
