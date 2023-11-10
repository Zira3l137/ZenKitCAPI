#include "czenkit/daedalus/MusicSystemInstance.hh"
#include "../Internal.hh"

float ZkMusicSystemInstance_getVolume(ZkMusicSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->volume;
}

int32_t ZkMusicSystemInstance_getBitResolution(ZkMusicSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->bit_resolution;
}

int32_t ZkMusicSystemInstance_getGlobalReverbEnabled(ZkMusicSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->global_reverb_enabled;
}

int32_t ZkMusicSystemInstance_getSampleRate(ZkMusicSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sample_rate;
}

int32_t ZkMusicSystemInstance_getNumChannels(ZkMusicSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->num_channels;
}

int32_t ZkMusicSystemInstance_getReverbBufferSize(ZkMusicSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->reverb_buffer_size;
}
