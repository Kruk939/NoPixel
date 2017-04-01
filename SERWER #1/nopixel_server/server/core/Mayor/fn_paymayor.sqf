_payment = _this select 0; 
 
diag_log ["paying mayor %1", _payment]; 
 
 
if(isNil "theMayor") exitwith {}; 
 
[_payment] remoteexec ["Client_fnc_addCashMayor",theMayor]; 
 
_currentcash = theMayor getvariable "atm"; 
_new = _currentcash + _payment; 
theMayor setVariable ["atm", _new, false]; 
