disableSerialization;

latestwanted = _this select 0;
latestwanted = call compile format["%1", latestwanted];

diag_log "----------- wantedproduce";
diag_log latestwanted;
diag_log "----------- wantedproduce";

_display = findDisplay 5111;
_list = _display displayCtrl 911;

lbClear _list;

{
	//caseID, suspectName, suspectUID, officerName, officerUID, charges, status, evidence
	_ID = _x select 0;
	_criminal = _x select 1;
	_wantedLevel = _x select 6;
	_list lbAdd format["ID: %1 - Posz.: %2 - Poziom: %3", _ID, _criminal, _wantedlevel];
	_list lbSetdata [(lbSize _list)-1,str(_x)];
} foreach latestwanted;
_list = _display displayCtrl 1120;
lbClear _list;
{
	_side = switch(side _x) do {case west: {"Cop"}; case east : {"Civ"}; case civilian : {"Civ"}; case independent : {"Medic"}; default {"Unknown"};};	
	_list lbAdd format["%1 - %2", name _x,_side];
	_list lbSetdata [(lbSize _list)-1,str(_x)];
} foreach playableUnits;
