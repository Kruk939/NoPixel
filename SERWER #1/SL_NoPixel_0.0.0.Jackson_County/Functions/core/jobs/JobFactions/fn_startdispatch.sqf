//[_location] remoteExec ["StanLakeside_fnc_startSecurity",_player];
//[getpos player,] remoteExec ["StanLakeside_fnc_startGarbage",_player];
// use lexus with directionals only.

private ["_warning","_JobBase"];
if(!dispatch) then {
	dispatch = true;
	[] spawn {
		playertasks = [];

		_warnings = 0;
		while{dispatch} do {
			uisleep 180;
			paycheck = paycheck + 10;
		};
		//[player] remoteExec ["StanLakesideServer_fnc_quitDispatch",2];
	};
};
