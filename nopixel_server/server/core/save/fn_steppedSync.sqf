 
 
params ["_player", "_id", "_uid", "_name","_loadout"]; 
 
 
player setvariable ["getunitloadout",_loadout,false]; 
_statuses = _player getVariable "statuses"; 
if(isNil "_statuses") exitwith { }; 
 
_phoneBackground = _player getVariable "phoneBackground"; 
_messages = _player getVariable "messages"; 
 
_house = _player getVariable "house"; 
_shop = _player getVariable "shop"; 

//_shop setVariable ["shop",nil,false]; 
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
 
//deletemarker format["%1",_uid]; 
 
_cash = _player getVariable "wallet"; 
 
_bank = _player getVariable "atm"; 

_cop = _player getVariable "cop";
_ems = _player getVariable "ems";
_mafia = _player getVariable "mafia";
_fire = _player getVariable "fire";
_legal = _player getVariable "legal";

_items = getUnitLoadout _player;
 
_position = position _player; 
 
_syncInfo = _player getVariable "sync"; 
 
if(isNil "_syncInfo") then { _syncinfo = 1; }; 
 
_exit = false; 
 
if(_syncInfo == 0 || _player in CurrentCop || _player in currentEMS || _player in currentFire) then { 
 
_updatestr = format ["updatePlayerInfoNoGear:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15", _cash, _bank, _position, _messages, _statuses, _housecontent, _shopcontent, _phonebackground, _houselevel, _cop, _ems, _mafia, _fire, _legal, _uid];
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
//["Synchronizacja z bazą danych zakończona", false] remoteExec ["domsg",_player];
 
} else { 

_updatestr = format ["updatePlayerInfo:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11:%12:%13:%14:%15:%16", _items, _cash, _bank, _position, _messages, _statuses, _housecontent, _shopcontent, _phonebackground, _houselevel, _cop, _ems, _mafia, _fire, _legal, _uid];
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
//["Synchronizacja z bazą danych zakończona", false] remoteExec ["domsg",_player]; 
}; 
