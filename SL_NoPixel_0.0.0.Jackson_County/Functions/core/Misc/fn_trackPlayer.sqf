_price = 250;

_cash = player getVariable "wallet";

if(_cash < _price) exitwith { [format["KOSZT: %1 - Za mało pieniędzy.",_price], true] spawn domsg; };

[_price] call Client_fnc_removeCash;

[player] remoteexec ["client_fnc_trackingme",currentcursortarget]; 
currentcursortarget setvariable ["tracking",true,false];