
_veht = _this select 0;

if (isNil "_veht") exitwith {};

player playmove "AinvPknlMstpSnonWnonDnon_medic_1";

_veht setvariable ["tracking",false,false];
//_veht setvariable ["tracker1",objNull,true];

hint format["Pluskwa zostala usunieta"];
//_veh2 = name _veht;

//hint format["Pluskwa z %1 została usunięta", _veh2];