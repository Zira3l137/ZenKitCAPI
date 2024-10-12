#include "zenkit-capi/daedalus/MusicThemeInstance.hh"
#include "../Internal.hh"

ZkString ZkMusicThemeInstance_getFile(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->file.c_str();
}

void ZkMusicThemeInstance_setFile(ZkMusicThemeInstance* slf, ZkString file) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->file = file;
}

float ZkMusicThemeInstance_getVol(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vol;
}

void ZkMusicThemeInstance_setVol(ZkMusicThemeInstance* slf, float vol) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vol = vol;
}

int32_t ZkMusicThemeInstance_getLoop(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->loop;
}

void ZkMusicThemeInstance_setLoop(ZkMusicThemeInstance* slf, int32_t loop) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->loop = loop;
}

float ZkMusicThemeInstance_getReverbmix(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->reverbmix;
}

void ZkMusicThemeInstance_setReverbmix(ZkMusicThemeInstance* slf, float reverbmix) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->reverbmix = reverbmix;
}

float ZkMusicThemeInstance_getReverbtime(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->reverbtime;
}

void ZkMusicThemeInstance_setReverbtime(ZkMusicThemeInstance* slf, float reverbtime) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->reverbtime = reverbtime;
}

ZkMusicTransitionEffect ZkMusicThemeInstance_getTranstype(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return static_cast<ZkMusicTransitionEffect>(SLF->transtype);
}

void ZkMusicThemeInstance_setTranstype(ZkMusicThemeInstance* slf, ZkMusicTransitionEffect transtype) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->transtype = static_cast<zenkit::MusicTransitionEffect>(transtype);
}

ZkMusicTransitionType ZkMusicThemeInstance_getTranssubtype(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return static_cast<ZkMusicTransitionType>(SLF->transsubtype);
}

void ZkMusicThemeInstance_setTranssubtype(ZkMusicThemeInstance* slf, ZkMusicTransitionType transsubtype) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->transsubtype = static_cast<zenkit::MusicTransitionType>(transsubtype);
}
