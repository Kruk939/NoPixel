/*
File: create evidence
*/
private["_curTarget","_suspect","_victim","_crime"];
_suspect = param [0,ObjNull,[ObjNull]];
_victim = param [1,ObjNull,[ObjNull]];
_crime = param [2];

/*
_vehicle = createVehicle ["Land_Suitcase_F", (player), [], 0, "NONE"];

};

_vehicle setVariable ["evidence", [_suspect, _victim, _crime], true];
_vehicle enablesimulation false;
_vehicle setPos [getPos _vehicle select 0, getPos _vehicle select 1, (getPos _vehicle select 2) + 0.5];

_obj = "Land_ClutterCutter_small_F" createVehicle (getPos _vehicle);
_obj setPos (getPos _vehicle);
_vehicle attachTo [_obj,[0,0,0]];

uiSleep 1200;
deletevehicle _obj;
deletevehicle _vehicle;
*/