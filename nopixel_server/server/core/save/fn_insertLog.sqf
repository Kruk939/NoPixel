/*
	Author: Kajetan "Kruk" Mruk
	For: stanlakeside.pl
	Date: 16.01.2017 (Non-retard Units)
	
	Params:
		0 - Object - player object
		1 - String - type of log event (save, login, logoff, cop, ems etc)
		2 - String - text, description of log event
		3 - String(optional) - UID of player, used on player disconnect
	Description: Function that send SQL query to the server inserting logs for inspecting players.
	Return: nothing
*/
params["_unit","_type", "_text", ["_uid", ""]];

if(isNil "_unit" || isNil "_type" || isNil "text") exitWith {}; //Exits on no params given
if("_type" == "") exitWith{}; //Exits on no type given


if(_uid == "") then {
	_uid = getPlayerUID _unit;
};
_cash = _unit getVariable ["wallet",-1];
_bank = _unit getVariable ["atm",-1];
_updatestr = format ["logEvent:%1:%2:%3:%4:%5", _uid, _type, _text, _cash, _bank];
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;