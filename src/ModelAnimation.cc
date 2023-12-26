// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/ModelAnimation.h"

#include "Internal.hh"

ZkModelAnimation* ZkModelAnimation_load(ZkRead* buf) {
	ZKC_TRACE_FN();
	if (buf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_load");
		return nullptr;
	}

	try {
		ZkModelAnimation obj {};
		obj.load(buf);
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkModelAnimation_load() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModelAnimation* ZkModelAnimation_loadPath(ZkString path) {
	ZKC_TRACE_FN();
	if (path == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_loadPath");
		return nullptr;
	}

	try {
		auto buf = zenkit::Read::from(path);

		ZkModelAnimation obj {};
		obj.load(buf.get());
		return ZKC_WRAP_NEW(obj);
	} catch (std::exception const& exc) {
		ZKC_LOG_ERROR("ZkModelAnimation_loadPath() failed: %s", exc.what());
		return nullptr;
	}
}

ZkModelAnimation* ZkModelAnimation_loadVfs(ZkVfs* vfs, ZkString name) {
	ZKC_TRACE_FN();
	if (vfs == nullptr || name == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_loadVfs");
		return nullptr;
	}

	auto node = vfs->find(name);
	if (node == nullptr) return nullptr;

	auto rd = node->open_read();
	return ZkModelAnimation_load(rd.get());
}

void ZkModelAnimation_del(ZkModelAnimation* slf) {
	ZKC_TRACE_FN();
	delete slf;
}

ZkString ZkModelAnimation_getName(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getName");
		return nullptr;
	}

	return slf->name.c_str();
}

ZkString ZkModelAnimation_getNext(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getNext");
		return nullptr;
	}

	return slf->next.c_str();
}

uint32_t ZkModelAnimation_getLayer(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getLayer");
		return 0;
	}

	return slf->layer;
}

uint32_t ZkModelAnimation_getFrameCount(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getFrameCount");
		return 0;
	}

	return slf->frame_count;
}

uint32_t ZkModelAnimation_getNodeCount(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getNodeCount");
		return 0;
	}

	return slf->node_count;
}

float ZkModelAnimation_getFps(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getFps");
		return 0;
	}

	return slf->fps;
}

float ZkModelAnimation_getFpsSource(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getFpsSource");
		return 0;
	}

	return slf->fps_source;
}

ZkAxisAlignedBoundingBox ZkModelAnimation_getBbox(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getBbox");
		return {};
	}

	return slf->bbox;
}

uint32_t ZkModelAnimation_getChecksum(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getChecksum");
		return 0;
	}

	return slf->checksum;
}

ZkString ZkModelAnimation_getSourcePath(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getSourcePath");
		return nullptr;
	}

	return slf->source_path.c_str();
}

ZkDate ZkModelAnimation_getSourceDate(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getSourceDate");
		return {};
	}

	return slf->source_date;
}

ZkString ZkModelAnimation_getSourceScript(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getSourceScript");
		return nullptr;
	}

	return slf->source_script.c_str();
}

ZkSize ZkModelAnimation_getSampleCount(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getSampleCount");
		return 0;
	}

	return slf->samples.size();
}

ZkAnimationSample ZkModelAnimation_getSample(ZkModelAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getSample");
		return {};
	}

	if (i >= slf->samples.size()) {
		ZKC_LOG_ERROR("ZkModelAnimation_getSample() failed: index out of range");
		return {};
	}

	return slf->samples[i];
}

void ZkModelAnimation_enumerateSamples(ZkModelAnimation const* slf, ZkAnimationSampleEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	if (slf == nullptr || cb == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_enumerateSamples");
		return;
	}

	ZkAnimationSample as {};
	for (auto& sample : slf->samples) {
		as = sample;
		if (cb(ctx, &as)) {
			break;
		}
	}
}

uint32_t const* ZkModelAnimation_getNodeIndices(ZkModelAnimation const* slf, ZkSize* length) {
	ZKC_TRACE_FN();
	if (slf == nullptr) {
		ZKC_LOG_WARN_NULL("ZkModelAnimation_getNodeIndices");

		if (length != nullptr) *length = 0;
		return nullptr;
	}

	if (length != nullptr) *length = slf->node_indices.size();
	return slf->node_indices.data();
}
