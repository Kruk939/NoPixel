/*
		Author: Kajetan "Kruk" Mruk
		Date: 19.04.2017
		Params: 
			0 - String, Type of delete
			1 - String, Data string(id or plate)
		Description: Updates data in the database
		Return: nothing
*/
_type = _this select 0;
_data = _this select 1;
if(_type == "plate") exitWith {
	_queryString = format["deleteCompanyVehicle:%1", _data];
	_query = [0, _queryString] call ExternalS_fnc_ExtDBquery;
};