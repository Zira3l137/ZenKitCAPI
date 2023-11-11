// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "MultiResolutionMesh.h"
#include "SoftSkinMesh.h"
#include "Stream.h"
#include "Vfs.h"

#ifdef __cplusplus
	#include <zenkit/ModelMesh.hh>
using ZkModelMesh = zenkit::ModelMesh;
#else
typedef struct ZkInternal_ModelMesh ZkModelMesh;
#endif

typedef ZkBool (*ZkAttachmentEnumerator)(void* ctx, ZkString name, ZkMultiResolutionMesh const* mesh);

ZKC_API ZkModelMesh* ZkModelMesh_load(ZkRead* buf);
ZKC_API ZkModelMesh* ZkModelMesh_loadPath(ZkString path);
ZKC_API ZkModelMesh* ZkModelMesh_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkModelMesh_del(ZkModelMesh* slf);

ZKC_API ZkSize ZkModelMesh_getMeshCount(ZkModelMesh const* slf);
ZKC_API ZkSoftSkinMesh const* ZkModelMesh_getMesh(ZkModelMesh const* slf, ZkSize i);
ZKC_API void ZkModelMesh_enumerateMeshes(ZkModelMesh const* slf, ZkSoftSkinMeshEnumerator cb, void* ctx);

ZKC_API ZkSize ZkModelMesh_getAttachmentCount(ZkModelMesh const* slf);
ZKC_API ZkMultiResolutionMesh const* ZkModelMesh_getAttachment(ZkModelMesh const* slf, ZkString name);
ZKC_API void ZkModelMesh_enumerateAttachments(ZkModelMesh const* slf, ZkAttachmentEnumerator cb, void* ctx);

ZKC_API uint32_t ZkModelMesh_getChecksum(ZkModelMesh const* slf);
