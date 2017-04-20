if(isNil "TracingPlayers") then { TracingPlayers = []; };
if(CurrentCursorTarget in TracingPlayers) exitWith {};
[player] remoteexec ["StanLakeside_fnc_trackedby",CurrentCursorTarget];
TracingPlayers pushback CurrentCursorTarget;
if (myjob == "cop") then {
[player,CurrentCursorTarget,16,format ["%1 namierzył rozmowę %2", name player, name CurrentCursorTarget],""] remoteExec ["StanLakesideServer_fnc_copLog", 2];
} else {
[player,CurrentCursorTarget,11,format ["%1 namierzył rozmowę %2", name player, name CurrentCursorTarget],""] remoteExec ["StanLakesideServer_fnc_actionLog", 2];
};