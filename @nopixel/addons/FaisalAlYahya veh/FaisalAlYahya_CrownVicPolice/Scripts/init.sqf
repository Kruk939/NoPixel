_car = _this select 0;
if(isNil "_car" || !hasInterface)exitWith{};
[_car] execVM "FaisalAlYahya_CrownVicPolice\scripts\siren.sqf";
[_car] execVM "FaisalAlYahya_CrownVicPolice\scripts\lightbar.sqf";