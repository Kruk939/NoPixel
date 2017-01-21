disableSerialization;

_selectedBG = format["\cg_phone\Images\%1.paa",phoneBackground];
ctrlSetText [80001, _selectedBG];

_someshitvariable = _this select 0;

if(_someshitvariable isEqualTo "baseload") then {
	_selectedSkin = format["\cg_phone\Images\bg%1.paa",phoneSkin];
	ctrlSetText [85441, _selectedSkin];
} else {
 	if(phoneskin isEqualTo 1 || phoneskin isEqualTo 2) then {
 		_selectedSkin = format["\cg_phone\Images\bgblack.paa",phoneSkin];
		ctrlSetText [85441, _selectedSkin];
 	};
  	if(phoneskin isEqualTo 3 || phoneskin isEqualTo 4) then {	
 		_selectedSkin = format["\cg_phone\Images\bgwhite.paa",phoneSkin];
		ctrlSetText [85441, _selectedSkin];
	};
  	if(phoneskin isEqualTo 5 || phoneskin isEqualTo 6) then {	
 		_selectedSkin = format["\cg_phone\Images\bgpink.paa",phoneSkin];
		ctrlSetText [85441, _selectedSkin];
	};
  	if(phoneskin isEqualTo 7 || phoneskin isEqualTo 8) then {	
 		_selectedSkin = format["\cg_phone\Images\bgblue.paa",phoneSkin];
		ctrlSetText [85441, _selectedSkin];
	};
  	if(phoneskin isEqualTo 9 || phoneskin isEqualTo 10) then {	
 		_selectedSkin = format["\cg_phone\Images\bggreen.paa",phoneSkin];
		ctrlSetText [85441, _selectedSkin];
	};
  	if(phoneskin isEqualTo 11 || phoneskin isEqualTo 12) then {	
 		_selectedSkin = format["\cg_phone\Images\bgyellow.paa",phoneSkin];
		ctrlSetText [85441, _selectedSkin];
	};
	_selectedSkin = format["\cg_phone\Images\bg%1.paa",phoneSkin];
	ctrlSetText [85442, _selectedSkin];
};



_fuck = ((uiNamespace getVariable "phonemenu") displayCtrl 5017); 
_fuck ctrlsetfade 1;
_fuck ctrlCommit 0; 
uisleep 1;
_fuck ctrlshow false;
