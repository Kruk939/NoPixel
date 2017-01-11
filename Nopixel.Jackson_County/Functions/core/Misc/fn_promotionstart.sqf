private["_display","_list","_i","_EMS","_Cop","_fire","_Mafia"];
//Cop - EMS - Mafia - Fire
disableSerialization;
_max = 0;
_EMS = player getvariable "EMS";
_Cop = player getvariable "Cop";
_Fire = player getvariable "Fire";
_Mafia = player getvariable "Mafia";
_legal = player getvariable "legal";
if(myJob == "Cop" && _cop < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };
if(myJob == "EMS" && _ems < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };
if(myJob == "Fire" && _Fire < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };
if(myJob == "Mafia" && _Mafia < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };

if((myJob == "Judge" || myJob == "Lawyer") && _legal < 6) exitwith { hint "Musisz miec 6 poziom aby kogos awansowac."; };


if(myJob == "Cop") then { _max = _cop; };
if(myJob == "EMS") then { _max = _EMS; };
if(myJob == "Fire") then { _max = _Fire; };
if(myJob == "Mafia") then { _max = _Mafia; };
if(myJob == "Judge" || myJob == "Lawyer") then { _max = _legal; };

createdialog "promotion";

_target = _this select 0;

_display = findDisplay 5111;
_list = _display displayCtrl 911;

lbClear _list;
_i = 0;

while{_i < _max} do {
	if(_i == 0) then { 
		_list lbAdd "Usun";
	} else {
		_list lbAdd format["RANGA: %1", _i];
	};
	_list lbSetdata [(lbSize _list)-1,str(_i)];
	_i = _i + 1;
};