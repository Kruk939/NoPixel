_shop = cursorObject;
_time = time;
if(typeOf _shop in shopNameList) then {
	_lastRobbed = _shop getVariable ["lastRobbed",0];
	if(_time - _lasRobbed < 600) exitWith { ["Ten sklep został niedawno okradziony", false] call domsg; };
	_amount = round(random(1000)) + 500;
	[_amount] spawn client_fnc_addCash;
	[format["Okradłeś sklep, zabrałeś $%1", _amount], false] call domsg;
	_chance = random(100);
	if(_chance < 80) then {
		[player] spawn client_fnc_robberyCall;
	};
	_shop setVariable ["lastRobbed",time, true];
};