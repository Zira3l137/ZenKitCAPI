// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "DaedalusScript.h"
#include "Library.h"
#include "Stream.h"
#include "Vfs.h"

typedef struct ZkInternal_DaedalusVm ZkDaedalusVm;
typedef void (*ZkDaedalusVmExternalCallback)(void* ctx, ZkDaedalusVm* vm);
typedef void (*ZkDaedalusVmExternalDefaultCallback)(void* ctx, ZkDaedalusVm* vm, ZkDaedalusSymbol* sym);

CZK_API ZkDaedalusVm* ZkDaedalusVm_load(ZkRead* buf);
CZK_API ZkDaedalusVm* ZkDaedalusVm_loadPath(ZkString path);
CZK_API ZkDaedalusVm* ZkDaedalusVm_loadVfs(ZkVfs* vfs, ZkString name);
CZK_API void ZkDaedalusVm_del(ZkDaedalusVm* slf);

CZK_API void ZkDaedalusVm_pushInt(ZkDaedalusVm* slf, int32_t value);
CZK_API void ZkDaedalusVm_pushFloat(ZkDaedalusVm* slf, float value);
CZK_API void ZkDaedalusVm_pushString(ZkDaedalusVm* slf, ZkString value);
CZK_API void ZkDaedalusVm_pushInstance(ZkDaedalusVm* slf, ZkDaedalusInstance* value);

CZK_API int32_t ZkDaedalusVm_popInt(ZkDaedalusVm* slf);
CZK_API float ZkDaedalusVm_popFloat(ZkDaedalusVm* slf);
CZK_API ZkString ZkDaedalusVm_popString(ZkDaedalusVm* slf);
CZK_API ZkDaedalusInstance* ZkDaedalusVm_popInstance(ZkDaedalusVm* slf);

CZK_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalSelf(ZkDaedalusVm* slf);
CZK_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalOther(ZkDaedalusVm* slf);
CZK_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalVictim(ZkDaedalusVm* slf);
CZK_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalHero(ZkDaedalusVm* slf);
CZK_API ZkDaedalusInstance* ZkDaedalusVm_getGlobalItem(ZkDaedalusVm* slf);

CZK_API void ZkDaedalusVm_setGlobalSelf(ZkDaedalusVm* slf, ZkDaedalusInstance* value);
CZK_API void ZkDaedalusVm_setGlobalOther(ZkDaedalusVm* slf, ZkDaedalusInstance* value);
CZK_API void ZkDaedalusVm_setGlobalVictim(ZkDaedalusVm* slf, ZkDaedalusInstance* value);
CZK_API void ZkDaedalusVm_setGlobalHero(ZkDaedalusVm* slf, ZkDaedalusInstance* value);
CZK_API void ZkDaedalusVm_setGlobalItem(ZkDaedalusVm* slf, ZkDaedalusInstance* value);

CZK_API void ZkDaedalusVm_callFunction(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym);
CZK_API ZkDaedalusInstance* ZkDaedalusVm_initInstance(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym, ZkDaedalusInstanceType type);
CZK_API void ZkDaedalusVm_registerExternal(ZkDaedalusVm* slf, ZkDaedalusSymbol* sym, ZkDaedalusVmExternalCallback cb, void* ctx);
CZK_API void ZkDaedalusVm_registerExternalDefault(ZkDaedalusVm* slf, ZkDaedalusVmExternalDefaultCallback cb, void* ctx);
CZK_API void ZkDaedalusVm_printStackTrace(ZkDaedalusVm* slf);
