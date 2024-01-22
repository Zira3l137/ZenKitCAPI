#pragma once
#include "Library.h"
#include "World.h"

#ifdef __cplusplus
	#include <zenkit/SaveGame.hh>

using ZkSaveGame = zenkit::SaveGame;
using ZkSaveMetadata = zenkit::SaveMetadata;
using ZkSaveState = zenkit::SaveState;
#else
typedef ZkInternal_SaveGame ZkSaveGame;
typedef ZkInternal_SaveMetadata ZkSaveMetadata;
typedef ZkInternal_SaveState ZkSaveState;
#endif

typedef enum {
	ZkSaveTopicSection_MISSIONS = 0x00,
	ZkSaveTopicSection_NOTES = 0x01,
} ZkSaveTopicSection;

typedef enum {
	ZkSaveTopicStatus_FREE = 0x00,
	ZkSaveTopicStatus_RUNNING = 0x01,
	ZkSaveTopicStatus_SUCCESS = 0x02,
	ZkSaveTopicStatus_FAILURE = 0x03,
	ZkSaveTopicStatus_OBSOLETE = 0x04,
} ZkSaveTopicStatus;

ZKC_API ZkSaveGame* ZkSaveGame_new(ZkGameVersion version);
ZKC_API void ZkSaveGame_del(ZkSaveGame* slf);

ZKC_API ZkBool ZkSaveGame_load(ZkSaveGame* slf, ZkString path);
ZKC_API ZkBool ZkSaveGame_save(ZkSaveGame* slf, ZkString path, ZkWorld* world, ZkString worldName);

ZKC_API ZkWorld* ZkSaveGame_loadCurrentWorld(ZkSaveGame const* slf);
ZKC_API ZkWorld* ZkSaveGame_loadWorld(ZkSaveGame const* slf, ZkString name);

ZKC_API ZkSaveMetadata* ZkSaveGame_getMetadata(ZkSaveGame* slf);
ZKC_API ZkSaveState* ZkSaveGame_getState(ZkSaveGame* slf);
ZKC_API ZkTexture* ZkSaveGame_getThumbnail(ZkSaveGame* slf);
ZKC_API void ZkSaveGame_setThumbnail(ZkSaveGame* slf, ZkTexture* texture);

ZKC_API ZkString ZkSaveMetadata_getTitle(ZkSaveMetadata const* slf);
ZKC_API ZkString ZkSaveMetadata_getWorld(ZkSaveMetadata const* slf);
ZKC_API int ZkSaveMetadata_getTimeDay(ZkSaveMetadata const* slf);
ZKC_API int ZkSaveMetadata_getTimeHour(ZkSaveMetadata const* slf);
ZKC_API int ZkSaveMetadata_getTimeMinute(ZkSaveMetadata const* slf);
ZKC_API ZkString ZkSaveMetadata_getSaveDate(ZkSaveMetadata const* slf);
ZKC_API int ZkSaveMetadata_getVersionMajor(ZkSaveMetadata const* slf);
ZKC_API int ZkSaveMetadata_getVersionMinor(ZkSaveMetadata const* slf);
ZKC_API int ZkSaveMetadata_getPlayTimeSeconds(ZkSaveMetadata const* slf);
ZKC_API int ZkSaveMetadata_getVersionPoint(ZkSaveMetadata const* slf);
ZKC_API int ZkSaveMetadata_getVersionInt(ZkSaveMetadata const* slf);
ZKC_API ZkString ZkSaveMetadata_getVersionAppName(ZkSaveMetadata const* slf);

ZKC_API void ZkSaveMetadata_setTitle(ZkSaveMetadata* slf, ZkString title);
ZKC_API void ZkSaveMetadata_setWorld(ZkSaveMetadata* slf, ZkString world);
ZKC_API void ZkSaveMetadata_setTimeDay(ZkSaveMetadata* slf, int timeDay);
ZKC_API void ZkSaveMetadata_setTimeHour(ZkSaveMetadata* slf, int timeHour);
ZKC_API void ZkSaveMetadata_setTimeMinute(ZkSaveMetadata* slf, int timeMinute);
ZKC_API void ZkSaveMetadata_setSaveDate(ZkSaveMetadata* slf, ZkString saveDate);
ZKC_API void ZkSaveMetadata_setVersionMajor(ZkSaveMetadata* slf, int versionMajor);
ZKC_API void ZkSaveMetadata_setVersionMinor(ZkSaveMetadata* slf, int versionMinor);
ZKC_API void ZkSaveMetadata_setPlayTimeSeconds(ZkSaveMetadata* slf, int playTimeSeconds);
ZKC_API void ZkSaveMetadata_setVersionPoint(ZkSaveMetadata* slf, int versionPoint);
ZKC_API void ZkSaveMetadata_setVersionInt(ZkSaveMetadata* slf, int versionInt);
ZKC_API void ZkSaveMetadata_setVersionAppName(ZkSaveMetadata* slf, ZkString versionAppName);

