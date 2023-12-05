#include "zenkit-capi/daedalus/SoundSystemInstance.hh"
#include "../Internal.hh"

float ZkSoundSystemInstance_getVolume(ZkSoundSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->volume;
}

void ZkSoundSystemInstance_setVolume(ZkSoundSystemInstance* slf, float volume) {
	ZKC_CHECK_NULLV(slf);
	slf->volume = volume;
}

int32_t ZkSoundSystemInstance_getBitResolution(ZkSoundSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->bit_resolution;
}

void ZkSoundSystemInstance_setBitResolution(ZkSoundSystemInstance* slf, int32_t bitResolution) {
	ZKC_CHECK_NULLV(slf);
	slf->bit_resolution = bitResolution;
}

int32_t ZkSoundSystemInstance_getSampleRate(ZkSoundSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sample_rate;
}

void ZkSoundSystemInstance_setSampleRate(ZkSoundSystemInstance* slf, int32_t sampleRate) {
	ZKC_CHECK_NULLV(slf);
	slf->sample_rate = sampleRate;
}

int32_t ZkSoundSystemInstance_getUseStereo(ZkSoundSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->use_stereo;
}

void ZkSoundSystemInstance_setUseStereo(ZkSoundSystemInstance* slf, int32_t useStereo) {
	ZKC_CHECK_NULLV(slf);
	slf->use_stereo = useStereo;
}

int32_t ZkSoundSystemInstance_getNumSfxChannels(ZkSoundSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->num_sfx_channels;
}

void ZkSoundSystemInstance_setNumSfxChannels(ZkSoundSystemInstance* slf, int32_t numSfxChannels) {
	ZKC_CHECK_NULLV(slf);
	slf->num_sfx_channels = numSfxChannels;
}

ZkString ZkSoundSystemInstance_getUsed3DProviderName(ZkSoundSystemInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->used_3d_provider_name.c_str();
}

void ZkSoundSystemInstance_setUsed3DProviderName(ZkSoundSystemInstance* slf, ZkString used3DProviderName) {
	ZKC_CHECK_NULLV(slf);
	slf->used_3d_provider_name = used3DProviderName;
}
