/*
	Author: Kajetan "Kruk" Mruk
	Date: 22.01.2017 (Non-retard Units)
	
	Params:
		1 - Object - weed plant object
	Description: Function that cuts down plant and gives player weed
	Return: nothing
*/

params["_object"];
_randomValue = round(random 3) + 1;
_quality = _object getVariable["quality",0];
if(_quality <= 0) then { _quality = 1; };
_item = format["CG_WeedBag%1", _quality];

if(player distance [1409.98,5740.65,0.00143814] < 400) then { 
	_randomValue = round(random 2) * 2;
};

_msg = format["Sciąłeś %1 paczek zioła!",_randomValue];
[_msg, false] spawn domsg;
while {_randomValue > 0} do { player additem _item; _randomValue = _randomValue - 1; };
_point = weedPlantArray find _object;

if(_point >= 0) then {weedPlantArray deleteAt _point };
deletevehicle _object;
player additem "NP_GrowingPlot";