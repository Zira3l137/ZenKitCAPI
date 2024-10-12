#include "zenkit-capi/daedalus/MusicJingleInstance.hh"
#include "../Internal.hh"

ZkString ZkMusicJingleInstance_getName(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->name.c_str();
}

void ZkMusicJingleInstance_setName(ZkMusicJingleInstance* slf, ZkString name) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->name = name;
}

int32_t ZkMusicJingleInstance_getLoop(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->loop;
}

void ZkMusicJingleInstance_setLoop(ZkMusicJingleInstance* slf, int32_t loop) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->loop = loop;
}

float ZkMusicJingleInstance_getVol(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->vol;
}

void ZkMusicJingleInstance_setVol(ZkMusicJingleInstance* slf, float vol) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->vol = vol;
}

int32_t ZkMusicJingleInstance_getTranssubtype(ZkMusicJingleInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	ZKC_CHECK_NULL(slf->get());
	return SLF->transsubtype;
}

void ZkMusicJingleInstance_setTranssubtype(ZkMusicJingleInstance* slf, int32_t transsubtype) {
	ZKC_CHECK_NULLV(slf);
	ZKC_CHECK_NULLV(slf->get());
	;
	SLF->transsubtype = transsubtype;
}
