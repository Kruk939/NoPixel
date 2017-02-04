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
    _availableHeadgear pushBack [
        "CUP_NVG_PVS7",
        "TRYK_Headset_NV"
        ];
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
    _availableHeadgear pushBack [
              "TRYK_U_B_BLK_Tshirt",
              "TRYK_U_B_BLKBLK_R_CombatUniform",
              "TRYK_U_B_BLKBLK_CombatUniform",
              "TRYK_OVERALL_SAGE_BLKboots_nk_blk",
              "np_shirt_1",
              "np_shirt_4",
              "np_shirt_7",
              "EF_suit_6",
              "B_Uniform_hunter_l",
              "G_Uniform_hunter_l",
              "CUP_U_C_Rocker_02",
              "U_BG_Guerilla2_1",
              "TRYK_U_B_BLOD_T",
              "TRYK_U_B_ODTAN_Tshirt",
              "TRYK_U_B_BLK_TAN_2",
              "TRYK_OVERALL_SAGE_BLKboots_nk_blk",
              "TRYK_U_B_PCUGs_BLK_R",
              "TRYK_shirts_DENIM_BL",
              "TRYK_U_denim_jersey_blu",
              "TRYK_U_B_Denim_T_BG_BK",
              "CUP_U_C_Villager_03",
              "CUP_U_C_Woodlander_04",
              "U_C_Poloshirt_redwhite",
              "U_C_Poloshirt_tricolour",
              "U_B_Wetsuit",
              "CUP_O_TKI_Khet_Jeans_01",
              "CUP_O_TKI_Khet_Jeans_02",
              "CUP_O_TKI_Khet_Jeans_03",
              "CUP_O_TKI_Khet_Jeans_04",

              "CUP_U_C_Citizen_01",
              "CUP_U_C_Citizen_02",
              "CUP_U_C_Citizen_03",
              "CUP_U_C_Citizen_04",

              "CUP_O_TKI_Khet_Partug_01",
              "CUP_O_TKI_Khet_Partug_02",
              "CUP_O_TKI_Khet_Partug_03",
              "CUP_O_TKI_Khet_Partug_04",
              "CUP_O_TKI_Khet_Partug_05",

              "CUP_U_C_Profiteer_01",
              "CUP_U_C_Profiteer_02",
              "CUP_U_C_Profiteer_03",
              "CUP_U_C_Profiteer_04",

              "CUP_U_I_GUE_Anorak_03",
              "CUP_U_I_GUE_Anorak_02",

              "TRYK_U_B_PCUGs_BLK_R",
              "TRYK_U_B_PCUGs_gry_R",
              "TRYK_U_B_PCUGs_OD_R",
              "TRYK_U_B_wh_blk_Rollup_CombatUniform",
              "TRYK_shirts_DENIM_BK",
              "TRYK_shirts_DENIM_BL",
              "TRYK_shirts_DENIM_BWH",
              "TRYK_shirts_DENIM_R",
              "TRYK_shirts_DENIM_RED2",
              "TRYK_shirts_DENIM_WHB",
              "TRYK_shirts_DENIM_ylb",
              "TRYK_U_denim_hood_blk",
              "TRYK_U_taki_G_BLK",
              "TRYK_U_taki_G_COY",
              "TRYK_U_pad_j",

              "EF_suit_1",
              "EF_suit_2",
              "EF_suit_3",
              "EF_suit_4",
              "EF_suit_5",
              "EF_suit_6",

              "CUP_U_C_Worker_01",
              "CUP_U_C_Worker_02",
              "CUP_U_C_Worker_03",
              "CUP_U_C_Worker_04",

              "B_Uniform_worker_l",
              "R_Uniform_worker_l",
              "G_Uniform_worker_l",

              "vvv_character_rock1",
              "vvv_character_rock2",
              "vvv_character_rock3",
              "vvv_character_rock4",

              "vvv_ropa_comun_f_1",
              "vvv_ropa_comun_f_2",
              "vvv_ropa_comun_f_3",
              "vvv_ropa_comun_f_4",
              "vvv_ropa_comun_f_5",
              "vvv_ropa_comun_f_6",
              "vvv_ropa_comun_f_7",
              "vvv_ropa_comun_f_8",
              "vvv_ropa_comun_f_9",
              "vvv_ropa_comun_f_10",


              "KAEL_SUITS_BR_F14",
              "KAEL_SUITS_BR_F12",
              "KAEL_SUITS_BR_F3",
              "KAEL_SUITS_BR_F",
              "KAEL_SUITS_BR_F35",
              "KAEL_SUITS_BR_F34",

              "vvv_traje_motox_02",
              "vvv_traje_motox_02_2",
              "vvv_traje_motox_02_3",
              "vvv_traje_motox_02_4",
              "vvv_traje_motox_02_5",
              "vvv_traje_motox_02_6",
              "vvv_traje_motox_02_7",
              "vvv_traje_motox_02_8",


              "CUP_U_C_Villager_01",
              "CUP_U_C_Villager_02",
              "CUP_U_C_Villager_03",
              "CUP_U_C_Villager_04",

              "eaglkes_wwi_ind_pilot_cloth",
              "eaglkes_wwi_ger_pilot_cloth",

              "CUP_U_C_Priest_01",

              "TRYK_HRP_USMC",
              "TRYK_HRP_khk",
              "U_mas_ww2_B_CombatUniform_us",

              "CUP_U_C_Mechanic_01",
              "CUP_U_C_Mechanic_02",
              "CUP_U_C_Mechanic_03",

              "CUP_U_O_SLA_Overalls_Pilot",
              "CUP_U_O_SLA_Overalls_Tank",

              "CUP_U_O_SLA_Green",
              "CUP_U_O_SLA_MixedCamo",

              "CUP_U_C_Suit_01",
              "CUP_U_C_Suit_02",

              "np_shirt_1",
              "np_shirt_2",
              "np_shirt_3",
              "np_shirt_4",
              "np_shirt_5",
              "np_shirt_6",
              "np_shirt_7",
              "np_shirt_8",

              "np_traje_test",
              "np_traje_test2",
              "np_traje_test3",
              "np_traje_test4",
              "np_traje_test5",
              "np_traje_test6",
              "np_traje_test7",
              "np_traje_test8",
              "np_traje_test9",
              "np_traje_test10",


              "vvv_traje_jackoy",
              "vvv_traje_jackoy2",
              "vvv_traje_jackoy3",
              "vvv_traje_jackoy4",
              "vvv_traje_jackoy5",
              "vvv_traje_jackoy6",
              "vvv_traje_jackoy7",
              "vvv_traje_jackoy8",

              "vvv_character_agente_47",
              "vvv_character_agente_472",
              "vvv_character_agente_474",
              "vvv_character_agente_475",


              "vvv_traje_ejecutivo_1",
              "vvv_character_messi",

              "U_I_G_resistanceLeader_F",
              "U_I_C_Soldier_Bandit_3_F",
              "U_I_C_Soldier_Para_1_F",
              "U_B_GEN_Soldier_F",
              "U_B_GEN_Commander_F"
        ];
};

 
_availableVests = [
	"V_RebreatherB"
];
if (player getvariable ["cop", 0] > 3) then {
_availableVests pushBack [
            "EF_BS",
            "EF_BLT_M1",
            "EF_BLT_F1",
            "EF_BLT_M1B",
            "V_RebreatherB"
            ];
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
_availableMagazine pushBack [
    "RH_15Rnd_9x19_M9",
    "RH_16Rnd_9x19_CZ"
    ];
};

