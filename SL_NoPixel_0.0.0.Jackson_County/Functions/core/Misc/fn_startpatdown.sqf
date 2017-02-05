// lets pat down CurrentCursorTarget;

_unit = _this select 0;
[player] remoteExec ["client_fnc_patdown",_unit];
[player,_unit,8,format ["%1 przeszukał %2", name player, name _unit],""] remoteExec ["server_fnc_actionLog", 2];
