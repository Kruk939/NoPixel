/*
		Author: Kajetan "Kruk" Mruk
		Date: 19.04.2017
		Params: 
			0 - String, Type of get
			1 - String, Data string(id or plate)
			2 - String, name of the function to return to
			3 - Object, player object to return to
		Description: Returns data to player
		Return: nothing
*/
_type = _this select 0;
_data = _this select 1;
_function_name = _this select 2;
_player = _this select 3;
diag_log "Company_garageGet";
if(_type == "avialable") exitWith {
	_id_company = _data select 0;
	_level = _data select 1;
	_query= format["getCompanyVehicle_available:%1:%2", _id_company, _level];
	_data = [_query,2] call ExternalS_fnc_ExtDBasync;
	diag_log _data;
	_data remoteExec[_function_name, _player];
};
if(_type == "id") exitWith {
	_id_vehicle = _data select 0;
	_query = format["getCompanyVehicle_id:%1", _id_vehicle];
	_data = [_query,2] call ExternalS_fnc_ExtDBasync;
	diag_log _data;
	_data remoteExec[_function_name, _player];
};
if(_type == "all") exitWith {
	_id_company = _data select 0;
	_query = format["getCompanyVehicle_all:%1:%2", _id_company];
	_data = [_query,2] call ExternalS_fnc_ExtDBasync;
	diag_log _data;
	_data remoteExec[_function_name, _player];
};
