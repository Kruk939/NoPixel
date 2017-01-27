//null = [this] execVM "virtual_arsenal_init.sqf"

//	[
//		[" (myjob == ""Cop"" && typeof cursorobject == ""Box_NATO_Uniforms_F"") && player getvariable ""cop"" > 1 "],
//		["MUNDURY", "[cursorobject] spawn client_fnc_vars"]
//	],



_crate = _this select 0;
["AmmoboxInit",[_crate,false,{true}]] spawn BIS_fnc_arsenal;
 
 
_availableHeadgear = [
	"AM_PatrolHat",
	"Campaign_Hat_Light",
	"Campaign_Hat_Dark",
	"Campaign_Hat_Tan",
	"Campaign_Hat_Light",
	"Campaign_Hat_Washed",
	"H_Cap_police",
	"EF_Fcap_P",
	"H_ALFR_Headset",
	"CUP_H_FR_Headset",
	"H_CrewHelmetHeli_B",
	"H_PilotHelmetHeli_B",
	"CUP_H_USArmy_Helmet_ECH1_Black",
	"TRYK_H_PASGT_BLK",
	"TRYK_H_woolhat"
];
if (player getvariable ["cop", 0] > 5) then {
_availableHeadgear pushBack "CUP_NVG_PVS7";
_availableHeadgear pushBack "TRYK_Headset_NV";
};

 
_availableGoggles = [
	"G_Lady_Blue",
	"EF_FG1",
	"EF_FG2",
	"G_Diving",
	"G_Spectacles",
	"G_Aviator",
	"G_Sport_BlackWhite",
	"G_Shades_Black",
	"G_Sport_Blackred",
	"TAC_shoulder_armorC_BK",
	"TRYK_headset_Glasses",
	"TRYK_Spset_PHC1_Glasses",
	"TRYK_Spset_PHC2_Glasses",
	"TRYK_TAC_EARMUFF_SHADE_Gs",
	"TAC_PMC_ID_H2",
	"TAC_PMC_ID_B2",
	"TAC_PMC_ID_W2"
];
 
