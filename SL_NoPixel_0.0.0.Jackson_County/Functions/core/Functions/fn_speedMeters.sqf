while{true} do
    {
	if (myjob in ["Cop","EMS","Fire"]) then {

	} else {
	    _vehicle = vehicle player;
		if(vehicle player != player && driver (vehicle player) isEqualTo player && ((_vehicle isKindOf "Car") || (_vehicle isKindOf "Motorcycle") || (_vehicle isKindOf "Bicycle") || (_vehicle isKindOf "Motorbike"))) then {

			if((player distance (getMarkerPos "speed_cam_1")) < 30 || (player distance (getMarkerPos "speed_cam_2")) < 30 || (player distance (getMarkerPos "speed_cam_3")) < 30 || (player distance (getMarkerPos "speed_cam_4")) < 30) then {
				_vel = speed player;
				if(_vel > 90 && _vel < 140) then {
					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;
					uiSleep 0.1;
					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;

                    ["Informacja","Otrzymałeś $1500 mandatu za przekraczanie prędkosci w mieście",[255,69,0,1],""] call Client_fnc_showNotification;
					//["Otrzymałeś $1500 mandatu za przekraczanie prędkosci w mieście", false] spawn domsg;
					_check = [2, 1500] call Client_fnc_checkMoney;
					if (_check) then {[1500] call Client_fnc_removeBank;};
					};

				if(_vel > 139 && _vel < 200) then {
					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;
					uiSleep 0.1;
					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;

                    ["Informacja","Otrzymałeś $3000 mandatu za nadmierną predkość w mieście",[255,69,0,1],""] call Client_fnc_showNotification;
					//["Otrzymałeś $3000 mandatu za nadmierną predkość w mieście", false] spawn domsg;
					_check = [2, 3000] call Client_fnc_checkMoney;
					if (_check) then {[3000] call Client_fnc_removeBank;};
					};
				if(_vel > 199) then {

					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;
					uiSleep 0.1;
					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;

                    ["Informacja","Otrzymałeś mandat w wysokosci $15000 oraz odebrano Ci prawo jazdy za zapierdalanie po mieście",[255,69,0,1],""] call Client_fnc_showNotification;
					//["Otrzymałeś mandat w wysokosci $10000 oraz odebrano Ci prawo jazdy za zapierdalanie po mieście", false] spawn domsg;
					_check = [2, 15000] call Client_fnc_checkMoney;
					if (_check) then {[15000] call Client_fnc_removeBank;};
                    ["RemoveQuiet","license",1] call client_fnc_sustain;
					};
				};

			};
			if((player distance (getMarkerPos "speed_cam_5")) < 30 || (player distance (getMarkerPos "speed_cam_6")) < 30 || (player distance (getMarkerPos "speed_cam_7")) < 30 || (player distance (getMarkerPos "speed_cam_8")) < 30 || (player distance (getMarkerPos "speed_cam_9")) < 30 || (player distance (getMarkerPos "speed_cam_10")) < 30 || (player distance (getMarkerPos "speed_cam_11")) < 30 || (player distance (getMarkerPos "speed_cam_12")) < 30 || (player distance (getMarkerPos "speed_cam_13")) < 30 || (player distance (getMarkerPos "speed_cam_14")) < 30 || (player distance (getMarkerPos "speed_cam_15")) < 30 || (player distance (getMarkerPos "speed_cam_16")) < 30 || (player distance (getMarkerPos "speed_cam_17")) < 30) then {
				_vel = speed player;
				if(_vel > 159 && _vel < 224) then {

					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;
					uiSleep 0.1;
					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;

                    ["Informacja","Otrzymałes $3000 mandatu za nadmierną predkość",[255,69,0,1],""] call Client_fnc_showNotification;
					//["Otrzymałes $3000 mandatu za nadmierną predkość", false] spawn domsg;
					_check = [2, 3000] call Client_fnc_checkMoney;
					if (_check) then {[3000] call Client_fnc_removeBank;};
					};

				if(_vel > 225) then {

					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;
					uiSleep 0.1;
					"colorCorrections" ppEffectEnable true;
					"colorCorrections" ppEffectAdjust [1, 15, 0, [0.5, 0.5, 0.5, 0], [0.0, 0.5, 0.0, 0.6],[0.3, 0.3, 0.3, 0.05]];
					"colorCorrections" ppEffectCommit 0;
					uiSleep 0;
					"colorCorrections" ppEffectAdjust [1, 1, 0, [1, 1, 1, 0.0], [1, 1, 1, 0.6],  [1, 1, 1, 0.6]];
					"colorCorrections" ppEffectCommit 0.05;
					uiSleep 0.05;
					"colorCorrections" ppEffectEnable false;

                    ["Informacja","Otrzymałeś $15000 mandatu oraz odebrano Ci prawo jazdy za zapierdalnie poza miastem",[255,69,0,1],""] call Client_fnc_showNotification;
					//["Otrzymałeś $1500 mandatu oraz odebrano Ci prawo jazdy za zapierdalnie poza miastem", false] spawn domsg;
					_check = [2, 15000] call Client_fnc_checkMoney;
					if (_check) then {[15000] call Client_fnc_removeBank;};
                    ["RemoveQuiet","license",1] call client_fnc_sustain;
					};

				};
				uiSleep 1;
			};
	};