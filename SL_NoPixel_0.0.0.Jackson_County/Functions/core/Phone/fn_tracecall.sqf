if(isNil "TracingPlayers") then { TracingPlayers = []; };
if(CurrentCursorTarget in TracingPlayers) exitWith {};
[player] remoteexec ["client_fnc_trackedby",CurrentCursorTarget];
TracingPlayers pushback CurrentCursorTarget;