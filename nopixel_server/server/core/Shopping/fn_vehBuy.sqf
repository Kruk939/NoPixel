/*
	Author: Kajetan "Kruk" Mruk
	For: stanlakeside.pl
	Date: 19.01.2017 (Non-retard Units)
	
	Params:
		0 - Number - price of vehicle
		1 - Object - vehicle object
		2 - Object - buyer object
		3 - Array - Information of vehicle (car getVariable "information")
	Description: Function that updates Database and send money to the seller.
	Return: nothing
*/
_price = _this select 0;
_veh = _this select 1;
_buyer = _this select 2;
_information = _veh getVariable ["information",[]];
diag_log format ["vehBuy - %1 %2", _this, _information];
if((count _information) isEqualTo 0) exitWith { [_buyer, "car", format ["Nie mogl kupic samochodu i stracil - $%1",_price]] spawn Server_fnc_insertLog; };

_player = objNull;


_carowner = _information select 8;
_information set [8, (getPlayerUID _buyer)];
 
_garageArray = _buyer getvariable "garage";
_garageArray pushback _information;

{if (getplayeruid _x isEqualTo _carowner) exitwith { _player = _x; }; } foreach playableunits;

if(isNull _player) then {
	_updatestr = format ["updateVehOwnerPay:%1:%2", _price, _carowner]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
} else {
	["garage",_information] remoteExec ["client_fnc_setVariable", _buyer];
	[_price, _veh] remoteExec["client_fnc_vehSold", _player];
	 
	_updatestr = format ["updateVehOwner:%1:%2", _information select 0, getPlayerUID _buyer]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
};
deleteVehicle _veh;