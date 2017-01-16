_data = lbData[911,lbCurSel (911)];
_rank = call compile format["%1", _data];
[myjob,CurrentCursorTarget,_rank] remoteExec ["server_fnc_promote",2];

[player, "promote", format["%1 - Awansowal %2(%3) na poziom %4",myjob, name CurrentCursorTarget, getPlayerUID CurrentCursorTarget, _rank]] remoteExec ["Server_fnc_insertLog", 2];