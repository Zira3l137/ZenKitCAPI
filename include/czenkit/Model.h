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

CZK_API ZkModel* ZkModel_load(ZkRead* buf);
CZK_API ZkModel* ZkModel_loadPath(ZkString path);
CZK_API ZkModel* ZkModel_loadVfs(ZkVfs* vfs, ZkString name);
CZK_API void ZkModel_del(ZkModel* slf);

CZK_API ZkModelHierarchy const* ZkModel_getHierarchy(ZkModel const* slf);
CZK_API ZkModelMesh const* ZkModel_getMesh(ZkModel const* slf);