_availableUniforms = [
	"silver_lake_fbi",
    "silver_lake_police",
    "silver_lake_sheriff",
    "silver_lake_statepolice",
    "EF_FEM_3_3",   
	"EF_FEM_3_3G",
	"EF_FEM_4_2",
	"EF_FEM_4_2G",
	"EF_HMP_1",
	"EF_HMSRF_1",
    "female_highway",
	"female_police",
	"female_police1",
	"female_police2",
	"female_police3",
	"nopixel_character_swat"
];
if (player getvariable ["cop", 0] > 5) then {
_availableUniforms pushBack "TRYK_U_B_BLK_Tshirt";
_availableUniforms pushBack "TRYK_U_B_BLKBLK_R_CombatUniform";
_availableUniforms pushBack "TRYK_U_B_BLKBLK_CombatUniform";
_availableUniforms pushBack "TRYK_OVERALL_SAGE_BLKboots_nk_blk";
_availableUniforms pushBack "np_shirt_1";
_availableUniforms pushBack "np_shirt_4";
_availableUniforms pushBack "np_shirt_7";
_availableUniforms pushBack "EF_suit_6";
_availableUniforms pushBack "B_Uniform_hunter_l";
_availableUniforms pushBack "G_Uniform_hunter_l";
_availableUniforms pushBack "CUP_U_C_Rocker_02";
_availableUniforms pushBack "U_BG_Guerilla2_1";
_availableUniforms pushBack "TRYK_U_B_BLOD_T";
_availableUniforms pushBack "TRYK_U_B_ODTAN_Tshirt";
_availableUniforms pushBack "TRYK_U_B_BLK_TAN_2";
_availableUniforms pushBack "TRYK_OVERALL_SAGE_BLKboots_nk_blk";
_availableUniforms pushBack "TRYK_U_B_PCUGs_BLK_R";
_availableUniforms pushBack "TRYK_shirts_DENIM_BL";
_availableUniforms pushBack "TRYK_U_denim_jersey_blu";
_availableUniforms pushBack "TRYK_U_B_Denim_T_BG_BK";
_availableUniforms pushBack "CUP_U_C_Villager_03";
_availableUniforms pushBack "CUP_U_C_Woodlander_04";
_availableUniforms pushBack "U_C_Poloshirt_redwhite";
_availableUniforms pushBack "U_C_Poloshirt_tricolour";
_availableUniforms pushBack "U_B_Wetsuit";
_availableUniforms pushBack "CUP_O_TKI_Khet_Jeans_01";
_availableUniforms pushBack "CUP_O_TKI_Khet_Jeans_02";
_availableUniforms pushBack "CUP_O_TKI_Khet_Jeans_03";
_availableUniforms pushBack "CUP_O_TKI_Khet_Jeans_04";
 
_availableUniforms pushBack "CUP_U_C_Citizen_01";
_availableUniforms pushBack "CUP_U_C_Citizen_02";
_availableUniforms pushBack "CUP_U_C_Citizen_03";
_availableUniforms pushBack "CUP_U_C_Citizen_04";
 
_availableUniforms pushBack "CUP_O_TKI_Khet_Partug_01";
_availableUniforms pushBack "CUP_O_TKI_Khet_Partug_02";
_availableUniforms pushBack "CUP_O_TKI_Khet_Partug_03";
_availableUniforms pushBack "CUP_O_TKI_Khet_Partug_04";
_availableUniforms pushBack "CUP_O_TKI_Khet_Partug_05";
 
_availableUniforms pushBack "CUP_U_C_Profiteer_01";
_availableUniforms pushBack "CUP_U_C_Profiteer_02";
_availableUniforms pushBack "CUP_U_C_Profiteer_03";
_availableUniforms pushBack "CUP_U_C_Profiteer_04";
 
_availableUniforms pushBack "CUP_U_I_GUE_Anorak_03";
_availableUniforms pushBack "CUP_U_I_GUE_Anorak_02";
   
_availableUniforms pushBack "TRYK_U_B_PCUGs_BLK_R";
_availableUniforms pushBack "TRYK_U_B_PCUGs_gry_R";
_availableUniforms pushBack "TRYK_U_B_PCUGs_OD_R";
_availableUniforms pushBack "TRYK_U_B_wh_blk_Rollup_CombatUniform";
_availableUniforms pushBack "TRYK_shirts_DENIM_BK";
_availableUniforms pushBack "TRYK_shirts_DENIM_BL";
_availableUniforms pushBack "TRYK_shirts_DENIM_BWH";
_availableUniforms pushBack "TRYK_shirts_DENIM_R";
_availableUniforms pushBack "TRYK_shirts_DENIM_RED2";
_availableUniforms pushBack "TRYK_shirts_DENIM_WHB";
_availableUniforms pushBack "TRYK_shirts_DENIM_ylb";
_availableUniforms pushBack "TRYK_U_denim_hood_blk";
_availableUniforms pushBack "TRYK_U_taki_G_BLK";
_availableUniforms pushBack "TRYK_U_taki_G_COY";
_availableUniforms pushBack "TRYK_U_pad_j";
 
_availableUniforms pushBack "EF_suit_1";
_availableUniforms pushBack "EF_suit_2";
_availableUniforms pushBack "EF_suit_3";
_availableUniforms pushBack "EF_suit_4";
_availableUniforms pushBack "EF_suit_5";
_availableUniforms pushBack "EF_suit_6";
 
_availableUniforms pushBack "CUP_U_C_Worker_01";
_availableUniforms pushBack "CUP_U_C_Worker_02";
_availableUniforms pushBack "CUP_U_C_Worker_03";
_availableUniforms pushBack "CUP_U_C_Worker_04";
 
_availableUniforms pushBack "B_Uniform_worker_l";
_availableUniforms pushBack "R_Uniform_worker_l";
_availableUniforms pushBack "G_Uniform_worker_l";
 
_availableUniforms pushBack "vvv_character_rock1";
_availableUniforms pushBack "vvv_character_rock2";
_availableUniforms pushBack "vvv_character_rock3";
_availableUniforms pushBack "vvv_character_rock4";
   
_availableUniforms pushBack "vvv_ropa_comun_f_1";
_availableUniforms pushBack "vvv_ropa_comun_f_2";
_availableUniforms pushBack "vvv_ropa_comun_f_3";
_availableUniforms pushBack "vvv_ropa_comun_f_4";
_availableUniforms pushBack "vvv_ropa_comun_f_5";
_availableUniforms pushBack "vvv_ropa_comun_f_6";
_availableUniforms pushBack "vvv_ropa_comun_f_7";
_availableUniforms pushBack "vvv_ropa_comun_f_8";
_availableUniforms pushBack "vvv_ropa_comun_f_9";
_availableUniforms pushBack "vvv_ropa_comun_f_10";
 
 
_availableUniforms pushBack "KAEL_SUITS_BR_F14";
_availableUniforms pushBack "KAEL_SUITS_BR_F12";
_availableUniforms pushBack "KAEL_SUITS_BR_F3";
_availableUniforms pushBack "KAEL_SUITS_BR_F";
_availableUniforms pushBack "KAEL_SUITS_BR_F35";
_availableUniforms pushBack "KAEL_SUITS_BR_F34";
   
_availableUniforms pushBack "vvv_traje_motox_02";
_availableUniforms pushBack "vvv_traje_motox_02_2";
_availableUniforms pushBack "vvv_traje_motox_02_3";
_availableUniforms pushBack "vvv_traje_motox_02_4";
_availableUniforms pushBack "vvv_traje_motox_02_5";
_availableUniforms pushBack "vvv_traje_motox_02_6";
_availableUniforms pushBack "vvv_traje_motox_02_7";
_availableUniforms pushBack "vvv_traje_motox_02_8";
 
 
_availableUniforms pushBack "CUP_U_C_Villager_01";
_availableUniforms pushBack "CUP_U_C_Villager_02";
_availableUniforms pushBack "CUP_U_C_Villager_03";
_availableUniforms pushBack "CUP_U_C_Villager_04";
 
_availableUniforms pushBack "eaglkes_wwi_ind_pilot_cloth";
_availableUniforms pushBack "eaglkes_wwi_ger_pilot_cloth";
 
_availableUniforms pushBack "CUP_U_C_Priest_01";
 
_availableUniforms pushBack "TRYK_HRP_USMC";
_availableUniforms pushBack "TRYK_HRP_khk";
_availableUniforms pushBack "U_mas_ww2_B_CombatUniform_us";
 
_availableUniforms pushBack "CUP_U_C_Mechanic_01";
_availableUniforms pushBack "CUP_U_C_Mechanic_02";
_availableUniforms pushBack "CUP_U_C_Mechanic_03";
 
_availableUniforms pushBack "CUP_U_O_SLA_Overalls_Pilot";
_availableUniforms pushBack "CUP_U_O_SLA_Overalls_Tank";
 
_availableUniforms pushBack "CUP_U_O_SLA_Green";
_availableUniforms pushBack "CUP_U_O_SLA_MixedCamo";
 
_availableUniforms pushBack "CUP_U_C_Suit_01";
_availableUniforms pushBack "CUP_U_C_Suit_02";
 
_availableUniforms pushBack "np_shirt_1";
_availableUniforms pushBack "np_shirt_2";
_availableUniforms pushBack "np_shirt_3";
_availableUniforms pushBack "np_shirt_4";
_availableUniforms pushBack "np_shirt_5";
_availableUniforms pushBack "np_shirt_6";
_availableUniforms pushBack "np_shirt_7";
_availableUniforms pushBack "np_shirt_8";
 
_availableUniforms pushBack "np_traje_test";
_availableUniforms pushBack "np_traje_test2";
_availableUniforms pushBack "np_traje_test3";
_availableUniforms pushBack "np_traje_test4";
_availableUniforms pushBack "np_traje_test5";
_availableUniforms pushBack "np_traje_test6";
_availableUniforms pushBack "np_traje_test7";
_availableUniforms pushBack "np_traje_test8";
_availableUniforms pushBack "np_traje_test9";
_availableUniforms pushBack "np_traje_test10";
 
 
_availableUniforms pushBack "vvv_traje_jackoy";
_availableUniforms pushBack "vvv_traje_jackoy2";
_availableUniforms pushBack "vvv_traje_jackoy3";
_availableUniforms pushBack "vvv_traje_jackoy4";
_availableUniforms pushBack "vvv_traje_jackoy5";
_availableUniforms pushBack "vvv_traje_jackoy6";
_availableUniforms pushBack "vvv_traje_jackoy7";
_availableUniforms pushBack "vvv_traje_jackoy8";
 
_availableUniforms pushBack "vvv_character_agente_47";
_availableUniforms pushBack "vvv_character_agente_472";
_availableUniforms pushBack "vvv_character_agente_474";
_availableUniforms pushBack "vvv_character_agente_475";
 
 
_availableUniforms pushBack "vvv_traje_ejecutivo_1";
_availableUniforms pushBack "vvv_character_messi";
 
_availableUniforms pushBack "U_I_G_resistanceLeader_F";
_availableUniforms pushBack "U_I_C_Soldier_Bandit_3_F";
_availableUniforms pushBack "U_I_C_Soldier_Para_1_F";
_availableUniforms pushBack "U_B_GEN_Soldier_F";
_availableUniforms pushBack "U_B_GEN_Commander_F"
};

 
_availableVests = [
	"V_RebreatherB"
];
if (player getvariable ["cop", 0] > 3) then {
_availableVests pushBack "EF_BS";
_availableVests pushBack "EF_BLT_M1";
_availableVests pushBack "EF_BLT_F1";
_availableVests pushBack "EF_BLT_M1B";
_availableVests pushBack "V_RebreatherB";
};
 
