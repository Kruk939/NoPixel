_houseLevel = player getvariable "houselevel";

_cashCheck = [2,125000] call client_fnc_checkmoney;

if!(_cashCheck) exitwith { hint "Potrzebujesz $125.000!"; };

if(_houselevel == 1) then { hint "Ulepszyles dom do 2 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",2,false]; [player, "houselevel", 2] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu drugiego za 125000$", name player],"125000", "", "2"] remoteExec ["server_fnc_economyLog", 2]; };
if(_houselevel == 2) then { hint "Ulepszyles dom do 3 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",3,false]; [player, "houselevel", 3] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu trzeciego za 125000$", name player],"125000", "", "3"] remoteExec ["server_fnc_economyLog", 2];};
if(_houselevel == 3) then { hint "Maksymalny poziom domu osiagniety!"; };

[125000] call Client_fnc_removebank;