disableSerialization;
if(!dialog) then {	createdialog "job_update"; };
uisleep 0.05;
_display = findDisplay 9999;
_list = _display displayCtrl 9001;
lbClear _list;
//_jobs = _this select 0;

_jobs = [];

if(count currentMailmen < 3) then {
_Jobs pushback "Kurier Fedex"; 
};

if(count currentSecurity < 2) then {
_Jobs pushback "Ochrona"; 
};

if(count currentTrashman < 3) then {
_Jobs pushback "Wywoz smieci"; 
};

if(count currentNewsMan < 3) then {
_Jobs pushback "Reporter wiadomosci"; 
};

if(count currentRepairmen < 7) then {
_Jobs pushback "Mechanik"; 
};

if(count currentTaxiDrivers < 7) then {
_Jobs pushback "Taksowkarz"; 
};
if(_jobs isequalto []) then { _jobs = ["Brak dostępnych prac"]; };

{
	_list lbAdd format["Praca: %1",_x];
	_list lbSetdata [(lbSize _list)-1,str(_x)];
} foreach _jobs;

_list lbAdd "Praca: Drwal";
_job = "Wood Logging";
_list lbSetdata [(lbSize _list)-1,str(_job)];

hint "Prace uprawne wymagają plecaka - Większość prac udostępnia Ci pojazd firmowy. Skorzystaj z niego naciskając Windows, a następnie wybierz odpowiednią opcję.";

