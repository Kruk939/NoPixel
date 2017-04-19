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
if(_type == "") exitWith {
	//TODO przenoszenie pojazdu z garazu gracza

};
if(_type == "new") exitWith {
	_id_company = _data select 0;
	_license = _data select 1;
	_class = _data select 2;
	_color = _data select 3;
	_finish = _data select 4;
	_rims = _data select 5;
	_windows = _data select 6;
	_lights = _data select 7;
	_statuses = _data select 8;
	_skin = _data select 9;
	_queryString = format["insertCompanyVehicle:%1:%2:%3:%4:%5:%6:%7:%8:%9:%10", _id_company, _license, _class, _color, _finish, _rims, _windows, _lights, _statuses, _skin];
	_query = [0, _queryString] call ExternalS_fnc_ExtDBquery;
};