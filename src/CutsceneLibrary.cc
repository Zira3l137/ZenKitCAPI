// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/CutsceneLibrary.h"

#include "Internal.hh"

ZkCutsceneLibrary* ZkCutsceneLibrary_load(ZkRead* buf) {
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkCutsceneLibrary_load");
		return nullptr;
	}

	try {
		auto ar = zenkit::ReadArchive::from(buf);
		auto obj = new ZkCutsceneLibrary(new zenkit::CutsceneLibrary());
		(*obj)->load(*ar, zenkit::GameVersion::GOTHIC_1);
		return obj;
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkCutsceneLibrary_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkCutsceneLibrary* ZkCutsceneLibrary_loadPath(ZkString path) {
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkCutsceneLibrary_loadPath");
		return nullptr;
	}
	try {
		auto buf = zenkit::Read::from(path);
		return ZkCutsceneLibrary_load(buf.get());
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkCutsceneLibrary_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkCutsceneLibrary* ZkCutsceneLibrary_loadVfs(ZkVfs* vfs, ZkString name) {
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkCutsceneLibrary_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;
	auto rd = node->open_read();
	return ZkCutsceneLibrary_load(rd.get());
}

void ZkCutsceneLibrary_save(ZkCutsceneLibrary* slf, ZkWrite* buf, ZkArchiveFormat fmt) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());

	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkCutsceneLibrary_save");
		return;
	}

	try {
		auto ar = zenkit::WriteArchive::to(buf, static_cast<zenkit::ArchiveFormat>(fmt));
		SLF->save(*ar, zenkit::GameVersion::GOTHIC_1);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkCutsceneLibrary_save() failed: %s", exc.what());
	}
}

void ZkCutsceneLibrary_savePath(ZkCutsceneLibrary* slf, ZkString path, ZkArchiveFormat fmt) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());

	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkCutsceneLibrary_savePath");
		return;
	}

	try {
		auto buf = zenkit::Write::to(path);
		auto ar = zenkit::WriteArchive::to(buf.get(), static_cast<zenkit::ArchiveFormat>(fmt));
		SLF->save(*ar, zenkit::GameVersion::GOTHIC_1);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkCutsceneLibrary_savePath() failed: %s", exc.what());
	}
}

void ZkCutsceneLibrary_del(ZkCutsceneLibrary* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	delete slf;
}

ZkSize ZkCutsceneLibrary_getBlockCount(ZkCutsceneLibrary const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->blocks.size();
}

ZkCutsceneBlock const* ZkCutsceneLibrary_getBlockByIndex(ZkCutsceneLibrary const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	ZKC_CHECK_LEN(SLF->blocks, i);
	return new ZkCutsceneBlock {SLF->blocks[i]};
}

ZkCutsceneBlock const* ZkCutsceneLibrary_getBlock(ZkCutsceneLibrary const* slf, ZkString name) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());

	auto block = SLF->block_by_name(name);
	if (block == nullptr) return nullptr;
	return ZKC_WRAP_NEW(block);
}

void ZkCutsceneLibrary_enumerateBlocks(ZkCutsceneLibrary const* slf, ZkCutsceneBlockEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);
	ZKC_CHECK_NULLV(slf->get());

	for (auto& block : SLF->blocks) {
		if (cb(ctx, &block)) break;
	}
}

ZkString ZkCutsceneBlock_getName(ZkCutsceneBlock const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->name.c_str();
}

ZkCutsceneMessage const* ZkCutsceneBlock_getMessage(ZkCutsceneBlock const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());

	auto msg = SLF->get_message();
	if (msg == nullptr) return nullptr;
	return ZKC_WRAP_NEW(msg);
}

void ZkCutsceneBlock_setMessage(ZkCutsceneBlock const* slf, ZkCutsceneMessage* msg) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());

	if (msg == nullptr) {
		SLF->set_message(nullptr);
		return;
	}

	SLF->set_message(*msg);
}

void ZkCutsceneBlock_release(ZkCutsceneBlock const* slf) {
	delete slf;
}

uint32_t ZkCutsceneMessage_getType(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->type;
}

ZkString ZkCutsceneMessage_getText(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->text.c_str();
}

ZkString ZkCutsceneMessage_getName(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->name.c_str();
}

ZkBool ZkCutsceneMessage_getIsHighPriority(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->high_priority;
}

ZkBool ZkCutsceneMessage_getIsUsed(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->used;
}

ZkBool ZkCutsceneMessage_getIsDeleted(ZkCutsceneMessage const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->deleted;
}

void ZkCutsceneMessage_setType(ZkCutsceneMessage* slf, uint32_t value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->type = value;
}

void ZkCutsceneMessage_setText(ZkCutsceneMessage* slf, ZkString value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->text = value;
}

void ZkCutsceneMessage_setName(ZkCutsceneMessage* slf, ZkString value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->name = value;
}

void ZkCutsceneMessage_setIsHighPriority(ZkCutsceneMessage* slf, ZkBool value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->high_priority = value;
}

void ZkCutsceneMessage_setIsUsed(ZkCutsceneMessage* slf, ZkBool value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->used = value;
}

void ZkCutsceneMessage_setIsDeleted(ZkCutsceneMessage* slf, ZkBool value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->deleted = value;
}

void ZkCutsceneMessage_release(ZkCutsceneMessage const* slf) {
	delete slf;
}

