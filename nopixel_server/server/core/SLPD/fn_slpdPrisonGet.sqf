/*
		Author: Kajetan "Kruk" Mruk
		Date: 26.03.2017
		Params:
			0 - String, type of action
			1 - Object, player
			2 - Number, 0/1 active or not
		Description: Updates data in the database
		Return: nothing
*/
params["_type","_player","_active"];
if(_type == "jail_player") exitWith {
	_query = format ["getSLPDprison_active:%1:%2", _uid, _active];
	_data = ([_query,2] call ExternalS_fnc_ExtDBasync) select 0;
	[_data] remoteExec ["client_fnc_slpd_jail_setup",_player];
};