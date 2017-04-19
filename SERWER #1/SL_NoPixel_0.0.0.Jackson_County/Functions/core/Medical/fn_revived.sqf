maxtime = 0;
deadplayer = false;
im_dead = false; 
closedialog 0;
["set",0.25] call StanLakesideClient_fnc_DoHealth;

sleep 1;
[player,""] remoteExec ["StanLakesideClient_fnc_animSync"];
player switchmove "";
player setVariable ["tf_voiceVolume", 1, true];