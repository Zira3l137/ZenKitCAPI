// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "Archive.h"
#include "Library.h"
#include "Object.h"
#include "Stream.h"
#include "Vfs.h"
#include "vobs/Misc.h"

#ifdef __cplusplus
	#include <zenkit/CutsceneLibrary.hh>
using ZkCutsceneLibrary = ZkSharedHandle<zenkit::CutsceneLibrary>;
using ZkCutsceneBlock = ZkSharedHandle<zenkit::CutsceneBlock>;
using ZkCutsceneMessage = ZkSharedHandle<zenkit::ConversationMessageEvent>;
using ZkCutscene = ZkSharedHandle<zenkit::Cutscene>;
using ZkCutsceneProps = ZkSharedHandle<zenkit::CutsceneProps>;
using ZkCutsceneContext = ZkSharedHandle<zenkit::CutsceneContext>;
#else
typedef struct ZkInternal_CutsceneLibrary ZkCutsceneLibrary;
typedef struct ZkInternal_CutsceneBlock ZkCutsceneBlock;
typedef struct ZkInternal_CutsceneMessage ZkCutsceneMessage;
typedef struct ZkInternal_Cutscene ZkCutscene;
typedef struct ZkInternal_CutsceneProps ZkCutsceneProps;
typedef struct ZkInternal_CutsceneContext ZkCutsceneContext;
#endif

typedef ZkBool (*ZkCutsceneBlockEnumerator)(void* ctx, ZkCutsceneBlock const* block);

ZKC_API ZkCutsceneLibrary* ZkCutsceneLibrary_load(ZkRead* buf);
ZKC_API ZkCutsceneLibrary* ZkCutsceneLibrary_loadPath(ZkString path);
ZKC_API ZkCutsceneLibrary* ZkCutsceneLibrary_loadVfs(ZkVfs const* vfs, ZkString string);

ZKC_API void ZkCutsceneLibrary_save(ZkCutsceneLibrary* slf, ZkWrite* buf, ZkArchiveFormat fmt);
ZKC_API void ZkCutsceneLibrary_savePath(ZkCutsceneLibrary* slf, ZkString path, ZkArchiveFormat fmt);

ZKC_API void ZkCutsceneLibrary_del(ZkCutsceneLibrary* slf);

ZKC_API ZkSize ZkCutsceneLibrary_getBlockCount(ZkCutsceneLibrary const* slf);
ZKC_API ZkCutsceneBlock const* ZkCutsceneLibrary_getBlock(ZkCutsceneLibrary const* slf, ZkString name);
ZKC_API ZkCutsceneBlock const* ZkCutsceneLibrary_getBlockByIndex(ZkCutsceneLibrary const* slf, ZkSize i);
ZKC_API void ZkCutsceneLibrary_enumerateBlocks(ZkCutsceneLibrary const* slf, ZkCutsceneBlockEnumerator cb, void* ctx);

ZKC_API ZkString ZkCutsceneBlock_getName(ZkCutsceneBlock const* slf);
ZKC_API ZkCutsceneMessage const* ZkCutsceneBlock_getMessage(ZkCutsceneBlock const* slf);
ZKC_API void ZkCutsceneBlock_setMessage(ZkCutsceneBlock const* slf, ZkCutsceneMessage* msg);
ZKC_API void ZkCutsceneBlock_release(ZkCutsceneBlock const* slf);

ZKC_API uint32_t ZkCutsceneMessage_getType(ZkCutsceneMessage const* slf);
ZKC_API ZkString ZkCutsceneMessage_getText(ZkCutsceneMessage const* slf);
ZKC_API ZkString ZkCutsceneMessage_getName(ZkCutsceneMessage const* slf);
ZKC_API ZkBool ZkCutsceneMessage_getIsHighPriority(ZkCutsceneMessage const* slf);
ZKC_API ZkBool ZkCutsceneMessage_getIsUsed(ZkCutsceneMessage const* slf);
ZKC_API ZkBool ZkCutsceneMessage_getIsDeleted(ZkCutsceneMessage const* slf);

ZKC_API void ZkCutsceneMessage_setType(ZkCutsceneMessage* slf, uint32_t value);
ZKC_API void ZkCutsceneMessage_setText(ZkCutsceneMessage* slf, ZkString value);
ZKC_API void ZkCutsceneMessage_setName(ZkCutsceneMessage* slf, ZkString value);
ZKC_API void ZkCutsceneMessage_setIsHighPriority(ZkCutsceneMessage* slf, ZkBool value);
ZKC_API void ZkCutsceneMessage_setIsUsed(ZkCutsceneMessage* slf, ZkBool value);
ZKC_API void ZkCutsceneMessage_setIsDeleted(ZkCutsceneMessage* slf, ZkBool value);

ZKC_API void ZkCutsceneMessage_release(ZkCutsceneMessage const* slf);

