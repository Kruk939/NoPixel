// lets pat down CurrentCursorTarget;

_unit = _this select 0;
[player] remoteExec ["StanLakesideClient_fnc_patdown",_unit];
if (myjob != "Cop") then {["Remove","Karma",10] call StanLakesideClient_fnc_sustain;};
