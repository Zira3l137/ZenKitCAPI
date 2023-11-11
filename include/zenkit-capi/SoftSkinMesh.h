// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Date.h"
#include "Library.h"
#include "MultiResolutionMesh.h"
#include "Vector.h"

#ifdef __cplusplus
	#include <zenkit/ModelMesh.hh>
using ZkSoftSkinMesh = zenkit::SoftSkinMesh;
using ZkSoftSkinWedgeNormal = zenkit::SoftSkinWedgeNormal;
using ZkSoftSkinWeightEntry = zenkit::SoftSkinWeightEntry;
#else
typedef struct ZkInternal_SoftSkinMesh ZkSoftSkinMesh;

typedef struct {
	ZkVec3f normal;
	uint32_t index;
} ZkSoftSkinWedgeNormal;

typedef struct {
	float weight;
	ZkVec3f position;
	uint8_t node_index;
} ZkSoftSkinWeightEntry;
#endif

typedef ZkBool (*ZkSoftSkinMeshEnumerator)(void* ctx, ZkSoftSkinMesh const* mesh);
typedef ZkBool (*ZkSoftSkinWeightEnumerator)(void* ctx, ZkSoftSkinWeightEntry const* entry, ZkSize count);

ZKC_API ZkSize ZkSoftSkinMesh_getNodeCount(ZkSoftSkinMesh const* slf);
ZKC_API ZkMultiResolutionMesh const* ZkSoftSkinMesh_getMesh(ZkSoftSkinMesh const* slf);
ZKC_API ZkOrientedBoundingBox const* ZkSoftSkinMesh_getBbox(ZkSoftSkinMesh const* slf, ZkSize node);
ZKC_API void
ZkSoftSkinMesh_enumerateBoundingBoxes(ZkSoftSkinMesh const* slf, ZkOrientedBoundingBoxEnumerator cb, void* ctx);
ZKC_API ZkSoftSkinWeightEntry const* ZkSoftSkinMesh_getWeights(ZkSoftSkinMesh const* slf, ZkSize node, ZkSize* count);
ZKC_API void ZkSoftSkinMesh_enumerateWeights(ZkSoftSkinMesh const* slf, ZkSoftSkinWeightEnumerator cb, void* ctx);
ZKC_API ZkSoftSkinWedgeNormal const* ZkSoftSkinMesh_getWedgeNormals(ZkSoftSkinMesh const* slf, ZkSize* count);
ZKC_API int32_t const* ZkSoftSkinMesh_getNodes(ZkSoftSkinMesh const* slf, ZkSize* count);
