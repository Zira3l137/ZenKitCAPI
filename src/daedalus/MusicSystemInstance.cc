#include "zenkit-capi/daedalus/MusicSystemInstance.hh"
#include "../Internal.hh"

float ZkMusicSystemInstance_getVolume(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->volume;
}

int32_t ZkMusicSystemInstance_getBitResolution(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->bit_resolution;
}

int32_t ZkMusicSystemInstance_getGlobalReverbEnabled(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->global_reverb_enabled;
}

int32_t ZkMusicSystemInstance_getSampleRate(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sample_rate;
}

int32_t ZkMusicSystemInstance_getNumChannels(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->num_channels;
}

int32_t ZkMusicSystemInstance_getReverbBufferSize(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->reverb_buffer_size;
}
