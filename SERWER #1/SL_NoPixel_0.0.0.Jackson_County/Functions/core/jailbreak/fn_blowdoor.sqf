if(typeof cursorobject == "Land_zac_prison_wall_gate") then {
	_door = cursorobject;
	[player, _door, "blowDoor"] spawn StanLakesideClient_fnc_createEvidence;
	player playmove "vvv_anim_lockpick";
	playSound3D ["CG_Jobs\sounds\exp\exp.ogg", player, false, getPosASL _door, 5, 1, 35]; 
	uisleep 5;
	playSound3D ["CG_Jobs\sounds\exp\exp.ogg", player, false, getPosASL _door, 5, 1, 35]; 
	uisleep 5;
	_door allowdamage false;
	uisleep 3;
	"R_60mm_HE" createvehicle (getpos _door);
	_door allowdamage true;
	_door animate ["door_1",5];
	[(getpos player)] remoteexec ["StanLakesideServer_fnc_firestart",2];
	["Remove","Karma",100] call StanLakesideClient_fnc_sustain;
	
	[getpos _door] remoteexec ["StanLakesideClient_fnc_jobMarker", currentCop];
	["911: URUCHOMIŁ SIĘ ALARM, WYWAŻONO GŁÓWNE DRZWI DO WIĘZIENIA!", false] remoteExec ["domsg", currentCop]; 
	playSound3D ["CG_Jobs\sounds\jailbreak\jailAlarm.ogg", _fenceToOpen, false, (getposasl _fenceToOpen), 1.7, 1, 10235];
};