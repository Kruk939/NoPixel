if(isnil "taskrunning") then { taskrunning = false; };

myjob = "Mafia";
taskrunning = true;
[] call client_fnc_hudwork;
player setVariable ["coplevel", 1, false];
//[] call client_fnc_jobEnd;