_availableBackpacks = [
	"AM_PoliceBelt",
	"TAC_BP_Butt_B2",
	"TAC_BP_Butt_B"
];
 
_availableMagazine = [
	"vvv_np_magazine_taser",
	"RH_16Rnd_40cal_usp",
	"nonlethal_swing"
];

if (player getvariable ["cop", 0] > 2) then {
_availableMagazine pushBack "RH_15Rnd_9x19_M9";
_availableMagazine pushBack "RH_16Rnd_9x19_CZ";
};
if (player getvariable ["cop", 0] > 3) then {
_availableMagazine pushBack "RH_17Rnd_9x19_g17";
};
if (player getvariable ["cop", 0] > 4) then {
_availableMagazine pushBack "RH_15Rnd_45cal_fnp";
_availableMagazine pushBack "RH_20Rnd_57x28_FN";
_availableMagazine pushBack "RH_7Rnd_45cal_m1911";
};
 
_availableWeapon = [
	"RH_ttracker_g",
	"RH_uspm",
	"Binocular",
	"cg_baton",
	"cg_torch"
];

if (player getvariable ["cop", 0] > 2) then {
_availableWeapon pushBack "CUP_hgun_M9";
_availableWeapon pushBack "RH_cz75";
};
if (player getvariable ["cop", 0] > 3) then {
_availableWeapon pushBack "RH_g17";
_availableWeapon pushBack "RH_g19";
};
if (player getvariable ["cop", 0] > 4) then {
_availableWeapon pushBack "RH_fnp45";
_availableWeapon pushBack "RH_fn57";
_availableWeapon pushBack "RH_kimber_nw";
};

_availableAttachments = [
	"cg_atf_bandage_i",
	"CG_wheel",
	"acc_flashlight",
	"cg_torchbattery",
	"RH_X300"
];
if (player getvariable ["cop", 0] > 4) then {
_availableAttachments pushBack "RH_docter";
};
 
_availableItems = [
	"ItemMap",
	"ItemCompass",
	"Itemwatch",
	"cg_tabletd_2",
	"ItemGPS",
	"TRYK_Headset_NV"
];


[_crate,((backpackCargo _crate) + _availableBackpacks)] call BIS_fnc_addVirtualBackpackCargo;
[_crate,((itemCargo _crate) + _availableHeadgear + _availableGoggles + _availableUniforms + _availableVests)] call BIS_fnc_addVirtualItemCargo;
[_crate,((magazineCargo _crate) + _availableMagazine)] call BIS_fnc_addVirtualMagazineCargo;
[_crate,((weaponCargo _crate) + _availableWeapon)] call BIS_fnc_addVirtualWeaponCargo;
