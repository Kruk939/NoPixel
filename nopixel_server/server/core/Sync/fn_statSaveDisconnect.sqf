params["_player"];
if(isNull _player) exitWith { diag_log "Stat save Disconnect - player null"; };
_uid = getPlayerUID _player;

_messages = [];

deletemarker format["%1",_uid];

_cash = _player getVariable "wallet";
_bank = _player getVariable "atm";

_position = position _player;

_syncInfo = _player getVariable "sync";
if(isNil "_syncInfo") then { _syncinfo = 1; };

if(_syncInfo == 0 || _player in currentCop || _player in currentEMS || _player in currentFire) then { 
	_updatestr = format ["updatePlayerInfoNoGearNoShopNoHouse:%1:%2:%3:%4:%5", _cash, _bank, _position, _messages, _uid]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
} else { 
	_updatestr = format ["updatePlayerInfoNoGearNoShopNoHouse:%1:%2:%3:%4:%5", _cash, _bank, _position, _messages, _uid]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
}; 
[_uid,"0"] spawn Server_fnc_connected;