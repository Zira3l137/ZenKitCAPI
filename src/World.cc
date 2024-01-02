// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/World.h"

#include "Internal.hh"

ZKC_LOADER(ZkWorld);
ZKC_PATH_LOADER(ZkWorld);
ZKC_VFS_LOADER(ZkWorld);
ZKC_DELETER(ZkWorld);

ZkMesh const* ZkWorld_getMesh(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->world_mesh;
}

ZkWayNet const* ZkWorld_getWayNet(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->world_way_net;
}

ZkBspTree const* ZkWorld_getBspTree(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->world_bsp_tree;
}

ZkSize ZkWorld_getRootObjectCount(ZkWorld const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->world_vobs.size();
}

ZkVirtualObject const* ZkWorld_getRootObject(ZkWorld const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->world_vobs, i);
	return slf->world_vobs[i].get();
}

void ZkWorld_enumerateRootObjects(ZkWorld const* slf, ZkVirtualObjectEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

	for (auto& obj : slf->world_vobs) {
		if (cb(ctx, obj.get())) break;
	}
}
