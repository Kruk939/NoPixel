params ["_player", "_id", "_uid", "_name","_loadout"];
_player setVariable ["getunitloadout",_loadout,false];
_statuses = _player getVariable "statuses"; 
if(isNil "_statuses") exitwith { }; 
 
_phoneBackground = _player getVariable "phoneBackground"; 
_messages = _player getVariable "messages"; 
 
_house = _player getVariable "house"; 
_shop = _player getVariable "shop"; 

shops pushback _shop;  
_houselevel = _player getVariable "houselevel"; 

if(_houseLevel == 1) then {
	tier1housing pushback _house;
};
if(_houseLevel == 2) then {
	tier2housing pushback _house;
};
if(_houseLevel == 3) then {
	tier3housing pushback _house;
};

_housecontent = _player getVariable "housecontent";
_shopcontent = _player getVariable "shopcontent";

_cash = _player getVariable "wallet";
_bank = _player getVariable "atm";
_position = position _player;
_syncInfo = _player getVariable ["sync",1];
_exit = false;
 
if(_syncInfo == 0 || _player in currentCop || _player in currentEMS || _player in currentFire) then { 
	_updatestr = format ["updatePlayerInfoNoGear:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10", _cash, _bank, _position, _messages, _statuses, _housecontent, _shopcontent, _phonebackground, _houselevel, _uid]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
} else { 
	_updatestr = format ["updatePlayerInfoNoGear:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10", _cash, _bank, _position, _messages, _statuses, _housecontent, _shopcontent, _phonebackground, _houselevel, _uid]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	[_player, _uid] spawn server_fnc_invSave;
}; 
