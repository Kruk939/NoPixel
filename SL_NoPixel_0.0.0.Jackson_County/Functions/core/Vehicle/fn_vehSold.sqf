_price = _this select 0;
_veh = _this select 1;
_atm = player getVariable ["atm", 0];
_atm = _atm + _price;
player setVariable ["atm", _price,false];

_pia = Current_Cars find _veh;
Current_Cars deleteAt _pia;
[getPlayerUID player, "usedgarage", current_cars] remoteExec ["Server_fnc_setVariable",2];

deleteVehicle _veh;
