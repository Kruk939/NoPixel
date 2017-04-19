_player = _this select 0;

if(player distance myhouse < 100) then {

	[player] remoteExec ["StanLakesideServer_fnc_retreivehouseCop",2];
	if (myjob == "cop") then {
	[_player,player,12,format ["%1 przeszukał dom %2", name _player, name player],""] remoteExec ["StanLakesideServer_fnc_copLog", 2];
	};

} else {
	[myhouse,"Lokalizacja domu","Job"] remoteexec ["StanLakesideClient_fnc_hudHelper",_player];
};