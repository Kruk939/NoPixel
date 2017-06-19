private["_veh","_radardir","_Beam","_Beam2","_tag","_tag2","_dbest","_tagbest","_getspeed1","_dfast","_tagfast","_getspeed2","_speederid","_speederspeed"];
_veh = _this select 0;
_radardir ="";

while {alive _veh} do {
	if (!IsNull driver _veh && driver _veh == player && _veh animationPhase "radar" > 0) then {

			_speed = 0;
			_info = "";
			_vehicle = [];
			_owner =[];
			_cars = [];
			{
				if (alive _x) then{
					_cars set [(count _cars),_x];
				};
			} forEach nearestObjects [_veh,["Car"],20];


			if(count _cars < 2) exitWith{};
				_vehicle = (_cars select 1);
				_type = getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName");

				if(count (crew (_vehicle)) == 0) exitWith {};

				_speed = round speed (_vehicle);

				_owner = _vehicle getVariable ["plate", "No plate"];

				if(_speed < 30) exitWith {};

	// Format speed & owner below here
	if(_speed > 120) then {
	_info = format ["<t color='#5A80EB'><t size='1.5'><t align='center'>Radar<br/><t color='#FF0000'><t align='center'><t size='1'>Speed %1 km/h", _speed];
	}
	else
	{
	_info = format ["<t color='#5A80EB'><t size='1.5'><t align='center'>Radar<br/><t color='#33CC33'><t align='center'><t size='1'>Speed %1 km/h", _speed];
	};

	if(isNil {_owner} || _speed > 220) then
	{
	_info = _info + format ["<br/><t color='#FFD700'><t size='1.5'><t align='center'>plate<br/><t color='#33CC33'><t align='center'><t size='1.8'> Borrosa!"];
	}
	else
	{_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>plate<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _owner];

	};
	_info = _info + format ["<br/><t color='#5A80EB'><t size='1.5'><t align='center'>model<br/><t color='#33CC33'><t align='center'><t size='1'> %1", _type];

	hint parseText _info;
	sleep 2;
	} else {

	waitUntil {sleep 3; (!IsNull driver _veh && driver _veh == player && _veh animationPhase "radar" > 0 && getdammage _veh < 0.7)};
	};
};
exit;