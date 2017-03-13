  /*
	Author: KifKick
	For: stanlakeside.pl
	Date: 13.03.2017 (Non-retard Units)
	
		Return: nothing
		Description: On start server reset respawn counter to 3
*/
private["_updateStr"];

_updateStr = "updateResetRespawn:3";
_update = [0, _updateStr] call ExternalS_fnc_ExtDBquery;