ZKC_API ZkCutsceneProps* ZkCutsceneProps_new(void);
ZKC_API void ZkCutsceneProps_release(ZkCutsceneProps* slf);

ZKC_API ZkString ZkCutsceneProps_getName(ZkCutsceneProps const* slf);
ZKC_API ZkBool ZkCutsceneProps_getIsGlobal(ZkCutsceneProps const* slf);
ZKC_API ZkBool ZkCutsceneProps_getIsLoop(ZkCutsceneProps const* slf);
ZKC_API ZkBool ZkCutsceneProps_getHasToBeTriggered(ZkCutsceneProps const* slf);
ZKC_API float ZkCutsceneProps_getDistance(ZkCutsceneProps const* slf);
ZKC_API float ZkCutsceneProps_getRange(ZkCutsceneProps const* slf);
ZKC_API int32_t ZkCutsceneProps_getLockedBlockCount(ZkCutsceneProps const* slf);
ZKC_API uint32_t ZkCutsceneProps_getRunBehaviour(ZkCutsceneProps const* slf);
ZKC_API int ZkCutsceneProps_getRunBehaviourValue(ZkCutsceneProps const* slf);
ZKC_API ZkString ZkCutsceneProps_getStageName(ZkCutsceneProps const* slf);
ZKC_API ZkString ZkCutsceneProps_getScriptFunctionOnStop(ZkCutsceneProps const* slf);

ZKC_API void ZkCutsceneProps_setName(ZkCutsceneProps* slf, ZkString value);
ZKC_API void ZkCutsceneProps_setIsGlobal(ZkCutsceneProps* slf, ZkBool value);
ZKC_API void ZkCutsceneProps_setIsLoop(ZkCutsceneProps* slf, ZkBool value);
ZKC_API void ZkCutsceneProps_setHasToBeTriggered(ZkCutsceneProps* slf, ZkBool value);
ZKC_API void ZkCutsceneProps_setDistance(ZkCutsceneProps* slf, float value);
ZKC_API void ZkCutsceneProps_setRange(ZkCutsceneProps* slf, float value);
ZKC_API void ZkCutsceneProps_setLockedBlockCount(ZkCutsceneProps* slf, int32_t value);
ZKC_API void ZkCutsceneProps_setRunBehaviour(ZkCutsceneProps* slf, uint32_t value);
ZKC_API void ZkCutsceneProps_setRunBehaviourValue(ZkCutsceneProps* slf, int value);
ZKC_API void ZkCutsceneProps_setStageName(ZkCutsceneProps* slf, ZkString value);
ZKC_API void ZkCutsceneProps_setScriptFunctionOnStop(ZkCutsceneProps* slf, ZkString value);

ZKC_API ZkCutsceneContext* ZkCutsceneContext_new(void);
ZKC_API void ZkCutsceneContext_release(ZkCutsceneContext* slf);

ZKC_API ZkCutsceneProps* ZkCutsceneContext_getProps(ZkCutsceneContext const* slf);
ZKC_API int32_t ZkCutsceneContext_getRoleCount(ZkCutsceneContext const* slf);
ZKC_API int32_t ZkCutsceneContext_getRoleVobCount(ZkCutsceneContext const* slf);
ZKC_API ZkNpc* ZkCutsceneContext_getNpc(ZkCutsceneContext const* slf);
ZKC_API ZkNpc* ZkCutsceneContext_getMainRole(ZkCutsceneContext const* slf);
ZKC_API ZkBool ZkCutsceneContext_getIsCutscene(ZkCutsceneContext const* slf);
ZKC_API int ZkCutsceneContext_getReference(ZkCutsceneContext const* slf);
ZKC_API int ZkCutsceneContext_getActualBlock(ZkCutsceneContext const* slf);
ZKC_API ZkBool ZkCutsceneContext_getWasTriggered(ZkCutsceneContext const* slf);

ZKC_API void ZkCutsceneContext_setProps(ZkCutsceneContext const* slf, ZkCutsceneProps* value);
ZKC_API void ZkCutsceneContext_setRoleCount(ZkCutsceneContext const* slf, int32_t value);
ZKC_API void ZkCutsceneContext_setRoleVobCount(ZkCutsceneContext const* slf, int32_t value);
ZKC_API void ZkCutsceneContext_setNpc(ZkCutsceneContext const* slf, ZkNpc* value);
ZKC_API void ZkCutsceneContext_setMainRole(ZkCutsceneContext const* slf, ZkNpc* value);
ZKC_API void ZkCutsceneContext_setIsCutscene(ZkCutsceneContext const* slf, ZkBool value);
ZKC_API void ZkCutsceneContext_setReference(ZkCutsceneContext const* slf, int value);
ZKC_API void ZkCutsceneContext_setActualBlock(ZkCutsceneContext const* slf, int value);
ZKC_API void ZkCutsceneContext_setWasTriggered(ZkCutsceneContext const* slf, ZkBool value);
