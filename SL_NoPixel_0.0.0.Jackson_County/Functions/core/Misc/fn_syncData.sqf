_wallet = player getVariable "wallet";
_atm = player getVariable "atm";
[player, "wallet", _wallet] remoteExec ["Server_fnc_setVariable",2];
[player, "atm", _atm] remoteExec ["Server_fnc_setVariable",2];
_loadout = getunitloadout player;
[player,1,getplayeruid player,name player,_loadout] remoteExec ["server_fnc_steppedsync",2];
[player, "sync", 1] remoteExec ["Server_fnc_setVariable",2];


hint "Pomyślnie zapisano!"; 
lastforcesync = time;
[player, "sync", "Synchronizacja"] remoteExec ["Server_fnc_insertLog", 2];