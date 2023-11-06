// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Stream.h"
#include "Vector.h"
#include "MultiResolutionMesh.h"
#include "Vfs.h"
#include "Date.h"

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

CZK_API ZkMorphMesh* ZkMorphMesh_load(ZkRead* buf);
CZK_API ZkMorphMesh* ZkMorphMesh_loadPath(ZkString path);
CZK_API ZkMorphMesh* ZkMorphMesh_loadVfs(ZkVfs* vfs, ZkString name);
CZK_API void ZkMorphMesh_del(ZkMorphMesh* slf);

CZK_API ZkString ZkMorphMesh_getName(ZkMorphMesh const* slf);
CZK_API ZkMultiResolutionMesh const* ZkMorphMesh_getMesh(ZkMorphMesh const* slf);
CZK_API ZkVec3f const* ZkMorphMesh_getMorphPositions(ZkMorphMesh const* slf, ZkSize* count);

CZK_API ZkSize ZkMorphMesh_getAnimationCount(ZkMorphMesh const* slf);
CZK_API ZkMorphAnimation const* ZkMorphMesh_getAnimation(ZkMorphMesh const* slf, ZkSize i);
CZK_API void ZkMorphMesh_enumerateAnimations(ZkMorphMesh const* slf, ZkMorphAnimationEnumerator cb, void* ctx);

CZK_API ZkSize ZkMorphMesh_getSourceCount(ZkMorphMesh const* slf);
CZK_API ZkMorphSource const* ZkMorphMesh_getSource(ZkMorphMesh const* slf, ZkSize i);
CZK_API void ZkMorphMesh_enumerateSources(ZkMorphMesh const* slf, ZkMorphSourceEnumerator cb, void* ctx);

CZK_API ZkString ZkMorphAnimation_getName(ZkMorphAnimation const* slf);
CZK_API int32_t ZkMorphAnimation_getLayer(ZkMorphAnimation const* slf);
CZK_API float ZkMorphAnimation_getBlendIn(ZkMorphAnimation const* slf);
CZK_API float ZkMorphAnimation_getBlendOut(ZkMorphAnimation const* slf);
CZK_API float ZkMorphAnimation_getDuration(ZkMorphAnimation const* slf);
CZK_API float ZkMorphAnimation_getSpeed(ZkMorphAnimation const* slf);
CZK_API uint8_t ZkMorphAnimation_getFlags(ZkMorphAnimation const* slf);
CZK_API uint32_t ZkMorphAnimation_getFrameCount(ZkMorphAnimation const* slf);
CZK_API uint32_t const* ZkMorphAnimation_getVertices(ZkMorphAnimation const* slf, ZkSize* count);
CZK_API ZkVec3f const* ZkMorphAnimation_getSamples(ZkMorphAnimation const* slf, ZkSize* count);

CZK_API ZkDate ZkMorphSource_getFileDate(ZkMorphSource const* slf);
CZK_API ZkString ZkMorphSource_getFileName(ZkMorphSource const* slf);
