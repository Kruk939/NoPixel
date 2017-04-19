//[_location] remoteExec ["StanLakeside_fnc_startSecurity",_player];
//[getpos player,] remoteExec ["StanLakeside_fnc_startGarbage",_player];
// use lexus with directionals only.
if(myjob != "none") exitwith { hint "Masz już pracę!"; };

if(isnil "taskrunning") then { taskrunning = false; };

myjob = "LegalAid";
[] call StanLakeside_fnc_hudwork;
private ["_warning","_JobBase"];
if(!taskrunning) then {

	[] spawn {
		playertasks = [];
		taskrunning = true;

		_warnings = 0;
		while{taskrunning && myjob == "LegalAid"} do {
			uisleep 180;
			paycheck = paycheck + 30;
		};
		if(myjob == "LegalAid") then { [] call StanLakeside_fnc_jobEnd; };
	};
};
player setVariable ["coplevel", 1, false];