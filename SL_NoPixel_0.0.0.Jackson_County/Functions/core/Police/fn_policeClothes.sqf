//null = [this] execVM "virtual_arsenal_init.sqf"

//	[
//		[" (myjob == ""Cop"" && typeof cursorobject == ""Box_NATO_Uniforms_F"") && player getvariable ""cop"" > 1 "],
//		["MUNDURY", "[cursorobject] spawn client_fnc_vars"]
//	],



_crate = _this select 0;
["AmmoboxInit",[_crate,false,{true}]] spawn BIS_fnc_arsenal;
 
 
_availableHeadgear = [
	"ALE_H_Calot",
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
	"TAC_PMC_ID_W2",
	
];
 
_availableUniforms = [
	"B_Uniform_hunter_l",
	"CUP_U_C_Rocker_02",
	"CUP_U_C_Villager_03",
	"CUP_U_C_Woodlander_04",
	"EF_FEM_3_3",
	"EF_FEM_3_3G",
	"EF_FEM_4_2",
	"EF_FEM_4_2G",
	"EF_HMP_1",
	"EF_HMSRF_1",
	"EF_suit_6",
	"G_Uniform_hunter_l",
	"TRYK_OVERALL_SAGE_BLKboots_nk_blk",
	"TRYK_U_B_BLK",
	"TRYK_U_B_BLKBLK_CombatUniform",
	"TRYK_U_B_BLKBLK_R_CombatUniform",
	"TRYK_U_B_BLK_TAN_2",
	"TRYK_U_B_BLK_Tshirt",
	"TRYK_U_B_BLOD_T",
	"TRYK_U_B_Denim_T_BG_BK",
	"TRYK_U_B_ODTAN_Tshirt",
	"TRYK_U_B_PCUGs_BLK_R",
	"TRYK_U_denim_jersey_blu",
	"TRYK_shirts_DENIM_BL",
	"U_BG_Guerilla2_1",
	"U_B_Wetsuit",
	"U_C_Poloshirt_redwhite",
	"U_C_Poloshirt_tricolour"
	"female_highway",
	"female_police",
	"female_police1",
	"female_police2",
	"female_police3",
	"nopixel_character_swat",
	"np_shirt_1",
	"np_shirt_4",
	"np_shirt_7",
	"silver_lake_fbi",
	"silver_lake_police",
	"silver_lake_sheriff",
	"silver_lake_statepolice",
];
 
_availableVests = [
	"EF_BS",
	"EF_BLT_M1",
	"EF_BLT_F1",
	"EF_BLT_M1B",
	"EF_BLT_F1B",
	"V_RebreatherB"
];
 
_availableBackpacks = [
	"AM_PoliceBelt",
	TAC_BP_Butt_B2,
	TAC_BP_Butt_B
 
];
 
_availableMagazine = [
	"vvv_np_magazine_taser",
	"RH_16Rnd_40cal_usp",
	"nonlethal_swing"
];
 
_availableWeapon = [
	"RH_ttracker_g",
	"RH_uspm",
	"Binocular",
	"cg_baton",
	"cg_torch"
];

_availableAttachments = [
	"cg_atf_bandage_i",
	"CG_wheel",
	"acc_flashlight",
	"cg_torchbattery",
	"RH_X300"
];
 
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
