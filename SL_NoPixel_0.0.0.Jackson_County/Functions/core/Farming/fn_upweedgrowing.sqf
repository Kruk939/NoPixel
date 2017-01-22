/*
	Author: Unknown edit Kajetan "Kruk" Mruk
	Date: 22.01.2017 (Non-retard Units)
	
	Params:
		0 - String - type of used action
		1 - Object - weed plant object
	Description: This function check if required action meets used action of a player
	Return: nothing
*/
params["_usedAction","_object"];
_requiredOutput = _object getVariable["requiredOutput",""];
_checkFinis = _object getVariable["checkFinish",false];
if(_checkFinis) exitwith { hint "Nie tak szybko!"; };

if(animationState player != "Acts_carFixingWheel") then {
	player playmovenow "Acts_carFixingWheel";  
	player disableAI "anim"; 
};

if(_requiredOutput == _usedAction) then { 
	hint "To chyba podziałało!";
	playSound3D ["CG_Jobs\sounds\woodchop\woodchop1.ogg", player, false, getPosasl player, 2, 1, 15];
} else {
	_quality = _object getVariable ["quality",0];
	_object setVariable ["quality",(_quality - 1)];
	hint "To nie był dobry wybór..!";
	_randomValue = random 30;
	if(_randomValue < 5) exitwith { 
		hint "No cóż... schrzaniłeś!";
		_object setVariable ["growing",false];
		removeAllActions _object;
		deleteVehicle _object;
	};
};
_object setVariable ["checkFinish",true];