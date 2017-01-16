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
"CUP_H_USArmy_Helmet_ECH1_Black"
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
"TRYK_TAC_EARMUFF_SHADE_Gs"
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
"nopixel_character_swat",
"EF_FEM_3_3",
"EF_FEM_3_3G",
"EF_FEM_4_2",
"EF_FEM_4_2G",
"U_B_Wetsuit",
"female_police",
"female_highway",
"female_police1",
"female_police2",
"female_police3"
];
 
_availableVests = [
"EF_BS",
"EF_PBDF_M1",
"EF_PBDF_F1",
"EF_BLT_M1",
"EF_BLT_F1",
"EF_BLT_M1B",
"EF_BLT_F1B",
"TAC_V_tacv1_SRF",
"TAC_V_tacv1_P",
"V_RebreatherB",
"TAC_PBDFG2SACP_B_1"
];
 
_availableBackpacks = [
"AM_PoliceBelt"
 
];
 
_availableMagazine = [
"vvv_np_magazine_taser",
"RH_16Rnd_40cal_usp"
];
 
_availableWeapon = [
"RH_ttracker_g",
"RH_uspm",
"Binocular"
];

_availableAttachments = [

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
