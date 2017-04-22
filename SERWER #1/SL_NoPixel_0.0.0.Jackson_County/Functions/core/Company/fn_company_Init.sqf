/*
		Author: Kajetan "Kruk" Mruk
		Date: 19.04.2017
		Params: 
			0 - Array, case data
		Description: Reads data from avialable company garage
		Return: none
*/
disableSerialization;
_data = _this;
if(isNil "_data") then { _data = []; };


//Dane
//c.id, c.short_name, c.name, c.bank, c.uid_owner, c.members_current, c.members_max, c.level, m.level, c.variable_name, c.job_name
client_company_data = _data;
client_company_active_data = [];


//Funkcje pomocnicze
company_fnc_dialog_garageOpen = {
	if((count client_company_active_data) != 0) then {
		_company_id = client_company_active_data select 0;
		_player_level = client_company_active_data select 8;
		["avialable",[_company_id, _player_level],"client_fnc_company_garageOpen",player] remoteExec ["server_fnc_company_garageGet",2]
	};
};