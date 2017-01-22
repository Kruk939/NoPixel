/*
	Author: Kajetan "Kruk" Mruk
	Date: 22.01.2017 (Non-retard Units)
	
	Params:
		1 - Object - player object that will be saved
		2 - String - uid of player
	Description: Function that saves player inventory
	Return: nothing
*/

params ["_player" "_uid"];
_statuses = _player getVariable "statuses";
if(isNil "_statuses") exitwith { };
_items = getunitloadout _player;

if(!(_syncInfo == 0 || _player in CurrentCop || _player in currentEMS || _player in currentFire)) then {
	_updatestr = format ["updatePlayerInv:%1:%2", _items _uid];
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
};
