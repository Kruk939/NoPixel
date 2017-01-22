params["_object"];

_waterArray = ["UWAGA: Liście opadly!","UWAGA: Roslina zwiedla!"];
_pruneArray = ["UWAGA: Roslina chyba jest za duza!","UWAGA: Roślina wygląda na przerośniętą!"];
_coolArray = ["UWAGA: Na liściach widać brązowe plamy!","UWAGA: Roślina ma za dużą temperaturę!"];
_heatArray = ["UWAGA: Roslina gnije!"];
_turnoverArray = ["UWAGA: Trzeba przerzucić glebę!"];

_count = 0;
_object setVariable ["checkFinish", false];
while{_count < 10 && (_object getVariable ["growing",false])} do {
	_object setVariable ["checkFinish", true];
	sleep 10;
	_object setVariable ["checkFinish", false];
	_randomValue = round(random 5);
	if(_randomValue == 1 || _randomvalue == 0) then { _object setVariable["requiredOutput", "Water"]; _message = _waterArray call BIS_fnc_selectRandom; hint _message; };
	if(_randomValue == 2) then { _object setVariable["requiredOutput", "Prune"]; _message = _pruneArray call BIS_fnc_selectRandom; hint _message; };
	if(_randomValue == 3) then { _object setVariable["requiredOutput", "Cool"]; _message = _coolArray call BIS_fnc_selectRandom; hint _message; };
	if(_randomValue == 4) then { _object setVariable["requiredOutput", "Heat"]; _message = _heatArray call BIS_fnc_selectRandom; hint _message; };
	if(_randomValue == 5) then { _object setVariable["requiredOutput", "Turnover"]; _message = _turnoverArray call BIS_fnc_selectRandom; hint _message; };
	sleep 20;	
	_count = _count + 1;
	_object setpos [(getpos _object select 0),(getpos _object select 1),(getpos _object select 2)+0.15];
};
removeAllActions _object;
if(isNull _object) exitwith {};
_randomValue = round(random 3) + 1;
_quality = _object getVariable["quality",0];


if(_quality < 0) then { _quality = 1; };

_item = format["CG_WeedBag%1", _quality];

if(player distance [1409.98,5740.65,0.00143814] < 400) then { 
	_randomValue = round(random 2) * 2;
};

hint format["Wychodowałeś %1 paczek zioła!",_randomValue];

while {_randomValue > 0} do { player additem _item; _randomValue = _randomValue - 1; };
_point = weedPlantArray find _object;
if(_point >= 0) then {weedPlantArray deleteAt _point };

deletevehicle _object;
player additem "NP_GrowingPlot";
