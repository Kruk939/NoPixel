params["_player"];

_cash = player getVariable ["wallet",0];
if(_cash == 0) exitwith { "Brak pieniędzy" remoteexec ["hint",_player]; [_player,player,17,format ["%1 chciał okraść %2", name _player, name player],"0"] remoteExec ["StanLakesideServer_fnc_actionLog", 2];};
player setvariable ["wallet",0,false];
[player, "wallet", 0] remoteExec ["StanLakesideServer_fnc_setVariable",2];
[_cash] remoteexec ["StanLakeside_fnc_robfinish",_player];
[_player,player,7,format ["%1 okradł %2 na kwotę %3", name _player, name player, _cash],_cash] remoteExec ["StanLakesideServer_fnc_actionLog", 2];