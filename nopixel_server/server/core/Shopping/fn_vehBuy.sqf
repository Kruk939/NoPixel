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
_information = _this select 3;

_player = objNull;

_carowner = _information select 8;
_information set [8, (getPlayerUID _buyer)];
 
_garageArray = _buyer getvariable "garage";
_garageArray pushback _information;

{if (getplayeruid _x == _carowner) exitwith { _player = _x; }; } foreach playableunits;

["garage",_information] remoteExec ["client_fnc_setVariable", _buyer];
[_price, _veh] remoteExec["client_fnc_vehSold", _player];
 
_updatestr = format ["updateVehOwner:%1:%2", _information select 0, getPlayerUID _buyer]; 
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;