if (player getvariable ["cop", 0] > 3) then {
    _availableMagazine pushBack [
    "RH_17Rnd_9x19_g17"
    ];
};

if (player getvariable ["cop", 0] > 4) then {
    _availableMagazine pushBack [
        "RH_15Rnd_45cal_fnp",
        "RH_20Rnd_57x28_FN",
        "RH_7Rnd_45cal_m1911"
    ];
};
 
_availableWeapon = [
	"RH_ttracker_g",
	"RH_uspm",
	"Binocular",
	"cg_baton",
	"cg_torch"
];

if (player getvariable ["cop", 0] > 2) then {
_availableWeapon pushBack [
    "CUP_hgun_M9",
    "RH_cz75"
    ];
};

if (player getvariable ["cop", 0] > 3) then {
    _availableWeapon pushBack [
        "RH_g17",
        "RH_g19"
    ];
};

if (player getvariable ["cop", 0] > 4) then {
    _availableWeapon pushBack [
        "RH_fnp45",
        "RH_fn57";,
        "RH_kimber_nw"
    ];
};

_availableAttachments = [
        "cg_atf_bandage_i",
        "CG_wheel",
        "acc_flashlight",
        "cg_torchbattery",
        "RH_X300"
    ];
if (player getvariable ["cop", 0] > 4) then {
_availableAttachments pushBack [
        "RH_docter"
    ];
};
 
_availableItems = [
        "ItemMap",
        "ItemCompass",
        "Itemwatch",
        "cg_tabletd_2",
        "ItemGPS",
        "TRYK_Headset_NV",
        "NP_8mPoliceLine",
        "NP_4mPoliceLine",
        "NP_1mPoliceLine",
        "NP_PoliceBarrierL",
        "NP_PoliceBarrierS",
        "CG_Spikes_Collapsed",
        "CG_wheel",
        "cg_atf_bandage_i"
    ];


[_crate,((backpackCargo _crate) + _availableBackpacks)] call BIS_fnc_addVirtualBackpackCargo;
[_crate,((itemCargo _crate) + _availableHeadgear + _availableGoggles + _availableUniforms + _availableVests)] call BIS_fnc_addVirtualItemCargo;
[_crate,((magazineCargo _crate) + _availableMagazine)] call BIS_fnc_addVirtualMagazineCargo;
[_crate,((weaponCargo _crate) + _availableWeapon)] call BIS_fnc_addVirtualWeaponCargo;
