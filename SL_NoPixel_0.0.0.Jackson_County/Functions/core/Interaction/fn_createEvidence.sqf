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
_msg = "";
_uidArray = [];
_uid = getPlayerUid _suspect;
_uidArray = _uid splitString "";

_chance = random(100);
switch(_crime) do {
	case "bankRobbery": {
		_msg = "";
	};
	case "bankDrill": {
		_msg = "Na wiertle widać odciski palców, które mogły należeć do: ";
		_chance = _chance + 50;
	};
	case "vaultBreach": {
		_msg = "Na sejfie widać odciski palców, które mogły należeć do: ";
	};
	case "blowDoor": {
		_msg = "Na bramie pozostały strzępki ubrań, które mogły należeć do: ";
	};
	case "hackDoor": {
		_msg = "Na drzwiach można dostrzec niewielkie odciski palców, które mogły należeć do: ";
		_chance = _chance + 10;
	};
	case "storeRobbery": {
		_msg = "Sprzedawca w sklepie mówi, że napastnik mógł wyglądać jak: ";
	};
	case "personRobbery": {
		_msg = "Poszkodowany twierdzi, że napastnik mógł wyglądać jak: ";
	};
	case "carRobbery": {
		_msg = "Na samochodzie widać dowody, które mogą wskazywać na: ";
	};
	case "killAtempt": {
		_msg = "Na ciele widać dowody, które mogą wskazywać na: ";
		_chance = _chance + 20;
	};
	case "kill": {
		_msg = "Na ciele widać dowody, które mogą wskazywać na: ";
		_chance = _chance + 20;
	};
	case "vehicleKill": {
		_msg = "Na ciele widać dowody, które mogą wskazywać na: ";
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
_message = _msg + _randomUID;



_evidence pushBack [_suspect, getPlayerUID _suspect, _crime, _message];
_victim setVariable ["evidence",_evidence,true];
