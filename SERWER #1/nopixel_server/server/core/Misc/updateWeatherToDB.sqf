_curdate = date;
_year = _curdate select 0;
_month = _curdate select 1;
_day = _curdate select 2;
_hour = _curdate select 3;
_minute = _curdate select 4;
_monthtext = 0;
_daytext = 0;
if(_month == 1) then {_monthtext = "Styczen";};
if(_month == 2) then {_monthtext = "Luty";};
if(_month == 3) then {_monthtext = "Marzec";};
if(_month == 4) then {_monthtext = "Kwiecien";};
if(_month == 5) then {_monthtext = "Maj";};
if(_month == 6) then {_monthtext = "Czerwiec";};
if(_month == 7) then {_monthtext = "Lipiec";};
if(_month == 8) then {_monthtext = "Sierpien";};
if(_month == 9) then {_monthtext = "Wrzesien";};
if(_month == 10) then {_monthtext = "Pazdziernik";};
if(_month == 11) then {_monthtext = "Listopad";};
if(_month == 12) then {_monthtext = "Grudzien";};

if(_minute >= 0 && _minute <= 9) then {_minute = parseText format["0%1", _minute];};

_windDir = 0;
_weather = "BRAK SYGNALU";
if(windDir >= 340 && windDir <= 360 || windDir >= 0 && windDir <= 20) then {_windDir = "Polnocy";};
if(windDir >= 20 && windDir <= 60) then {_windDir = "Polnocnego Wschodu";};
if(windDir >= 60 && windDir <= 110) then {_windDir = "Wschodu";};
if(windDir >= 110 && windDir <= 160) then {_windDir = "Poludniowego wschodu";};
if(windDir >= 160 && windDir <= 200) then {_windDir = "Poludnia";};
if(windDir >= 200 && windDir <= 250) then {_windDir = "Poludniowego zachodu";};
if(windDir >= 250 && windDir <= 290) then {_windDir = "Zachodu";};
if(windDir >= 290 && windDir <= 340) then {_windDir = "Polnocnego zachodu";};

_windSpeed = vectorMagnitude wind;
_windSpeed  = round(_windSpeed * (10 ^ 1)) / (10 ^ 1);
if(rain < 0.05) then {
if(overcast >= 0 && overcast < 0.4) then {_weather = "Slonecznie";} else {
if(overcast >= 0.4 && overcast < 0.6) then {_weather = "Pochmurno";} else {
if(overcast >= 0.6 && overcast <= 1) then {_weather = "Mgliscie";};};};
} else {
if(overcast >= 0 && overcast < 0.6) then {_weather = "Deszczowo";} else {
if(overcast >= 0.6 && overcast <= 1) then {_weather = "Burzowo";};};};

_date = format ["%1 %2 %3",_day,_monthtext,_year];
_fullhour = format ["%1:%2",_hour,_minute];
_windtext = format ["%1,%2", _windDir, _windSpeed];
_id = 1;
_updateStr = format ["weatherUpdate:%1:%2:%3:%4:%5:%6",_date,_fullhour,_weather,_windtext,fog,_id];
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;
