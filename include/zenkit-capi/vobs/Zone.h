// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#pragma once
#include "../Boxes.h"
#include "../Library.h"
#include "../Matrix.h"
#include "../Stream.h"
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

ZKC_API ZkZoneMusic* ZkZoneMusic_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkZoneMusic* ZkZoneMusic_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkZoneMusic_del(ZkZoneMusic* slf);
ZKC_API ZkBool ZkZoneMusic_getIsEnabled(ZkZoneMusic const* slf);
ZKC_API int32_t ZkZoneMusic_getPriority(ZkZoneMusic const* slf);
ZKC_API ZkBool ZkZoneMusic_getIsEllipsoid(ZkZoneMusic const* slf);
ZKC_API float ZkZoneMusic_getReverb(ZkZoneMusic const* slf);
ZKC_API float ZkZoneMusic_getVolume(ZkZoneMusic const* slf);
ZKC_API ZkBool ZkZoneMusic_getIsLoop(ZkZoneMusic const* slf);

ZKC_API ZkZoneFarPlane* ZkZoneFarPlane_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkZoneFarPlane* ZkZoneFarPlane_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkZoneFarPlane_del(ZkZoneFarPlane* slf);
ZKC_API float ZkZoneFarPlane_getVobFarPlaneZ(ZkZoneFarPlane const* slf);
ZKC_API float ZkZoneFarPlane_getInnerRangePercentage(ZkZoneFarPlane const* slf);

ZKC_API ZkZoneFog* ZkZoneFog_load(ZkRead* buf, ZkGameVersion version);
ZKC_API ZkZoneFog* ZkZoneFog_loadPath(ZkString path, ZkGameVersion version);
ZKC_API void ZkZoneFog_del(ZkZoneFog* slf);
ZKC_API float ZkZoneFog_getRangeCenter(ZkZoneFog const* slf);
ZKC_API float ZkZoneFog_getInnerRangePercentage(ZkZoneFog const* slf);
ZKC_API ZkColor ZkZoneFog_getColor(ZkZoneFog const* slf);
ZKC_API ZkBool ZkZoneFog_getFadeOutSky(ZkZoneFog const* slf);
ZKC_API ZkBool ZkZoneFog_getOverrideColor(ZkZoneFog const* slf);
