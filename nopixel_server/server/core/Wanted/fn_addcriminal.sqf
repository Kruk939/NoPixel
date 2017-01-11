 
 
_suspectID = _this select 0;
_Suid = _this select 1;
_officerID = _this select 2; 
_charges = _this select 3; 
_status = _this select 4; 
_evidence = _this select 5; 
_active = _this select 6; 
 
_updatestr = format ["insertCrime:%1:%2:%3:%4:%5:%6:%7", _suspectID, _Suid, _officerID, _charges, _status, _evidence, _active]; 
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
 
diag_log ["adding criminal %1", _officerid]; 
 
