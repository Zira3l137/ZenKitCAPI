#include "czenkit/daedalus/MusicThemeInstance.hh"
#include "../Internal.hh"

ZkString ZkMusicThemeInstance_getFile(ZkMusicThemeInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->file.c_str();
}

float ZkMusicThemeInstance_getVol(ZkMusicThemeInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->vol;
}

int32_t ZkMusicThemeInstance_getLoop(ZkMusicThemeInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->loop;
}

float ZkMusicThemeInstance_getReverbmix(ZkMusicThemeInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->reverbmix;
}

float ZkMusicThemeInstance_getReverbtime(ZkMusicThemeInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->reverbtime;
}

ZkMusicTransitionEffect ZkMusicThemeInstance_getTranstype(ZkMusicThemeInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkMusicTransitionEffect>(slf->transtype);
}

ZkMusicTransitionType ZkMusicThemeInstance_getTranssubtype(ZkMusicThemeInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkMusicTransitionType>(slf->transsubtype);
}
