 

diag_log "setup mayor"; 

_fuck = 2; 
_fetchstr = format ["getMayor:%1", _fuck]; 
_fetch = [_fetchstr, 2] call ExternalS_fnc_ExtDBasync; 
 
currentMayor =  str((_fetch select 0) select 0);
TaxRate = call compile format ["%1",_fetch select 0 select 1];

publicVariable "TaxRate";
