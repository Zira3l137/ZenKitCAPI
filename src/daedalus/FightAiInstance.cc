#include "zenkit-capi/daedalus/FightAiInstance.hh"
#include "../Internal.hh"

ZkFightAiMove ZkFightAiInstance_getMove(ZkFightAiInstance const* slf, ZkSize i) {
	ZKC_CHECK_NULL(slf);
	return static_cast<ZkFightAiMove>(slf->move[i]);
}
