/*
    Author: Kajetan "Kruk" Mruk
    Date: 28.01.2017

    Params:
        1 - Object - Suspect object
        2 - Object - Victim object
        3 - String - Crime shortname
    Description: Function that generates an evidence on object.
    Return: nothing
 */
private["_curTarget","_suspect","_victim","_crime"];
params ["_suspect","_victim", "_crime"];

_evidence = _victim getVariable ["evidence",[]];
_uidArray = [];
_uid = getPlayerUid _suspect;
_uidArray = _uid splitString "";

_chance = random(100);
switch(_crime) do {
	case "bankRobbery": {};
	case "bankDrill": {
		_chance = _chance + 50;
	};
	case "vaultBreach": {};
	case "blowDoor": {};
	case "hackDoor": {
		_chance = _chance + 10;
	};
	case "storeRobbery": {};
	case "personRobbery": {};
	case "carRobbery": {};
	case "killAtempt": {
		_chance = _chance + 20;
	};
	case "kill": {
		_chance = _chance + 20;
	};
	case "vehicleKill": {
		_chance = _chance + 10;
	};
};
if(_chance > 100) then { _chance = 100; };
_randomUID = "";
{
	_random = random(100);
	if(_chance - _random < 0) then {
		_randomUID = _randomUID + "X";
	} else {
		_randomUID = _randomUID + _x;
	};
} forEach _uidArray;



_evidence pushBack [_suspect, getPlayerUID _suspect, _crime, _randomUID];
_victim setVariable ["evidence",_evidence,true];
