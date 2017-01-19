 /*
	Author: KifKick
	For: stanlakeside.pl
	Date: 19.01.2017 (Non-retard Units)
	
		Params:
		0 - Object - player object
		1 - String - 1 or 0
		Description: Function that send SQL query to the server for get connected to server or not.
		Return: nothing
*/
 
 private["_type","_player","_playerUID","_updateStr"];
 
 _player = this select 0;
 _type = this select 1;
 
 _playerUID = getPlayerUID _player;
 
 _updateStr = format["updateConnected:%1:%2", _type, _playerUID];
 _update = [0, _updateStr] call ExternalS_fnc_ExtDBquery;
 
 
