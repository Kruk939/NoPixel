disableSerialization;


_display = findDisplay 5111;
_Btn4 = _display displayCtrl 1119;

_status = lbData[911,lbCurSel (911)];
_status = call compile format["%1", _status];



_ID = _status select 0;			//np 1..2..3
_wantedlevel = _status select 1;	//np 1..2..3
_criminal = _status select 2;		//np Kasztura
_crime = _status select 3;		//np zajebał piwo
_officer = _status select 4;		//np Kalmar


//_Btn4 ctrlSetStructuredText parsetext format["NR. Sprawy: %1 <br/> Poziom poszukiwania: %2  <br/> Podejrzany: %3 - %4  <br/> Zarzut: %5  <br/> Oficer: %6 - %7 ", _ID, _wantedlevel, _criminal select 0, _criminal select 1, _crime, _officer select 0, _officer select 1];

_Btn4 ctrlSetStructuredText parsetext format["NR. Sprawy: %1 <br/> Poziom poszukiwania: %2  <br/> Podejrzany: %3  <br/> Zarzut: %4  <br/> Oficer: %5 ", _ID, _wantedlevel, _criminal, _crime, _officer];
_btn4 ctrlCommit 0;