params["_bankType"];


_amount = parseNumber (ctrlText 1400);
closeDialog 0;

if (_amount > 0) then 
{


	if(_bankType == 0) then {

		_check = [1, _amount] call Client_fnc_checkMoney;
		if (_check) then 
		{
		
			[_amount] call Client_fnc_removeCash;
			[_amount] call Client_fnc_addBank;
			hint "Pomyślnie wpłacono pieniądze";
			
		} else {
		
			hint "Nie masz wystarczająco dużo gotówki!";
		
		};

	} else {
		
		_check = [1, _amount] call Client_fnc_checkMoney;
		if (_check) then 
		{
			
			["Add",_amount] remoteexec ["server_fnc_updateMafiaBank",2];
			[_amount] call Client_fnc_removeCash;
			hint "Pomyślnie wypłacono pieniądze!";
			
		} else {
		
			hint "Stan konta zbyt mały!";
		
		};

	};
}
 else  
{

	hint "Wpłata musi wynosić więcej niż $0!";
	
};