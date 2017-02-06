_debug = true;
_player = _this select 0; 
_type = _this select 1; 
_query = format ["getCrimeType:%1", _type];
_queryResult = [_query,2] call ExternalS_fnc_ExtDBasync;

_returned = str _queryResult; 
latestwanted = _queryResult; 

[latestwanted] remoteExec ["client_fnc_wantedproduce",_player]; 

if (_debug) then {
	diag_log "lista poszukiwanych";
	diag_log format ["this: %1",_this];
	diag_log format ["tablica: %1",latestwanted];
};


 
