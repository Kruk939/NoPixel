_crew = crew (basket);
{
	[_x,vehicle player] remoteExec ["StanLakeside_fnc_pulloutveh",_x];
	waituntil {vehicle _x == _x}; 
	[vehicle player] remoteExec ["StanLakeside_fnc_moveIn",_x];
} foreach _crew;
