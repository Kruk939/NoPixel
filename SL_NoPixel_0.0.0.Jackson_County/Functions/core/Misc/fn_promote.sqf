_data = lbData[911,lbCurSel (911)];
_rank = call compile format["%1", _data];
[myjob,CurrentCursorTarget,_rank] remoteExec ["server_fnc_promote",2];

[player, "promote", format["%1 - Awansowal %2(%3) na poziom %4",myjob, name CurrentCursorTarget, getPlayerUID CurrentCursorTarget, _rank]] remoteExec ["Server_fnc_insertLog", 2];
if (myjob == "cop") then {
[player,currentcursortarget,6,format ["%1 awansował %2 na poziom %3", name player, name currentcursortarget, _rank],_rank] remoteExec ["server_fnc_copLog", 2];
};