private["_display","_list","_i","_EMS","_Cop","_Fire","_Mafia","_legal"];
//Cop - EMS - Mafia - Fire
disableSerialization;
_max = 0;
_EMS = player getvariable "EMS";
_Cop = player getvariable "Cop";
_Fire = player getvariable "Fire";
_Mafia = player getvariable "Mafia";
_legal = player getvariable "legal";
if(myJob isEqualTo "Cop" && _Cop < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };
if(myJob isEqualTo "EMS" && _EMS < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };
if(myJob isEqualTo "Fire" && _Fire < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };
if(myJob isEqualTo "Mafia" && _Mafia < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };

if((myJob isEqualTo "Judge" || myJob isEqualTo "Lawyer") && _legal < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };


if(myJob isEqualTo "Cop") then { _max = _Cop; };
if(myJob isEqualTo "EMS") then { _max = _EMS; };
if(myJob isEqualTo "Fire") then { _max = _Fire; };
if(myJob isEqualTo "Mafia") then { _max = _Mafia; };
if(myJob isEqualTo "Judge" || myJob isEqualTo "Lawyer") then { _max = _legal; };

createdialog "promotion";

_target = _this select 0;

_display = findDisplay 5111;
_list = _display displayCtrl 911;

lbClear _list;
_i = 0;

while{_i < _max} do {
	if(_i isEqualTo 0) then { 
		_list lbAdd "Usun";
	} else {
		_list lbAdd format["RANGA: %1", _i];
	};
	_list lbSetdata [(lbSize _list)-1,str(_i)];
	_i = _i + 1;
};