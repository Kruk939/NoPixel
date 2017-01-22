private["_container","_unit","_time"];
_unit = _this select 0;
_container = _this select 1;
_time = time;
if(lastInvsync - _time < 120) exitWith {};


[player, getPlayerUID player] remoteExec ["Server_fnc_invSave",2];
lastInvsync = _time;