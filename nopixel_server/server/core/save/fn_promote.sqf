 
_type = _this select 0; 
_player = _this select 1; 
_rank = _this select 2; 
 
_uidPlayer = getplayerUID _player; 
 
/*if (_rank > 1) then {
_updatestr = format ["update:%1:%2:%3",_type,_rank,_uidplayer]; 
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
 };
[_type,_rank] remoteExec ["client_fnc_setvariable",_player]; */

if (_type == "cop") then {
	if (_rank > 1) then {
	_updatestr = format ["promoteCop:%1:%2",_rank,_uidplayer]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
	_cop = "cop";
	//_player setVariable [_cop, _rank, false];
	[_cop,_rank] remoteExec ["client_fnc_setvariable",_player];
	diag_log format ["Promoted %1 Cop to rank %2", _player, _rank]; 
	};
};
if (_type == "ems") then {
	if (_rank > 1) then {
	_updatestr = format ["promoteEms:%1:%2",_rank,_uidplayer]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
	_ems = "ems";
	//_player setVariable [_ems, _rank, false];
	[_ems,_rank] remoteExec ["client_fnc_setvariable",_player];
	diag_log format ["Promoted %1 Ems to rank %2", _player, _rank]; 
	};
};
if (_type == "fire") then {
	if (_rank > 1) then {
	_updatestr = format ["promoteFire:%1:%2",_rank,_uidplayer]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
	_fire = "fire";
	//_player setVariable [_fire, _rank, false];
	[_fire,_rank] remoteExec ["client_fnc_setvariable",_player];
	diag_log format ["Promoted %1 Fire to rank %2", _player, _rank]; 
	};
};
if (_type == "mafia") then {
	if (_rank > 1) then {
	_updatestr = format ["promoteMafia:%1:%2",_rank,_uidplayer]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
	_mafia = "mafia";
	//_player setVariable [_mafia, _rank, false];
	[_mafia,_rank] remoteExec ["client_fnc_setvariable",_player];
	diag_log format ["Promoted %1 Mafia to rank %2", _player, _rank]; 
	};
};
if (_type == "legal") then {
	if (_rank > 1) then {
	_updatestr = format ["promoteLegal:%1:%2",_rank,_uidplayer]; 
	_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
	_legal = "legal";
	//_player setVariable [_legal, _rank, false];
	[_legal,_rank] remoteExec ["client_fnc_setvariable",_player];
	diag_log format ["Promoted %1 Legal to rank %2", _player, _rank]; 
	};
};

//diag_log format ["Promoted %1 %2 to rank %3", _player, _type,_rank]; 
 
