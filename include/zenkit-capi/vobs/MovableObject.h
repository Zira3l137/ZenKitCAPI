// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Library.h"
#include "../Stream.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/vobs/MovableObject.hh>
using ZkMovableObject = zenkit::VMovableObject;
using ZkInteractiveObject = zenkit::VInteractiveObject;
using ZkFire = zenkit::VFire;
using ZkContainer = zenkit::VContainer;
using ZkDoor = zenkit::VDoor;
#else
typedef struct ZkInternal_MovableObject ZkMovableObject;
typedef struct ZkInternal_InteractiveObject ZkInteractiveObject;
typedef struct ZkInternal_Fire ZkFire;
typedef struct ZkInternal_Container ZkContainer;
typedef struct ZkInternal_Door ZkDoor;
#endif

typedef enum {
	ZkSoundMaterialType_WOOD = 0,
	ZkSoundMaterialType_STONE = 1,
	ZkSoundMaterialType_METAL = 2,
	ZkSoundMaterialType_LEATHER = 3,
	ZkSoundMaterialType_CLAY = 4,
	ZkSoundMaterialType_GLASS = 5,
} ZkSoundMaterialType;

ZKC_API ZkMovableObject* ZkMovableObject_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkMovableObject* ZkMovableObject_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkMovableObject_del(ZkMovableObject* slf);

ZKC_API ZkString ZkMovableObject_getName(ZkMovableObject const* slf);
ZKC_API int32_t ZkMovableObject_getHp(ZkMovableObject const* slf);
ZKC_API int32_t ZkMovableObject_getDamage(ZkMovableObject const* slf);
ZKC_API ZkBool ZkMovableObject_getMovable(ZkMovableObject const* slf);
ZKC_API ZkBool ZkMovableObject_getTakable(ZkMovableObject const* slf);
ZKC_API ZkBool ZkMovableObject_getFocusOverride(ZkMovableObject const* slf);
ZKC_API ZkSoundMaterialType ZkMovableObject_getMaterial(ZkMovableObject const* slf);
ZKC_API ZkString ZkMovableObject_getVisualDestroyed(ZkMovableObject const* slf);
ZKC_API ZkString ZkMovableObject_getOwner(ZkMovableObject const* slf);
ZKC_API ZkString ZkMovableObject_getOwnerGuild(ZkMovableObject const* slf);
ZKC_API ZkBool ZkMovableObject_getDestroyed(ZkMovableObject const* slf);

ZKC_API ZkInteractiveObject* ZkInteractiveObject_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkInteractiveObject* ZkInteractiveObject_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkInteractiveObject_del(ZkInteractiveObject* slf);

ZKC_API int32_t ZkInteractiveObject_getState(ZkInteractiveObject const* slf);
ZKC_API ZkString ZkInteractiveObject_getTarget(ZkInteractiveObject const* slf);
ZKC_API ZkString ZkInteractiveObject_getItem(ZkInteractiveObject const* slf);
ZKC_API ZkString ZkInteractiveObject_getConditionFunction(ZkInteractiveObject const* slf);
ZKC_API ZkString ZkInteractiveObject_getOnStateChangeFunction(ZkInteractiveObject const* slf);
ZKC_API ZkBool ZkInteractiveObject_getRewind(ZkInteractiveObject const* slf);

ZKC_API ZkFire* ZkFire_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkFire* ZkFire_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkFire_del(ZkFire* slf);
ZKC_API ZkString ZkFire_getSlot(ZkFire const* slf);
ZKC_API ZkString ZkFire_getVobTree(ZkFire const* slf);

ZKC_API ZkContainer* ZkContainer_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkContainer* ZkContainer_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkContainer_del(ZkContainer* slf);
ZKC_API ZkBool ZkContainer_getIsLocked(ZkContainer const* slf);
ZKC_API ZkString ZkContainer_getKey(ZkContainer const* slf);
ZKC_API ZkString ZkContainer_getPickString(ZkContainer const* slf);
ZKC_API ZkString ZkContainer_getContents(ZkContainer const* slf);

ZKC_API ZkDoor* ZkDoor_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkDoor* ZkDoor_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkDoor_del(ZkDoor* slf);
ZKC_API ZkBool ZkDoor_getIsLocked(ZkDoor const* slf);
ZKC_API ZkString ZkDoor_getKey(ZkDoor const* slf);
ZKC_API ZkString ZkDoor_getPickString(ZkDoor const* slf);
