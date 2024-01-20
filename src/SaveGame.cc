// Copyright © 2024. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/SaveGame.h"

#include "Internal.hh"

#include <cstring>

ZkSaveGame* ZkSaveGame_new(ZkGameVersion version) {
	return new ZkSaveGame(static_cast<zenkit::GameVersion>(version));
}

void ZkSaveGame_del(ZkSaveGame* slf) {
	delete slf;
}

ZkBool ZkSaveGame_load(ZkSaveGame* slf, ZkString path) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, path);

	try {
		slf->load(path);
		return true;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkSaveGame_load() failed: %s", exc.what());
		return false;
	}
}

ZkBool ZkSaveGame_save(ZkSaveGame* slf, ZkString path, ZkWorld* world, ZkString worldName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, path, world, worldName);

	try {
		slf->save(path, **world, worldName);
		return true;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkSaveGame_save() failed: %s", exc.what());
		return false;
	}
}

ZkWorld* ZkSaveGame_loadCurrentWorld(ZkSaveGame const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return new ZkWorld(slf->load_world());
}

ZkWorld* ZkSaveGame_loadWorld(ZkSaveGame const* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf, name);
	return new ZkWorld(slf->load_world(name));
}

ZkSaveMetadata* ZkSaveGame_getMetadata(ZkSaveGame* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->metadata;
}

ZkSaveState* ZkSaveGame_getState(ZkSaveGame* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return &slf->state;
}

ZkTexture* ZkSaveGame_getThumbnail(ZkSaveGame* slf) {
	return slf->thumbnail ? &*slf->thumbnail : nullptr;
}

void ZkSaveGame_setThumbnail(ZkSaveGame* slf, ZkTexture* texture) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);

	if (texture) {
		slf->thumbnail = *texture;
		return;
	}

	slf->thumbnail = std::nullopt;
}

ZkString ZkSaveMetadata_getTitle(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->title.c_str();
}

ZkString ZkSaveMetadata_getWorld(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->world.c_str();
}

int ZkSaveMetadata_getTimeDay(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->time_day;
}

int ZkSaveMetadata_getTimeHour(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->time_hour;
}

int ZkSaveMetadata_getTimeMinute(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->time_minute;
}

ZkString ZkSaveMetadata_getSaveDate(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->save_date.c_str();
}

int ZkSaveMetadata_getVersionMajor(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->version_major;
}

int ZkSaveMetadata_getVersionMinor(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->version_minor;
}

int ZkSaveMetadata_getPlayTimeSeconds(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->play_time_seconds;
}

int ZkSaveMetadata_getVersionPoint(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->version_point;
}

int ZkSaveMetadata_getVersionInt(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->version_int;
}

ZkString ZkSaveMetadata_getVersionAppName(ZkSaveMetadata const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->version_app_name.c_str();
}

void ZkSaveMetadata_setTitle(ZkSaveMetadata* slf, ZkString title) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->title = title;
}

void ZkSaveMetadata_setWorld(ZkSaveMetadata* slf, ZkString world) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->world = world;
}

void ZkSaveMetadata_setTimeDay(ZkSaveMetadata* slf, int timeDay) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->time_day = timeDay;
}

void ZkSaveMetadata_setTimeHour(ZkSaveMetadata* slf, int timeHour) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->time_hour = timeHour;
}

void ZkSaveMetadata_setTimeMinute(ZkSaveMetadata* slf, int timeMinute) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->time_minute = timeMinute;
}

void ZkSaveMetadata_setSaveDate(ZkSaveMetadata* slf, ZkString saveDate) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->save_date = saveDate;
}

void ZkSaveMetadata_setVersionMajor(ZkSaveMetadata* slf, int versionMajor) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->version_major = versionMajor;
}

void ZkSaveMetadata_setVersionMinor(ZkSaveMetadata* slf, int versionMinor) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->version_minor = versionMinor;
}

void ZkSaveMetadata_setPlayTimeSeconds(ZkSaveMetadata* slf, int playTimeSeconds) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->play_time_seconds = playTimeSeconds;
}

void ZkSaveMetadata_setVersionPoint(ZkSaveMetadata* slf, int versionPoint) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->version_point = versionPoint;
}

void ZkSaveMetadata_setVersionInt(ZkSaveMetadata* slf, int versionInt) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->version_int = versionInt;
}

void ZkSaveMetadata_setVersionAppName(ZkSaveMetadata* slf, ZkString versionAppName) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->version_app_name = versionAppName;
}

int ZkSaveState_getDay(ZkSaveState const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->day;
}

int ZkSaveState_getHour(ZkSaveState const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->hour;
}

int ZkSaveState_getMinute(ZkSaveState const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->minute;
}

void ZkSaveState_setDay(ZkSaveState* slf, int day) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->day = day;
}

void ZkSaveState_setHour(ZkSaveState* slf, int hour) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->hour = hour;
}

void ZkSaveState_setMinute(ZkSaveState* slf, int minute) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->minute = minute;
}

ZkSize ZkSaveState_getMissionCount(ZkSaveState* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->missions.size();
}

void ZkSaveState_getMission(ZkSaveState* slf, ZkSize i, char const** name, int* id, ZkBool* av, int* statusIndex) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, name, id, av, statusIndex);
	ZKC_CHECK_LENV(slf->missions, i);

	*name = slf->missions[i].name.c_str();
	*id = slf->missions[i].id;
	*av = slf->missions[i].av;
	*statusIndex = slf->missions[i].status_index;
}

