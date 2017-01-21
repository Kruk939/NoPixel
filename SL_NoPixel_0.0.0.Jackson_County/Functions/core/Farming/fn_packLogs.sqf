/*
Pack Logs trees by koil
*/

	if( vehSpawned distance player > 15 || isNil {vehSpawned} || isnull vehSpawned ) exitwith { hint "Twoja ciężarówka jest zbyt daleko!"; }; 
	if(totalLogs isEqualTo 23) exitwith { hint "Ładunek jest pełny!"; };
	mylog = createVehicle ["vvv_tronco", position player, [], 0, "NONE"];

	totalLogs = totalLogs + 1;

	if(totalLogs isEqualTo 1) exitwith {
		mylog attachTo [vehspawned, [-1, -3.5, 1.3] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 2) exitwith {
		mylog attachTo [vehspawned, [-0.5, -3.5, 1.3] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 3) exitwith {	
		mylog attachTo [vehspawned, [0, -3.5, 1.3] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 4) exitwith {	
		mylog attachTo [vehspawned, [0.5, -3.5, 1.3] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 5) exitwith {
		mylog attachTo [vehspawned, [1, -3.5, 1.3] ];mylog setdir 90;
	};
	if(totalLogs isEqualTo 6) exitwith {
		mylog attachTo [vehspawned, [-0.8, -3.5, 1.6] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 7) exitwith {
		mylog attachTo [vehspawned, [-0.3, -3.5, 1.6] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 8) exitwith {
		mylog attachTo [vehspawned, [0.3, -3.5, 1.6] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 9) exitwith {
		mylog attachTo [vehspawned, [0.8, -3.5, 1.6] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 10) exitwith {
		mylog attachTo [vehspawned, [-1, -3.5, 1.9] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 11) exitwith {
		mylog attachTo [vehspawned, [-0.5, -3.5, 1.9] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 12) exitwith {
		mylog attachTo [vehspawned, [0, -3.5, 1.9] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 13) exitwith {
		mylog attachTo [vehspawned, [0.5, -3.5, 1.9] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 14) exitwith {
		mylog attachTo [vehspawned, [1, -3.5, 1.9] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 15) exitwith {
		mylog attachTo [vehspawned, [-0.8, -3.5, 2.2] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 16) exitwith {
		mylog attachTo [vehspawned, [-0.3, -3.5, 2.2] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 17) exitwith {
		mylog attachTo [vehspawned, [0.3, -3.5, 2.2] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 18) exitwith {
		mylog attachTo [vehspawned, [0.8, -3.5, 2.2] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 19) exitwith {
		mylog attachTo [vehspawned, [-1, -3.5, 2.5] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 20) exitwith {
		mylog attachTo [vehspawned, [-0.5, -3.5, 2.5] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 21) exitwith {
		mylog attachTo [vehspawned, [0, -3.5, 2.5] ]; mylog setdir 90;
	};
	if(totalLogs isEqualTo 22) exitwith {
		mylog attachTo [vehspawned, [0.5, -3.5, 2.5] ];mylog setdir 90;
	};
	if(totalLogs isEqualTo 23) exitwith {
		mylog attachTo [vehspawned, [1, -3.5, 2.5] ]; mylog setdir 90;
	};