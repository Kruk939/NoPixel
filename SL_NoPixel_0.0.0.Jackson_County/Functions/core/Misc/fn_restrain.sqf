// restrain CurrentCursorTarget;

_unit = _this select 0;
[] remoteExec ["client_fnc_restrained",_unit];
[player,_unit,5,format ["%1 zakuł %2", name player, name _unit],""] remoteExec ["server_fnc_actionLog", 2];
