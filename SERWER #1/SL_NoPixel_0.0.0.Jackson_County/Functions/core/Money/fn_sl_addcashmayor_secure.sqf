//private ["_old", "_new"];
params ["_amount"];
/*_old = player getVariable "sl_atm_silverlake";
_new = _old + _amount;
player setVariable ["atm,", _new, false];*/

[_amount] call StanLakeside_fnc_sl_addBank_secure;

hint format ["Zarobiles %1 dzieki podatkom.",_amount];