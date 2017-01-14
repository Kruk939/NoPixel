 
_type = _this select 0; 
_player = _this select 1; 
_rank = _this select 2; 
 
_uidPlayer = getplayerUID _player; 
 
if (_rank > 1) then {
_updatestr = format ["update:%1:%2:%3", toLower(_type), _rank, _uidplayer]; 
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
 };
//[_type,_rank] remoteExec ["client_fnc_setvariable",_player]; 
_player setVariable [_type, _rank, false];

diag_log format ["Promoted %1 %2", _player, _type]; 
 
