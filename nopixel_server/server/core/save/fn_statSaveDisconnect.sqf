params ["_player", "_id", "_uid", "_name","_items"];
if(isNull _player) exitWith { diag_log "Stat save Disconnect - player null"; };
diag_log format ["Stat save Disconnect %1 %2 %3 %4", _player, _id, _uid, _name];
[_player, "disconnect", "Gracz opuscil serwer", _uid] call Server_fnc_insertLog;

_statuses = _player getVariable "statuses";
if(isNil "_statuses") exitwith { };

_items = getunitloadout _player;

_phoneBackground = _player getVariable "phoneBackground";
_messages = _player getVariable "messages";

_house = _player getVariable "house";
_shop = _player getVariable "shop";

_shop setVariable ["shop",nil,false];
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


deletemarker format["%1",_uid];

_cash = _player getVariable "wallet";
_bank = _player getVariable "atm";

_position = position _player;

_syncInfo = _player getVariable "sync";
if(isNil "_syncInfo") then { _syncinfo = 1; };
_exit = false;

if(_syncInfo == 0 || _player in currentCop || _player in currentEMS || _player in currentFire) then { 
	//_updatestr = format ["updatePlayerInfoNoGear:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10", _cash, _bank, _position, _messages, _statuses, _housecontent, _shopcontent, _phonebackground, _houselevel, _uid]; 
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	_updatestr = format ["updatePlayerInfoNoGearNoMoneyNoShop:%1:%2:%3:%4:%5:%6", _position, _messages, _statuses, _phonebackground, _houselevel, _uid];
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	_updatestr = format ["updatePlayerShop:%1:%2:%3", _housecontent, _shopcontent, _uid];
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	_updatestr = format ["updatePlayerMoney:%1:%2:%3", _cash, _bank, _uid];
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
} else { 
	_updatestr = format ["updatePlayerInfo:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10:%11", _items, _cash, _bank, _position, _messages, _statuses, _housecontent, _shopcontent, _phonebackground, _houselevel, _uid]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerInfoNoGearNoMoneyNoShop:%1:%2:%3:%4:%5:%6", _position, _messages, _statuses, _phonebackground, _houselevel, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerShop:%1:%2:%3", _housecontent, _shopcontent, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
	
	//_updatestr = format ["updatePlayerMoney:%1:%2:%3", _cash, _bank, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;

	//_updatestr = format ["updatePlayerInv:%1:%2", _items, _uid];
	//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
}; 


if(_houseLevel == 1) then {
tier1housing pushback _house;
};

if(_houseLevel == 2) then {
tier2housing pushback _house;
};

if(_houseLevel == 3) then {
tier3housing pushback _house;
};

[] spawn server_fnc_refreshjobs;

_playeroffice = _player getVariable "office";

if(!isNil "_playerOffice") then {
_pia = rentedshops FIND _playeroffice;
rentedshops DELETEAT _pia;
deletemarker format["%1OFFICE",_uid];
};

if(isNil "racecontestents") then { racecontestents = []; };
_pia = racecontestents FIND _player; 
racecontestents DELETEAT _pia;

deleteVehicle _player;

_pia = MafiaLoan1 FIND _player;

if(_pia != -1) then {
MafiaLoan1 DELETEAT _pia;
MafiaLoan2 DELETEAT _pia;
};



_player setvariable ["getunitloadout",nil,false];
_player setVariable ["sync", nil, false];
_player setVariable ["wallet", nil, false];
_player setVariable ["atm", nil, false];
_player setVariable ["bankAccount", nil, false];
_player setVariable ["cop", nil, false];
_player setVariable ["ems", nil, false];
_player setVariable ["mafia", nil, false];
_player setVariable ["fire", nil, false];
_player setVariable ["legal", nil, false];
_player setVariable ["garage", nil, false];
_player setVariable ["phoneBackground", nil, false];
_player setVariable ["messages", nil, false];
_player setVariable ["statuses", nil, false];
_player setVariable ["houselevel", nil, false];
_player setVariable ["housecontent", nil, false];
_player setVariable ["shopcontent", nil, false];
_player setVariable ["house", nil, false];
_player setVariable ["office", nil, false];
_player setVariable ["shop", nil, false];

[_uid,"0"] call Server_fnc_connected;


//[_player, "save", "Zapisano gracza"] call Server_fnc_insertLog;
if (_exit) exitwith { deleteVehicle _player; };
