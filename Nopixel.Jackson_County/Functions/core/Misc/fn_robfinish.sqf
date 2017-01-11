params["_cash"];

hint format["Ukradles %1",_cash];

_cash = parseNumber _cash;

if(isNil "_cash") exitwith {};

[_cash] call Client_fnc_addCash;