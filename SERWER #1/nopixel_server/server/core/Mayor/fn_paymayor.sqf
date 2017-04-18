_payment = _this select 0; 
 
diag_log ["paying mayor %1", _payment]; 
 
 
if(isNil "theMayor") exitwith {}; 
 
[_payment] remoteexec ["StanLakeside_fnc_addCashMayor",theMayor]; 
 
_currentcash = theMayor getVariable "sl_atm_silverlake"; 
_new = _currentcash + _payment; 
theMayor setVariable ["atm", _new, false]; 
