enableSaving [false, false];

if (isServer) then { 
	[] execVM "InitServer.sqf";
} else {
	[] execVM "InitLocal.sqf";
};

//Radia
tf_west_radio_code = "";
tf_east_radio_code = tf_west_radio_code;
tf_guer_radio_code = tf_west_radio_code;
tf_civ_radio_code = tf_west_radio_code;

//Cmentarz	
[] spawn
{
	life_koil_hh = 0;
	while{true}do
	{
	if (sunOrMoon == 0 && life_koil_hh != 1) then {
		_resourceZones = ["Spooky"];
		_zone = "Spooky";
		_straszymy = true;
		{
			if(player distance (getMarkerPos _x) > 150) then {_zone = "";};
		} foreach _resourceZones;
		if(_zone != "Spooky") then {_straszymy = false;};
		if (_straszymy) then {
		[] spawn client_fnc_cmentarz
		};
	};
	sleep 30;
	};