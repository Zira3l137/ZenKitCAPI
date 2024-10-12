#include "zenkit-capi/daedalus/SoundEffectInstance.hh"
#include "../Internal.hh"

ZkString ZkSoundEffectInstance_getFile(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->file.c_str();
}

void ZkSoundEffectInstance_setFile(ZkSoundEffectInstance* slf, ZkString file) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->file = file;
}

int32_t ZkSoundEffectInstance_getPitchOff(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->pitch_off;
}

void ZkSoundEffectInstance_setPitchOff(ZkSoundEffectInstance* slf, int32_t pitchOff) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->pitch_off = pitchOff;
}

int32_t ZkSoundEffectInstance_getPitchVar(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->pitch_var;
}

void ZkSoundEffectInstance_setPitchVar(ZkSoundEffectInstance* slf, int32_t pitchVar) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->pitch_var = pitchVar;
}

int32_t ZkSoundEffectInstance_getVolume(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vol;
}

void ZkSoundEffectInstance_setVolume(ZkSoundEffectInstance* slf, int32_t volume) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vol = volume;
}

int32_t ZkSoundEffectInstance_getLoop(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->loop;
}

void ZkSoundEffectInstance_setLoop(ZkSoundEffectInstance* slf, int32_t loop) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->loop = loop;
}

int32_t ZkSoundEffectInstance_getLoopStartOffset(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->loop_start_offset;
}

void ZkSoundEffectInstance_setLoopStartOffset(ZkSoundEffectInstance* slf, int32_t loopStartOffset) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->loop_start_offset = loopStartOffset;
}

int32_t ZkSoundEffectInstance_getLoopEndOffset(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->loop_end_offset;
}

void ZkSoundEffectInstance_setLoopEndOffset(ZkSoundEffectInstance* slf, int32_t loopEndOffset) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->loop_end_offset = loopEndOffset;
}

float ZkSoundEffectInstance_getReverbLevel(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->reverb_level;
}

void ZkSoundEffectInstance_setReverbLevel(ZkSoundEffectInstance* slf, float reverbLevel) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->reverb_level = reverbLevel;
}

ZkString ZkSoundEffectInstance_getPfxName(ZkSoundEffectInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->pfx_name.c_str();
}

void ZkSoundEffectInstance_setPfxName(ZkSoundEffectInstance* slf, ZkString pfxName) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->pfx_name = pfxName;
}
