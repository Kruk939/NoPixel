// restrain CurrentCursorTarget;

_unit = _this select 0;
[] remoteExec ["StanLakeside_fnc_unblindfolded",_unit];
[player,_unit,4,format ["%1 zdjął worek na głowę dla %2", name player, name _unit],""] remoteExec ["StanLakesideServer_fnc_actionLog", 2];
