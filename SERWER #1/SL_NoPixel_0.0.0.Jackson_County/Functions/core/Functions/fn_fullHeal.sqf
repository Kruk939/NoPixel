im_dead = false;
player setvariable["playerInjuries",[0,0,0,0,0,0,0,0,0,0,0],true];
player setvariable["playerInjuriesToUpdate",[0,0,0,0,0,0,0,0,0,0,0],false]; 
[player,""] remoteExec ["StanLakesideClient_fnc_animSync"];
["set",0] call StanLakesideClient_fnc_DoHealth;
player setVariable ["tf_voiceVolume", 1, true];
lastsync = time;
["add","battery",200] call StanLakesideClient_fnc_sustain;
[player, "statuses", (player getvariable "statuses")] remoteExec ["StanLakesideServer_fnc_setVariable",2];