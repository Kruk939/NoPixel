
_veh = _this select 0;
if (isNil "_veh") exitwith {};
_tracker1 = (_veh getVariable["tracker1",true]);
_tracker2 = (_veh getVariable["tracker2",true]);
_tracker3 = (_veh getVariable["tracker3",true]);
_war = false;
hint "Szukanie pluskwy... 5 sek.";

if (!(isNull _tracker1)) then {_war = true;};
if (!(isNull _tracker2)) then {_war = true;};
if (!(isNull _tracker3)) then {_war = true;};

player playmove "AinvPknlMstpSnonWnonDnon_medic_1";

uisleep 3;

if (_war) then 
{
	_random = floor(random 100);
	
	if (_random < 80) then 
	{
		hint "Pluskwa usunieta";
		if (!(isNull _tracker1)) then {_veh setvariable ["tracker1",objNull,true];};
		if (!(isNull _tracker2)) then {_veh setvariable ["tracker2",objNull,true];};
		if (!(isNull _tracker3)) then {_veh setvariable ["tracker3",objNull,true];};
		if (!(isNull _tracker1)) then {[_veh] remoteexec ["client_fnc_disTracking2",_tracker1];};
		if (!(isNull _tracker2)) then {[_veh] remoteexec ["client_fnc_disTracking2",_tracker2];};
		if (!(isNull _tracker3)) then {[_veh] remoteexec ["client_fnc_disTracking2",_tracker3];};
	} else
	{
		hint "Nic nie znaleziono...";
	};
} else {hint "Nic nie znaleziono...";};