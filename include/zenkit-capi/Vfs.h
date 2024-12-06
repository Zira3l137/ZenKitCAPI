// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "Stream.h"

#include <time.h>

#ifdef __cplusplus
	#include <zenkit/Vfs.hh>
using ZkVfs = zenkit::Vfs;
using ZkVfsNode = zenkit::VfsNode;
#else
typedef struct ZkInternal_Vfs ZkVfs;
typedef struct ZkInternal_VfsNode ZkVfsNode;
#endif

typedef enum {
	ZkVfsOverwriteBehavior_NONE = 0,
	ZkVfsOverwriteBehavior_ALL = 1,
	ZkVfsOverwriteBehavior_NEWER = 2,
	ZkVfsOverwriteBehavior_OLDER = 3,
} ZkVfsOverwriteBehavior;

typedef ZkBool (*ZkVfsNodeEnumerator)(void* ctx, ZkVfsNode const* node);

ZKC_API ZkVfs* ZkVfs_new(void);
ZKC_API void ZkVfs_del(ZkVfs* slf);
ZKC_API void ZkVfs_save(ZkVfs const* slf, ZkString path, ZkGameVersion version, time_t unix_t);

ZKC_API ZkVfsNode const* ZkVfs_getRoot(ZkVfs const* slf);

ZKC_API ZkVfsNode* ZkVfs_mkdir(ZkVfs* slf, ZkString path);
ZKC_API ZkBool ZkVfs_remove(ZkVfs* slf, ZkString path);

ZKC_API void ZkVfs_mount(ZkVfs* slf, ZkVfsNode* node, ZkString parent, ZkVfsOverwriteBehavior overwrite);
ZKC_API void ZkVfs_mountHost(ZkVfs* slf, ZkString path, ZkString parent, ZkVfsOverwriteBehavior overwrite);
ZKC_API void ZkVfs_mountDisk(ZkVfs* slf, ZkRead* buf, ZkVfsOverwriteBehavior overwrite);
ZKC_API void ZkVfs_mountDiskHost(ZkVfs* slf, ZkString path, ZkVfsOverwriteBehavior overwrite);

ZKC_API ZkVfsNode* ZkVfs_resolvePath(ZkVfs* slf, ZkString path);
ZKC_API ZkVfsNode* ZkVfs_findNode(ZkVfs* slf, ZkString name);

ZKC_API ZkVfsNode* ZkVfsNode_newFile(ZkString name, ZkByte const* buf, ZkSize size, time_t ts);
ZKC_API ZkVfsNode* ZkVfsNode_newDir(ZkString name, time_t ts);
ZKC_API void ZkVfsNode_del(ZkVfsNode* slf);

ZKC_API ZkBool ZkVfsNode_isFile(ZkVfsNode const* slf);
ZKC_API ZkBool ZkVfsNode_isDir(ZkVfsNode const* slf);
ZKC_API time_t ZkVfsNode_getTime(ZkVfsNode const* slf);
ZKC_API ZkString ZkVfsNode_getName(ZkVfsNode const* slf);
ZKC_API ZkVfsNode* ZkVfsNode_getChild(ZkVfsNode* slf, ZkString name);

ZKC_API ZkVfsNode* ZkVfsNode_create(ZkVfsNode* slf, ZkVfsNode* node);
ZKC_API ZkBool ZkVfsNode_remove(ZkVfsNode* slf, ZkString name);
ZKC_API ZkRead* ZkVfsNode_open(ZkVfsNode const* slf);

ZKC_API void ZkVfsNode_enumerateChildren(ZkVfsNode const* slf, ZkVfsNodeEnumerator callback, void* ctx);
