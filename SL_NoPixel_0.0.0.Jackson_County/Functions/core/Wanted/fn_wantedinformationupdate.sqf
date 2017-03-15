disableSerialization;


_display = findDisplay 5111;
_Btn4 = _display displayCtrl 1119;

_status = lbData[911,lbCurSel (911)];
_status = call compile format["%1", _status];


//caseID, suspectName, suspectUID, officerName, officerUID, charges, status, evidence, date
_ID = _status select 0;
_criminal = _status select 1;
_officer = _status select 3;
_crime = _status select 5;
_wantedlevel = _status select 6;
_Btn4 ctrlSetStructuredText parsetext format["NR. Sprawy: %1<br/>Poziom poszukiwania: %2<br/>Podejrzany: %3<br/> Oficer: %4<br/>Zarzut: %5", _ID, _wantedlevel, _criminal, _officer, _crime];
_btn4 ctrlCommit 0;