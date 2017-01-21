_crew = crew (basket);
{
	[_x,vehicle player] remoteExec ["client_fnc_pulloutveh",_x];
	waituntil {vehicle _x isEqualTo _x}; 
	[vehicle player] remoteExec ["client_fnc_moveIn",_x];
} foreach _crew;
