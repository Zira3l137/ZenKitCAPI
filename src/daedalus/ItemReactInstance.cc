#include "czenkit/daedalus/ItemReactInstance.h"
#include "../Internal.hh"

int32_t ZkItemReactInstance_getNpc(ZkItemReactInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->npc;
}

int32_t ZkItemReactInstance_getTradeItem(ZkItemReactInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->trade_item;
}

int32_t ZkItemReactInstance_getTradeAmount(ZkItemReactInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->trade_amount;
}

int32_t ZkItemReactInstance_getRequestedCategory(ZkItemReactInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->requested_cat;
}

int32_t ZkItemReactInstance_getRequestedItem(ZkItemReactInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->requested_item;
}

int32_t ZkItemReactInstance_getRequestedAmount(ZkItemReactInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->requested_amount;
}

int32_t ZkItemReactInstance_getReaction(ZkItemReactInstance const* slf) {
	CZK_CHECK_NULL(slf);
	return slf->reaction;
}
