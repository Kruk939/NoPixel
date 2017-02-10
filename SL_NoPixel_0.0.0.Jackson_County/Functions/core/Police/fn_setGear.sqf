params[["_type","basic"]];

[player, myjob, format["Wyciagnał wyposazenie - %1", _type]] remoteExec ["Server_fnc_insertLog", 2];
if(myjob == "Cop") exitwith {

	if(_type == "basic") then {
		removeAllWeapons player;
		removeAllItems player;
		removeAllAssignedItems player;
		removeUniform player;
		removeVest player;
		removeBackpack player;
		removeHeadgear player;
		removeGoggles player;


		player addWeapon "Binocular";
		player linkItem "ItemMap";
		player linkItem "ItemCompass";
		player linkItem "Itemwatch";
		player linkItem "ItemGPS";
		player linkitem "cg_tabletd";

		_level = player getVariable "cop";



		player addweapon "cg_baton";

		player addBackpack "AM_PoliceBelt";

		player additemtobackpack "RH_uspm";

		player addweapon "taser";


		for "_i" from 1 to 8 do {player addItemToBackpack "RH_16Rnd_40cal_usp"; };
		for "_i" from 1 to 10 do {player addItemToBackPack "vvv_np_magazine_taser"; };
		for "_i" from 1 to 2 do {player addItemToBackPack "nonlethal_swing"; };

		{ player additemtobackpack _x; } foreach ["NP_8mPoliceLine","NP_4mPoliceLine","NP_1mPoliceLine","NP_PoliceBarrierL","NP_PoliceBarrierS","CG_Spikes_Collapsed","CG_wheel","cg_atf_bandage_i","cg_atf_bandage_i","cg_atf_bandage_i","cg_atf_bandage_i","cg_atf_bandage_i","cg_atf_bandage_i","cg_atf_bandage_i"];

		if(female) then { player forceAddUniform "female_police"; player addHeadgear "EF_Fcap_P"; } else { 

			if(player getvariable "coplevel" > 7) then { player forceAddUniform "silver_lake_fbi"; };

			if(player getvariable "coplevel" < 8 && player getvariable "coplevel" > 3) then { player forceAddUniform "silver_lake_fbi"; };

			if(player getvariable "coplevel" < 4) then { player forceAddUniform "silver_lake_police"; };
			
			player addHeadgear "Campaign_Hat_Dark"; 

		};

		[player,objNull,9,format ["%1 wyciągnął wyposażenie: BASIC", name player],"BASIC"] remoteExec ["server_fnc_copLog", 2];
	
	} else {

		removeAllWeapons player;
		removeAllItems player;
		removeAllAssignedItems player;
		removeUniform player;
		removeVest player;
		removeBackpack player;
		removeHeadgear player;
		removeGoggles player;

		player forceAddUniform "TRYK_U_B_BLKBLK_CombatUniform";
		player addVest "EF_BLT_M1";
		for "_i" from 1 to 5 do {player addItemToVest "30Rnd_556x45_Stanag";};
		for "_i" from 1 to 5 do {player addItemToVest "RH_33Rnd_9x19_g18";};
		player addBackpack "TRYK_Winter_pack";
		player addHeadgear "TRYK_H_PASGT_BLK";

		{ player additemtobackpack _x; } foreach ["CG_Spikes_Collapsed","CG_Spikes_Collapsed","CG_wheel","cg_atf_bandage_i","cg_atf_bandage_i","cg_atf_bandage_i","cg_atf_bandage_i","cg_atf_bandage_i","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag"];
		player addWeapon "CUP_arifle_M4A1_black";
		player addPrimaryWeaponItem "CUP_muzzle_snds_M16";
		player addPrimaryWeaponItem "CUP_optic_Elcan_reflex";
		player addWeapon "RH_g18";
		player addHandgunItem "RH_gemtech9";
		player addWeapon "Rangefinder";

		player linkItem "ItemMap";
		player linkItem "ItemCompass";
		player linkItem "Itemwatch";
		player linkItem "tf_anprc148jem_2";
		player linkItem "ItemGPS";
		player linkItem "TRYK_G_bala_ess_NV";

		[player,objNull,9,format ["%1 wyciągnął wyposażenie: SWAT", name player],"SWAT"] remoteExec ["server_fnc_copLog", 2];
		[player, myjob, format["Wyciagnał wyposazenie: %1", _type]] remoteExec ["Server_fnc_insertLog", 2];

	};

	
};


//if(typeof currentcursortarget == "Land_buildingshospital1") exitwith {
if(myjob == "EMS") exitwith {

	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;


	player addWeapon "Binocular";
	player linkItem "ItemMap";
	player linkItem "ItemCompass";
	player linkItem "Itemwatch";
	player linkitem "cg_tabletd";
	player linkItem "ItemGPS";


	_level = player getVariable "ems";

	if(female) then { player forceAddUniform "female_ems"; } else { player forceAddUniform "CUP_U_C_Rescuer_01"; };
	
	player addBackpack "CUP_B_SLA_Medicbag";
	{ player additemtobackpack _x; } foreach ["NP_8mPoliceLine","NP_4mPoliceLine","NP_1mPoliceLine","NP_PoliceBarrierL","NP_PoliceBarrierS","CG_wheel","cg_atf_bandage_i","cg_atf_bandage_i"];

};

//if(typeof currentcursortarget == "Land_buildingsfiredept1") exitwith {
	if(myjob == "Fire") exitwith {
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;


player addWeapon "Binocular";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "Itemwatch";
player linkitem "cg_tabletd";
player linkItem "ItemGPS";


	_level = player getVariable "fire";
	player forceAddUniform "CUP_U_C_Fireman_01";
	player addBackpack "TAC_LBT_LEGAB_BK";
	player addgoggles "TAC_SF10";
	player addHeadgear "CUP_H_C_Fireman_Helmet_01";
	{ player additemtobackpack _x; } foreach ["NP_8mPoliceLine","NP_4mPoliceLine","NP_1mPoliceLine","NP_PoliceBarrierL","NP_PoliceBarrierS","CG_wheel","cg_atf_bandage_i","cg_atf_bandage_i"];

	for "_i" from 1 to 10 do {player addItemToBackPack "Manguera_magazine";};
	player addweapon "fireextinguisher";

};

if(myjob == "Mafia") exitwith {
	_level = player getVariable "Mafia";
	player forceadduniform "vvv_traje_mafioso_F_1";
	player addHeadgear "H_Hat_brown";
};