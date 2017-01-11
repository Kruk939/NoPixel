params ["_target", "_giver"];

_amount = parseNumber (ctrlText 1401);
closeDialog 0;

if (_amount > 0) then 
{
	_enoughCash = [1, _amount] call Client_fnc_checkMoney;
	if (_enoughCash) then 
	{
	
		[_amount] call Client_fnc_removeCash;
		[_amount] remoteexec ["Client_fnc_addCash", _target];
		_text = format ["%1 dal Ci %2 $", _giver, _amount];
		[_text, false] remoteExec ["domsg",_target];

	} else {
		hint "Nie masz tyle gotowki!";
	};
} else {
	hint "Wartosc musi być wieksza od $0!";
};