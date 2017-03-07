//null = [this] execVM "virtual_arsenal_init.sqf"


_crate = _this select 0;
["AmmoboxInit",[_crate,false,{true}]] spawn BIS_fnc_arsenal;
 
 
_availableHeadgear = [
	"AM_PatrolHat",
	"TAC_SF10H",
	"BHD_Protec_helmet",
	"BHD_Protec_helmet2",
	"BHD_Protec_helmet3",
	"Campaign_Hat_Light",
	"TRYK_H_PASGT_BLK",
	"TRYK_H_woolhat",
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
    if (player getvariable ["cop", 0] > 2) then {
    _availableHeadgearTwo = [
    	"CUP_NVG_PVS7",
        "TRYK_Headset_NV"
        ];
    _availableHeadgear = _availableHeadgear + _availableHeadgearTwo;
    };
    
    if (player getvariable ["cop", 0] > 5) then {
    _availableHeadgearFive = [
    	"G_Spectacles_Tinted",
        "CUP_H_NAPA_Fedora",
        "ALE_H_Cowboy_White",
        "ALE_H_Cowboy_Black",
        "ALE_H_Cowboy_Brown",
        "ALE_H_NewEra_Monster",
        "ALE_H_NewEra_Rouge",
        "ALE_H_NewEra_Superman",
        "ALE_H_NewEra_Cyan",
        "ALE_H_NewEra_Black",
        "ALE_H_NewEra_Lakers",
        "ALE_H_NewEra_Redsox",

        "H_Beret_blk",
        "H_Booniehat_khk",
        "H_Booniehat_oli",
        "H_Booniehat_tan",
	"H_Beret_gen_F",
        "TRYK_H_woolhat_WH",
        "TRYK_H_woolhat_tan",
        "TRYK_H_woolhat_CW",
        "TRYK_H_woolhat_cu",
        "TRYK_H_woolhat_br",
        "TRYK_H_woolhat",
        "TRYK_r_cap_tan_Glasses",
        "TRYK_r_cap_od_Glasses",
        "TRYK_r_cap_blk_Glasses",
        "TRYK_R_CAP_OD_US",
        "TRYK_R_CAP_TAN",
        "TRYK_R_CAP_BLK",
        "TRYK_H_pakol2",
        "TRYK_H_headsetcap",
        "TRYK_H_headsetcap_od",
        "TRYK_H_headsetcap_blk",
        "TRYK_H_headsetcap_blk_Glasses",
        "TRYK_H_headsetcap_Glasses",
        "TRYK_H_LHS_HEL_G",
        "TRYK_H_Bandana_wig_g",
        "TRYK_H_Bandana_wig",
        "TRYK_H_Bandana_H",
        "TRYK_Kio_Balaclava",

        "H_Cap_tan",
        "H_Cap_blk",
        "H_Cap_blk_CMMG",
        "H_Cap_brn_SPECOPS",
        "H_Cap_tan_specops_US",
        "H_Cap_khaki_specops_UK",
        "H_Cap_grn",
        "H_Cap_grn_BI",
        "H_Cap_blk_Raven",
        "H_Cap_blk_ION",

        "Gorb_AngryGingerbread1",
        "Gorb_AngryGingerbreadSwirl2",
        "CUP_H_C_Beanie_01",
        "CUP_H_C_Beanie_02",
        "CUP_H_ChDKZ_Beanie",
        "H_Beret_blk",
        "CUP_H_C_Beret_01",
        "CUP_H_C_Beret_02",
        "H_BobaMask",
        "BL_eimer_Hat",

        "CUP_H_PMC_Cap_Burberry",
        "CUP_H_PMC_Cap_Grey",
        "CUP_H_PMC_Cap_Back_Grey",
        "CUP_H_PMC_Cap_Back_Burberry",
        "Gorb_PuddingHat",
        "Gorb_FestiveHat6",
        "Gorb_FestiveHat8",
        "BL_mask_Hat",
        "Gorb_HolidayBaseballHat1",
        "Gorb_HolidayBaseballHat2",

        "Gorb_HolidayBaseballHat3",
        "Gorb_HolidayBaseballHat4",
        "Gorb_HolidayBaseballHat5",
        "Gorb_HolidayBaseballHat6",
        "Gorb_PlaidHat1",
        "Gorb_PlaidHat2",
        "Gorb_PlaidHat3",
        "Gorb_PlaidHat4",
        "cg_horsehead",
        "cg_horsehead_2",

        "cg_horsehead_blk",
        "cg_horsehead_pnk",
        "H_Hat_brown",
        "H_Hat_tan",
        "H_Hat_camo",
        "H_Hat_checker",
        "H_KermitMask",
        "sab_wwiplanes_ger_cap",
        "sab_wwiplanes_fr_cap",
        "CUP_H_SLA_TankerHelmet",

        "acj_casco_ammerica",
        "acj_casco_calavera",
        "acj_casco_camo",
        "acj_casco_espider",
        "acj_casco_germani",
        "acj_casco_gris",
        "acj_casco_negro",
        "acj_casco_rojo",
        "Casque_Moto",
        "H_RacingHelmet_1_white_F",

        "EF_Long_wig_B",
        "EF_Long_wig_BL",
        "EF_Long_wig_BW",
        "EF_Long_wig_GL",
        "EF_Punk_wig_B",
        "EF_Punk_wig_BL",
        "EF_Punk_wig_BW",
        "EF_Punk_wig_GL"
        ];
        _availableHeadgear = _availableHeadgear + _availableHeadgearFive;
};
 
_availableGoggles = [
	"TRYK_balaclava_BLACK_NV",
	"Balaclava_Blk_Plain",
	"G_Balaclava_blk",
	"G_Aviator",
	"TAC_PMC_ID_H2",
	"TAC_PMC_ID_B2",
	"TAC_PMC_ID_W2",
	"TRYK_kio_balaclava_BLK",
	"TRYK_kio_balaclava_ESS",
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

    if (player getvariable ["cop", 0] > 5) then {
        _availableGogglesFive = [
            "G_Shades_Black",
            "G_Shades_Blue",
            "G_Sport_Blackred",
            "G_Sport_Checkered",
            "G_Sport_Blackyellow",
            "G_Sport_BlackWhite",
            "G_Squares",
            "G_Aviator",
            "G_Lady_Mirror",
            "G_Lady_Dark",
            "G_Lady_Blue",
            "G_Lowprofile",
            "G_Combat",

            "EF_ACC1",
            "EF_ACC2",
            "EF_ACC3",
            "EF_AC1",
            "EF_AC2",
            "EF_AC3",
            "SFG_Tac_smallBeardB",
            "SFG_Tac_smallBeardD",
            "SFG_Tac_smallBeardG",
            "SFG_Tac_smallBeardO",
            "SFG_Tac_BeardB",
            "SFG_Tac_BeardD",
            "SFG_Tac_BeardG",
            "SFG_Tac_BeardO",
            "SFG_Tac_chinlessbB",
            "SFG_Tac_chinlessbD",
            "SFG_Tac_chinlessbG",
            "SFG_Tac_chinlessbO",
            "SFG_Tac_moustacheB",
            "SFG_Tac_moustacheD",
            "SFG_Tac_moustacheG",
            "SFG_Tac_moustacheO",
            "SFG_Tac_ChopsB",
            "SFG_Tac_ChopsD",
            "SFG_Tac_ChopsG",
            "SFG_Tac_ChopsO",
            "TRYK_Beard_BK",
            "TRYK_Beard",
            "TRYK_Beard_BW",
            "TRYK_Beard_Gr",
            "TRYK_Beard_BK2",
            "TRYK_Beard2",
            "TRYK_Beard_BW2",
            "TRYK_Beard_Gr2",
            "TRYK_Beard_BK3",
            "TRYK_Beard3",
            "TRYK_Beard_BW3",
            "TRYK_Beard_Gr3",
            "TRYK_Beard_BK4",
            "TRYK_Beard4",
            "TRYK_Beard_BW4",
            "TRYK_Beard_Gr4"
        ];
        _availableGoggles = _availableGoggles + _availableGogglesFive;
    };
 
_availableUniforms = [
	"silver_lake_fbi",
	"silver_lake_police",
	"silver_lake_sheriff",
	"silver_lake_statepolice",
    "vvv_traje_policia_1",
    "vvv_traje_policia_2",
    "vvv_traje_policia_3",
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
	"nopixel_character_swat",
    "vvv_character_swat_3",
    "vvv_character_swat_2",
	"silver_lake_fbi",
	"silver_lake_police",
	"silver_lake_sheriff",
	"silver_lake_statepolice",
	"TRYK_U_B_BLK",
	"TRYK_U_B_BLK_Tshirt",
	"TRYK_U_B_BLKBLK_R_CombatUniform",
	"TRYK_U_B_BLKBLK_CombatUniform",
	"EF_HMSRF_1",
	"EF_HMP_1",
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
	"U_C_Poloshirt_tricolour"
];
    
    if (player getvariable ["cop", 0] > 5) then {
        _availableUniformsFive = [
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
	      "TRYK_U_denim_hood_nc",
	      "TRYK_U_denim_hood_mc",
              "TRYK_shirts_DENIM_BK",
              "TRYK_shirts_DENIM_BL",
              "TRYK_shirts_DENIM_BWH",
              "TRYK_shirts_DENIM_R",
              "TRYK_shirts_DENIM_RED2",
              "TRYK_shirts_DENIM_WHB",
              "TRYK_shirts_DENIM_ylb",
	      "TRYK_U_denim_jersey_blk",
	      
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
        _availableUniforms = _availableUniforms + _availableUniformsFive;
    };
 
_availableVests = [
    "V_RebreatherB"
];
    if (player getvariable ["cop", 0] > 2) then {
        _availableVestsTwo = [
            "EF_BS",
            "EF_BLT_M1",
            "EF_BLT_F1",
            "EF_BLT_M1B",
	    "TAC_V_tacv1LC_P",
	    "TAC_V_Sheriff_BA_TB7",
	    "TAC_V_Sheriff_BA_TB3",
	    "EF_GSG9_2"
        ];
    _availableVests = _availableVests + _availableVestsTwo;
    };

    if (player getvariable ["cop", 0] > 5) then {
        _availableVestsFive = [
            "EF_BS",
            "EF_CTV1",
            "EF_PBDF_M1",
            "EF_BLT_M1",
            "EF_BLT_M1B",
            "TAC_FS_FO_P",
            "TAC_Sheriff_BA_OD",
            "TAC_V_tacv1_SRF",
            "TAC_V_tacv1_P",
            "EF_CTV1",
            "TAC_HGB_B",
            "TAC_V_Sheriff_BA_TB4"
            //"TRYK_V_ArmorVest_Delta",
            //"TRYK_V_ArmorVest_Delta2"
        ];
    _availableVests = _availableVests + _availableVestsFive;
    };


_availableBackpacks = [
    "AM_PoliceBelt",
	"TRYK_Winter_pack",
	"TAC_BP_Butt_B2",
	"TAC_BP_Butt_B",
	"TAC_BP_KAR_L",
	"TRYK_B_BAF_BAG_BLK"
];

    if (player getvariable ["cop", 0] > 5) then {
    _availableBackpacksFive = [
        "CUP_B_ACRPara_m95",
	    "CUP_B_HikingPack_Civ",
	    "TRYK_Winter_pack"
    ];
    _availableBackpacks = _availableBackpacks + _availableBackpacksFive;
    };

_availableMagazine = [
	"RH_15Rnd_9x19_M9",
	"RH_16Rnd_9x19_CZ",
	"RH_20Rnd_57x28_FN",
	"RH_15Rnd_45cal_fnp",
	"11Rnd_45ACP_Mag",
	"RH_17Rnd_9x19_g17",
	"RH_7Rnd_45cal_m1911",
	"vvv_np_magazine_taser",
	"RH_6Rnd_44_Mag",
	"RH_6Rnd_357_Mag",
	"RH_33Rnd_9x19_g18",
	"RH_19Rnd_9x19_g18",
	"RH_19Rnd_9x19_g18",
	"30Rnd_556x45_Stanag",
	"RH_18Rnd_9x19_gsh",
	"CUP_8Rnd_B_Beneli_74Slug",
	"CUP_8Rnd_B_Beneli_74Pellets",
	"RH_14Rnd_9x19_sw",
	"CUP_30Rnd_9x19_MP5",
	"RH_16Rnd_40cal_usp",
	"nonlethal_swing",
	"RH_12Rnd_45cal_usp",
	"CUP_8Rnd_B_Beneli_74Slug",
	"CUP_8Rnd_B_Beneli_74Pellets",
	"RH_7Rnd_50_AE",
	"16Rnd_9x21_Mag",
	"sab_wwiplanes_6rnd_mauser_mag",
	"RH_18Rnd_9x19_VP",
	"CUP_6Rnd_45ACP_M"
];

 
_availableWeapon = [
	"RH_ttracker_g",
	"RH_uspm",
	"Binocular",
	"cg_baton",
	"cg_torch",
	"RH_m9",
	"RH_cz75",
	"Taser",
	"RH_sw659",
	"RH_g17",
	"RH_g19"
];
    if (player getvariable ["cop", 0] > 3) then {
		_availableWeaponThree = [
        "RH_vp70",
	"CUP_hgun_TaurusTracker455"
     ];
     _availableWeapon = _availableWeapon + _availableWeaponThree;
    };

    if (player getvariable ["cop", 0] > 4) then {
		_availableWeaponFour = [
        "RH_usp",
        "CUP_sgun_M1014",
        "RH_bull",
        "RH_bullb",
        "RH_gsh18",
        "RH_python",
        "RH_fn57",
        "RH_fn57_t",
        "RH_fn57_g",
        "RH_fnp45",
        "RH_fnp45t",
        "hgun_Pistol_heavy_01_F",
        "RH_g17",
        "RH_g19",
        "RH_g19t",
        "RH_kimber",
        "RH_kimber_nw",
        "RH_m1911",
        "RH_mateba",
        "RH_mp412"
     ];
     _availableWeapon = _availableWeapon + _availableWeaponFour;
    };

    if (player getvariable ["cop", 0] > 5) then {
    _availableWeaponFive = [
        "RH_g18"
    ];
    _availableWeapon = _availableWeapon + _availableWeaponFive;
    };

    if (player getvariable ["cop", 0] > 6) then {
    _availableWeaponSix =[
        "CUP_arifle_M4A1_black",
        "CUP_arifle_M16A4_Base",
        "CUP_smg_MP5A5",
        "CUP_hgun_BallisticShield_Armed",
        "Rangefinder"
    ];
     _availableWeapon = _availableWeapon + _availableWeaponSix;
    };

    if (player getvariable ["cop", 0] > 8) then {
    _availableWeaponEight = [
         "RH_Deagle"
    ];
    _availableWeapon = _availableWeapon + _availableWeaponEight;
    };

    if (player getvariable ["cop", 0] == 10) then {
    _availableWeaponTen = [
        "RH_Deaglem",
	    "hgun_mas_ww2_lug_F",
	    "sab_mauser96_handgun"
    ];
     _availableWeapon = _availableWeapon + _availableWeaponTen;
    };


_availableAttachments = [
	"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
	"RH_X300",
	"acc_flashlight",
	"cg_atf_bandage_i",
	"CG_wheel",
	"acc_flashlight",
	"cg_torchbattery",
	"RH_fhusp",
	"CUP_optic_HoloBlack",
	"CUP_optic_CompM2_Black",
	"CUP_optic_CompM4",
	"RH_6Rnd_454_Mag",
	"RH_demz",
	"optic_Yorris",
	"RH_docter",
	"RH_vp70stock"
];

_availableItems = [
	"tf_anprc152",
	"ItemMap",
	"ItemCompass",
	"Itemwatch",
	"cg_tabletd",
	"ItemGPS",
	"TRYK_Headset_NV",
	"NP_8mPoliceLine",
	"NP_4mPoliceLine",
	"NP_1mPoliceLine",
	"NP_PoliceBarrierL",
	"NP_PoliceBarrierS",
	"CG_Spikes_Collapsed",
	"CG_wheel",
	"cg_atf_bandage_i",
	"kif_gopro",
	"kif_panicbutton"
];
    if (player getvariable ["cop", 0] == 10) then {
    _availableItemsTen = [
        "kif_500k",
	"kif_100k",
	"kif_50k"
    ];
     _availableItems = _availableItems + _availableItemsTen;
    };


[_crate,((backpackCargo _crate) + _availableBackpacks)] call BIS_fnc_addVirtualBackpackCargo;
[_crate,((itemCargo _crate) + _availableHeadgear + _availableGoggles + _availableUniforms + _availableVests + _availableAttachments + _availableItems)] call BIS_fnc_addVirtualItemCargo;
[_crate,((magazineCargo _crate) + _availableMagazine)] call BIS_fnc_addVirtualMagazineCargo;
[_crate,((weaponCargo _crate) + _availableWeapon)] call BIS_fnc_addVirtualWeaponCargo;
