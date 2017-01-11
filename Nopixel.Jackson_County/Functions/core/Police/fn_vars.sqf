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
"Campaign_Hat_Light"
];
 
_availableGoggles = [
"TRYK_balaclava_BLACK_NV"
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
"EF_HMP_1"
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
"TAC_V_tacv1_P"
];
 
_availableBackpacks = [
"TRYK_Winter_pack",
"TAC_BP_Butt_B2",
"TAC_BP_Butt_B"
 
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
"CUP_srifle_M24_wdl",
"CUP_arifle_M4A1_black",
"CUP_sgun_M1014",
"CUP_arifle_M16A4_Base",
"CUP_smg_MP5A5",
"CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
"CUP_optic_HoloBlack",
"CUP_optic_CompM2_Black",
"CUP_optic_CompM4"
];

_availableAttachments = [

];
 
_availableItems = [

];


[_crate,((backpackCargo _crate) + _availableBackpacks)] call BIS_fnc_addVirtualBackpackCargo;
[_crate,((itemCargo _crate) + _availableHeadgear + _availableGoggles + _availableUniforms + _availableVests)] call BIS_fnc_addVirtualItemCargo;
[_crate,((magazineCargo _crate) + _availableMagazine)] call BIS_fnc_addVirtualMagazineCargo;
[_crate,((weaponCargo _crate) + _availableWeapon)] call BIS_fnc_addVirtualWeaponCargo;
