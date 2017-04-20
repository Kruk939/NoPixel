if(isnil "taskrunning") then { taskrunning = false; };

myjob = "EMS";
taskrunning = true;
[] call StanLakeside_fnc_hudwork;

player setVariable ["coplevel", 1, false];

_items = getunitloadout player;
player setvariable ["lastsave",_items, false];
[] call StanLakeside_fnc_ChangePolice;
//[] call StanLakeside_fnc_jobEnd;
