//private ["_old", "_new"];
params ["_amount"];
/*_old = player getVariable "atm";
_new = _old + _amount;
player setVariable ["atm,", _new, false];*/

[_amount] call Client_fnc_addBank;

hint format ["Zarobiles %1 dzieki podatkom.",_amount];