disableSerialization;
if(!dialog) then {	createdialog "job_update"; };
uisleep 0.05;
_display = findDisplay 9999;
_list = _display displayCtrl 9001;
lbClear _list;
//_jobs = _this select 0;

_jobs = [];

if(count currentMailmen < 3) then {
_Jobs pushback ["Kurier Fedex","mail"]; 
};

if(count currentSecurity < 2) then {
_Jobs pushback ["Ochrona","security"]; 
};

if(count currentTrashman < 3) then {
_Jobs pushback ["Wywóz śmieci","trashman"]; 
};

if(count currentNewsMan < 3) then {
_Jobs pushback ["Reporter wiadomości","reporter"]; 
};

if(count currentRepairmen < 7) then {
_Jobs pushback ["Mechanik","repairman"]; 
};

if(count currentTaxiDrivers < 7) then {
_Jobs pushback ["Taksowkarz","taxi"]; 
};
if(_jobs isequalto []) then { _jobs = ["Brak dostępnych prac"]; };

{
	_list lbAdd format["Praca: %1",_x select 0];
	_list lbSetdata [(lbSize _list)-1,str(_x select 1)];
} foreach _jobs;

_list lbAdd "Praca: Drwal";
_job = "Wood Logging";
_list lbSetdata [(lbSize _list)-1,str(_job)];

hint "Prace uprawne wymagają plecaka - Większość prac udostępnia Ci pojazd firmowy. Skorzystaj z niego naciskając Windows, a następnie wybierz odpowiednią opcję.";

