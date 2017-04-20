params ["_vehspawn","_endmission","_mafia","_veh"];

current_cars pushback _veh;

[_vehspawn,"Transport narkotykowy","Location"] spawn StanLakeside_fnc_hudHelper;

endOfmission = _endmission;
missionVehicle = _veh;

while {true} do {

	if( player distance _vehspawn < 15 || speed _veh > 10 || isNull _veh ) exitwith {
		[getpos player,"text to display","destroy"] remoteexec ["StanLakeside_fnc_hudHelper",_mafia];
		[_endmission,"Transport narkotykowy porzucony","Location"] spawn StanLakeside_fnc_hudHelper;
	};
	sleep 1;
};

while {true} do {
	if( _veh distance _endmission < 15 || isNull _veh ) exitwith {
		[getpos player,"text to display","destroy"] remoteexec ["StanLakeside_fnc_hudHelper",_mafia];
	};
	sleep 1;
};


