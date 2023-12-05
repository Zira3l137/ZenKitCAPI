#include "zenkit-capi/daedalus/MusicSystemInstance.hh"
#include "../Internal.hh"

float ZkMusicSystemInstance_getVolume(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->volume;
}

void ZkMusicSystemInstance_setVolume(ZkMusicSystemInstance* slf, float volume) {
	ZKC_CHECK_NULLV(slf);
	slf->volume = volume;
}

int32_t ZkMusicSystemInstance_getBitResolution(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->bit_resolution;
}

void ZkMusicSystemInstance_setBitResolution(ZkMusicSystemInstance* slf, int32_t bitResolution) {
	ZKC_CHECK_NULLV(slf);
	slf->bit_resolution = bitResolution;
}

int32_t ZkMusicSystemInstance_getGlobalReverbEnabled(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->global_reverb_enabled;
}

void ZkMusicSystemInstance_setGlobalReverbEnabled(ZkMusicSystemInstance* slf, int32_t globalReverbEnabled) {
	ZKC_CHECK_NULLV(slf);
	slf->global_reverb_enabled = globalReverbEnabled;
}

int32_t ZkMusicSystemInstance_getSampleRate(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sample_rate;
}

void ZkMusicSystemInstance_setSampleRate(ZkMusicSystemInstance* slf, int32_t sampleRate) {
	ZKC_CHECK_NULLV(slf);
	slf->sample_rate = sampleRate;
}

int32_t ZkMusicSystemInstance_getNumChannels(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->num_channels;
}

void ZkMusicSystemInstance_setNumChannels(ZkMusicSystemInstance* slf, int32_t numChannels) {
	ZKC_CHECK_NULLV(slf);
	slf->num_channels = numChannels;
}

int32_t ZkMusicSystemInstance_getReverbBufferSize(ZkMusicSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->reverb_buffer_size;
}

void ZkMusicSystemInstance_setReverbBufferSize(ZkMusicSystemInstance* slf, int32_t reverbBufferSize) {
	ZKC_CHECK_NULLV(slf);
	slf->reverb_buffer_size = reverbBufferSize;
}
