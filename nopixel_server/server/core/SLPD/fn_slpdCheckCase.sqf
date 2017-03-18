/*
		Author: Kajetan "Kruk" Mruk
		Date: 16.03.2017
		Params: 
			0 - Object, player object
			1 - UID, looked for player uid
		Description: Returns data to the client police computer with personal data
		Return: [_case]
*/
_player = _this select 0;
_id = _this select 1;
if(isNull _player) exitWith {};

_query = format ["getSLPDWanted_case:%1", _id];
_case = [_query,2] call ExternalS_fnc_ExtDBasync;
_case = _case select 0;

[_case, "personal"] remoteExec ["client_fnc_slpd_load_checkCase", _player];