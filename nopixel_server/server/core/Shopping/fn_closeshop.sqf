params ["_player"];
_loadout = getunitloadout _player;
_uid = getplayeruid _player;
[_player,1,_uid,name _player,_loadout] spawn server_fnc_steppedsync;
_shop = _player getVariable "shop";
_shop setVariable ["shop",nil,false];
shops pushback _shop;
deletemarker format["%1",_uid];