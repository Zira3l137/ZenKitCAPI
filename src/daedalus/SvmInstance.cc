#include "zenkit-capi/daedalus/SvmInstance.hh"

#include "../Internal.hh"

ZkString ZkSvmInstance_getMilGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MILGREETINGS.c_str();
}
ZkString ZkSvmInstance_getPalGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->PALGREETINGS.c_str();
}
ZkString ZkSvmInstance_getWeather(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WEATHER.c_str();
}
ZkString ZkSvmInstance_getIGetYouStill(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->IGETYOUSTILL.c_str();
}
ZkString ZkSvmInstance_getDieEnemy(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->DIEENEMY.c_str();
}
ZkString ZkSvmInstance_getDieMonster(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->DIEMONSTER.c_str();
}
ZkString ZkSvmInstance_getAddonDieMonster(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_DIEMONSTER.c_str();
}
ZkString ZkSvmInstance_getAddonDieMonster2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_DIEMONSTER2.c_str();
}
ZkString ZkSvmInstance_getDirtyThief(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->DIRTYTHIEF.c_str();
}
ZkString ZkSvmInstance_getHandsOff(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->HANDSOFF.c_str();
}
ZkString ZkSvmInstance_getSheepKiller(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SHEEPKILLER.c_str();
}
ZkString ZkSvmInstance_getSheepKillerMonster(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SHEEPKILLERMONSTER.c_str();
}
ZkString ZkSvmInstance_getYouMurderer(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->YOUMURDERER.c_str();
}
ZkString ZkSvmInstance_getDieStupidBeast(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->DIESTUPIDBEAST.c_str();
}
ZkString ZkSvmInstance_getYouDareHitMe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->YOUDAREHITME.c_str();
}
ZkString ZkSvmInstance_getYouAskedForIt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->YOUASKEDFORIT.c_str();
}
ZkString ZkSvmInstance_getThenIBeatYouOutOfHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->THENIBEATYOUOUTOFHERE.c_str();
}
ZkString ZkSvmInstance_getWhatDidYouDoInThere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WHATDIDYOUDOINTHERE.c_str();
}
ZkString ZkSvmInstance_getWillYouStopFighting(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WILLYOUSTOPFIGHTING.c_str();
}
ZkString ZkSvmInstance_getKillEnemy(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->KILLENEMY.c_str();
}
ZkString ZkSvmInstance_getEnemyKilled(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ENEMYKILLED.c_str();
}
ZkString ZkSvmInstance_getMonsterKilled(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MONSTERKILLED.c_str();
}
ZkString ZkSvmInstance_getAddonMonsterKilled(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_MONSTERKILLED.c_str();
}
ZkString ZkSvmInstance_getAddonMonsterKilled2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_MONSTERKILLED2.c_str();
}
ZkString ZkSvmInstance_getThiefDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->THIEFDOWN.c_str();
}
ZkString ZkSvmInstance_getRumfummlerDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->RUMFUMMLERDOWN.c_str();
}
ZkString ZkSvmInstance_getSheepAttackerDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SHEEPATTACKERDOWN.c_str();
}
ZkString ZkSvmInstance_getKillMurderer(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->KILLMURDERER.c_str();
}
ZkString ZkSvmInstance_getStupidBeastKilled(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->STUPIDBEASTKILLED.c_str();
}
ZkString ZkSvmInstance_getNeverHitMeAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NEVERHITMEAGAIN.c_str();
}
ZkString ZkSvmInstance_getYouBetterShouldHaveListened(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->YOUBETTERSHOULDHAVELISTENED.c_str();
}
ZkString ZkSvmInstance_getGetUpAndBegone(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GETUPANDBEGONE.c_str();
}
ZkString ZkSvmInstance_getNeverEnterRoomAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NEVERENTERROOMAGAIN.c_str();
}
ZkString ZkSvmInstance_getThereIsNoFightingHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->THEREISNOFIGHTINGHERE.c_str();
}
ZkString ZkSvmInstance_getSpareMe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SPAREME.c_str();
}
ZkString ZkSvmInstance_getRunAway(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->RUNAWAY.c_str();
}
ZkString ZkSvmInstance_getAlarm(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ALARM.c_str();
}
ZkString ZkSvmInstance_getGuards(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GUARDS.c_str();
}
ZkString ZkSvmInstance_getHelp(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->HELP.c_str();
}
ZkString ZkSvmInstance_getGoodMonsterKill(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOODMONSTERKILL.c_str();
}
ZkString ZkSvmInstance_getGoodKill(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOODKILL.c_str();
}
ZkString ZkSvmInstance_getNotNow(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOTNOW.c_str();
}
ZkString ZkSvmInstance_getRunCoward(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->RUNCOWARD.c_str();
}
ZkString ZkSvmInstance_getGetOutOfHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GETOUTOFHERE.c_str();
}
ZkString ZkSvmInstance_getWhyAreYouInHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WHYAREYOUINHERE.c_str();
}
ZkString ZkSvmInstance_getYesGoOutOfHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->YESGOOUTOFHERE.c_str();
}
ZkString ZkSvmInstance_getWhatsThisSupposedToBe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WHATSTHISSUPPOSEDTOBE.c_str();
}
ZkString ZkSvmInstance_getYouDisturbedMySlumber(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->YOUDISTURBEDMYSLUMBER.c_str();
}
ZkString ZkSvmInstance_getITookYourGold(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ITOOKYOURGOLD.c_str();
}
ZkString ZkSvmInstance_getShitNoGold(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SHITNOGOLD.c_str();
}
ZkString ZkSvmInstance_getITakeYourWeapon(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ITAKEYOURWEAPON.c_str();
}
ZkString ZkSvmInstance_getWhatAreYouDoing(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WHATAREYOUDOING.c_str();
}
ZkString ZkSvmInstance_getLookingForTroubleAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->LOOKINGFORTROUBLEAGAIN.c_str();
}
ZkString ZkSvmInstance_getStopMagic(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->STOPMAGIC.c_str();
}
ZkString ZkSvmInstance_getISaidStopMagic(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ISAIDSTOPMAGIC.c_str();
}
ZkString ZkSvmInstance_getWeaponDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WEAPONDOWN.c_str();
}
ZkString ZkSvmInstance_getISaidWeaponDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ISAIDWEAPONDOWN.c_str();
}
ZkString ZkSvmInstance_getWiseMove(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WISEMOVE.c_str();
}
ZkString ZkSvmInstance_getNextTimeYoureInForIt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NEXTTIMEYOUREINFORIT.c_str();
}
ZkString ZkSvmInstance_getOhMyHead(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OHMYHEAD.c_str();
}
ZkString ZkSvmInstance_getTheresAFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->THERESAFIGHT.c_str();
}
ZkString ZkSvmInstance_getOhMyGodItsAFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OHMYGODITSAFIGHT.c_str();
}
ZkString ZkSvmInstance_getGoodVictory(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOODVICTORY.c_str();
}
ZkString ZkSvmInstance_getNotBad(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOTBAD.c_str();
}
ZkString ZkSvmInstance_getOhMyGodHesDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OHMYGODHESDOWN.c_str();
}
ZkString ZkSvmInstance_getCheerFriend01(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->CHEERFRIEND01.c_str();
}
ZkString ZkSvmInstance_getCheerFriend02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->CHEERFRIEND02.c_str();
}
ZkString ZkSvmInstance_getCheerFriend03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->CHEERFRIEND03.c_str();
}
ZkString ZkSvmInstance_getOoh01(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OOH01.c_str();
}
ZkString ZkSvmInstance_getOoh02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OOH02.c_str();
}
ZkString ZkSvmInstance_getOoh03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OOH03.c_str();
}
ZkString ZkSvmInstance_getWhatWasThat(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WHATWASTHAT.c_str();
}
ZkString ZkSvmInstance_getGetOutOfMyBed(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GETOUTOFMYBED.c_str();
}
ZkString ZkSvmInstance_getAwake(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->AWAKE.c_str();
}
ZkString ZkSvmInstance_getAbsCommander(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ABS_COMMANDER.c_str();
}
ZkString ZkSvmInstance_getAbsMonastery(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ABS_MONASTERY.c_str();
}
ZkString ZkSvmInstance_getAbsFarm(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ABS_FARM.c_str();
}
ZkString ZkSvmInstance_getAbsGood(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ABS_GOOD.c_str();
}
ZkString ZkSvmInstance_getSheepKillerCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SHEEPKILLER_CRIME.c_str();
}
ZkString ZkSvmInstance_getAttackCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ATTACK_CRIME.c_str();
}
ZkString ZkSvmInstance_getTheftCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->THEFT_CRIME.c_str();
}
ZkString ZkSvmInstance_getMurderCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MURDER_CRIME.c_str();
}
ZkString ZkSvmInstance_getPalCityCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->PAL_CITY_CRIME.c_str();
}
ZkString ZkSvmInstance_getMilCityCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MIL_CITY_CRIME.c_str();
}
ZkString ZkSvmInstance_getCityCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->CITY_CRIME.c_str();
}
ZkString ZkSvmInstance_getMonaCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MONA_CRIME.c_str();
}
ZkString ZkSvmInstance_getFarmCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->FARM_CRIME.c_str();
}
ZkString ZkSvmInstance_getOcCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OC_CRIME.c_str();
}
ZkString ZkSvmInstance_getToughguyAttackLost(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TOUGHGUY_ATTACKLOST.c_str();
}
ZkString ZkSvmInstance_getToughguyAttackWon(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TOUGHGUY_ATTACKWON.c_str();
}
ZkString ZkSvmInstance_getToughguyPlayerAttack(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TOUGHGUY_PLAYERATTACK.c_str();
}
ZkString ZkSvmInstance_getGold1000(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_1000.c_str();
}
ZkString ZkSvmInstance_getGold950(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_950.c_str();
}
ZkString ZkSvmInstance_getGold900(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_900.c_str();
}
ZkString ZkSvmInstance_getGold850(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_850.c_str();
}
ZkString ZkSvmInstance_getGold800(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_800.c_str();
}
ZkString ZkSvmInstance_getGold750(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_750.c_str();
}
ZkString ZkSvmInstance_getGold700(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_700.c_str();
}
ZkString ZkSvmInstance_getGold650(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_650.c_str();
}
ZkString ZkSvmInstance_getGold600(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_600.c_str();
}
ZkString ZkSvmInstance_getGold550(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_550.c_str();
}
ZkString ZkSvmInstance_getGold500(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_500.c_str();
}
ZkString ZkSvmInstance_getGold450(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_450.c_str();
}
ZkString ZkSvmInstance_getGold400(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_400.c_str();
}
ZkString ZkSvmInstance_getGold350(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_350.c_str();
}
ZkString ZkSvmInstance_getGold300(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_300.c_str();
}
ZkString ZkSvmInstance_getGold250(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_250.c_str();
}
ZkString ZkSvmInstance_getGold200(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_200.c_str();
}
ZkString ZkSvmInstance_getGold150(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_150.c_str();
}
ZkString ZkSvmInstance_getGold100(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_100.c_str();
}
ZkString ZkSvmInstance_getGold90(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_90.c_str();
}
ZkString ZkSvmInstance_getGold80(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_80.c_str();
}
ZkString ZkSvmInstance_getGold70(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_70.c_str();
}
ZkString ZkSvmInstance_getGold60(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_60.c_str();
}
ZkString ZkSvmInstance_getGold50(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_50.c_str();
}
ZkString ZkSvmInstance_getGold40(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_40.c_str();
}
ZkString ZkSvmInstance_getGold30(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_30.c_str();
}
ZkString ZkSvmInstance_getGold20(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_20.c_str();
}
ZkString ZkSvmInstance_getGold10(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GOLD_10.c_str();
}
ZkString ZkSvmInstance_getSmalltalk01(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK01.c_str();
}
ZkString ZkSvmInstance_getSmalltalk02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK02.c_str();
}
ZkString ZkSvmInstance_getSmalltalk03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK03.c_str();
}
ZkString ZkSvmInstance_getSmalltalk04(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK04.c_str();
}
ZkString ZkSvmInstance_getSmalltalk05(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK05.c_str();
}
ZkString ZkSvmInstance_getSmalltalk06(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK06.c_str();
}
ZkString ZkSvmInstance_getSmalltalk07(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK07.c_str();
}
ZkString ZkSvmInstance_getSmalltalk08(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK08.c_str();
}
ZkString ZkSvmInstance_getSmalltalk09(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK09.c_str();
}
ZkString ZkSvmInstance_getSmalltalk10(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK10.c_str();
}
ZkString ZkSvmInstance_getSmalltalk11(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK11.c_str();
}
ZkString ZkSvmInstance_getSmalltalk12(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK12.c_str();
}
ZkString ZkSvmInstance_getSmalltalk13(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK13.c_str();
}
ZkString ZkSvmInstance_getSmalltalk14(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK14.c_str();
}
ZkString ZkSvmInstance_getSmalltalk15(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK15.c_str();
}
ZkString ZkSvmInstance_getSmalltalk16(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK16.c_str();
}
ZkString ZkSvmInstance_getSmalltalk17(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK17.c_str();
}
ZkString ZkSvmInstance_getSmalltalk18(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK18.c_str();
}
ZkString ZkSvmInstance_getSmalltalk19(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK19.c_str();
}
ZkString ZkSvmInstance_getSmalltalk20(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK20.c_str();
}
ZkString ZkSvmInstance_getSmalltalk21(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK21.c_str();
}
ZkString ZkSvmInstance_getSmalltalk22(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK22.c_str();
}
ZkString ZkSvmInstance_getSmalltalk23(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK23.c_str();
}
ZkString ZkSvmInstance_getSmalltalk24(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK24.c_str();
}
ZkString ZkSvmInstance_getSmalltalk25(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK25.c_str();
}
ZkString ZkSvmInstance_getSmalltalk26(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK26.c_str();
}
ZkString ZkSvmInstance_getSmalltalk27(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK27.c_str();
}
ZkString ZkSvmInstance_getSmalltalk28(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK28.c_str();
}
ZkString ZkSvmInstance_getSmalltalk29(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK29.c_str();
}
ZkString ZkSvmInstance_getSmalltalk30(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SMALLTALK30.c_str();
}
ZkString ZkSvmInstance_getNoLearnNoPoints(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOLEARNNOPOINTS.c_str();
}
ZkString ZkSvmInstance_getNoLearnOverPersonalMax(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOLEARNOVERPERSONALMAX.c_str();
}
ZkString ZkSvmInstance_getNoLearnYoureBetter(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOLEARNYOUREBETTER.c_str();
}
ZkString ZkSvmInstance_getYouLearnedSomething(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->YOULEARNEDSOMETHING.c_str();
}
ZkString ZkSvmInstance_getUnterstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->UNTERSTADT.c_str();
}
ZkString ZkSvmInstance_getOberstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OBERSTADT.c_str();
}
ZkString ZkSvmInstance_getTempel(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TEMPEL.c_str();
}
ZkString ZkSvmInstance_getMarkt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MARKT.c_str();
}
ZkString ZkSvmInstance_getGalgen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GALGEN.c_str();
}
ZkString ZkSvmInstance_getKaserne(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->KASERNE.c_str();
}
ZkString ZkSvmInstance_getHafen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->HAFEN.c_str();
}
ZkString ZkSvmInstance_getWhereto(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WHERETO.c_str();
}
ZkString ZkSvmInstance_getOberstadt2Unterstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->OBERSTADT_2_UNTERSTADT.c_str();
}
ZkString ZkSvmInstance_getUnterstadt2Oberstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->UNTERSTADT_2_OBERSTADT.c_str();
}
ZkString ZkSvmInstance_getUnterstadt2Tempel(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->UNTERSTADT_2_TEMPEL.c_str();
}
ZkString ZkSvmInstance_getUnterstadt2Hafen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->UNTERSTADT_2_HAFEN.c_str();
}
ZkString ZkSvmInstance_getTempel2Unterstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TEMPEL_2_UNTERSTADT.c_str();
}
ZkString ZkSvmInstance_getTempel2Markt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TEMPEL_2_MARKT.c_str();
}
ZkString ZkSvmInstance_getTempel2Galgen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TEMPEL_2_GALGEN.c_str();
}
ZkString ZkSvmInstance_getMarkt2Tempel(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MARKT_2_TEMPEL.c_str();
}
ZkString ZkSvmInstance_getMarkt2Kaserne(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MARKT_2_KASERNE.c_str();
}
ZkString ZkSvmInstance_getMarkt2Galgen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MARKT_2_GALGEN.c_str();
}
ZkString ZkSvmInstance_getGalgen2Tempel(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GALGEN_2_TEMPEL.c_str();
}
ZkString ZkSvmInstance_getGalgen2Markt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GALGEN_2_MARKT.c_str();
}
ZkString ZkSvmInstance_getGalgen2Kaserne(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->GALGEN_2_KASERNE.c_str();
}
ZkString ZkSvmInstance_getKaserne2Markt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->KASERNE_2_MARKT.c_str();
}
ZkString ZkSvmInstance_getKaserne2Galgen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->KASERNE_2_GALGEN.c_str();
}
ZkString ZkSvmInstance_getHafen2Unterstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->HAFEN_2_UNTERSTADT.c_str();
}
ZkString ZkSvmInstance_getDead(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->DEAD.c_str();
}
ZkString ZkSvmInstance_getAargh1(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->AARGH_1.c_str();
}
ZkString ZkSvmInstance_getAargh2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->AARGH_2.c_str();
}
ZkString ZkSvmInstance_getAargh3(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->AARGH_3.c_str();
}
ZkString ZkSvmInstance_getAddonWrongArmor(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_WRONGARMOR.c_str();
}
ZkString ZkSvmInstance_getAddonWrongArmorSld(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_WRONGARMOR_SLD.c_str();
}
ZkString ZkSvmInstance_getAddonWrongArmorMil(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_WRONGARMOR_MIL.c_str();
}
ZkString ZkSvmInstance_getAddonWrongArmorKdf(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_WRONGARMOR_KDF.c_str();
}
ZkString ZkSvmInstance_getAddonNoArmorBdt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_NOARMOR_BDT.c_str();
}
ZkString ZkSvmInstance_getAddonDieBandit(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_DIEBANDIT.c_str();
}
ZkString ZkSvmInstance_getAddonDirtyPirate(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_DIRTYPIRATE.c_str();
}
ZkString ZkSvmInstance_getScHeyTurnAround(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SC_HEYTURNAROUND.c_str();
}
ZkString ZkSvmInstance_getScHeyTurnAround02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SC_HEYTURNAROUND02.c_str();
}
ZkString ZkSvmInstance_getScHeyTurnAround03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SC_HEYTURNAROUND03.c_str();
}
ZkString ZkSvmInstance_getScHeyTurnAround04(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SC_HEYTURNAROUND04.c_str();
}
ZkString ZkSvmInstance_getScHeyWaitASecond(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SC_HEYWAITASECOND.c_str();
}
ZkString ZkSvmInstance_getDoesntMork(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->DOESNTWORK.c_str();
}
ZkString ZkSvmInstance_getPickBroke(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->PICKBROKE.c_str();
}
ZkString ZkSvmInstance_getNeedKey(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NEEDKEY.c_str();
}
ZkString ZkSvmInstance_getNoMorePicks(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOMOREPICKS.c_str();
}
ZkString ZkSvmInstance_getNoPickLockTalent(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOPICKLOCKTALENT.c_str();
}
ZkString ZkSvmInstance_getNoSweeping(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOSWEEPING.c_str();
}
ZkString ZkSvmInstance_getPickLockOrKeyMissing(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->PICKLOCKORKEYMISSING.c_str();
}
ZkString ZkSvmInstance_getKeyMissing(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->KEYMISSING.c_str();
}
ZkString ZkSvmInstance_getPickLockMissing(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->PICKLOCKMISSING.c_str();
}
ZkString ZkSvmInstance_getNeverOpen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NEVEROPEN.c_str();
}
ZkString ZkSvmInstance_getMissingItem(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MISSINGITEM.c_str();
}
ZkString ZkSvmInstance_getDontKnow(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->DONTKNOW.c_str();
}
ZkString ZkSvmInstance_getNothingToGet(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOTHINGTOGET.c_str();
}
ZkString ZkSvmInstance_getNothingToGet02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOTHINGTOGET02.c_str();
}
ZkString ZkSvmInstance_getNothingToGet03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->NOTHINGTOGET03.c_str();
}
ZkString ZkSvmInstance_getHealShrine(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->HEALSHRINE.c_str();
}
ZkString ZkSvmInstance_getHealLastShrine(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->HEALLASTSHRINE.c_str();
}
ZkString ZkSvmInstance_getIrdorathThereYouAre(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->IRDORATHTHEREYOUARE.c_str();
}
ZkString ZkSvmInstance_getScOpensIrdorathBook(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SCOPENSIRDORATHBOOK.c_str();
}
ZkString ZkSvmInstance_getScOpensLastDoor(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->SCOPENSLASTDOOR.c_str();
}
ZkString ZkSvmInstance_getTrade1(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TRADE_1.c_str();
}
ZkString ZkSvmInstance_getTrade2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TRADE_2.c_str();
}
ZkString ZkSvmInstance_getTrade3(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->TRADE_3.c_str();
}
ZkString ZkSvmInstance_getVerstehe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->VERSTEHE.c_str();
}
ZkString ZkSvmInstance_getFoundTreasure(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->FOUNDTREASURE.c_str();
}
ZkString ZkSvmInstance_getCantUnderstandThis(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->CANTUNDERSTANDTHIS.c_str();
}
ZkString ZkSvmInstance_getCantReadThis(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->CANTREADTHIS.c_str();
}
ZkString ZkSvmInstance_getStoneplate1(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->STONEPLATE_1.c_str();
}
ZkString ZkSvmInstance_getStoneplate2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->STONEPLATE_2.c_str();
}
ZkString ZkSvmInstance_getStoneplate3(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->STONEPLATE_3.c_str();
}
ZkString ZkSvmInstance_getCough(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->COUGH.c_str();
}
ZkString ZkSvmInstance_getHui(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->HUI.c_str();
}
ZkString ZkSvmInstance_getAddonThisLittleBastard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_THISLITTLEBASTARD.c_str();
}
ZkString ZkSvmInstance_getAddonOpenAdanosTemple(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_OPENADANOSTEMPLE.c_str();
}
ZkString ZkSvmInstance_getAttentatAddonDescription(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ATTENTAT_ADDON_DESCRIPTION.c_str();
}
ZkString ZkSvmInstance_getAttentatAddonDescription2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ATTENTAT_ADDON_DESCRIPTION2.c_str();
}
ZkString ZkSvmInstance_getAttentatAddonPro(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ATTENTAT_ADDON_PRO.c_str();
}
ZkString ZkSvmInstance_getAttentatAddonContra(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ATTENTAT_ADDON_CONTRA.c_str();
}
ZkString ZkSvmInstance_getMineAddonDescription(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->MINE_ADDON_DESCRIPTION.c_str();
}
ZkString ZkSvmInstance_getAddonSummonAncientGhost(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_SUMMONANCIENTGHOST.c_str();
}
ZkString ZkSvmInstance_getAddonAncientGhostNotNear(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_ANCIENTGHOST_NOTNEAR.c_str();
}
ZkString ZkSvmInstance_getAddonGoldDescription(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ADDON_GOLD_DESCRIPTION.c_str();
}
ZkString ZkSvmInstance_getWatchYourAim(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->WATCHYOURAIM.c_str();
}
ZkString ZkSvmInstance_getWatchYourAimAngry(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->watchyouraimangry.c_str();
}
ZkString ZkSvmInstance_getLetsForgetOurLittleFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->letsforgetourlittlefight.c_str();
}
ZkString ZkSvmInstance_getStrange(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->strange.c_str();
}
ZkString ZkSvmInstance_getDieMortalEnemy(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->diemortalenemy.c_str();
}
ZkString ZkSvmInstance_getNowWait(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nowwait.c_str();
}
ZkString ZkSvmInstance_getNowWaitIntruder(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nowwaitintruder.c_str();
}
ZkString ZkSvmInstance_getYouStillNotHaveEnough(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youstillnothaveenough.c_str();
}
ZkString ZkSvmInstance_getYouAttackedMyCharge(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youattackedmycharge.c_str();
}
ZkString ZkSvmInstance_getIWillTeachYouRespectForForeignProperty(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->iwillteachyourespectforforeignproperty.c_str();
}
ZkString ZkSvmInstance_getYouKilledOneOfUs(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youkilledoneofus.c_str();
}
ZkString ZkSvmInstance_getBerzerk(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->berzerk.c_str();
}
ZkString ZkSvmInstance_getYoullBeSorryForThis(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youllbesorryforthis.c_str();
}
ZkString ZkSvmInstance_getYesYes(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->yesyes.c_str();
}
ZkString ZkSvmInstance_getShitWhatAMonster(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shitwhatamonster.c_str();
}
ZkString ZkSvmInstance_getWeWillMeetAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->wewillmeetagain.c_str();
}
ZkString ZkSvmInstance_getNeverTryThatAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nevertrythatagain.c_str();
}
ZkString ZkSvmInstance_getITookYourOre(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->itookyourore.c_str();
}
ZkString ZkSvmInstance_getShitNoOre(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shitnoore.c_str();
}
ZkString ZkSvmInstance_getYouViolatedForbiddenTerritory(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youviolatedforbiddenterritory.c_str();
}
ZkString ZkSvmInstance_getYouWannaFoolMe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youwannafoolme.c_str();
}
ZkString ZkSvmInstance_getWhatDidYouInThere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->whatdidyouinthere.c_str();
}
ZkString ZkSvmInstance_getIntruderAlert(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->intruderalert.c_str();
}
ZkString ZkSvmInstance_getBehindYou(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->behindyou.c_str();
}
ZkString ZkSvmInstance_getHeyHeyHey(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->heyheyhey.c_str();
}
ZkString ZkSvmInstance_getCheerFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cheerfight.c_str();
}
ZkString ZkSvmInstance_getCheerFriend(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cheerfriend.c_str();
}
ZkString ZkSvmInstance_getOoh(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ooh.c_str();
}
ZkString ZkSvmInstance_getYeahWellDone(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->yeahwelldone.c_str();
}
ZkString ZkSvmInstance_getHeDefeatedhim(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hedefeatedhim.c_str();
}
ZkString ZkSvmInstance_getHeDeservEdit(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hedeservedit.c_str();
}
ZkString ZkSvmInstance_getHeKilledHim(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hekilledhim.c_str();
}
ZkString ZkSvmInstance_getItWasAGoodFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->itwasagoodfight.c_str();
}
ZkString ZkSvmInstance_getFriendlyGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->friendlygreetings.c_str();
}
ZkString ZkSvmInstance_getAlGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->algreetings.c_str();
}
ZkString ZkSvmInstance_getMageGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->magegreetings.c_str();
}
ZkString ZkSvmInstance_getSectGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sectgreetings.c_str();
}
ZkString ZkSvmInstance_getThereHeIs(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->thereheis.c_str();
}
ZkString ZkSvmInstance_getNoLearnOverMax(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nolearnovermax.c_str();
}
ZkString ZkSvmInstance_getNoLearnYouAlreadyKnow(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nolearnyoualreadyknow.c_str();
}
ZkString ZkSvmInstance_getHeyYou(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->heyyou.c_str();
}
ZkString ZkSvmInstance_getWhatDoYouWant(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->whatdoyouwant.c_str();
}
ZkString ZkSvmInstance_getISaidWhatDoYouWant(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->isaidwhatdoyouwant.c_str();
}
ZkString ZkSvmInstance_getMakeWay(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->makeway.c_str();
}
ZkString ZkSvmInstance_getOutOfMyWay(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->outofmyway.c_str();
}
ZkString ZkSvmInstance_getYouDeafOrWhat(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youdeaforwhat.c_str();
}
ZkString ZkSvmInstance_getLookAway(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->lookaway.c_str();
}
ZkString ZkSvmInstance_getOkayKeepIt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->okaykeepit.c_str();
}
ZkString ZkSvmInstance_getWhatsThat(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->whatsthat.c_str();
}
ZkString ZkSvmInstance_getThatsMyWeapon(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->thatsmyweapon.c_str();
}
ZkString ZkSvmInstance_getGiveItTome(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->giveittome.c_str();
}
ZkString ZkSvmInstance_getYouCanKeepTheCrap(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youcankeepthecrap.c_str();
}
ZkString ZkSvmInstance_getTheyKilledMyFriend(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->theykilledmyfriend.c_str();
}
ZkString ZkSvmInstance_getSuckerGotSome(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->suckergotsome.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedEbr(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->suckerdefeatedebr.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedGur(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->suckerdefeatedgur.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedMage(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->suckerdefeatedmage.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedNovGuard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->suckerdefeatednov_guard.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedVlkGuard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->suckerdefeatedvlk_guard.c_str();
}
ZkString ZkSvmInstance_getYouDefeatedMyComrade(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youdefeatedmycomrade.c_str();
}
ZkString ZkSvmInstance_getYouDefeatedNovGuard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youdefeatednov_guard.c_str();
}
ZkString ZkSvmInstance_getYouDefeatedVlkGuard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youdefeatedvlk_guard.c_str();
}
ZkString ZkSvmInstance_getYouStoleFromMe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youstolefromme.c_str();
}
ZkString ZkSvmInstance_getYouStoleFromUs(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youstolefromus.c_str();
}
ZkString ZkSvmInstance_getYouStoleFromEbr(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youstolefromebr.c_str();
}
ZkString ZkSvmInstance_getYouStoleFromGur(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youstolefromgur.c_str();
}
ZkString ZkSvmInstance_getStoleUromMage(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->stolefrommage.c_str();
}
ZkString ZkSvmInstance_getYouKilledmyfriend(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youkilledmyfriend.c_str();
}
ZkString ZkSvmInstance_getYouKilledEbr(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youkilledebr.c_str();
}
ZkString ZkSvmInstance_getYouKilledGur(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youkilledgur.c_str();
}
ZkString ZkSvmInstance_getYouKilledMage(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youkilledmage.c_str();
}
ZkString ZkSvmInstance_getYouKilledOcFolk(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youkilledocfolk.c_str();
}
ZkString ZkSvmInstance_getYouKilledNcFolk(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youkilledncfolk.c_str();
}
ZkString ZkSvmInstance_getYouKilledPsiFolk(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youkilledpsifolk.c_str();
}
ZkString ZkSvmInstance_getGetThingsRight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->getthingsright.c_str();
}
ZkString ZkSvmInstance_getYouDefeatedMeWell(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youdefeatedmewell.c_str();
}
ZkString ZkSvmInstance_getOm(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->om.c_str();
}
