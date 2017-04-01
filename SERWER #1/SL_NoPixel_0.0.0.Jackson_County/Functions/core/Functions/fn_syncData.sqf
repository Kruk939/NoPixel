_wallet = player getVariable "wallet";
_atm = player getVariable "atm";
[player, "wallet", _wallet] remoteExec ["Server_fnc_setVariable",2];
[player, "atm", _atm] remoteExec ["Server_fnc_setVariable",2];
[player, "sync", 1] remoteExec ["Server_fnc_setVariable",2];
[player, getUnitLoadout player] remoteExec ["server_fnc_steppedsync",2];

_items = uniformItems player;
player forceAddUniform uniform player;
{player addItemToUniform _x} foreach _items;
_vestItems = vestItems player;
player addVest vest player;
{player addItemToVest _x} foreach _vestItems;

hint "Pomyślnie zapisano!"; 
lastforcesync = time;
[player,objNull,13,format ["%1 wykonał synchronizacje", name player],""] remoteExec ["server_fnc_actionLog", 2];