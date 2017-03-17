/*
		Author: Kajetan "Kruk" Mruk
		Date: 15.03.2017
		Params: 
			0 - Array, case data
			1 - String, type of data(vehicle/personal)
		Description: Reads data from case and display it on computer
		Return: none
*/
disableSerialization;
_data = _this select 0;
_type = _this select 1;
if(count _data == 0) exitWith {};
if(_type == "vehicle") then {
	//v.id, v.plate, v.description, v.uid_officer, u.name, v.reason, v.wanted_level, v.active
	closeDialog 0;
	_ok = createDialog "kruk_slpd_info";
	if(!_ok) exitWith { hint "Dialog not created"; };
	_display = findDisplay 666003;
	_title = format ["Informacje o pojeździe w sprawie ID: %1", (_data select 0)];
	_text_title = _display displayCtrl 1000;
	_text_info = _display displayCtrl 1001;
	_text_title ctrlSetText _title;
	_plate = _data select 1;
	_description = _data select 2;
	_officer_name = _data select 4;
	_reason = _data select 5;
	_wanted_level = _data select 6;
	
	_string = format["Numer rejestracyjny: %1\n Opis pojazdu: %2Poziom poszukiwania: %3\n\nPowód: %4\nWystawił: %5\n", _plate, _description, _wanted_level, _reason, _officer_name];
	
	_text_info ctrlSetText _string;

};
if(_type == "personal") then {
	//w.id, w.uid_suspect, s.name, w.uid_officer, o.name, w.charges, w.wanted_level, w.active
	closeDialog 0;
	_ok = createDialog "kruk_slpd_info";
	if(!_ok) exitWith { hint "Dialog not created"; };
	_display = findDisplay 666003;
	_title = format ["Informacje o osobie w sprawie ID: %1", (_data select 0)];
	_text_title = _display displayCtrl 1000;
	_text_info = _display displayCtrl 1001;
	_text_title ctrlSetText _title;
	_suspect_uid = _data select 1;
	_suspect_name = _data select 2;
	_officer_name = _data select 4;
	_charges = _data select 5;
	_wanted_level = _data select 6;
	
	_string = format["Imię i nazwisko: %1\n PESEL: %2\nPoziom poszukiwania: %3\n\nZarzuty: %4\nWystawił: %5", _suspect_name, _suspect_uid, _wanted_level, _charges, _officer_name];
	_text_info ctrlSetText _string;
};