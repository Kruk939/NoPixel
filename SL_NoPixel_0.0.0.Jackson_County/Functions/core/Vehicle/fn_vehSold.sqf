/*
	Author: Kajetan "Kruk" Mruk
	For: stanlakeside.pl
	Date: 19.01.2017 (Non-retard Units)
	
	Params:
		0 - Number - price of vehicle
		1 - Object - vehicle object
	Description: Function that gives money to the seller and removes car from his array.
	Return: nothing
*/
_price = _this select 0;
_veh = _this select 1;

_atm = player getVariable ["atm", 0];
_atm = _atm + _price;
player setVariable ["atm", _atm,false];
[format["Twój samochód sprzedał się za: $%1!", _price], true] spawn domsg;

_pia = Current_Cars find _veh;
Current_Cars deleteAt _pia;
[getPlayerUID player, "usedgarage", current_cars] remoteExec ["Server_fnc_setVariable",2];