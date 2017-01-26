/*
File: destroy evidence
*/
private["_curtarget","_unit"];

_curTarget = cursorTarget;
deleteVehicle _curTarget;
["Zniszczyłeś dowody.", false] call domsg;
