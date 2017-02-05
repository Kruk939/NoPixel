// unrestrain CurrentCursorTarget;

_unit = _this select 0;
[] remoteExec ["client_fnc_unrestrained",_unit];
[player,_unit,6,format ["%1 rozkuł %2", name player, name _unit],""] remoteExec ["server_fnc_actionLog", 2];