ZkCutsceneProps* ZkCutsceneProps_new() {
	ZKC_TRACE_FN();
	return new ZkCutsceneProps {new zenkit::CutsceneProps};
}

void ZkCutsceneProps_release(ZkCutsceneProps* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	delete slf;
}

ZkString ZkCutsceneProps_getName(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->name.c_str();
}

ZkBool ZkCutsceneProps_getIsGlobal(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->global;
}

ZkBool ZkCutsceneProps_getIsLoop(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->loop;
}

ZkBool ZkCutsceneProps_getHasToBeTriggered(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->has_to_be_triggered;
}

float ZkCutsceneProps_getDistance(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->distance;
}

float ZkCutsceneProps_getRange(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->range;
}

int32_t ZkCutsceneProps_getLockedBlockCount(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->locked_block_count;
}

uint32_t ZkCutsceneProps_getRunBehaviour(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->run_behaviour;
}

int ZkCutsceneProps_getRunBehaviourValue(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->run_behaviour_value;
}

ZkString ZkCutsceneProps_getStageName(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->stage_name.c_str();
}

ZkString ZkCutsceneProps_getScriptFunctionOnStop(ZkCutsceneProps const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->script_function_on_stop.c_str();
}

void ZkCutsceneProps_setName(ZkCutsceneProps* slf, ZkString value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->name = value;
}

void ZkCutsceneProps_setIsGlobal(ZkCutsceneProps* slf, ZkBool value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->global = value;
}

void ZkCutsceneProps_setIsLoop(ZkCutsceneProps* slf, ZkBool value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->loop = value;
}

void ZkCutsceneProps_setHasToBeTriggered(ZkCutsceneProps* slf, ZkBool value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->has_to_be_triggered = value;
}

void ZkCutsceneProps_setDistance(ZkCutsceneProps* slf, float value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->distance = value;
}

void ZkCutsceneProps_setRange(ZkCutsceneProps* slf, float value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->range = value;
}

void ZkCutsceneProps_setLockedBlockCount(ZkCutsceneProps* slf, int32_t value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->locked_block_count = value;
}

void ZkCutsceneProps_setRunBehaviour(ZkCutsceneProps* slf, uint32_t value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->run_behaviour = value;
}

void ZkCutsceneProps_setRunBehaviourValue(ZkCutsceneProps* slf, int value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->run_behaviour_value = value;
}

void ZkCutsceneProps_setStageName(ZkCutsceneProps* slf, ZkString value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->stage_name = value;
}

void ZkCutsceneProps_setScriptFunctionOnStop(ZkCutsceneProps* slf, ZkString value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->script_function_on_stop = value;
}

ZkCutsceneContext* ZkCutsceneContext_new() {
	ZKC_TRACE_FN();
	return new ZkCutsceneContext {new zenkit::CutsceneContext};
}

void ZkCutsceneContext_release(ZkCutsceneContext* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	delete slf;
}

ZkCutsceneProps* ZkCutsceneContext_getProps(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());

	auto props = SLF->props;
	if (props == nullptr) return nullptr;
	return ZKC_WRAP_NEW(props);
}

int32_t ZkCutsceneContext_getRoleCount(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->role_count;
}

int32_t ZkCutsceneContext_getRoleVobCount(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->role_vob_count;
}

ZkNpc* ZkCutsceneContext_getNpc(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());

	auto npc = SLF->npc.lock();
	if (npc == nullptr) return nullptr;
	return ZKC_WRAP_NEW(npc);
}

ZkNpc* ZkCutsceneContext_getMainRole(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());

	auto npc = SLF->main_role.lock();
	if (npc == nullptr) return nullptr;
	return ZKC_WRAP_NEW(npc);
}

ZkBool ZkCutsceneContext_getIsCutscene(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->is_cutscene;
}

int ZkCutsceneContext_getReference(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->reference;
}

int ZkCutsceneContext_getActualBlock(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->actual_block;
}

ZkBool ZkCutsceneContext_getWasTriggered(ZkCutsceneContext const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->was_triggered;
}

void ZkCutsceneContext_setProps(ZkCutsceneContext const* slf, ZkCutsceneProps* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());

	if (value == nullptr) {
		SLF->props = nullptr;
		return;
	}

	SLF->props = *value;
}

void ZkCutsceneContext_setRoleCount(ZkCutsceneContext const* slf, int32_t value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->role_count = value;
}

void ZkCutsceneContext_setRoleVobCount(ZkCutsceneContext const* slf, int32_t value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->role_vob_count = value;
}

void ZkCutsceneContext_setNpc(ZkCutsceneContext const* slf, ZkNpc* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());

	if (value == nullptr) {
		SLF->npc.reset();
		return;
	}

	SLF->npc = *value;
}

void ZkCutsceneContext_setMainRole(ZkCutsceneContext const* slf, ZkNpc* value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());

	if (value == nullptr) {
		SLF->main_role.reset();
		return;
	}

	SLF->main_role = *value;
}

void ZkCutsceneContext_setIsCutscene(ZkCutsceneContext const* slf, ZkBool value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->is_cutscene = value;
}

void ZkCutsceneContext_setReference(ZkCutsceneContext const* slf, int value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->reference = value;
}

void ZkCutsceneContext_setActualBlock(ZkCutsceneContext const* slf, int value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->actual_block = value;
}

void ZkCutsceneContext_setWasTriggered(ZkCutsceneContext const* slf, ZkBool value) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	SLF->was_triggered = value;
}
