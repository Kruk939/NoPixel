params["_cash"];

hint format["Ukradles %1",_cash];
[_cash] call StanLakeside_fnc_sl_addCash_secure;
_chance = random(100);
if(_chance < 95) then {
	[player, currentCursorTarget, "personRobbery"] spawn StanLakeside_fnc_createEvidence;
};