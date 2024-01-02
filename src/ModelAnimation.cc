// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "zenkit-capi/ModelAnimation.h"

#include "Internal.hh"

ZKC_LOADER(ZkModelAnimation);
ZKC_PATH_LOADER(ZkModelAnimation);
ZKC_VFS_LOADER(ZkModelAnimation);
ZKC_DELETER(ZkModelAnimation);

ZkString ZkModelAnimation_getName(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

ZkString ZkModelAnimation_getNext(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->next.c_str();
}

uint32_t ZkModelAnimation_getLayer(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->layer;
}

uint32_t ZkModelAnimation_getFrameCount(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->frame_count;
}

uint32_t ZkModelAnimation_getNodeCount(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->node_count;
}

float ZkModelAnimation_getFps(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->fps;
}

float ZkModelAnimation_getFpsSource(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->fps_source;
}

ZkAxisAlignedBoundingBox ZkModelAnimation_getBbox(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->bbox;
}

uint32_t ZkModelAnimation_getChecksum(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->checksum;
}

ZkString ZkModelAnimation_getSourcePath(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->source_path.c_str();
}

ZkDate ZkModelAnimation_getSourceDate(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->source_date;
}

ZkString ZkModelAnimation_getSourceScript(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->source_script.c_str();
}

ZkSize ZkModelAnimation_getSampleCount(ZkModelAnimation const* slf) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	return slf->samples.size();
}

ZkAnimationSample ZkModelAnimation_getSample(ZkModelAnimation const* slf, ZkSize i) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_LEN(slf->samples, i);
	return slf->samples[i];
}

void ZkModelAnimation_enumerateSamples(ZkModelAnimation const* slf, ZkAnimationSampleEnumerator cb, void* ctx) {
	ZKC_TRACE_FN();
	ZKC_CHECK_NULLV(slf, cb);

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
	ZKC_CHECK_NULL(slf, length);

	if (length != nullptr) *length = slf->node_indices.size();
	return slf->node_indices.data();
}
