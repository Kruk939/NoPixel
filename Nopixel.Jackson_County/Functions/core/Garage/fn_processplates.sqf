disableserialization;
private["_text"];


_cashcheck = [2,2000] call client_fnc_checkmoney;
if!(_cashCheck) exitwith { hint "Nie masz pieniędzy!"; };


_text = ctrlText 9993;

[plateChange,_text,player] remoteexec ["server_fnc_platechange",2];

closedialog 0;