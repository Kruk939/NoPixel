params["_player"];

_cash = player getvariable "wallet";
if(isNil "_cash") exitwith {};
if(_cash isEqualTo 0) exitwith { "Brak pieniędzy" remoteexec ["hint",_player]; };
player setvariable ["wallet",0,false];
[player, "wallet", 0] remoteExec ["Server_fnc_setVariable",2];
[_cash] remoteexec ["client_fnc_robfinish",_player];