void ZkSaveState_setMission(ZkSaveState* slf, ZkSize i, char const* name, int id, ZkBool av, int statusIndex) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->missions, i);

	slf->missions[i].name = name;
	slf->missions[i].id = id;
	slf->missions[i].av = av;
	slf->missions[i].status_index = statusIndex;
}

void ZkSaveState_addMission(ZkSaveState* slf, char const* name, int id, ZkBool av, int statusIndex) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);

	auto& m = slf->missions.emplace_back();
	m.name = name;
	m.id = id;
	m.av = av;
	m.status_index = statusIndex;
}

void ZkSaveState_removeMission(ZkSaveState* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->missions, i);
	slf->missions.erase(slf->missions.begin() + static_cast<long>(i));
}

void ZkSaveState_clearMissions(ZkSaveState* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->missions.clear();
}

ZkSize ZkSaveState_getInfoStateCount(ZkSaveState* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->infos.size();
}

void ZkSaveState_getInfoState(ZkSaveState* slf, ZkSize i, char const** name, ZkBool* told) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, name, told);
	ZKC_CHECK_LENV(slf->infos, i);

	*name = slf->infos[i].name.c_str();
	*told = slf->infos[i].told;
}

void ZkSaveState_setInfoState(ZkSaveState* slf, ZkSize i, char const* name, ZkBool told) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->infos, i);

	slf->infos[i].name = name;
	slf->infos[i].told = told;
}

void ZkSaveState_addInfoState(ZkSaveState* slf, char const* name, ZkBool told) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);

	auto& i = slf->infos.emplace_back();
	i.name = name;
	i.told = told;
}

void ZkSaveState_removeInfoState(ZkSaveState* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->infos, i);
	slf->infos.erase(slf->infos.begin() + static_cast<long>(i));
}

void ZkSaveState_clearInfoStates(ZkSaveState* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->infos.clear();
}

ZkSize ZkSaveState_getSymbolStateCount(ZkSaveState* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->symbols.size();
}

void ZkSaveState_getSymbolState(ZkSaveState* slf, ZkSize i, char const** name, int** values, ZkSize* valueCount) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, name, values, valueCount);
	ZKC_CHECK_LENV(slf->symbols, i);

	*name = slf->symbols[i].name.c_str();
	*values = slf->symbols[i].values.data();
	*valueCount = slf->symbols[i].values.size();
}

void ZkSaveState_setSymbolState(ZkSaveState* slf, ZkSize i, char const* name, int* values, ZkSize valueCount) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->symbols, i);

	slf->symbols[i].name = name;
	slf->symbols[i].values.assign(values, values + valueCount);
}

void ZkSaveState_addSymbolState(ZkSaveState* slf, char const* name, int* values, ZkSize valueCount) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);

	auto& s = slf->symbols.emplace_back();
	s.name = name;
	s.values.assign(values, values + valueCount);
}

void ZkSaveState_removeSymbolState(ZkSaveState* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->symbols, i);
	slf->symbols.erase(slf->symbols.begin() + static_cast<long>(i));
}

void ZkSaveState_clearSymbolStates(ZkSaveState* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->symbols.clear();
}

ZkSize ZkSaveState_getLogTopicCount(ZkSaveState* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->log.size();
}

void ZkSaveState_getLogTopic(ZkSaveState* slf,
                             ZkSize i,
                             char const** description,
                             ZkSaveTopicSection* section,
                             ZkSaveTopicStatus* status) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, description, section, status);
	ZKC_CHECK_LENV(slf->log, i);

	*description = slf->log[i].description.c_str();
	*section = static_cast<ZkSaveTopicSection>(slf->log[i].section);
	*status = static_cast<ZkSaveTopicStatus>(slf->log[i].status);
}

void ZkSaveState_setLogTopic(ZkSaveState* slf,
                             ZkSize i,
                             char const* description,
                             ZkSaveTopicSection section,
                             ZkSaveTopicStatus status) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->log, i);

	slf->log[i].description = description;
	slf->log[i].section = static_cast<zenkit::SaveTopicSection>(section);
	slf->log[i].status = static_cast<zenkit::SaveTopicStatus>(status);
}

void ZkSaveState_addLogTopic(ZkSaveState* slf,
                             char const* description,
                             ZkSaveTopicSection section,
                             ZkSaveTopicStatus status) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);

	auto& l = slf->log.emplace_back();
	l.description = description;
	l.section = static_cast<zenkit::SaveTopicSection>(section);
	l.status = static_cast<zenkit::SaveTopicStatus>(status);
}

void ZkSaveState_removeLogTopic(ZkSaveState* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_LENV(slf->log, i);
	slf->log.erase(slf->log.begin() + static_cast<long>(i));
}

void ZkSaveState_clearLogTopics(ZkSaveState* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	slf->log.clear();
}

ZkByte* ZkSaveState_getGuildAttitudes(ZkSaveState* slf, ZkSize* dimension) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);

	*dimension = 42;
	return reinterpret_cast<ZkByte*>(slf->guild_attitudes);
}
void ZkSaveState_setGuildAttitudes(ZkSaveState* slf, ZkByte* attitudes, ZkSize dimension) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, attitudes);

	dimension = dimension > 42 ? 42 : dimension;
	memcpy(slf->guild_attitudes, attitudes, dimension * dimension);
}
