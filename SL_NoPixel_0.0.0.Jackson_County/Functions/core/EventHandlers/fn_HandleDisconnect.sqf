/*
	Author: Kajetan "Kruk" Mruk
	For: stanlakeside.pl
	Date: 15.01.2017 (Non-retard Units)
	
	Params: _array - return from HandleDisconnect params(https://community.bistudio.com/wiki/Arma_3:_Event_Handlers/addMissionEventHandler#HandleDisconnect)
	Description: A function that is triggered when a player disconnects, saving his/hers data with server.
	Return: nothing
*/
params ["_array"];

if(isNil "_array") exitWith {diag_log "Player state on disconnect not synced (1)";}; //Exits when no params given
if(typeName _array != "ARRAY") exitWith {diag_log "Player state on disconnect not synced (2)";}; //Exits when _array is not an array
if(count _array != 4) exitWith {diag_log "Player state on disconnect not synced (3)";}; //Exits when _array doesn't have enough elements

_player = _array select 0; //object
_id = _array select 1; //number
_uid = _array select 2; //string
_name = _array select 3; //string

if(isNull _player) exitWith {diag_log "Player state on disconnect not synced (4)";}; //Exits when there is no player object

_new = _player getVariable "wallet";
[_player, "wallet", _new] remoteExec ["Server_fnc_setVariable",2];

_loadout = getunitloadout _player;
[_player, 1, _uid, _name,_loadout] remoteExec ["server_fnc_steppedsync",2];

[_player, "disconnect", "Gracz opuscil serwer", _uid] remoteExec ["Server_fnc_insertLog", 2];
//[_player,"0"] remoteExec ["Server_fnc_connected", 2];