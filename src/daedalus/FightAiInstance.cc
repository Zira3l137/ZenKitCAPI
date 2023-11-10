#include "czenkit/daedalus/FightAiInstance.hh"
#include "../Internal.hh"

ZkFightAiMove ZkFightAiInstance_getMove(ZkFightAiInstance const* slf, ZkSize i) {
	CZK_CHECK_NULL(slf);
	return static_cast<ZkFightAiMove>(slf->move[i]);
}
