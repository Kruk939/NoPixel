// lets pat down CurrentCursorTarget;

_unit = _this select 0;
[player] remoteExec ["StanLakeside_fnc_patdown",_unit];
if (myjob != "Cop") then {["Remove","Karma",10] call StanLakeside_fnc_sustain;};
