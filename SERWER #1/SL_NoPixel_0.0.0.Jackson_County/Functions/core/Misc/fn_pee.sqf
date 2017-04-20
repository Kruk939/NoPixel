player playMove "Acts_AidlPercMstpSlowWrflDnon_pissing" ;
sleep 3.5;
_nearest = player nearEntities ["man", 30]; 

[player] remoteexec ["StanLakeside_fnc_pee2",_nearest];

["Add","unhealthiness",100] remoteexec ["StanLakeside_fnc_sustain",currentcursortarget];

	["Remove","Karma",30] call StanLakeside_fnc_sustain;

[player,currentcursortarget,12,format ["%1 nasikał na %2", name player, name currentcursortarget],""] remoteExec ["StanLakesideServer_fnc_actionLog", 2];