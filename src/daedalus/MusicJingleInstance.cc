#include "zenkit-capi/daedalus/MusicJingleInstance.hh"
#include "../Internal.hh"

ZkString ZkMusicJingleInstance_getName(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->name.c_str();
}

int32_t ZkMusicJingleInstance_getLoop(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->loop;
}

float ZkMusicJingleInstance_getVol(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->vol;
}

int32_t ZkMusicJingleInstance_getTranssubtype(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->transsubtype;
}
