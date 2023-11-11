// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Boxes.h"
#include "Date.h"
#include "Library.h"
#include "Matrix.h"
#include "Stream.h"
#include "Vector.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/ModelHierarchy.hh>
using ZkModelHierarchy = zenkit::ModelHierarchy;
#else
typedef struct ZkInternal_ModelHierarchy ZkModelHierarchy;
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ZkInternal_ModelHierarchyNode {
	int16_t parentIndex;
	ZkString name;
	ZkMat4x4 transform;
} ZkModelHierarchyNode;

#ifdef __cplusplus
}
#endif

typedef ZkBool (*ZkModelHierarchyNodeEnumerator)(void* ctx, ZkModelHierarchyNode* node);

ZKC_API ZkModelHierarchy* ZkModelHierarchy_load(ZkRead* buf);
ZKC_API ZkModelHierarchy* ZkModelHierarchy_loadPath(ZkString path);
ZKC_API ZkModelHierarchy* ZkModelHierarchy_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkModelHierarchy_del(ZkModelHierarchy* slf);

ZKC_API ZkSize ZkModelHierarchy_getNodeCount(ZkModelHierarchy const* slf);
ZKC_API ZkModelHierarchyNode ZkModelHierarchy_getNode(ZkModelHierarchy const* slf, ZkSize i);
ZKC_API ZkAxisAlignedBoundingBox ZkModelHierarchy_getBbox(ZkModelHierarchy const* slf);
ZKC_API ZkAxisAlignedBoundingBox ZkModelHierarchy_getCollisionBbox(ZkModelHierarchy const* slf);
ZKC_API ZkVec3f ZkModelHierarchy_getRootTranslation(ZkModelHierarchy const* slf);
ZKC_API uint32_t ZkModelHierarchy_getChecksum(ZkModelHierarchy const* slf);
ZKC_API ZkDate ZkModelHierarchy_getSourceDate(ZkModelHierarchy const* slf);
ZKC_API ZkString ZkModelHierarchy_getSourcePath(ZkModelHierarchy const* slf);

ZKC_API void ZkModelHierarchy_enumerateNodes(ZkModelHierarchy const* slf, ZkModelHierarchyNodeEnumerator cb, void* ctx);
