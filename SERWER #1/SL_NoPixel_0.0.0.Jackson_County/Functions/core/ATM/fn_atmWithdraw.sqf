/*
Author: Kerkkoh
First Edit: 30.11.2015
*/
params["_bankType"];
_amount = parseNumber (ctrlText 1400);
closeDialog 0;

if (_amount > 0) then 
{
	if (_amount > 999999) exitWith {hint "Kwota nie może być większa niż 999 999$!";};
	if(_bankType == 0) then {

		_check = [2, _amount] call StanLakeside_fnc_sl_checkMoney_secure;
		if (_check) then 
		{
			
			[_amount] call StanLakeside_fnc_sl_removeBank_secure;
			[_amount] call StanLakeside_fnc_sl_addCash_secure;

			["Sukces","Pomyślnie wypłacono pieniądze!",[0,255,0,1],""] call StanLakeside_fnc_showNotification;
			[player,objNull,1,format ["%1 wypłacił %2", name player, _amount],_amount] remoteExec ["StanLakesideServer_fnc_moneyLog", 2];
			//hint "Pomyślnie wypłacono pieniądze!";
			
		} else {

			["Błąd","Za mały stan konta!",[255,0,0,1],""] call StanLakeside_fnc_showNotification;
			//hint "Za mały stan konta!";
		
		};

	} else {
	
		if (_amount < mafiaBank) then 
		{
			
			["Remove",_amount] remoteexec ["StanLakesideServer_fnc_updateMafiaBank",2];
			[_amount] call StanLakeside_fnc_sl_addCash_secure;

			["Sukces","Pomyślnie wypłacono pieniądze!",[0,255,0,1],""] call StanLakeside_fnc_showNotification;
			[player,objNull,2,format ["%1 wypłacił %2", name player, _amount],_amount] remoteExec ["StanLakesideServer_fnc_moneyLog", 2];
			//hint "Pomyślnie wypłacono pieniądze!";
			
		} else {

			["Błąd","Za mały stan konta!",[255,0,0,1],""] call StanLakeside_fnc_showNotification;
			//hint "Za mały stan konta!";
		
		};

	};
	
}
 else  
{

	["Błąd","Musisz wypłacić więcej niż $0!",[255,0,0,1],""] call StanLakeside_fnc_showNotification;
	//hint "Musisz wypłacić więcej niż $0!";
	
};


