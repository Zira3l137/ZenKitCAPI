// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Stream.h"
#include "../Matrix.h"
#include "../Vector.h"

#ifdef __cplusplus
	#include <zenkit/vobs/Zone.hh>
using ZkZoneMusic = zenkit::vobs::ZoneMusic;
using ZkZoneFarPlane = zenkit::vobs::ZoneFarPlane;
using ZkZoneFog = zenkit::vobs::ZoneFog;
#else
typedef struct ZkInternal_ZoneMusic ZkZoneMusic;
typedef struct ZkInternal_ZoneFarPlane ZkZoneFarPlane;
typedef struct ZkInternal_ZoneFog ZkZoneFog;
#endif

CZK_API ZkZoneMusic* ZkZoneMusic_load(ZkRead* buf, ZkGameVersion version);
CZK_API ZkZoneMusic* ZkZoneMusic_loadPath(ZkString path, ZkGameVersion version);
CZK_API void ZkZoneMusic_del(ZkZoneMusic* slf);
CZK_API ZkBool ZkZoneMusic_getIsEnabled(ZkZoneMusic const* slf);
CZK_API int32_t ZkZoneMusic_getPriority(ZkZoneMusic const* slf);
CZK_API ZkBool ZkZoneMusic_getIsEllipsoid(ZkZoneMusic const* slf);
CZK_API float ZkZoneMusic_getReverb(ZkZoneMusic const* slf);
CZK_API float ZkZoneMusic_getVolume(ZkZoneMusic const* slf);
CZK_API ZkBool ZkZoneMusic_getIsLoop(ZkZoneMusic const* slf);

CZK_API ZkZoneFarPlane* ZkZoneFarPlane_load(ZkRead* buf, ZkGameVersion version);
CZK_API ZkZoneFarPlane* ZkZoneFarPlane_loadPath(ZkString path, ZkGameVersion version);
CZK_API void ZkZoneFarPlane_del(ZkZoneFarPlane* slf);
CZK_API float ZkZoneFarPlane_getVobFarPlaneZ(ZkZoneFarPlane const* slf);
CZK_API float ZkZoneFarPlane_getInnerRangePercentage(ZkZoneFarPlane const* slf);

CZK_API ZkZoneFog* ZkZoneFog_load(ZkRead* buf, ZkGameVersion version);
CZK_API ZkZoneFog* ZkZoneFog_loadPath(ZkString path, ZkGameVersion version);
CZK_API void ZkZoneFog_del(ZkZoneFog* slf);
CZK_API float ZkZoneFog_getRangeCenter(ZkZoneFog const* slf);
CZK_API float ZkZoneFog_getInnerRangePercentage(ZkZoneFog const* slf);
CZK_API ZkColor ZkZoneFog_getColor(ZkZoneFog const* slf);
CZK_API ZkBool ZkZoneFog_getFadeOutSky(ZkZoneFog const* slf);
CZK_API ZkBool ZkZoneFog_getOverrideColor(ZkZoneFog const* slf);
