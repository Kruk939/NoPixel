private ["_old", "_new"];
params ["_amount"];
_old = player getVariable "wallet";
_new = _old + _amount;
player setVariable ["wallet", _new, false];

hint format ["Zarobiles %1 dzieki podatkom.",_amount];