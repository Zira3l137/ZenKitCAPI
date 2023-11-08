// Copyright © 2023. GothicKit Contributors
// SPDX-License-Identifier: MIT
#include "czenkit/DaedalusScript.h"
#include "Internal.hh"

CZK_LOADER(ZkDaedalusScript)
CZK_PATH_LOADER(ZkDaedalusScript)
CZK_VFS_LOADER(ZkDaedalusScript)
CZK_DELETER(ZkDaedalusScript)

uint32_t ZkDaedalusScript_getSymbolCount(ZkDaedalusScript* slf) {
	CZK_CHECK_NULL(slf);
	return (uint32_t) slf->symbols().size();
}

void ZkDaedalusScript_enumerateSymbols(ZkDaedalusScript* slf, ZkDaedalusSymbolEnumerator cb, void* ctx) {
	CZK_CHECK_NULLV(slf, cb);

	for (auto& symbol : slf->symbols()) {
		if (cb(ctx, const_cast<ZkDaedalusSymbol*>(&symbol))) break;
	}
}

void ZkDaedalusScript_enumerateInstanceSymbols(ZkDaedalusScript* slf,
                                               ZkString className,
                                               ZkDaedalusSymbolEnumerator cb,
                                               void* ctx) {
	CZK_CHECK_NULLV(slf, cb);

	slf->enumerate_instances_by_class_name(className, [cb, ctx](auto& sym) { cb(ctx, &sym); });
}

ZkDaedalusInstruction ZkDaedalusScript_getInstruction(ZkDaedalusScript* slf, ZkSize address) {
	CZK_CHECK_NULL(slf);

	auto instr = slf->instruction_at((uint32_t) address);

	ZkDaedalusInstruction instruction;
	instruction.op = static_cast<ZkDaedalusOpcode>(instr.op);
	instruction.size = 1;

	switch (instr.op) {
	case zenkit::DaedalusOpcode::BL:
	case zenkit::DaedalusOpcode::BZ:
	case zenkit::DaedalusOpcode::B:
		instruction.opAddress = instr.address;
		instruction.size += sizeof(std::uint32_t);
		break;
	case zenkit::DaedalusOpcode::PUSHI:
		instruction.opImmediate = instr.immediate;
		instruction.size += sizeof(std::uint32_t);
		break;
	case zenkit::DaedalusOpcode::BE:
	case zenkit::DaedalusOpcode::PUSHV:
	case zenkit::DaedalusOpcode::PUSHVI:
	case zenkit::DaedalusOpcode::GMOVI:
		instruction.opSymbol = instr.symbol;
		instruction.size += sizeof(std::uint32_t);
		break;
	case zenkit::DaedalusOpcode::PUSHVV:
		instruction.opSymbol = instr.symbol;
		instruction.opIndex = instr.index;
		instruction.size += sizeof(std::uint32_t) + sizeof(std::uint8_t);
		break;
	default:
		break;
	}

	return instruction;
}

ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByIndex(ZkDaedalusScript* slf, uint32_t i) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->find_symbol_by_index(i));
}

ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByAddress(ZkDaedalusScript* slf, ZkSize address) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->find_symbol_by_address((uint32_t) address));
}

ZkDaedalusSymbol* ZkDaedalusScript_getSymbolByName(ZkDaedalusScript* slf, ZkString name) {
	CZK_CHECK_NULL(slf, name);
	CZK_RETURN_CATCH(slf->find_symbol_by_name(name));
}


ZkString ZkDaedalusSymbol_getString(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->get_string(index, context).c_str());
}

float ZkDaedalusSymbol_getFloat(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->get_float(index, context));
}

int32_t ZkDaedalusSymbol_getInt(ZkDaedalusSymbol const* slf, uint16_t index, ZkDaedalusInstance const* context) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->get_int(index, context));
}

void ZkDaedalusSymbol_setString(ZkDaedalusSymbol* slf, ZkString value, uint16_t index, ZkDaedalusInstance* context) {
	CZK_CHECK_NULLV(slf, value);
	CZK_CATCH(slf->set_string(value, index, context));
}

void ZkDaedalusSymbol_setFloat(ZkDaedalusSymbol* slf, float value, uint16_t index, ZkDaedalusInstance* context) {
	CZK_CHECK_NULLV(slf);
	CZK_CATCH(slf->set_float(value, index, context));
}

void ZkDaedalusSymbol_setInt(ZkDaedalusSymbol* slf, int32_t value, uint16_t index, ZkDaedalusInstance* context) {
	CZK_CHECK_NULLV(slf);
	CZK_CATCH(slf->set_int(value, index, context));
}

ZkBool ZkDaedalusSymbol_getIsConst(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->is_const());
}

ZkBool ZkDaedalusSymbol_getIsMember(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->is_member());
}

ZkBool ZkDaedalusSymbol_getIsExternal(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->is_external());
}

ZkBool ZkDaedalusSymbol_getIsMerged(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->is_merged());
}

ZkBool ZkDaedalusSymbol_getIsGenerated(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->is_generated());
}

ZkBool ZkDaedalusSymbol_getHasReturn(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->has_return());
}

ZkString ZkDaedalusSymbol_getName(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->name().c_str());
}

int32_t ZkDaedalusSymbol_getAddress(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(static_cast<int32_t>(slf->address()));
}

int32_t ZkDaedalusSymbol_getParent(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(static_cast<int32_t>(slf->parent()));
}

int32_t ZkDaedalusSymbol_getSize(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(static_cast<int32_t>(slf->count()));
}

ZkDaedalusDataType ZkDaedalusSymbol_getType(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(static_cast<ZkDaedalusDataType>(slf->type()));
}

uint32_t ZkDaedalusSymbol_getIndex(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(slf->index());
}

ZkDaedalusDataType ZkDaedalusSymbol_getReturnType(ZkDaedalusSymbol const* slf) {
	CZK_CHECK_NULL(slf);
	CZK_RETURN_CATCH(static_cast<ZkDaedalusDataType>(slf->rtype()));
}
