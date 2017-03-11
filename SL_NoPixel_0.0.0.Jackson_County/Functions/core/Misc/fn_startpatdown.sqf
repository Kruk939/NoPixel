// lets pat down CurrentCursorTarget;

_unit = _this select 0;
[player] remoteExec ["client_fnc_patdown",_unit];
	["Remove","Karma",10] call client_fnc_sustain;
