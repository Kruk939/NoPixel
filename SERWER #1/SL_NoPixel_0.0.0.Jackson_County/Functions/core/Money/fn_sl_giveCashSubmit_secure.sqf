params ["_target", "_giver"];

_amount = parseNumber (ctrlText 1401);
closeDialog 0;

if (_amount > 0) then 
{	
	if (_amount > 999999) exitWith {hint "Kwota nie może być większa niż 999 999$!";};
	_enoughCash = [1, _amount] call StanLakeside_fnc_sl_addCash_secure;
	if (_enoughCash) then 
	{
	
		[_amount] call StanLakeside_fnc_sl_removeCash_secure;
		//[_giver, getUnitLoadout _giver] call StanLakesideServer_fnc_statSave; 
		[_amount] remoteexec ["StanLakeside_fnc_sl_addCash_secure", _target];
		//[_target, getUnitLoadout _target] call StanLakesideServer_fnc_statSave; 
		_text = format ["%1 dal Ci %2 $", _giver, _amount];
		[_text, false] remoteExec ["domsg",_target];
		[_giver,_target,5,format ["%1 dał %2 dla", name _giver, _amount, name _target],_amount] remoteExec ["StanLakesideServer_fnc_moneyLog", 2];

	} else {
		hint "Nie masz tyle gotowki!";
	};
} else {
	hint "Wartosc musi być wieksza od $0!";
};