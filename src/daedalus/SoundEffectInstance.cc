#include "zenkit-capi/daedalus/SoundEffectInstance.hh"
#include "../Internal.hh"

ZkString ZkSoundEffectInstance_getFile(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->file.c_str();
}

void ZkSoundEffectInstance_setFile(ZkSoundEffectInstance* slf, ZkString file) {
	ZKC_CHECK_NULLV(slf);
	slf->file = file;
}

int32_t ZkSoundEffectInstance_getPitchOff(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pitch_off;
}

void ZkSoundEffectInstance_setPitchOff(ZkSoundEffectInstance* slf, int32_t pitchOff) {
	ZKC_CHECK_NULLV(slf);
	slf->pitch_off = pitchOff;
}

int32_t ZkSoundEffectInstance_getPitchVar(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pitch_var;
}

void ZkSoundEffectInstance_setPitchVar(ZkSoundEffectInstance* slf, int32_t pitchVar) {
	ZKC_CHECK_NULLV(slf);
	slf->pitch_var = pitchVar;
}

int32_t ZkSoundEffectInstance_getVolume(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vol;
}

void ZkSoundEffectInstance_setVolume(ZkSoundEffectInstance* slf, int32_t volume) {
	ZKC_CHECK_NULLV(slf);
	slf->vol = volume;
}

int32_t ZkSoundEffectInstance_getLoop(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop;
}

void ZkSoundEffectInstance_setLoop(ZkSoundEffectInstance* slf, int32_t loop) {
	ZKC_CHECK_NULLV(slf);
	slf->loop = loop;
}

int32_t ZkSoundEffectInstance_getLoopStartOffset(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop_start_offset;
}

void ZkSoundEffectInstance_setLoopStartOffset(ZkSoundEffectInstance* slf, int32_t loopStartOffset) {
	ZKC_CHECK_NULLV(slf);
	slf->loop_start_offset = loopStartOffset;
}

int32_t ZkSoundEffectInstance_getLoopEndOffset(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop_end_offset;
}

void ZkSoundEffectInstance_setLoopEndOffset(ZkSoundEffectInstance* slf, int32_t loopEndOffset) {
	ZKC_CHECK_NULLV(slf);
	slf->loop_end_offset = loopEndOffset;
}

float ZkSoundEffectInstance_getReverbLevel(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->reverb_level;
}

void ZkSoundEffectInstance_setReverbLevel(ZkSoundEffectInstance* slf, float reverbLevel) {
	ZKC_CHECK_NULLV(slf);
	slf->reverb_level = reverbLevel;
}

ZkString ZkSoundEffectInstance_getPfxName(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pfx_name.c_str();
}

void ZkSoundEffectInstance_setPfxName(ZkSoundEffectInstance* slf, ZkString pfxName) {
	ZKC_CHECK_NULLV(slf);
	slf->pfx_name = pfxName;
}
