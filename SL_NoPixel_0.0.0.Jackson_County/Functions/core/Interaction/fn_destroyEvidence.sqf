/*
File: destroy evidence
*/
private["_curtarget","_unit"];

_curTarget = currentEvidence;
deleteVehicle _curTarget;
["Zniszczyłeś dowody.", false] call domsg;
