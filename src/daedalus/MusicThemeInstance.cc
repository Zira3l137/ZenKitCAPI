#include "zenkit-capi/daedalus/MusicThemeInstance.hh"
#include "../Internal.hh"

ZkString ZkMusicThemeInstance_getFile(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->file.c_str();
}

void ZkMusicThemeInstance_setFile(ZkMusicThemeInstance* slf, ZkString file) {
	ZKC_CHECK_NULLV(slf);
	slf->file = file;
}

float ZkMusicThemeInstance_getVol(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vol;
}

void ZkMusicThemeInstance_setVol(ZkMusicThemeInstance* slf, float vol) {
	ZKC_CHECK_NULLV(slf);
	slf->vol = vol;
}

int32_t ZkMusicThemeInstance_getLoop(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop;
}

void ZkMusicThemeInstance_setLoop(ZkMusicThemeInstance* slf, int32_t loop) {
	ZKC_CHECK_NULLV(slf);
	slf->loop = loop;
}

float ZkMusicThemeInstance_getReverbmix(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->reverbmix;
}

void ZkMusicThemeInstance_setReverbmix(ZkMusicThemeInstance* slf, float reverbmix) {
	ZKC_CHECK_NULLV(slf);
	slf->reverbmix = reverbmix;
}

float ZkMusicThemeInstance_getReverbtime(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->reverbtime;
}

void ZkMusicThemeInstance_setReverbtime(ZkMusicThemeInstance* slf, float reverbtime) {
	ZKC_CHECK_NULLV(slf);
	slf->reverbtime = reverbtime;
}

ZkMusicTransitionEffect ZkMusicThemeInstance_getTranstype(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMusicTransitionEffect>(slf->transtype);
}

void ZkMusicThemeInstance_setTranstype(ZkMusicThemeInstance* slf, ZkMusicTransitionEffect transtype) {
	ZKC_CHECK_NULLV(slf);
	slf->transtype = static_cast<zenkit::MusicTransitionEffect>(transtype);
}

ZkMusicTransitionType ZkMusicThemeInstance_getTranssubtype(ZkMusicThemeInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkMusicTransitionType>(slf->transsubtype);
}

void ZkMusicThemeInstance_setTranssubtype(ZkMusicThemeInstance* slf, ZkMusicTransitionType transsubtype) {
	ZKC_CHECK_NULLV(slf);
	slf->transsubtype = static_cast<zenkit::MusicTransitionType>(transsubtype);
}
