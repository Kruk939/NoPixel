AcetoneArray = ["UWAGA: Substancja jest zbyt ciemna!","UWAGA: Substancja wydaje się być czarna!","UWAGA: Substancja jest zbyt jaskrawa!"];
PseudoArray = ["UWAGA: Substancja traci kolor!","UWAGA: Substancja jest mętna!","UWAGA: Substancja jest prawie przeźroczysta!"];
CoolArray = ["UWAGA: Wydziela się zbyt dużo pary!","UWAGA: Zbiornik przypala stół!","UWAGA: Robi się gorąco!","UWAGA: Substancja się pieni!"];
HeatArray = ["UWAGA: Substancja nie może przedostać się przez rurkę!","UWAGA: Substancja jest bardzo gęsta!","UWAGA: Substancja wygląda jak klej!"];
ReleaseArray = ["UWAGA: Substancja płynie zbyt szybko!","UWAGA: Para zaczyna się ulatniać!","UWAGA: Fiolki wyglądają na zamglone!"];

_count = 0;
checkFinish = false;
while{_count < 10 && cookingMeth} do {
	checkFinish = true;
	sleep 10;
	checkFinish = false;
	_randomValue = round(random 5);
	if(_randomValue == 1 || _randomvalue == 0) then { requiredOutput = "Acetone"; _message = AcetoneArray call BIS_fnc_selectRandom; hint _message; };
	if(_randomValue == 2) then { requiredOutput = "Pseudo"; _message = PseudoArray call BIS_fnc_selectRandom; hint _message; };
	if(_randomValue == 3) then { requiredOutput = "Cool"; _message = CoolArray call BIS_fnc_selectRandom; hint _message; };
	if(_randomValue == 4) then { requiredOutput = "Heat"; _message = HeatArray call BIS_fnc_selectRandom; hint _message; };
	if(_randomValue == 5) then { requiredOutput = "Release"; _message = ReleaseArray call BIS_fnc_selectRandom; hint _message; };
	sleep 30;	
	_count = _count + 1;
};
mydrugvalue = mydrugvalue - totalskills;
player removeaction myAction1;
player removeaction myAction2;
player removeaction myAction3;
player removeaction myAction4;
player removeaction myAction5;
player removeaction myActionPack;

if(isNull mydt) exitwith {};

_randomValue = round(random 5) + 1;

if(myDrugValue < 50) then { myDrugValue = 50; };
_item = format["CG_MethBag%1", myDrugValue];
_msg = format["Ugotowałeś %1 worków metamfetaminy",_randomvalue];
[_msg, true] spawn domsg;
//hint format["Ugotowałeś %1 worków metamfetaminy!",_randomvalue];

while {_randomValue > 0} do { player additem _item; _randomValue = _randomValue - 1; };

deletevehicle myDT;

player additem "NP_DrugTable";

/*

DO DODANIA W PÓŹNIEJSZEJ FAZIE ROZWOJU SERWERA

_chance = round(random(100));

if(_chance > 98) then {
	["O nie! Zepsułem stół i nic z niego nie zostało!",false] spawn domsg; 
 };
 
 if(_chance < 98) then {
 ["Składam stół i spierdalam!",false] spawn domsg; 
 player additem "NP_DrugTable";
 };*/