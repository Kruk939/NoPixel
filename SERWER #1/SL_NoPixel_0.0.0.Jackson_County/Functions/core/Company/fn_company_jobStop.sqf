/*
		Author: Kajetan "Kruk" Mruk
		Date: 19.04.2017
		Params: 
			0 - Array, case data
		Description: Reads data from avialable company garage
		Return: none
*/
if((count client_company_active_data) != 0) then {
	_oldVar = client_company_active_data select 9;
	myjob = "";
	player setVariable[_oldVar, nil];
	client_company_active_data = [];
};