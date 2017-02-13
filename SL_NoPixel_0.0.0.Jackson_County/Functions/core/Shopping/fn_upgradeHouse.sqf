_houseLevel = player getvariable "houselevel";

_cashCheck = [2,50000] call client_fnc_checkmoney;

if!(_cashCheck) exitwith { hint "Potrzebujesz $50.000!"; };

if(_houselevel == 1) then { hint "Ulepszyles dom do 2 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",2,false]; [player, "houselevel", 2] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu drugiego za 50000$", name player],"50000", "", "2"] remoteExec ["server_fnc_economyLog", 2]; };
if(_houselevel == 2) then { hint "Ulepszyles dom do 3 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",3,false]; [player, "houselevel", 3] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu trzeciego za 50000$", name player],"50000", "", "3"] remoteExec ["server_fnc_economyLog", 2];};
if(_houselevel == 3) then { hint "Ulepszyles dom do 3 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",4,false]; [player, "houselevel", 4] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu czwartego za 50000$", name player],"50000", "", "4"] remoteExec ["server_fnc_economyLog", 2];};
if(_houselevel == 4) then { hint "Ulepszyles dom do 3 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",5,false]; [player, "houselevel", 5] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu piątego za 50000$", name player],"50000", "", "5"] remoteExec ["server_fnc_economyLog", 2];};
if(_houselevel == 5) then { hint "Ulepszyles dom do 3 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",6,false]; [player, "houselevel", 6] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu szóstego za 50000$", name player],"50000", "", "6"] remoteExec ["server_fnc_economyLog", 2];};
if(_houselevel == 6) then { hint "Ulepszyles dom do 3 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",7,false]; [player, "houselevel", 7] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu siódmego za 50000$", name player],"50000", "", "7"] remoteExec ["server_fnc_economyLog", 2];};
if(_houselevel == 7) then { hint "Ulepszyles dom do 3 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",8,false]; [player, "houselevel", 8] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu ósmego za 50000$", name player],"50000", "", "8"] remoteExec ["server_fnc_economyLog", 2];};
if(_houselevel == 8) then { hint "Ulepszyles dom do 3 poziomu, zmiany wejda w zycie po przelogowaniu."; player setvariable ["houselevel",9,false]; [player, "houselevel", 9] remoteExec ["Server_fnc_setVariable",2]; [player,objNull,2,format ["%1 ulepszył dom do poziomu dziewiątego za 50000$", name player],"50000", "", "9"] remoteExec ["server_fnc_economyLog", 2];};
if(_houselevel == 9) then { hint "Maksymalny poziom domu osiagniety!"; };

[50000] call Client_fnc_removebank;