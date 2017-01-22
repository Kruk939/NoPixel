params["_player"];

_cash = player getVariable ["wallet",0];
if(_cash == 0) exitwith { "Brak pieniędzy" remoteexec ["hint",_player]; };
player setvariable ["wallet",0,false];
[player, "wallet", 0] remoteExec ["Server_fnc_setVariable",2];
[_cash] remoteexec ["client_fnc_robfinish",_player];