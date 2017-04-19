if(isnil "taskrunning") then { taskrunning = false; };

myjob = "Fire";
taskrunning = true;
[] call StanLakesideClient_fnc_hudwork;

player setVariable ["coplevel", 1, false];

_items = getunitloadout player;
player setvariable ["lastsave",_items, false];
[] call StanLakesideClient_fnc_ChangePolice;
//[] call StanLakesideClient_fnc_jobEnd;
