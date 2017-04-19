if(isnil "taskrunning") then { taskrunning = false; };

myjob = "Mafia";
taskrunning = true;
[] call StanLakesideClient_fnc_hudwork;
//[] call StanLakesideClient_fnc_jobEnd;

