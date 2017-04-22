/*
		Author: Kajetan "Kruk" Mruk
		Date: 19.04.2017
		Params: 
			0 - Array, case data
		Description: Reads data from avialable company garage
		Return: none
*/
_type = _this select 0;
_data = _this select 1;
_cData = [];
if(_type == "id") then {
	{
		//c.id, c.short_name, c.name, c.bank, c.uid_owner, c.members_current, c.members_max, c.level, m.level, c.variable_name, c.job_name
		_id = _x select 0;
		if(_id == _data) exitWith {
			_cData = _x;
		};
	
	} foreach client_company_data;
};
if(_type == "short") then {
	{	
		//c.id, c.short_name, c.name, c.bank, c.uid_owner, c.members_current, c.members_max, c.level, m.level, c.variable_name, c.job_name
		_short_name = _x select 1;
		if(_short_name == _data) exitWith {
			_cData = _x;
		};
	} foreach client_company_data;
};
if((count _cData) != 0) then {
	_oldVar = client_company_active_data select 9;
	_newLevel = _cData select 8;
	_newVar = _cData select 9;
	_newName = _cData select 10;
	myjob = _newName;
	player setVariable[_oldVar, nil];
	player setVariable[_newVar, _newLevel];
	client_company_active_data = _cData;
};