#pragma once
#include "../Library.h"

#ifdef __cplusplus
	#include <zenkit/addon/daedalus.hh>
using ZkEffectBaseInstance = zenkit::IEffectBase;
#else
typedef struct ZkInternal_EffectBaseInstance ZkEffectBaseInstance;

#endif

ZKC_API ZkString ZkEffectBaseInstance_getVisNameS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getVisSizeS(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getVisAlpha(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getVisAlphaBlendFuncS(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getVisTexAniFps(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getVisTexAniIsLooping(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjModeS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjOriginNode(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjTargetNode(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmTrjTargetRange(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmTrjTargetAzi(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmTrjTargetElev(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getEmTrjNumKeys(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getEmTrjNumKeysVar(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmTrjAngleElevVar(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmTrjAngleHeadVar(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmTrjKeyDistVar(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjLoopModeS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmTrjEaseFuncS(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmTrjEaseVel(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmTrjDynUpdateDelay(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getEmTrjDynUpdateTargetOnly(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCreateS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxInvestOriginS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxInvestTargetS(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmFxTriggerDelay(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getEmFxCreateDownTrj(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmActionCollDynS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmActionCollStatS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollStatS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollDynS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollStatAlignS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollDynAlignS(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmFxLifespan(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getEmCheckCollision(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getEmAdjustShpToOrigin(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmInvestNextKeyDuration(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getEmFlyGravity(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmSelfRotVelS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getLightPresetName(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getSfxId(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getSfxIsAmbient(ZkEffectBaseInstance const* slf);
ZKC_API int32_t ZkEffectBaseInstance_getSendAssessMagic(ZkEffectBaseInstance const* slf);
ZKC_API float ZkEffectBaseInstance_getSecsPerDamage(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getEmFxCollDynPercS(ZkEffectBaseInstance const* slf);
ZKC_API ZkString ZkEffectBaseInstance_getUserString(ZkEffectBaseInstance const* slf, ZkSize i);
