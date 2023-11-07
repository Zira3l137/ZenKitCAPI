// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Matrix.h"
#include "../Stream.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/vobs/MovableObject.hh>
using ZkMovableObject = zenkit::vobs::MovableObject;
using ZkInteractiveObject = zenkit::vobs::InteractiveObject;
using ZkFire = zenkit::vobs::Fire;
using ZkContainer = zenkit::vobs::Container;
using ZkDoor = zenkit::vobs::Door;
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

CZK_API ZkMovableObject* ZkMovableObject_load(ZkRead* buf, ZkGameVersion version);
CZK_API ZkMovableObject* ZkMovableObject_loadPath(ZkString path, ZkGameVersion version);
CZK_API void ZkMovableObject_del(ZkMovableObject* slf);

CZK_API ZkString ZkMovableObject_getName(ZkMovableObject const* slf);
CZK_API int32_t ZkMovableObject_getHp(ZkMovableObject const* slf);
CZK_API int32_t ZkMovableObject_getDamage(ZkMovableObject const* slf);
CZK_API ZkBool ZkMovableObject_getMovable(ZkMovableObject const* slf);
CZK_API ZkBool ZkMovableObject_getTakable(ZkMovableObject const* slf);
CZK_API ZkBool ZkMovableObject_getFocusOverride(ZkMovableObject const* slf);
CZK_API ZkSoundMaterialType ZkMovableObject_getMaterial(ZkMovableObject const* slf);
CZK_API ZkString ZkMovableObject_getVisualDestroyed(ZkMovableObject const* slf);
CZK_API ZkString ZkMovableObject_getOwner(ZkMovableObject const* slf);
CZK_API ZkString ZkMovableObject_getOwnerGuild(ZkMovableObject const* slf);
CZK_API ZkBool ZkMovableObject_getDestroyed(ZkMovableObject const* slf);

CZK_API ZkInteractiveObject* ZkInteractiveObject_load(ZkRead* buf, ZkGameVersion version);
CZK_API ZkInteractiveObject* ZkInteractiveObject_loadPath(ZkString path, ZkGameVersion version);
CZK_API void ZkInteractiveObject_del(ZkInteractiveObject* slf);

CZK_API int32_t ZkInteractiveObject_getState(ZkInteractiveObject const* slf);
CZK_API ZkString ZkInteractiveObject_getTarget(ZkInteractiveObject const* slf);
CZK_API ZkString ZkInteractiveObject_getItem(ZkInteractiveObject const* slf);
CZK_API ZkString ZkInteractiveObject_getConditionFunction(ZkInteractiveObject const* slf);
CZK_API ZkString ZkInteractiveObject_getOnStateChangeFunction(ZkInteractiveObject const* slf);
CZK_API ZkBool ZkInteractiveObject_getRewind(ZkInteractiveObject const* slf);

CZK_API ZkFire* ZkFire_load(ZkRead* buf, ZkGameVersion version);
CZK_API ZkFire* ZkFire_loadPath(ZkString path, ZkGameVersion version);
CZK_API void ZkFire_del(ZkFire* slf);
CZK_API ZkString ZkFire_getSlot(ZkFire const* slf);
CZK_API ZkString ZkFire_getVobTree(ZkFire const* slf);

CZK_API ZkContainer* ZkContainer_load(ZkRead* buf, ZkGameVersion version);
CZK_API ZkContainer* ZkContainer_loadPath(ZkString path, ZkGameVersion version);
CZK_API void ZkContainer_del(ZkContainer* slf);
CZK_API ZkBool ZkContainer_getIsLocked(ZkContainer const* slf);
CZK_API ZkString ZkContainer_getKey(ZkContainer const* slf);
CZK_API ZkString ZkContainer_getPickString(ZkContainer const* slf);
CZK_API ZkString ZkContainer_getContents(ZkContainer const* slf);

CZK_API ZkDoor* ZkDoor_load(ZkRead* buf, ZkGameVersion version);
CZK_API ZkDoor* ZkDoor_loadPath(ZkString path, ZkGameVersion version);
CZK_API void ZkDoor_del(ZkDoor* slf);
CZK_API ZkBool ZkDoor_getIsLocked(ZkDoor const* slf);
CZK_API ZkString ZkDoor_getKey(ZkDoor const* slf);
CZK_API ZkString ZkDoor_getPickString(ZkDoor const* slf);
