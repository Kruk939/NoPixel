params["_length","_reason","_player","_sendToJail","_uid"];
 
_updatestr = format ["updatePlayerPrisonTimeReason:%1:%2:3", _length, _reason, _uid]; 
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
sleep 0.15;
//_updatestr = format ["updatePrisonReason:%1:%2", _reason, _uidplayer]; 
//_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;  
 
 
if(_sendtoJail) then { 
[_length, _reason] remoteExec ["client_fnc_jailsetup",_player]; 
}; 
