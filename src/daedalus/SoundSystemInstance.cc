#include "czenkit/daedalus/SoundSystemInstance.hh"
#include "../Internal.hh"

float ZkSoundSystemInstance_getVolume(ZkSoundSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->volume;
}

int32_t ZkSoundSystemInstance_getBitResolution(ZkSoundSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->bit_resolution;
}

int32_t ZkSoundSystemInstance_getSampleRate(ZkSoundSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->sample_rate;
}

int32_t ZkSoundSystemInstance_getUseStereo(ZkSoundSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->use_stereo;
}

int32_t ZkSoundSystemInstance_getNumSfxChannels(ZkSoundSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->num_sfx_channels;
}

ZkString ZkSoundSystemInstance_getUsed3DProviderName(ZkSoundSystemInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->used_3d_provider_name.c_str();
}
