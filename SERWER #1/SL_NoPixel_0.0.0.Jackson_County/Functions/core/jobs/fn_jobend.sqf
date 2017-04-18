if(myJob IN ["Fire","EMS"]) then {
	_playerGear = player getVariable "lastSave";
	player setunitloadout _playerGear;
};
if (myjob == "Cop") then {
	_playerGear = player getVariable "lastSave";
	player setunitloadout _playerGear;
	[player,objNull,11,format ["%1 zakończył służbę", name player],""] remoteExec ["StanLakesideServer_fnc_copLog", 2];
};

[player,objNull,4,format ["%1 zakończył pracę %2", name player, myjob],myjob] remoteExec ["StanLakesideServer_fnc_jobLog", 2];
myjob = "none";
taskrunning = false;
dispatch = false;
playertasks = [];
deletemarkerlocal format["job%1",getPlayerUID player];

player setVariable ["coplevel", 0, false];

[player] remoteExec ["StanLakesideServer_fnc_quitJob",2];

if(!isNil "vehspawned") then {
	if(!isNull vehspawned) then {
		_players = crew (vehspawned);
		if(count _players == 0) then {
			{ 
					detach _x;
					deletevehicle _x; 
			} forEach attachedObjects vehspawned;
			deletevehicle vehspawned;
		};
	};
};
[] call StanLakeside_fnc_hudwork;
[] spawn StanLakeside_fnc_tryhangup;

[getpos player,"text to display","destroy"] spawn StanLakeside_fnc_hudHelper;