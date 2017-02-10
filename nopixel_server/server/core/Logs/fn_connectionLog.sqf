/*
    Author: KifKick
    Date: 04.02.2017

    Params:
        0 - Object - player who do task
        1 - Object - unit on do task
        2 - Number - type of log
        3 - String - custom text
        4 - String - text for amount
    Description: Function that send SQL query to the server inserting logs for inspecting players.
    Return: nothing
 */
params["_player","_type","_text","_loadout","_housecontent","_shopcontent"];
private["_playerUID","_playerName","_playerCash","_playerBank"];

if(isNil "_player" || isNil "_type") exitWith {diag_log "ConnectionLog: nil (1)";};
if("_type" == "") exitWith {diag_log "ConnectionLog: _type is empty (2)";};
if(isNull _player) exitWith {diag_log "ConnectionLog: _player is Null (3)";};
if (isNil "_text") then {_text = "";};
if (isNil "_loadout") then {_loadout = "";};
if (isNil "_housecontent") then {_housecontent = "";};
if (isNil "_shopcontent") then {_shopcontent = "";};

_playerUID = getPlayerUID _player;
_playerName = name _player;
_playerCash = _player getVariable ["wallet",-1];
_playerBank = _player getVariable ["atm",-1];

switch (_type) do {
    case 1: {_type = "Connected";};
    case 2: {_type = "Disconnected";};
    //case 2: {_type = "";};
};


_insertstr = format ["connectionLog:%1:%2:%3:%4:%5:%6:%7:%8:%9", _playerUID, _playerName, _playerCash, _playerBank, _type, _text,_loadout,_housecontent,_shopcontent];
_insert = [0, _insertstr] call ExternalS_fnc_ExtDBquery;