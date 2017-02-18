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
params["_player","_unit","_type","_text","_amount"];
private["_playerUID","_playerName","_playerCash","_playerBank","_unitUID","_unitName","_unitBank","_unitCash"];

if(isNil "_player" || isNil "_type") exitWith {diag_log "ActionLog: nil (1)";};
if("_type" == "") exitWith {diag_log "ActionLog: _type is empty (2)";};
if(isNull _player) exitWith {diag_log "ActionLog: _player is Null (3)";};
//if(isNull _unit) exitWith {diag_log "ActionLog: _unit is Null (4)";};

if (isNil "_text") then {_text = "";};
if (isNil "_amount") then {_amount = "";};

_playerUID = getPlayerUID _player;
_playerName = name _player;
_playerCash = _player getVariable ["wallet",-1];
_playerBank = _player getVariable ["atm",-1];

if (isNull _unit) then {
    diag_log "MoneyLog: unit is not defined";
    _unitUID = ""; _unitName = ""; _unitCash = "0"; _unitBank = "0";
} else {
    _unitUID = getPlayerUID _unit;
    _unitName = name _unit;
    _unitCash = _unit getVariable ["wallet",-1];
    _unitBank = _unit getVariable ["atm",-1];
};

switch (_type) do {
    case 1: {_type = "Skucie";};
    case 2: {_type = "Rozkucie";};
    case 3: {_type = "Mandat";};
    case 4: {_type = "Areszt";};
    case 5: {_type = "ZabranieLicencji";};
    case 6: {_type = "Awans";};
    case 7: {_type = "Kolczatka";};
    case 8: {_type = "Dowody";};
    case 9: {_type = "Wyposażenie";};
    case 10: {_type = "SłużbaStart";};
    case 11: {_type = "SłużbaStop";};
    case 12: {_type = "PrzeszukanieDom";};
    case 13: {_type = "PrzeszukanieSklep";};
    case 14: {_type = "Podsłuch";};
    case 15: {_type = "Pluskwa";};
    //case 16: {_type = "";};
};


_insertstr = format ["copLog:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11", _playerUID, _playerName, _playerCash, _playerBank, _type, _text, _unitUID, _unitName, _unitCash, _unitBank, _amount];
_insert = [0, _insertstr] call ExternalS_fnc_ExtDBquery;