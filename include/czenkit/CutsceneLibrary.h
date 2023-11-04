// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Library.h"
#include "Stream.h"
#include "Vfs.h"


#ifdef __cplusplus
#include <zenkit/CutsceneLibrary.hh>
using ZkCutsceneLibrary = zenkit::CutsceneLibrary;
using ZkCutsceneBlock = zenkit::CutsceneBlock;
using ZkCutsceneMessage = zenkit::CutsceneMessage;
#else
typedef struct ZkInternal_CutsceneLibrary ZkCutsceneLibrary;
typedef struct ZkInternal_CutsceneBlock ZkCutsceneBlock;
typedef struct ZkInternal_CutsceneMessage ZkCutsceneMessage;
#endif

typedef ZkBool (*ZkCutsceneBlockEnumerator)(void* ctx, ZkCutsceneBlock const* block);

CZK_API ZkCutsceneLibrary* ZkCutsceneLibrary_load(ZkRead* buf);
CZK_API ZkCutsceneLibrary* ZkCutsceneLibrary_loadPath(ZkString path);
CZK_API ZkCutsceneLibrary* ZkCutsceneLibrary_loadVfs(ZkVfs const* vfs, ZkString string);
CZK_API void ZkCutsceneLibrary_del(ZkCutsceneLibrary* slf);

CZK_API ZkCutsceneBlock const* ZkCutsceneLibrary_getBlock(ZkCutsceneLibrary const* slf, ZkString name);
CZK_API void ZkCutsceneLibrary_enumerateBlocks(ZkCutsceneLibrary const* slf, ZkCutsceneBlockEnumerator cb, void* ctx);

CZK_API ZkString ZkCutsceneBlock_getName(ZkCutsceneBlock const* slf);
CZK_API ZkCutsceneMessage const* ZkCutsceneBlock_getMessage(ZkCutsceneBlock const* slf);

CZK_API uint32_t ZkCutsceneMessage_getType(ZkCutsceneMessage const* slf);
CZK_API ZkString ZkCutsceneMessage_getText(ZkCutsceneMessage const* slf);
CZK_API ZkString ZkCutsceneMessage_getName(ZkCutsceneMessage const* slf);
