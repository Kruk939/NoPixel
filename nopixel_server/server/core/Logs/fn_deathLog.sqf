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
params["_player","_unit","_type","_text","_weapon","_distance"];
private["_playerUID","_playerName","_playerCash","_playerBank","_unitUID","_unitName","_unitBank","_unitCash"];

if(isNil "_player" || isNil "_type") exitWith {diag_log "DeathLog: nil (1)";};
if("_type" == "") exitWith {diag_log "DeathLog: _type is empty (2)";};
if(isNull _player) exitWith {diag_log "DeathLog: _player is Null (3)";};
//if(isNull _unit) exitWith {diag_log "DeathLog: _unit is Null (4)";};

if (isNil "_text") then {_text = "";};
if (isNil "_weapon") then {_weapon = "";};
if (isNil "_distance") then {_distance = "0";};

_playerUID = getPlayerUID _player;
_playerName = name _player;
_playerCash = _player getVariable ["wallet",-1];
_playerBank = _player getVariable ["atm",-1];

if (isNull _unit) then {
    //diag_log "DeathLog: unit is not defined";
    _unitUID = ""; _unitName = ""; _unitCash = "0"; _unitBank = "0";
} else {
    _unitUID = getPlayerUID _unit;
    _unitName = name _unit;
    _unitCash = _unit getVariable ["wallet",-1];
    _unitBank = _unit getVariable ["atm",-1];
};

switch (_type) do {
    case 1: {_type = "Zabojstwo";};
    case 2: {_type = "Smierc";};
    case 3: {_type = "Battlelog";};
    case 4: {_type = "Respawn";};
    //case 5: {_type = "";};
};


_insertstr = format ["deathLog:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12", _playerUID, _playerName, _playerCash, _playerBank, _type, _text, _unitUID, _unitName, _unitCash, _unitBank, _weapon, _distance];
_insert = [0, _insertstr] call ExternalS_fnc_ExtDBquery;