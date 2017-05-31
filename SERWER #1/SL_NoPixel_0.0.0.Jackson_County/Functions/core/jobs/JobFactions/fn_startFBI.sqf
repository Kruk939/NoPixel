if(isnil "taskrunning") then { taskrunning = false; };

myjob = "FBI";
taskrunning = true;
[] call client_fnc_hudwork;
_fbi = player getvariable "fbi";
player setVariable ["coplevel", _fbi, false];

_items = getunitloadout player;
player setvariable ["lastsave",_items, false];


[] call client_fnc_ChangePolice;