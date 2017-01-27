params["_cash"];

hint format["Ukradles %1",_cash];
[_cash] call Client_fnc_addCash;
_chance = random(100);
if(_chance < 95) then {
	[player, cursorTarget, "kradzież"] spawn client_fnc_createEvidence;
};