ZKC_API int ZkSaveState_getDay(ZkSaveState const* slf);
ZKC_API int ZkSaveState_getHour(ZkSaveState const* slf);
ZKC_API int ZkSaveState_getMinute(ZkSaveState const* slf);
ZKC_API void ZkSaveState_setDay(ZkSaveState* slf, int day);
ZKC_API void ZkSaveState_setHour(ZkSaveState* slf, int hour);
ZKC_API void ZkSaveState_setMinute(ZkSaveState* slf, int minute);

ZKC_API ZkSize ZkSaveState_getMissionCount(ZkSaveState* slf);
ZKC_API void ZkSaveState_getMission(ZkSaveState* slf, ZkSize i, ZkString* name, int* id, ZkBool* av, int* statusIndex);
ZKC_API void ZkSaveState_setMission(ZkSaveState* slf, ZkSize i, ZkString name, int id, ZkBool av, int statusIndex);
ZKC_API void ZkSaveState_addMission(ZkSaveState* slf, ZkString name, int id, ZkBool av, int statusIndex);
ZKC_API void ZkSaveState_removeMission(ZkSaveState* slf, ZkSize i);
ZKC_API void ZkSaveState_clearMissions(ZkSaveState* slf);

ZKC_API ZkSize ZkSaveState_getInfoStateCount(ZkSaveState* slf);
ZKC_API void ZkSaveState_getInfoState(ZkSaveState* slf, ZkSize i, ZkString* name, ZkBool* told);
ZKC_API void ZkSaveState_setInfoState(ZkSaveState* slf, ZkSize i, ZkString name, ZkBool told);
ZKC_API void ZkSaveState_addInfoState(ZkSaveState* slf, ZkString name, ZkBool told);
ZKC_API void ZkSaveState_removeInfoState(ZkSaveState* slf, ZkSize i);
ZKC_API void ZkSaveState_clearInfoStates(ZkSaveState* slf);

ZKC_API ZkSize ZkSaveState_getSymbolStateCount(ZkSaveState* slf);
ZKC_API void ZkSaveState_getSymbolState(ZkSaveState* slf, ZkSize i, ZkString* name, int** values, ZkSize* valueCount);
ZKC_API void ZkSaveState_setSymbolState(ZkSaveState* slf, ZkSize i, ZkString name, int* values, ZkSize valueCount);
ZKC_API void ZkSaveState_addSymbolState(ZkSaveState* slf, ZkString name, int* values, ZkSize valueCount);
ZKC_API void ZkSaveState_removeSymbolState(ZkSaveState* slf, ZkSize i);
ZKC_API void ZkSaveState_clearSymbolStates(ZkSaveState* slf);

// TODO(lmichaelis): Entries
ZKC_API ZkSize ZkSaveState_getLogTopicCount(ZkSaveState* slf);
ZKC_API void ZkSaveState_getLogTopic(ZkSaveState* slf,
                                     ZkSize i,
                                     ZkString* description,
                                     ZkSaveTopicSection* section,
                                     ZkSaveTopicStatus* status);
ZKC_API void ZkSaveState_setLogTopic(ZkSaveState* slf,
                                     ZkSize i,
                                     ZkString description,
                                     ZkSaveTopicSection section,
                                     ZkSaveTopicStatus status);
ZKC_API void
ZkSaveState_addLogTopic(ZkSaveState* slf, ZkString description, ZkSaveTopicSection section, ZkSaveTopicStatus status);
ZKC_API void ZkSaveState_removeLogTopic(ZkSaveState* slf, ZkSize i);
ZKC_API void ZkSaveState_clearLogTopics(ZkSaveState* slf);

ZKC_API ZkSize ZkSaveState_getLogTopicEntryCount(ZkSaveState* slf, ZkSize iTopic);
ZKC_API ZkString ZkSaveState_getLogTopicEntry(ZkSaveState* slf, ZkSize iTopic, ZkSize i);
ZKC_API void ZkSaveState_addLogTopicEntry(ZkSaveState* slf, ZkSize iTopic, ZkString description);
ZKC_API void ZkSaveState_clearLogTopicEntries(ZkSaveState* slf, ZkSize iTopic);

ZKC_API ZkByte* ZkSaveState_getGuildAttitudes(ZkSaveState* slf, ZkSize* dimension);
ZKC_API void ZkSaveState_setGuildAttitudes(ZkSaveState* slf, ZkByte* attitudes, ZkSize dimension);
