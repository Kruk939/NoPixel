params["_cash"];

hint format["Ukradles %1",_cash];
[_cash] call StanLakesideClient_fnc_addCash;
_chance = random(100);
if(_chance < 95) then {
	[player, currentCursorTarget, "personRobbery"] spawn StanLakesideClient_fnc_createEvidence;
};