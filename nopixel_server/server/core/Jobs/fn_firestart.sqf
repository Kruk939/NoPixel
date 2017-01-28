params ["_location"]; 
diag_log ["starting fire %1", _location]; 
if(count currentFire > 0) then { 
	[_location] remoteexec ["client_fnc_fireStart",-2]; 
	[_location] remoteexec ["client_fnc_jobMarker", currentFire];
}; 
