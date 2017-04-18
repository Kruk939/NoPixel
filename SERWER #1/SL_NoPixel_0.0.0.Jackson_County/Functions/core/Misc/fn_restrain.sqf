// restrain CurrentCursorTarget;

_unit = _this select 0;
[] remoteExec ["StanLakeside_fnc_restrained",_unit];
if (myJob == "cop") then {
[player,_unit,1,format ["%1 zakuł %2", name player, name _unit],""] remoteExec ["StanLakesideServer_fnc_copLog", 2];
} else {
[player,_unit,5,format ["%1 zakuł %2", name player, name _unit],""] remoteExec ["StanLakesideServer_fnc_actionLog", 2];
	["Remove","Karma",10] call StanLakeside_fnc_sustain;
};

