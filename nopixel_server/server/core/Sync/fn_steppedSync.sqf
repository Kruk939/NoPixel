params["_player","_items"];
if(isNull _player) exitWith { diag_log "stepped sync - player null"; };
_player setVariable ["getunitloadout",_items,false];
_statuses = _player getVariable "statuses";
_uid = getPlayerUID _player;
if(isNil "_statuses") exitwith { };

//_items = getunitloadout _player;
 
//_phoneBackground = _player getVariable "phoneBackground"; 
_messages = _player getVariable "messages"; 
 
//_house = _player getVariable "house"; 
//_shop = _player getVariable "shop"; 

//shops pushback _shop;  
_houselevel = _player getVariable "houselevel"; 

	/*if (_houseLevel == 1) then {
        tier1housing pushback _house;
    };
    if (_houseLevel == 2) then {
        tier1housing pushback _house;
    };
    if (_houseLevel == 3) then {
        tier1housing pushback _house;
    };
    if (_houseLevel == 4) then {
        tier2housing pushback _house;
    };
    if (_houseLevel == 5) then {
        tier2housing pushback _house;
    };
    if (_houseLevel == 6) then {
        tier2housing pushback _house;
    };
    if (_houseLevel == 7) then {
        tier3housing pushback _house;
    };
    if (_houseLevel == 8) then {
        tier3housing pushback _house;
    };
    if (_houseLevel == 9) then {
        tier3housing pushback _house;
    };*/

//_housecontent = _player getVariable "housecontent";
//_shopcontent = _player getVariable "shopcontent";

_cash = _player getVariable "wallet";
_bank = _player getVariable "atm";
_position = position _player;
_syncInfo = _player getVariable ["sync",1];
_exit = false;
 
if(_syncInfo == 0 || _player in currentCop || _player in currentEMS || _player in currentFire) then { 
	_updatestr = format ["updatePlayerInfoNoGearNoShopNoHouse:%1:%2:%3:%4:%5:%6:%7", _cash, _bank, _position, _messages, _statuses, _houselevel, _uid]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;

	//_updatestr = format ["updatePlayerInfoNoGear:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10", _cash, _bank, _position, _messages, _statuses, _housecontent, _shopcontent, _phonebackground, _houselevel, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerInfoNoGearNoMoneyNoShop:%1:%2:%3:%4:%5:%6", _position, _messages, _statuses, _phonebackground, _houselevel, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerHouseShop:%1:%2:%3", _housecontent, _shopcontent, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerMoney:%1:%2:%3", _cash, _bank, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
} else { 
	_updatestr = format ["updatePlayerInfoNoShopNoHouse:%1:%2:%3:%4:%5:%6:%7:%8", _items, _cash, _bank, _position, _messages, _statuses, _houselevel, _uid]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;

    //_updatestr = format ["updatePlayerInfo:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11", _items, _cash, _bank, _position, _messages, _statuses, _housecontent, _shopcontent, _phonebackground, _houselevel, _uid]; 
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerInfoNoGearNoMoneyNoShop:%1:%2:%3:%4:%5:%6", _position, _messages, _statuses, _phonebackground, _houselevel, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerHouseShop:%1:%2:%3", _housecontent, _shopcontent, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerMoney:%1:%2:%3", _cash, _bank, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//[_player,_items, _uid] spawn server_fnc_invSave;
}; 
