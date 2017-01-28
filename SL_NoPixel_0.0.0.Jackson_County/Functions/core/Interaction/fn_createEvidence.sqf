/*
File: create evidence
*/
private["_curTarget","_suspect","_victim","_crime"];
params ["_suspect","_victim", "_crime"];

_evidence = _victim getVariable ["evidence",[]];
_msg = "";

switch("_crime") do {
	case "bankRobbery": {
		_msg = format["%1 okradł bank.", name _suspect];
	};
	case "storeRobbery": {
		_msg = format["%1 napadł na sklep.", name _suspect];
	};
	case "personRobbery": {
		_msg = format["%1 napadł na osobę.", name _suspect];
	};
	case "carRobbery": {
		_msg = format["%1 okradł pojazd.", name _suspect];
	};
	case "killAtempt": {
		_msg = format["%1 usiłował zabić osobę.", name _suspect];
	};
	case "kill": {
		_msg = format["%1 zabił osobę.", name _suspect];
	};
	case "vehicleKill": {
		_msg = format["%1 zabił osobę przy użyciu pojazdu.", name _suspect];
	};
};






_evidence pushBack [_suspect, getPlayerUID _suspect, _crime, _msg];
_victim setVariable ["evidence",_evidence,true];
