
params ["_player"]; 

_loadout = getunitloadout _player;
_uid = getplayeruid _player;

[_player,1,_uid,name _player,_loadout] remoteExec ["server_fnc_steppedsync",2]; 

lastforcesync = time;

_shop = _player getVariable "shop"; 
 
_shop setVariable ["shop",nil,false]; 
shops pushback _shop;

deletemarker format["%1",_uid]; 