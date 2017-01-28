["rpframework", "SQL_CUSTOM_V2", "rpframework"] spawn ExternalS_fnc_ExtDBinit;


	//usunięcie bram w willach
	_obj = [9585.29, 3385.69, 0.00143814] nearestObject 166437; 
	_obj enableSimulationGlobal false;
	_obj hideObjectGlobal true;

	_obj = [9694.59, 3437.44, 0.00143814] nearestObject 166434; 
	_obj enableSimulationGlobal false;
	_obj hideObjectGlobal true;

	_obj = [10017.60, 3585.74, 0.00143814] nearestObject 165573; 
	_obj enableSimulationGlobal false;
	_obj hideObjectGlobal true;

[] call server_fnc_setupVariablesServer;
[] call server_fnc_handleDisconnect;

[] spawn server_fnc_mayorsetup;
[] spawn server_fnc_racetimes;
[] spawn server_fnc_rallyracetimes;

[server_fnc_addJob, 120] execFSM "\nopixel_server\call.fsm";
[Server_fnc_cleanup, 1800] execFSM "\nopixel_server\call.fsm";
GarageVariableWhore = "Flag_US_F" createVehicle [0,1,0];

_vehicle = "ivory_wrx" createvehicle [0,0,0];
[_vehicle, ["black","matte"], "black", 1, 1] call client_fnc_IvoryInitVehicle;
[_vehicle, "FuckYou", "ivory"] call client_fnc_numberPlate;

uisleep 0.05;
deletevehicle _vehicle;

setTimeMultiplier 24;
setDate [2015, 3, 3, 06, 0];
0 setovercast 0;
0 setrain 0;
0 setRainbow 0;
0 setlightnings 0;
0 setfog 0;
0 setWaves 0;
0 setWindForce 0;
0 setWindStr 0;
0 setGusts 0;
0 setwinddir 0;
skiptime 1;

[] spawn {
	_tier1 = ["Land_ivory_trailer_04","Land_ivory_trailer_01","Land_ivory_trailer_02","Land_ivory_trailer_03","Land_ivory_trailer_06","Land_ivory_trailer_05"];
	_tier2 = ["Land_Ranch_DED_Ranch_02_F","Land_Ranch_DED_Ranch_01_F","Land_HouseC_R","Land_HouseC1_L","Land_HouseA1_L","Land_HouseB1_L"];
	_tier3 = ["Land_HouseDoubleAL","Land_HouseDoubleAL2"];
	_shops = ["Land_buildingCommercial1","Land_buildingCommercial2"];
	banks = [];
	{
		banks pushback _x;
	} foreach nearestObjects[[0, 0, 0], ["Land_CommonwealthBank"], 35500];
	tier1housing = [];
	{ tier1housing pushback _x; } foreach nearestObjects [[0,0,0], _tier1, 35500];

	tier2housing = [];
	{ tier2housing pushback _x; } foreach nearestObjects [[0,0,0], _tier2, 35500];

	tier3housing = [];
	{ tier3housing pushback _x; } foreach nearestObjects [[0,0,0], _tier3, 35500];

	shops = [];
	{ shops pushback _x; } foreach nearestObjects [[0,0,0], _shops, 35500];

	uisleep 28650;
	[] remoteExec ["client_fnc_survival",-2];
	uisleep 30;
	["seagull"] remoteExec ["client_fnc_createvehicle",-2];
};

setDate [2016, 2, 25, 13, 45];

[] call server_fnc_mafiabank; //Ustawia zmienną z kwotą w bankomacie mafii
[] call server_fnc_resetConnected; //Przy włączeniu serwera zmienia w bazie danych connected=1 na connected=0

//initEconomy = 0;
//publicVariable "initEconomy";
[] call server_fnc_economyEvents; //Uruchamia własne eventy dotyczące zachowań rynku
