// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/Model.h"

#include "Internal.hh"

ZKC_LOADER(ZkModel);
ZKC_PATH_LOADER(ZkModel);
ZKC_VFS_LOADER(ZkModel);
ZKC_DELETER(ZkModel);

ZkModelHierarchy const* ZkModel_getHierarchy(ZkModel const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->hierarchy;
}

ZkModelMesh const* ZkModel_getMesh(ZkModel const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->mesh;
}
