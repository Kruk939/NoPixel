/*
_iddd = 1;

_updatestr = format ["updatePrison:%1:%2", _length, _uidplayer]; 
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 

//_fetchstr = format ["mafiaBank:%1", _iddd];
//_fetch = [_fetchstr, 2] call ExternalS_fnc_ExtDBasync;

mafiabank = call compile format ["%1",_fetch select 0 select 0];
//mafiabank = format["%1",_fetch];
publicvariable "mafiaBank";


diag_log "mafia bank";
 */
 
_iddd = 1;
_debug = 0;

_query = format ["mafiaBank:%1", _iddd];
_queryResult = [_query,2] call ExternalS_fnc_ExtDBasync;

mafiabank = call compile format ["%1",_queryResult select 0 select 0];
//mafiabank = format["%1",_queryResult];
publicvariable "mafiaBank";


if(_debug == 1) then {
	
	diag_log "------------- Insert Query Request -------------";
	diag_log format["QUERY: %1",_query];
	diag_log format["Result: %1",_queryResult];
	diag_log "------------------------------------------------";
};