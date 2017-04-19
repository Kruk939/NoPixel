_crew = crew (basket);
{
	[_x,vehicle player] remoteExec ["StanLakesideClient_fnc_pulloutveh",_x];
	waituntil {vehicle _x == _x}; 
	[vehicle player] remoteExec ["StanLakesideClient_fnc_moveIn",_x];
} foreach _crew;
