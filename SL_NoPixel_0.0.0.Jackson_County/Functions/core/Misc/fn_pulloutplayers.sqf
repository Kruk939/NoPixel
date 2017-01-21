private["_crew"];
_crew = crew CurrentCursorTarget;
_veh = CurrentCursorTarget;

if((side player isEqualTo civilian && (_veh in current_cars)) || myjob isEqualTo "Cop" || myJob isEqualTo "Mafia" || myJob isEqualTo "EMS" || myJob isEqualTo "Fire") then {
	
	{
		[_x] remoteExecCall ["client_fnc_pulloutVeh",_x];
	} foreach _crew;

};