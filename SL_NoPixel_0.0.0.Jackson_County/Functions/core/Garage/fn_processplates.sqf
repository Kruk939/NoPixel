disableserialization;
private["_text"];


_cashcheck = [2,2000] call client_fnc_checkmoney;
if!(_cashCheck) exitwith { hint "Nie masz pieniędzy!"; };


_text = ctrlText 9993;

_countPlate = count _text;
if (_countPlate > 7) exitWith {["Błąd","Twoja tablica ma więcej niż 7 znaków!",[255,0,0,1],""] call Client_fnc_showNotification;};
_string = _text splitString " " joinString ""; 

[2000] call Client_fnc_removebank;

[plateChange,_string,player] remoteexec ["server_fnc_platechange",2];

closedialog 0;