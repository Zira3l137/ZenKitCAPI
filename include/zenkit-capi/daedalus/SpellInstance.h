#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkSpellInstance = zenkit::ISpell;
#else
typedef struct ZkInternal_SpellInstance ZkSpellInstance;
#endif


ZKC_API float ZkSpellInstance_getTimePerMana(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getDamagePerLevel(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getDamageType(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getSpellType(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getCanTurnDuringInvest(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getCanChangeTargetDuringInvest(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getIsMultiEffect(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getTargetCollectAlgo(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getTargetCollectType(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getTargetCollectRange(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getTargetCollectAzi(ZkSpellInstance const* slf);
ZKC_API int32_t ZkSpellInstance_getTargetCollectElevation(ZkSpellInstance const* slf);
