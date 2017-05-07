client_fnc_towvehicle = {
    _myVeh = vehicle player;
    _car = (nearestObjects [_myVeh, ["Car","Truck"], 15]) select 1; 
	if (vehicle player == player) exitWith {hint "You have to be in your tow truck!"};
	 if (isNil "_car") exitWith {hint"No vehicle found!";};
	 if ({alive _x} count crew _car > 0)exitWith {hint "That vehicle is not empty!";};
	if (speed _myVeh > 1) exitWith {hint "You must be idle."};
	vehicle player allowDamage false;
	_memes = 0;
	if (typeOf _car == "LandRoverPD_02" OR typeOf _car == "LandRoverPD_StateTrooper" OR typeOf _car == "LandRoverPD_03") then {   _car attachTo [(vehicle player), [0,-4,0.9] ]; _memes = 1;  };
	if (typeOf _car == "red_kawasaki_10_p_p_sheriff") then {   _car attachTo [(vehicle player), [0,-4,0.5] ]; _memes = 1;  };
	if (typeOf _car == "Jonzie_Box_Truck") then {   _car attachTo [(vehicle player), [0,-3,0.4] ];  _memes = 1;  };
	if (typeOf _car == "ivory_veyron") then {   _car attachTo [(vehicle player), [0,-3,1.6] ];  _memes = 1;  };
	if (typeOf _car == "ivory_f1") then {   _car attachTo [(vehicle player), [0,-3,1.55] ]; _memes = 1;  };
	if (typeOf _car == "ivory_mp4") then {   _car attachTo [(vehicle player), [0,-3,1.74] ]; _memes = 1;  };
	//Check to see if they've found preset coords
	if (_memes == 0) then { _car attachTo [(vehicle player), [0,-4,1] ]; }; //attach to some shitty coords that may/may not bug until i do this a good way (and im not lazy)
	 
	 _myVeh setVariable ["Tow", _car, true]; //set variable.... stop people dropping when they not towing etc.
	 sleep 1;
	 vehicle player allowDamage true;
};

client_fnc_untowvehicle = {
    _veh = vehicle player;
	_car = _veh getVariable ["Tow", objNull];	
	if (isNull _car) exitWith {hint "No car attached"};
	vehicle player allowDamage false;
	detach _car;
	waitUntil { isNull attachedTo _car };
	_car setPos (_veh modelToWorld [0, -11, 3]);
	_veh setVariable["Tow", objNull, true];
	vehicle player allowDamage true;
};