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
using ZkCutscenePlayer = ZkSharedHandle<zenkit::CutscenePlayer>;
using ZkSkyController = ZkSharedHandle<zenkit::SkyController>;
#else
typedef struct ZkInternal_World ZkWorld;
typedef struct ZkInternal_CutscenePlayer ZkCutscenePlayer;
typedef struct ZkInternal_SkyController ZkSkyController;
#endif

typedef struct {
	ZkNpc* npc;
	ZkVec3f position;
	float timer;
} ZkSpawnLocation;

ZKC_API ZkWorld* ZkWorld_load(ZkRead* buf);
ZKC_API ZkWorld* ZkWorld_loadPath(ZkString path);
ZKC_API ZkWorld* ZkWorld_loadVfs(ZkVfs* vfs, ZkString name);
ZKC_API ZkWorld* ZkWorld_loadVersioned(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkWorld* ZkWorld_loadPathVersioned(ZkString path, ZkGameVersion version);
ZKC_API ZkWorld* ZkWorld_loadVfsVersioned(ZkVfs* vfs, ZkString name, ZkGameVersion version);
ZKC_API void ZkWorld_del(ZkWorld* slf);

ZKC_API void ZkWorld_save(ZkWorld* slf, ZkWrite* write, ZkGameVersion version);

ZKC_API ZkMesh const* ZkWorld_getMesh(ZkWorld const* slf);
ZKC_API ZkWayNet const* ZkWorld_getWayNet(ZkWorld const* slf);
ZKC_API ZkBspTree const* ZkWorld_getBspTree(ZkWorld const* slf);

ZKC_API ZkSize ZkWorld_getRootObjectCount(ZkWorld const* slf);
ZKC_API ZkVirtualObject const* ZkWorld_getRootObject(ZkWorld const* slf, ZkSize i);
ZKC_API void ZkWorld_enumerateRootObjects(ZkWorld const* slf, ZkVirtualObjectEnumerator cb, void* ctx);
ZKC_API void ZkWorld_addRootObject(ZkWorld* slf, ZkVirtualObject* val);
ZKC_API void ZkWorld_clearRootObjects(ZkWorld* slf);

ZKC_API ZkBool ZkWorld_getNpcSpawnEnabled(ZkWorld const* slf);
ZKC_API void ZkWorld_setNpcSpawnEnabled(ZkWorld* slf, ZkBool val);
ZKC_API int ZkWorld_getNpcSpawnFlags(ZkWorld const* slf);
ZKC_API void ZkWorld_setNpcSpawnFlags(ZkWorld* slf, int val);

ZKC_API ZkSize ZkWorld_getNpcCount(ZkWorld const* slf);
ZKC_API ZkNpc* ZkWorld_getNpc(ZkWorld const* slf, ZkSize i);
ZKC_API void ZkWorld_clearNpcs(ZkWorld* slf);
ZKC_API void ZkWorld_removeNpc(ZkWorld* slf, ZkSize i);
ZKC_API void ZkWorld_addNpc(ZkWorld* slf, ZkNpc* npc);

ZKC_API ZkSize ZkWorld_getSpawnLocationCount(ZkWorld const* slf);
ZKC_API ZkSpawnLocation ZkWorld_getSpawnLocation(ZkWorld* slf, ZkSize i);
ZKC_API void ZkWorld_clearSpawnLocations(ZkWorld* slf);
ZKC_API void ZkWorld_addSpawnLocation(ZkWorld* slf, ZkSpawnLocation val);
ZKC_API void ZkWorld_removeSpawnLoaction(ZkWorld* slf, ZkSize i);

ZKC_API ZkCutscenePlayer* ZkWorld_getCutscenePlayer(ZkWorld const* slf);
ZKC_API void ZkWorld_setCutscenePlayer(ZkWorld* slf, ZkCutscenePlayer* val);
ZKC_API ZkSkyController* ZkWorld_getSkyController(ZkWorld const* slf);
ZKC_API void ZkWorld_setSkyController(ZkWorld* slf, ZkSkyController* val);

ZKC_API ZkCutscenePlayer* ZkCutscenePlayer_new(void);
ZKC_API void ZkCutscenePlayer_del(ZkCutscenePlayer* slf);

ZKC_API int32_t ZkCutscenePlayer_getLastProcessDay(ZkCutscenePlayer const* slf);
ZKC_API int32_t ZkCutscenePlayer_getLastProcessHour(ZkCutscenePlayer const* slf);
ZKC_API int32_t ZkCutscenePlayer_getPlayListCount(ZkCutscenePlayer const* slf);
ZKC_API void ZkCutscenePlayer_setLastProcessDay(ZkCutscenePlayer* slf, int32_t val);
ZKC_API void ZkCutscenePlayer_setLastProcessHour(ZkCutscenePlayer* slf, int32_t val);
ZKC_API void ZkCutscenePlayer_setPlayListCount(ZkCutscenePlayer* slf, int32_t val);

ZKC_API ZkSkyController* ZkSkyContoller_new(void);
ZKC_API void ZkSkyContoller_del(ZkSkyController* slf);

ZKC_API float ZkSkyController_getMasterTime(ZkSkyController const* slf);
ZKC_API float ZkSkyController_getRainWeight(ZkSkyController const* slf);
ZKC_API float ZkSkyController_getRainStart(ZkSkyController const* slf);
ZKC_API float ZkSkyController_getRainStop(ZkSkyController const* slf);
ZKC_API float ZkSkyController_getRainSctTimer(ZkSkyController const* slf);
ZKC_API float ZkSkyController_getRainSndVol(ZkSkyController const* slf);
ZKC_API float ZkSkyController_getDayCtr(ZkSkyController const* slf);
ZKC_API float ZkSkyController_getFadeScale(ZkSkyController const* slf);
ZKC_API ZkBool ZkSkyController_getRenderLightning(ZkSkyController const* slf);
ZKC_API ZkBool ZkSkyController_getIsRaining(ZkSkyController const* slf);
ZKC_API int ZkSkyController_getRainCtr(ZkSkyController const* slf);
ZKC_API void ZkSkyController_setMasterTime(ZkSkyController* slf, float val);
ZKC_API void ZkSkyController_setRainWeight(ZkSkyController* slf, float val);
ZKC_API void ZkSkyController_setRainStart(ZkSkyController* slf, float val);
ZKC_API void ZkSkyController_setRainStop(ZkSkyController* slf, float val);
ZKC_API void ZkSkyController_setRainSctTimer(ZkSkyController* slf, float val);
ZKC_API void ZkSkyController_setRainSndVol(ZkSkyController* slf, float val);
ZKC_API void ZkSkyController_setDayCtr(ZkSkyController* slf, float val);
ZKC_API void ZkSkyController_setFadeScale(ZkSkyController* slf, float val);
ZKC_API void ZkSkyController_setRenderLightning(ZkSkyController* slf, ZkBool val);
ZKC_API void ZkSkyController_setIsRaining(ZkSkyController* slf, ZkBool val);
ZKC_API void ZkSkyController_setRainCtr(ZkSkyController* slf, int val);
