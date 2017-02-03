_pos = _this select 0;
_markername = format["job%1",getPlayerUID player];
deletemarkerlocal _markername;
_marker = createMarkerlocal [_markername, _pos];
_marker setMarkerShapelocal "ICON";
_marker setMarkerTypelocal "hd_dot";
_marker setMarkerColorlocal "ColorOrange";

if(myjob == "Cop") then {
	[_pos,"Uruchomiony alarm!","Job"] spawn client_fnc_hudHelper;
	_marker setMarkerTextlocal "911: LOKALIZACJA URUCHOMIONEGO ALARMU!";
} else {
	if(myjob == "Fire") then {
		[_pos,"Pożar!","Job"] spawn client_fnc_hudHelper;
		_marker setMarkerTextlocal "911: LOKALIZACJA POŻARU!";
	} else {
		[_pos,"Zadanie","Job"] spawn client_fnc_hudHelper;
		_marker setMarkerTextlocal "Miejsce zadania";
	};
};
