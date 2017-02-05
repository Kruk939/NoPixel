if(isNil "TracingPlayers") then { TracingPlayers = []; };
if(CurrentCursorTarget in TracingPlayers) exitWith {};
[player] remoteexec ["client_fnc_trackedby",CurrentCursorTarget];
TracingPlayers pushback CurrentCursorTarget;
[player,CurrentCursorTarget,11,format ["%1 namierzył rozmowę %2", name player, name CurrentCursorTarget],""] remoteExec ["server_fnc_actionLog", 2];