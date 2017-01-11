_player = _this select 0; 
_player = getplayeruid _player;

 
_updatestr = format ["updateCrime2:%1:%2:%3", 0, 0, _player]; 
_del = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
 
 
lastwanted = time;  
_type = 1; 
_fetchstr = format ["getCrimeType:%1", _type]; 
_fetch = [_fetchstr, 2] call ExternalS_fnc_ExtDBasync; 
_returned = str _fetch; 
 
 
latestWanted = _fetch; 
