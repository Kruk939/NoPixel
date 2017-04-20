//[_location] remoteExec ["StanLakeside_fnc_startSecurity",_player];
//[getpos player,] remoteExec ["StanLakeside_fnc_startGarbage",_player];
// use lexus with directionals only.
if(myjob != "none") exitwith { hint "Masz już pracę!"; };

if(isnil "taskrunning") then { taskrunning = false; };

myjob = "Judge";
[] call StanLakeside_fnc_hudwork;
private ["_warning","_JobBase"];
if(!taskrunning) then {

	[] spawn {
		playertasks = [];
		taskrunning = true;

		_warnings = 0;
		while{taskrunning && myjob == "Judge"} do {
			uisleep 180;
			paycheck = paycheck + 120;
		};
		if(myjob == "Judge") then { [] call StanLakeside_fnc_jobEnd; };
	};
};
player setVariable ["coplevel", 1, false];