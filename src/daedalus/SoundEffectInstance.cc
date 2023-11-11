#include "zenkit-capi/daedalus/SoundEffectInstance.hh"
#include "../Internal.hh"

ZkString ZkSoundEffectInstance_getFile(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->file.c_str();
}

int32_t ZkSoundEffectInstance_getPitchOff(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pitch_off;
}

int32_t ZkSoundEffectInstance_getPitchVar(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pitch_var;
}

int32_t ZkSoundEffectInstance_getVolume(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vol;
}

int32_t ZkSoundEffectInstance_getLoop(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop;
}

int32_t ZkSoundEffectInstance_getLoopStartOffset(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop_start_offset;
}

int32_t ZkSoundEffectInstance_getLoopEndOffset(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop_end_offset;
}

float ZkSoundEffectInstance_getReverbLevel(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->reverb_level;
}

ZkString ZkSoundEffectInstance_getPfxName(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_name.c_str();
}
