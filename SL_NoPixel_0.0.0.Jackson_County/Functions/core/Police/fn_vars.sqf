//null = [this] execVM "virtual_arsenal_init.sqf"


_crate = _this select 0;
["AmmoboxInit",[_crate,false,{true}]] spawn BIS_fnc_arsenal;
 
 
_availableHeadgear = [
	"ALE_H_Calot",
	"AM_PatrolHat",
	"TAC_SF10H",
	"BHD_Protec_helmet",
	"BHD_Protec_helmet2",
	"BHD_Protec_helmet3",
	"Campaign_Hat_Light",
	"TRYK_H_PASGT_BLK",
	"TRYK_H_woolhat"
];
 
_availableGoggles = [
	"TRYK_balaclava_BLACK_NV",
	"Balaclava_Blk_Plain",
	"G_Balaclava_blk",
	"G_Aviator",
	"TAC_PMC_ID_H2",
	"TAC_PMC_ID_B2",
	"TAC_PMC_ID_W2",
	"TRYK_kio_balaclava_BLK",
	"TRYK_kio_balaclava_ESS"
];
 
_availableUniforms = [
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
 
_availableVests = [
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
	"TAC_V_Sheriff_BA_TB4",
	"TRYK_V_ArmorVest_Delta",
	"TRYK_V_ArmorVest_Delta2"
];
 
_availableBackpacks = [
	"TRYK_Winter_pack",
	"TAC_BP_Butt_B2",
	"TAC_BP_Butt_B",
	"TAC_BP_KAR_L",
	"TRYK_B_BAF_BAG_BLK"
];
 
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
	"CUP_5Rnd_762x51_M24",
	"30Rnd_556x45_Stanag",
	"CUP_8Rnd_B_Beneli_74Slug",
	"CUP_8Rnd_B_Beneli_74Pellets",
	"CUP_30Rnd_9x19_MP5"
];
 
_availableWeapon = [
	"RH_m9",
	"RH_python",
	"RH_cz75",
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
	"Taser",
	"RH_mateba",
	"RH_mp412",
	//"CUP_srifle_M24_wdl",
	"CUP_arifle_M4A1_black",
	"CUP_sgun_M1014",
	"CUP_arifle_M16A4_Base",
	"CUP_smg_MP5A5"
];

_availableAttachments = [
	"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
	"CUP_optic_HoloBlack",
	"CUP_optic_CompM2_Black",
	"CUP_optic_CompM4",
	"RH_X300",
	"acc_flashlight"
];
 
_availableItems = [
	"tf_anprc148jem"
];


[_crate,((backpackCargo _crate) + _availableBackpacks)] call BIS_fnc_addVirtualBackpackCargo;
[_crate,((itemCargo _crate) + _availableHeadgear + _availableGoggles + _availableUniforms + _availableVests + _availableAttachments + _availableItems)] call BIS_fnc_addVirtualItemCargo;
[_crate,((magazineCargo _crate) + _availableMagazine)] call BIS_fnc_addVirtualMagazineCargo;
[_crate,((weaponCargo _crate) + _availableWeapon)] call BIS_fnc_addVirtualWeaponCargo;
