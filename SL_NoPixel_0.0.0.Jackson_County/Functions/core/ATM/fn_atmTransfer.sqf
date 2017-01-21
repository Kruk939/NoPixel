params["_bankType"];

if(_bankType == 1) exitwith { ["Błąd","Nie masz do tego dostępu!",[255,0,0,1],""] call Client_fnc_showNotification; //hint "Nie masz do tego dostępu!"; };

_amount = parseNumber (ctrlText 1400);
_player = call compile format["%1",(lbData[1111,(lbCurSel 1111)])];
if(isnil "_player") exitwith { ["Błąd","Nie wybrano gracza!",[255,0,0,1],""] call Client_fnc_showNotification; //hint "Nie wybrano gracza!"; };
closeDialog 0;

_old = player getVariable "atm";
_new = _old - _amount;
if (_new < 0) exitwith { ["Błąd","Masz za mało pieniędzy!",[255,0,0,1],""] call Client_fnc_showNotification;  //hint "Masz za mało pieniędzy!"; };

[_amount] call Client_fnc_removeBank;
[_amount] remoteExec ["Client_fnc_addBank",_player];

["Sukces","Pieniądze wysłane pomyślnie",[0,255,0,1],""] call Client_fnc_showNotification;
//hint "Pieniądze wysłane pomyślnie";