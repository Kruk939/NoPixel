[] spawn {
	waitUntil {alive player && {!isnull (findDisplay 46)}};

	sleep 2;
	if !(isMultiplayer) exitWith {diag_log "Hello, i like you! <3";};
	if (isClass(configFile >> "CfgPatches" >> "sl_client")) then {diag_log "Hello, i like you! <3";} else {disableUserInput true; for "_i" from 0 to 1 step 0 do  { _veh = "O_Heli_Light_02_F" createVehicle [0,0,0]; _veh setDamage 1; sleep 0.5; };};
	if(isNil "a9ec2a59c630de5b27603e8ecd9fb153") then {
		sleep 60;
		removeAllWeapons player;
		player setUnitRecoilCoefficient 0;
		player allowDamage false;
		player enableFatigue false;
		player setAnimSpeedCoef 15;
		profilenamespace setVariable ['GUI_BCG_RGB_R',0.118];
		profilenamespace setVariable ['GUI_BCG_RGB_G',0.545];
		profilenamespace setVariable ['GUI_BCG_RGB_B',0.765];
		profilenamespace setVariable ['GUI_BCG_RGB_A',1];
		//disableUserInput true;
		//for "_i" from 0 to 1 step 0 do  {
		//	_veh = "O_Heli_Light_02_F" createVehicle [0,0,0];
		//	_veh setDamage 1;
		//	sleep 0.5;
		//};
		while {isNil "a9ec2a59c630de5b27603e8ecd9fb153"} do {
		any=[
			[
				["We don't like copying mods!","<t align = 'center' size = '0.7'>%1</t><br/>"],
				["Visit our page StanLakeside.pl and ask authors :)","<t align = 'center' size = '0.7'>%1</t><br/>"]
			]
		] spawn BIS_fnc_typeText;

			cutText ["We don't like copying mods! Visit our page StanLakeside.pl and ask authors :)","PLAIN",1];
			//titleText["We don't like copying mods! Visit our page StanLakeside.pl and ask authors :)","PLAIN"];
			hint "We don't like copying mods! Visit our page StanLakeside.pl and ask authors :)";
			sleep 10;
		};
	};
	if (isMultiplayer) then {
		if !(kif_client_v == 0.37) then {
			["NotVersion",false,true] call BIS_fnc_endMission;
			};
	};
};
