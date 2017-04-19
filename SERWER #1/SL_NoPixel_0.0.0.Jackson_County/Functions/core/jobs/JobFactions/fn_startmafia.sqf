if(isnil "taskrunning") then { taskrunning = false; };

myjob = "Mafia";
taskrunning = true;
[] call StanLakeside_fnc_hudwork;
//[] call StanLakeside_fnc_jobEnd;

