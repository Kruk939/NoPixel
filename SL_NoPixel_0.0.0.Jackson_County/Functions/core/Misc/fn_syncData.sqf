_wallet = player getVariable "wallet";
_atm = player getVariable "atm";
[player, "wallet", _wallet] remoteExec ["Server_fnc_setVariable",2];
[player, "atm", _atm] remoteExec ["Server_fnc_setVariable",2];
_loadout = getunitloadout player;
_nil = uniform player; //może zadziala
[player,1,getplayeruid player,name player,_loadout] remoteExec ["server_fnc_steppedsync",2];
[player, "sync", 1] remoteExec ["Server_fnc_setVariable",2];


hint "Pomyślnie zapisano!"; 
lastforcesync = time;
[player,player,13,format ["%1 wykonał synchronizacje", name player],""] remoteExec ["server_fnc_actionLog", 2];
[player, "sync", "Synchronizacja"] remoteExec ["Server_fnc_insertLog", 2];