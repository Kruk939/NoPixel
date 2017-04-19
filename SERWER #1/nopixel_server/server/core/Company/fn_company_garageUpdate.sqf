/*
		Author: Kajetan "Kruk" Mruk
		Date: 19.04.2017
		Params: 
			0 - String, Type of update
			1 - Array, data
		Description: Updates data in the database
		Return: nothing
*/
_type = _this select 0;
_data = _this select 1;
if(_type == "visual") exitWith {
	_plate = _date select 0;
	_color = _data select 1;
	_finish = _data select 2;
	_rims = _data select 3;
	_windows = _data select 4;
	_lights = _data select 5;
	_skin = _data select 6;
	_queryString = format["updateCompanyVehicle_visual:%1:%2:%3:%4:%5:%6:%7", _color, _finish, _rims, _windows, _lights, _skin, _plate];
	_query = [0, _queryString] call ExternalS_fnc_ExtDBquery;
};
if(_type == "statuses") exitWith {
	_plate = _date select 0;
	_fuel = _data select 1;
	_damage = _data select 2;
	_statuses = _data select 3;
	_queryString = format["updateCompanyVehicle_statuses:%1:%2:%3:%4", _fuel, _damage, _statuses, _plate];
	_query = [0, _queryString] call ExternalS_fnc_ExtDBquery;
};
if(_type == "active") exitWith {
	_plate = _data select 0;
	_queryString = format["updateCompanyVehicle_active:%1", _plate];
	_query = [0, _queryString] call ExternalS_fnc_ExtDBquery;
};
if(_type == "deactive") exitWith {
	_plate = _data select 0;
	_queryString = format["updateCompanyVehicle_deactive:%1", _plate];
	_query = [0, _queryString] call ExternalS_fnc_ExtDBquery;
};
if(_type == "license") exitWith {
	_old_plate = _data select 0;
	_new_plate = _data select 1;
	_queryString = format["updateCompanyVehicle_license:%1:%2", _new_plate, _old_plate];
	_query = [0, _queryString] call ExternalS_fnc_ExtDBquery;
};
if(_type == "level") exitWith {
	_plate = _data select 0;
	_level = _data select 1;
	_queryString = format["updateCompanyVehicle_level:%1:%2", _level, _plate];
	_query = [0, _queryString] call ExternalS_fnc_ExtDBquery;
};