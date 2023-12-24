// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/MorphMesh.h"

#include "Internal.hh"

ZkMorphMesh* ZkMorphMesh_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_load");
		return nullptr;
	}

	try {
		ZkMorphMesh obj {};
		obj.load(buf);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkMorphMesh_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMorphMesh* ZkMorphMesh_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkMorphMesh obj {};
		obj.load(buf.get());
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkMorphMesh_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkMorphMesh* ZkMorphMesh_loadVfs(ZkVfs* vfs, ZkString name) {
	ZKC_TRACE_FN();
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkMorphMesh_load(rd.get());
}

void ZkMorphMesh_del(ZkMorphMesh* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

ZkString ZkMorphMesh_getName(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

ZkMultiResolutionMesh const* ZkMorphMesh_getMesh(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_getMesh");
		return nullptr;
	}

	return &slf->mesh;
}

ZkVec3f const* ZkMorphMesh_getMorphPositions(ZkMorphMesh const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_getMorphPositions");
		return nullptr;
	}

	*count = slf->morph_positions.size();
	return slf->morph_positions.data();
}

ZkSize ZkMorphMesh_getAnimationCount(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_getAnimationCount");
		return 0;
	}

	return slf->animations.size();
}

ZkMorphAnimation const* ZkMorphMesh_getAnimation(ZkMorphMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_getAnimation");
		return nullptr;
	}

	if (i >= slf->animations.size()) {
		ZKC_LOG_ERROR("ZkMorphMesh_getAnimation() failed: index out of range");
		return nullptr;
	}

	return &slf->animations[i];
}

void ZkMorphMesh_enumerateAnimations(ZkMorphMesh const* slf, ZkMorphAnimationEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_enumerateAnimations");
		return;
	}

	for (auto& ani : slf->animations) {
		if (cb(ctx, &ani)) break;
	}
}

ZkSize ZkMorphMesh_getSourceCount(ZkMorphMesh const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_getSourceCount");
		return 0;
	}

	return slf->sources.size();
}

ZkMorphSource const* ZkMorphMesh_getSource(ZkMorphMesh const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_getSource");
		return nullptr;
	}

	if (i >= slf->sources.size()) {
		ZKC_LOG_ERROR("ZkMorphMesh_getSource() failed: index out of range");
		return nullptr;
	}

	return &slf->sources[i];
}

void ZkMorphMesh_enumerateSources(ZkMorphMesh const* slf, ZkMorphSourceEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphMesh_enumerateSources");
		return;
	}

	for (auto& src : slf->sources) {
		if (cb(ctx, &src)) break;
	}
}

ZkString ZkMorphAnimation_getName(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

int32_t ZkMorphAnimation_getLayer(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getLayer");
		return 0;
	}

	return slf->layer;
}

float ZkMorphAnimation_getBlendIn(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getBlendIn");
		return 0;
	}

	return slf->blend_in;
}

float ZkMorphAnimation_getBlendOut(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getBlendOut");
		return 0;
	}

	return slf->blend_out;
}

float ZkMorphAnimation_getDuration(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getDuration");
		return 0;
	}

	return slf->duration;
}

float ZkMorphAnimation_getSpeed(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getSpeed");
		return 0;
	}

	return slf->speed;
}

uint8_t ZkMorphAnimation_getFlags(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getFlags");
		return 0;
	}

	return slf->flags;
}

uint32_t ZkMorphAnimation_getFrameCount(ZkMorphAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getFrameCount");
		return 0;
	}

	return slf->frame_count;
}

uint32_t const* ZkMorphAnimation_getVertices(ZkMorphAnimation const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getVertices");
		return nullptr;
	}

	*count = slf->vertices.size();
	return slf->vertices.data();
}

ZkVec3f const* ZkMorphAnimation_getSamples(ZkMorphAnimation const* slf, ZkSize* count) {
	ZKC_TRACE_FN();
	if (slf == nullptr || count == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphAnimation_getSamples");
		return nullptr;
	}

	*count = slf->samples.size();
	return slf->samples.data();
}

ZkDate ZkMorphSource_getFileDate(ZkMorphSource const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphSource_getFileDate");
		return {};
	}

	return slf->file_date;
}

ZkString ZkMorphSource_getFileName(ZkMorphSource const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkMorphSource_getFileName");
		return nullptr;
	}

	return slf->file_name.c_str();
}
