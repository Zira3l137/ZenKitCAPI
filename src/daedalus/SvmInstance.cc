#include "zenkit-capi/daedalus/SvmInstance.hh"

#include "../Internal.hh"

ZkString ZkSvmInstance_getMilGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mil_greetings.c_str();
}
ZkString ZkSvmInstance_getPalGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pal_greetings.c_str();
}
ZkString ZkSvmInstance_getWeather(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->weather.c_str();
}
ZkString ZkSvmInstance_getIGetYouStill(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->iget_you_still.c_str();
}
ZkString ZkSvmInstance_getDieEnemy(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->die_enemy.c_str();
}
ZkString ZkSvmInstance_getDieMonster(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->die_monster.c_str();
}
ZkString ZkSvmInstance_getAddonDieMonster(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_die_monster.c_str();
}
ZkString ZkSvmInstance_getAddonDieMonster2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_die_monster_2.c_str();
}
ZkString ZkSvmInstance_getDirtyThief(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dirty_thief.c_str();
}
ZkString ZkSvmInstance_getHandsOff(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hands_off.c_str();
}
ZkString ZkSvmInstance_getSheepKiller(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sheep_killer.c_str();
}
ZkString ZkSvmInstance_getSheepKillerMonster(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sheep_killer_monster.c_str();
}
ZkString ZkSvmInstance_getYouMurderer(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_murderer.c_str();
}
ZkString ZkSvmInstance_getDieStupidBeast(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->die_stupid_beast.c_str();
}
ZkString ZkSvmInstance_getYouDareHitMe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_dare_hit_me.c_str();
}
ZkString ZkSvmInstance_getYouAskedForIt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_asked_for_it.c_str();
}
ZkString ZkSvmInstance_getThenIBeatYouOutOfHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->then_ibeat_you_out_of_here.c_str();
}
ZkString ZkSvmInstance_getWhatDidYouDoInThere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->what_did_you_do_in_there.c_str();
}
ZkString ZkSvmInstance_getWillYouStopFighting(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->will_you_stop_fighting.c_str();
}
ZkString ZkSvmInstance_getKillEnemy(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->kill_enemy.c_str();
}
ZkString ZkSvmInstance_getEnemyKilled(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->enemy_killed.c_str();
}
ZkString ZkSvmInstance_getMonsterKilled(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->monster_killed.c_str();
}
ZkString ZkSvmInstance_getAddonMonsterKilled(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_monster_killed.c_str();
}
ZkString ZkSvmInstance_getAddonMonsterKilled2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_monster_killed_2.c_str();
}
ZkString ZkSvmInstance_getThiefDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->thief_down.c_str();
}
ZkString ZkSvmInstance_getRumfummlerDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->rumfummler_down.c_str();
}
ZkString ZkSvmInstance_getSheepAttackerDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sheep_attacker_down.c_str();
}
ZkString ZkSvmInstance_getKillMurderer(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->kill_murderer.c_str();
}
ZkString ZkSvmInstance_getStupidBeastKilled(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->stupid_beast_killed.c_str();
}
ZkString ZkSvmInstance_getNeverHitMeAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->never_hit_me_again.c_str();
}
ZkString ZkSvmInstance_getYouBetterShouldHaveListened(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_better_should_have_listened.c_str();
}
ZkString ZkSvmInstance_getGetUpAndBegone(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->get_up_and_begone.c_str();
}
ZkString ZkSvmInstance_getNeverEnterRoomAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->never_enter_room_again.c_str();
}
ZkString ZkSvmInstance_getThereIsNoFightingHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->there_is_no_fighting_here.c_str();
}
ZkString ZkSvmInstance_getSpareMe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->spare_me.c_str();
}
ZkString ZkSvmInstance_getRunAway(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->run_away.c_str();
}
ZkString ZkSvmInstance_getAlarm(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->alarm.c_str();
}
ZkString ZkSvmInstance_getGuards(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->guards.c_str();
}
ZkString ZkSvmInstance_getHelp(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->help.c_str();
}
ZkString ZkSvmInstance_getGoodMonsterKill(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->good_monster_kill.c_str();
}
ZkString ZkSvmInstance_getGoodKill(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->good_kill.c_str();
}
ZkString ZkSvmInstance_getNotNow(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->not_now.c_str();
}
ZkString ZkSvmInstance_getRunCoward(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->run_coward.c_str();
}
ZkString ZkSvmInstance_getGetOutOfHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->get_out_of_here.c_str();
}
ZkString ZkSvmInstance_getWhyAreYouInHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->why_are_you_in_here.c_str();
}
ZkString ZkSvmInstance_getYesGoOutOfHere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->yes_go_out_of_here.c_str();
}
ZkString ZkSvmInstance_getWhatsThisSupposedToBe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->whats_this_supposed_to_be.c_str();
}
ZkString ZkSvmInstance_getYouDisturbedMySlumber(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_disturbed_my_slumber.c_str();
}
ZkString ZkSvmInstance_getITookYourGold(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->itook_your_gold.c_str();
}
ZkString ZkSvmInstance_getShitNoGold(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shit_no_gold.c_str();
}
ZkString ZkSvmInstance_getITakeYourWeapon(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->itake_your_weapon.c_str();
}
ZkString ZkSvmInstance_getWhatAreYouDoing(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->what_are_you_doing.c_str();
}
ZkString ZkSvmInstance_getLookingForTroubleAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->looking_for_trouble_again.c_str();
}
ZkString ZkSvmInstance_getStopMagic(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->stop_magic.c_str();
}
ZkString ZkSvmInstance_getISaidStopMagic(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->isaid_stop_magic.c_str();
}
ZkString ZkSvmInstance_getWeaponDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->weapon_down.c_str();
}
ZkString ZkSvmInstance_getISaidWeaponDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->isaid_weapon_down.c_str();
}
ZkString ZkSvmInstance_getWiseMove(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->wise_move.c_str();
}
ZkString ZkSvmInstance_getNextTimeYoureInForIt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->next_time_youre_in_for_it.c_str();
}
ZkString ZkSvmInstance_getOhMyHead(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->oh_my_head.c_str();
}
ZkString ZkSvmInstance_getTheresAFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->theres_afight.c_str();
}
ZkString ZkSvmInstance_getOhMyGodItsAFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->oh_my_god_its_afight.c_str();
}
ZkString ZkSvmInstance_getGoodVictory(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->good_victory.c_str();
}
ZkString ZkSvmInstance_getNotBad(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->not_bad.c_str();
}
ZkString ZkSvmInstance_getOhMyGodHesDown(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->oh_my_god_hes_down.c_str();
}
ZkString ZkSvmInstance_getCheerFriend01(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cheer_friend_01.c_str();
}
ZkString ZkSvmInstance_getCheerFriend02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cheer_friend_02.c_str();
}
ZkString ZkSvmInstance_getCheerFriend03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cheer_friend_03.c_str();
}
ZkString ZkSvmInstance_getOoh01(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ooh_01.c_str();
}
ZkString ZkSvmInstance_getOoh02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ooh_02.c_str();
}
ZkString ZkSvmInstance_getOoh03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ooh_03.c_str();
}
ZkString ZkSvmInstance_getWhatWasThat(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->what_was_that.c_str();
}
ZkString ZkSvmInstance_getGetOutOfMyBed(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->get_out_of_my_bed.c_str();
}
ZkString ZkSvmInstance_getAwake(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->awake.c_str();
}
ZkString ZkSvmInstance_getAbsCommander(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->abs_commander.c_str();
}
ZkString ZkSvmInstance_getAbsMonastery(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->abs_monastery.c_str();
}
ZkString ZkSvmInstance_getAbsFarm(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->abs_farm.c_str();
}
ZkString ZkSvmInstance_getAbsGood(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->abs_good.c_str();
}
ZkString ZkSvmInstance_getSheepKillerCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sheep_killer_crime.c_str();
}
ZkString ZkSvmInstance_getAttackCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->attack_crime.c_str();
}
ZkString ZkSvmInstance_getTheftCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->theft_crime.c_str();
}
ZkString ZkSvmInstance_getMurderCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->murder_crime.c_str();
}
ZkString ZkSvmInstance_getPalCityCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pal_city_crime.c_str();
}
ZkString ZkSvmInstance_getMilCityCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mil_city_crime.c_str();
}
ZkString ZkSvmInstance_getCityCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->city_crime.c_str();
}
ZkString ZkSvmInstance_getMonaCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mona_crime.c_str();
}
ZkString ZkSvmInstance_getFarmCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->farm_crime.c_str();
}
ZkString ZkSvmInstance_getOcCrime(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->oc_crime.c_str();
}
ZkString ZkSvmInstance_getToughguyAttackLost(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->toughguy_attack_lost.c_str();
}
ZkString ZkSvmInstance_getToughguyAttackWon(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->toughguy_attack_won.c_str();
}
ZkString ZkSvmInstance_getToughguyPlayerAttack(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->toughguy_player_attack.c_str();
}
ZkString ZkSvmInstance_getGold1000(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_1000.c_str();
}
ZkString ZkSvmInstance_getGold950(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_950.c_str();
}
ZkString ZkSvmInstance_getGold900(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_900.c_str();
}
ZkString ZkSvmInstance_getGold850(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_850.c_str();
}
ZkString ZkSvmInstance_getGold800(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_800.c_str();
}
ZkString ZkSvmInstance_getGold750(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_750.c_str();
}
ZkString ZkSvmInstance_getGold700(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_700.c_str();
}
ZkString ZkSvmInstance_getGold650(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_650.c_str();
}
ZkString ZkSvmInstance_getGold600(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_600.c_str();
}
ZkString ZkSvmInstance_getGold550(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_550.c_str();
}
ZkString ZkSvmInstance_getGold500(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_500.c_str();
}
ZkString ZkSvmInstance_getGold450(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_450.c_str();
}
ZkString ZkSvmInstance_getGold400(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_400.c_str();
}
ZkString ZkSvmInstance_getGold350(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_350.c_str();
}
ZkString ZkSvmInstance_getGold300(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_300.c_str();
}
ZkString ZkSvmInstance_getGold250(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_250.c_str();
}
ZkString ZkSvmInstance_getGold200(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_200.c_str();
}
ZkString ZkSvmInstance_getGold150(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_150.c_str();
}
ZkString ZkSvmInstance_getGold100(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_100.c_str();
}
ZkString ZkSvmInstance_getGold90(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_90.c_str();
}
ZkString ZkSvmInstance_getGold80(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_80.c_str();
}
ZkString ZkSvmInstance_getGold70(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_70.c_str();
}
ZkString ZkSvmInstance_getGold60(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_60.c_str();
}
ZkString ZkSvmInstance_getGold50(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_50.c_str();
}
ZkString ZkSvmInstance_getGold40(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_40.c_str();
}
ZkString ZkSvmInstance_getGold30(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_30.c_str();
}
ZkString ZkSvmInstance_getGold20(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_20.c_str();
}
ZkString ZkSvmInstance_getGold10(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->gold_10.c_str();
}
ZkString ZkSvmInstance_getSmalltalk01(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_01.c_str();
}
ZkString ZkSvmInstance_getSmalltalk02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_02.c_str();
}
ZkString ZkSvmInstance_getSmalltalk03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_03.c_str();
}
ZkString ZkSvmInstance_getSmalltalk04(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_04.c_str();
}
ZkString ZkSvmInstance_getSmalltalk05(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_05.c_str();
}
ZkString ZkSvmInstance_getSmalltalk06(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_06.c_str();
}
ZkString ZkSvmInstance_getSmalltalk07(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_07.c_str();
}
ZkString ZkSvmInstance_getSmalltalk08(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_08.c_str();
}
ZkString ZkSvmInstance_getSmalltalk09(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_09.c_str();
}
ZkString ZkSvmInstance_getSmalltalk10(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_10.c_str();
}
ZkString ZkSvmInstance_getSmalltalk11(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_11.c_str();
}
ZkString ZkSvmInstance_getSmalltalk12(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_12.c_str();
}
ZkString ZkSvmInstance_getSmalltalk13(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_13.c_str();
}
ZkString ZkSvmInstance_getSmalltalk14(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_14.c_str();
}
ZkString ZkSvmInstance_getSmalltalk15(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_15.c_str();
}
ZkString ZkSvmInstance_getSmalltalk16(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_16.c_str();
}
ZkString ZkSvmInstance_getSmalltalk17(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_17.c_str();
}
ZkString ZkSvmInstance_getSmalltalk18(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_18.c_str();
}
ZkString ZkSvmInstance_getSmalltalk19(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_19.c_str();
}
ZkString ZkSvmInstance_getSmalltalk20(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_20.c_str();
}
ZkString ZkSvmInstance_getSmalltalk21(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_21.c_str();
}
ZkString ZkSvmInstance_getSmalltalk22(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_22.c_str();
}
ZkString ZkSvmInstance_getSmalltalk23(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_23.c_str();
}
ZkString ZkSvmInstance_getSmalltalk24(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_24.c_str();
}
ZkString ZkSvmInstance_getSmalltalk25(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_25.c_str();
}
ZkString ZkSvmInstance_getSmalltalk26(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_26.c_str();
}
ZkString ZkSvmInstance_getSmalltalk27(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_27.c_str();
}
ZkString ZkSvmInstance_getSmalltalk28(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_28.c_str();
}
ZkString ZkSvmInstance_getSmalltalk29(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_29.c_str();
}
ZkString ZkSvmInstance_getSmalltalk30(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->smalltalk_30.c_str();
}
ZkString ZkSvmInstance_getNoLearnNoPoints(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->no_learn_no_points.c_str();
}
ZkString ZkSvmInstance_getNoLearnOverPersonalMax(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->no_learn_over_personal_max.c_str();
}
ZkString ZkSvmInstance_getNoLearnYoureBetter(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->no_learn_youre_better.c_str();
}
ZkString ZkSvmInstance_getYouLearnedSomething(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_learned_something.c_str();
}
ZkString ZkSvmInstance_getUnterstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->unterstadt.c_str();
}
ZkString ZkSvmInstance_getOberstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->oberstadt.c_str();
}
ZkString ZkSvmInstance_getTempel(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->tempel.c_str();
}
ZkString ZkSvmInstance_getMarkt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->markt.c_str();
}
ZkString ZkSvmInstance_getGalgen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->galgen.c_str();
}
ZkString ZkSvmInstance_getKaserne(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->kaserne.c_str();
}
ZkString ZkSvmInstance_getHafen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hafen.c_str();
}
ZkString ZkSvmInstance_getWhereto(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->whereto.c_str();
}
ZkString ZkSvmInstance_getOberstadt2Unterstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->oberstadt_2_unterstadt.c_str();
}
ZkString ZkSvmInstance_getUnterstadt2Oberstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->unterstadt_2_oberstadt.c_str();
}
ZkString ZkSvmInstance_getUnterstadt2Tempel(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->unterstadt_2_tempel.c_str();
}
ZkString ZkSvmInstance_getUnterstadt2Hafen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->unterstadt_2_hafen.c_str();
}
ZkString ZkSvmInstance_getTempel2Unterstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->tempel_2_unterstadt.c_str();
}
ZkString ZkSvmInstance_getTempel2Markt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->tempel_2_markt.c_str();
}
ZkString ZkSvmInstance_getTempel2Galgen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->tempel_2_galgen.c_str();
}
ZkString ZkSvmInstance_getMarkt2Tempel(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->markt_2_tempel.c_str();
}
ZkString ZkSvmInstance_getMarkt2Kaserne(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->markt_2_kaserne.c_str();
}
ZkString ZkSvmInstance_getMarkt2Galgen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->markt_2_galgen.c_str();
}
ZkString ZkSvmInstance_getGalgen2Tempel(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->galgen_2_tempel.c_str();
}
ZkString ZkSvmInstance_getGalgen2Markt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->galgen_2_markt.c_str();
}
ZkString ZkSvmInstance_getGalgen2Kaserne(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->galgen_2_kaserne.c_str();
}
ZkString ZkSvmInstance_getKaserne2Markt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->kaserne_2_markt.c_str();
}
ZkString ZkSvmInstance_getKaserne2Galgen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->kaserne_2_galgen.c_str();
}
ZkString ZkSvmInstance_getHafen2Unterstadt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hafen_2_unterstadt.c_str();
}
ZkString ZkSvmInstance_getDead(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dead.c_str();
}
ZkString ZkSvmInstance_getAargh1(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->aargh_1.c_str();
}
ZkString ZkSvmInstance_getAargh2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->aargh_2.c_str();
}
ZkString ZkSvmInstance_getAargh3(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->aargh_3.c_str();
}
ZkString ZkSvmInstance_getAddonWrongArmor(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_wrong_armor.c_str();
}
ZkString ZkSvmInstance_getAddonWrongArmorSld(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_wrong_armor_sld.c_str();
}
ZkString ZkSvmInstance_getAddonWrongArmorMil(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_wrong_armor_mil.c_str();
}
ZkString ZkSvmInstance_getAddonWrongArmorKdf(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_wrong_armor_kdf.c_str();
}
ZkString ZkSvmInstance_getAddonNoArmorBdt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_no_armor_bdt.c_str();
}
ZkString ZkSvmInstance_getAddonDieBandit(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_die_bandit.c_str();
}
ZkString ZkSvmInstance_getAddonDirtyPirate(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_dirty_pirate.c_str();
}
ZkString ZkSvmInstance_getScHeyTurnAround(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sc_hey_turn_around.c_str();
}
ZkString ZkSvmInstance_getScHeyTurnAround02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sc_hey_turn_around_02.c_str();
}
ZkString ZkSvmInstance_getScHeyTurnAround03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sc_hey_turn_around_03.c_str();
}
ZkString ZkSvmInstance_getScHeyTurnAround04(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sc_hey_turn_around_04.c_str();
}
ZkString ZkSvmInstance_getScHeyWaitASecond(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sc_hey_wait_asecond.c_str();
}
ZkString ZkSvmInstance_getDoesntMork(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->doesnt_mork.c_str();
}
ZkString ZkSvmInstance_getPickBroke(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pick_broke.c_str();
}
ZkString ZkSvmInstance_getNeedKey(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->need_key.c_str();
}
ZkString ZkSvmInstance_getNoMorePicks(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->no_more_picks.c_str();
}
ZkString ZkSvmInstance_getNoPickLockTalent(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->no_pick_lock_talent.c_str();
}
ZkString ZkSvmInstance_getNoSweeping(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->no_sweeping.c_str();
}
ZkString ZkSvmInstance_getPickLockOrKeyMissing(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pick_lock_or_key_missing.c_str();
}
ZkString ZkSvmInstance_getKeyMissing(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->key_missing.c_str();
}
ZkString ZkSvmInstance_getPickLockMissing(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->pick_lock_missing.c_str();
}
ZkString ZkSvmInstance_getNeverOpen(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->never_open.c_str();
}
ZkString ZkSvmInstance_getMissingItem(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->missing_item.c_str();
}
ZkString ZkSvmInstance_getDontKnow(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->dont_know.c_str();
}
ZkString ZkSvmInstance_getNothingToGet(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nothing_to_get.c_str();
}
ZkString ZkSvmInstance_getNothingToGet02(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nothing_to_get_02.c_str();
}
ZkString ZkSvmInstance_getNothingToGet03(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->nothing_to_get_03.c_str();
}
ZkString ZkSvmInstance_getHealShrine(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->heal_shrine.c_str();
}
ZkString ZkSvmInstance_getHealLastShrine(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->heal_last_shrine.c_str();
}
ZkString ZkSvmInstance_getIrdorathThereYouAre(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->irdorath_there_you_are.c_str();
}
ZkString ZkSvmInstance_getScOpensIrdorathBook(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sc_opens_irdorath_book.c_str();
}
ZkString ZkSvmInstance_getScOpensLastDoor(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sc_opens_last_door.c_str();
}
ZkString ZkSvmInstance_getTrade1(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trade_1.c_str();
}
ZkString ZkSvmInstance_getTrade2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trade_2.c_str();
}
ZkString ZkSvmInstance_getTrade3(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->trade_3.c_str();
}
ZkString ZkSvmInstance_getVerstehe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->verstehe.c_str();
}
ZkString ZkSvmInstance_getFoundTreasure(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->found_treasure.c_str();
}
ZkString ZkSvmInstance_getCantUnderstandThis(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cant_understand_this.c_str();
}
ZkString ZkSvmInstance_getCantReadThis(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cant_read_this.c_str();
}
ZkString ZkSvmInstance_getStoneplate1(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->stoneplate_1.c_str();
}
ZkString ZkSvmInstance_getStoneplate2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->stoneplate_2.c_str();
}
ZkString ZkSvmInstance_getStoneplate3(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->stoneplate_3.c_str();
}
ZkString ZkSvmInstance_getCough(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cough.c_str();
}
ZkString ZkSvmInstance_getHui(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hui.c_str();
}
ZkString ZkSvmInstance_getAddonThisLittleBastard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_this_little_bastard.c_str();
}
ZkString ZkSvmInstance_getAddonOpenAdanosTemple(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_open_adanos_temple.c_str();
}
ZkString ZkSvmInstance_getAttentatAddonDescription(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->attentat_addon_description.c_str();
}
ZkString ZkSvmInstance_getAttentatAddonDescription2(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->attentat_addon_description_2.c_str();
}
ZkString ZkSvmInstance_getAttentatAddonPro(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->attentat_addon_pro.c_str();
}
ZkString ZkSvmInstance_getAttentatAddonContra(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->attentat_addon_contra.c_str();
}
ZkString ZkSvmInstance_getMineAddonDescription(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mine_addon_description.c_str();
}
ZkString ZkSvmInstance_getAddonSummonAncientGhost(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_summon_ancient_ghost.c_str();
}
ZkString ZkSvmInstance_getAddonAncientGhostNotNear(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_ancient_ghost_not_near.c_str();
}
ZkString ZkSvmInstance_getAddonGoldDescription(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->addon_gold_description.c_str();
}
ZkString ZkSvmInstance_getWatchYourAim(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->watch_your_aim.c_str();
}
ZkString ZkSvmInstance_getWatchYourAimAngry(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->watch_your_aim_angry.c_str();
}
ZkString ZkSvmInstance_getLetsForgetOurLittleFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->lets_forget_our_little_fight.c_str();
}
ZkString ZkSvmInstance_getStrange(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->strange.c_str();
}
ZkString ZkSvmInstance_getDieMortalEnemy(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->die_mortal_enemy.c_str();
}
ZkString ZkSvmInstance_getNowWait(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->now_wait.c_str();
}
ZkString ZkSvmInstance_getNowWaitIntruder(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->now_wait_intruder.c_str();
}
ZkString ZkSvmInstance_getYouStillNotHaveEnough(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_still_not_have_enough.c_str();
}
ZkString ZkSvmInstance_getYouAttackedMyCharge(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_attacked_my_charge.c_str();
}
ZkString ZkSvmInstance_getIWillTeachYouRespectForForeignProperty(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->iwill_teach_you_respect_for_foreign_property.c_str();
}
ZkString ZkSvmInstance_getYouKilledOneOfUs(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_killed_one_of_us.c_str();
}
ZkString ZkSvmInstance_getBerzerk(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->berzerk.c_str();
}
ZkString ZkSvmInstance_getYoullBeSorryForThis(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->youll_be_sorry_for_this.c_str();
}
ZkString ZkSvmInstance_getYesYes(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->yes_yes.c_str();
}
ZkString ZkSvmInstance_getShitWhatAMonster(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shit_what_amonster.c_str();
}
ZkString ZkSvmInstance_getWeWillMeetAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->we_will_meet_again.c_str();
}
ZkString ZkSvmInstance_getNeverTryThatAgain(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->never_try_that_again.c_str();
}
ZkString ZkSvmInstance_getITookYourOre(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->itook_your_ore.c_str();
}
ZkString ZkSvmInstance_getShitNoOre(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->shit_no_ore.c_str();
}
ZkString ZkSvmInstance_getYouViolatedForbiddenTerritory(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_violated_forbidden_territory.c_str();
}
ZkString ZkSvmInstance_getYouWannaFoolMe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_wanna_fool_me.c_str();
}
ZkString ZkSvmInstance_getWhatDidYouInThere(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->what_did_you_in_there.c_str();
}
ZkString ZkSvmInstance_getIntruderAlert(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->intruder_alert.c_str();
}
ZkString ZkSvmInstance_getBehindYou(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->behind_you.c_str();
}
ZkString ZkSvmInstance_getHeyHeyHey(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hey_hey_hey.c_str();
}
ZkString ZkSvmInstance_getCheerFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cheer_fight.c_str();
}
ZkString ZkSvmInstance_getCheerFriend(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->cheer_friend.c_str();
}
ZkString ZkSvmInstance_getOoh(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->ooh.c_str();
}
ZkString ZkSvmInstance_getYeahWellDone(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->yeah_well_done.c_str();
}
ZkString ZkSvmInstance_getHeDefeatedhim(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->he_defeatedhim.c_str();
}
ZkString ZkSvmInstance_getHeDeservEdit(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->he_deserv_edit.c_str();
}
ZkString ZkSvmInstance_getHeKilledHim(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->he_killed_him.c_str();
}
ZkString ZkSvmInstance_getItWasAGoodFight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->it_was_agood_fight.c_str();
}
ZkString ZkSvmInstance_getFriendlyGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->friendly_greetings.c_str();
}
ZkString ZkSvmInstance_getAlGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->al_greetings.c_str();
}
ZkString ZkSvmInstance_getMageGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->mage_greetings.c_str();
}
ZkString ZkSvmInstance_getSectGreetings(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sect_greetings.c_str();
}
ZkString ZkSvmInstance_getThereHeIs(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->there_he_is.c_str();
}
ZkString ZkSvmInstance_getNoLearnOverMax(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->no_learn_over_max.c_str();
}
ZkString ZkSvmInstance_getNoLearnYouAlreadyKnow(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->no_learn_you_already_know.c_str();
}
ZkString ZkSvmInstance_getHeyYou(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->hey_you.c_str();
}
ZkString ZkSvmInstance_getWhatDoYouWant(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->what_do_you_want.c_str();
}
ZkString ZkSvmInstance_getISaidWhatDoYouWant(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->isaid_what_do_you_want.c_str();
}
ZkString ZkSvmInstance_getMakeWay(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->make_way.c_str();
}
ZkString ZkSvmInstance_getOutOfMyWay(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->out_of_my_way.c_str();
}
ZkString ZkSvmInstance_getYouDeafOrWhat(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_deaf_or_what.c_str();
}
ZkString ZkSvmInstance_getLookAway(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->look_away.c_str();
}
ZkString ZkSvmInstance_getOkayKeepIt(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->okay_keep_it.c_str();
}
ZkString ZkSvmInstance_getWhatsThat(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->whats_that.c_str();
}
ZkString ZkSvmInstance_getThatsMyWeapon(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->thats_my_weapon.c_str();
}
ZkString ZkSvmInstance_getGiveItTome(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->give_it_tome.c_str();
}
ZkString ZkSvmInstance_getYouCanKeepTheCrap(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_can_keep_the_crap.c_str();
}
ZkString ZkSvmInstance_getTheyKilledMyFriend(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->they_killed_my_friend.c_str();
}
ZkString ZkSvmInstance_getSuckerGotSome(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sucker_got_some.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedEbr(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sucker_defeated_ebr.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedGur(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sucker_defeated_gur.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedMage(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sucker_defeated_mage.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedNovGuard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sucker_defeated_nov_guard.c_str();
}
ZkString ZkSvmInstance_getSuckerDefeatedVlkGuard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->sucker_defeated_vlk_guard.c_str();
}
ZkString ZkSvmInstance_getYouDefeatedMyComrade(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_defeated_my_comrade.c_str();
}
ZkString ZkSvmInstance_getYouDefeatedNovGuard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_defeated_nov_guard.c_str();
}
ZkString ZkSvmInstance_getYouDefeatedVlkGuard(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_defeated_vlk_guard.c_str();
}
ZkString ZkSvmInstance_getYouStoleFromMe(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_stole_from_me.c_str();
}
ZkString ZkSvmInstance_getYouStoleFromUs(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_stole_from_us.c_str();
}
ZkString ZkSvmInstance_getYouStoleFromEbr(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_stole_from_ebr.c_str();
}
ZkString ZkSvmInstance_getYouStoleFromGur(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_stole_from_gur.c_str();
}
ZkString ZkSvmInstance_getStoleUromMage(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->stole_urom_mage.c_str();
}
ZkString ZkSvmInstance_getYouKilledmyfriend(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_killedmyfriend.c_str();
}
ZkString ZkSvmInstance_getYouKilledEbr(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_killed_ebr.c_str();
}
ZkString ZkSvmInstance_getYouKilledGur(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_killed_gur.c_str();
}
ZkString ZkSvmInstance_getYouKilledMage(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_killed_mage.c_str();
}
ZkString ZkSvmInstance_getYouKilledOcFolk(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_killed_oc_folk.c_str();
}
ZkString ZkSvmInstance_getYouKilledNcFolk(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_killed_nc_folk.c_str();
}
ZkString ZkSvmInstance_getYouKilledPsiFolk(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_killed_psi_folk.c_str();
}
ZkString ZkSvmInstance_getGetThingsRight(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->get_things_right.c_str();
}
ZkString ZkSvmInstance_getYouDefeatedMeWell(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->you_defeated_me_well.c_str();
}
ZkString ZkSvmInstance_getOm(ZkSvmInstance const* slf) {
	ZKC_CHECK_NULL(slf);
	return slf->om.c_str();
}
