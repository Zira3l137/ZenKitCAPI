// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "Mesh.h"
#include "Object.h"
#include "Stream.h"
#include "Vfs.h"
#include "vobs/VirtualObject.h"
#include "world/BspTree.h"
#include "world/WayNet.h"

#ifdef __cplusplus
	#include <zenkit/World.hh>
using ZkWorld = ZkSharedHandle<zenkit::World>;
#else
typedef struct ZkInternal_World ZkWorld;
#endif

ZKC_API ZkWorld* ZkWorld_load(ZkRead* buf);
ZKC_API ZkWorld* ZkWorld_loadPath(ZkString path);
ZKC_API ZkWorld* ZkWorld_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API void ZkWorld_del(ZkWorld* slf);

ZKC_API ZkMesh const* ZkWorld_getMesh(ZkWorld const* slf);
ZKC_API ZkWayNet const* ZkWorld_getWayNet(ZkWorld const* slf);
ZKC_API ZkBspTree const* ZkWorld_getBspTree(ZkWorld const* slf);

ZKC_API ZkSize ZkWorld_getRootObjectCount(ZkWorld const* slf);
ZKC_API ZkVirtualObject const* ZkWorld_getRootObject(ZkWorld const* slf, ZkSize i);
ZKC_API void ZkWorld_enumerateRootObjects(ZkWorld const* slf, ZkVirtualObjectEnumerator cb, void* ctx);
