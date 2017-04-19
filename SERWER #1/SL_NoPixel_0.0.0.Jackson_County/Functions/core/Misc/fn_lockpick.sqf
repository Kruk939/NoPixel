if(currentcursortarget iskindof "man") then {
	[] remoteExec ["StanLakesideClient_fnc_unrestrained",currentcursortarget];
};

if(currentcursortarget iskindof "car"  || currentcursortarget iskindof "boat" || currentcursortarget iskindof "Air") then {
	current_cars pushback currentcursortarget;
	[player,objNull,18,format ["%1 zwytrychował %2", name player, typeOf currentcursortarget],typeOf currentcursortarget] remoteExec ["StanLakesideServer_fnc_actionLog", 2];
};

	["Remove","Karma",15] call StanLakesideClient_fnc_sustain;