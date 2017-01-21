private["_name","_markers"];

waituntil{visiblemap};

_markers = [];

{
	if ( _x getVariable["dead",FALSE] ) then {
		_marker = createMarkerLocal [format["%1_dead_marker",name _x],visiblePosition _x];
		_marker setMarkerColorLocal "ColorRed";
		_marker setMarkerTypeLocal "loc_Hospital";
		_marker setMarkerTextLocal "Ranny";
		_markers pushBack [_marker,_x];
	};
	if ( _x in currentcop && driver (vehicle _x) isEqualTo _x) then {
		_marker = createMarkerLocal [format["%1_PD_UNIT",name _x],visiblePosition _x];
		_marker setMarkerColorLocal "ColorBlue";
		_marker setMarkerTypeLocal "hd_dot";
		_marker setMarkerTextLocal format["%1",name _x];
		_markers pushBack [_marker,_x];
	};
	if ( _x in currentems && driver (vehicle _x) isEqualTo _x) then {
		_marker = createMarkerLocal [format["%1_EMS_UNIT",name _x],visiblePosition _x];
		_marker setMarkerColorLocal "ColorGreen";
		_marker setMarkerTypeLocal "hd_dot";
		_marker setMarkerTextLocal format["%1",name _x];
		_markers pushBack [_marker,_x];
	};
} foreach PlayableUnits;


while {visibleMap || visibleGPS} do
{
	{
		private["_marker","_unit"];
		_marker = _x select 0;
		_unit = _x select 1;
		
		if(!isNil "_unit") then
		{
			if(!isNull _unit) then
			{
				_marker setMarkerPosLocal (visiblePosition _unit);
			};
		};
		
	} foreach _markers;
	if(!visibleMap) exitWith {};
	uiSleep 0.05;
};
{deleteMarkerLocal (_x select 0);} foreach _markers;	






