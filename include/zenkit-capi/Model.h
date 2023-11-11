// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "ModelMesh.h"
#include "ModelHierarchy.h"

#ifdef __cplusplus
#include <zenkit/Model.hh>
using ZkModel = zenkit::Model;
#else
typedef struct ZkInternal_Model ZkModel;
#endif

ZKC_API ZkModel* ZkModel_load(ZkRead* buf);
ZKC_API ZkModel* ZkModel_loadPath(ZkString path);
ZKC_API ZkModel* ZkModel_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkModel_del(ZkModel* slf);

ZKC_API ZkModelHierarchy const* ZkModel_getHierarchy(ZkModel const* slf);
ZKC_API ZkModelMesh const* ZkModel_getMesh(ZkModel const* slf);
