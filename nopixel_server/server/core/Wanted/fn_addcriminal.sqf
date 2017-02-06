_suspectName = _this select 0;
_suspectUID = _this select 1;
_officerName = _this select 2;
_officerUID = _this select 3;
_charges = _this select 4;
_status = _this select 5;
_evidence = _this select 6;
_active = _this select 7;

_updatestr = format ["insertCrime:%1:%2:%3:%4:%5:%6:%7:%8", _suspectName, _suspectUID, _officerName, _officerUID, _charges, _status, _evidence, _active]; 
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 

diag_log ["adding criminal %1", _officerid];