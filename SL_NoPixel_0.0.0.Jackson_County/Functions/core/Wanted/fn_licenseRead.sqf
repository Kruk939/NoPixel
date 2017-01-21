params["_licenses","_playername"];

_message = format["Licencje <br/><br/> %1 <br/><br/>",_playername];

if(_licenses select 0 isEqualTo 1) then {
	_message = format ["%1 <img size='1' image='cg_mission_files\id_icons\license.paa'/> <t color='#C80000'> Prawo Jazdy </t> <br/> ",_message];
};

if(_licenses select 1 isEqualTo 1) then {
	_message = format ["%1 <img size='1' image='cg_mission_files\id_icons\license.paa'/> <t color='#C80000'> Licencja na Broń </t> <br/> ",_message];
};

if(_licenses select 2 isEqualTo 1) then {
	_message = format ["%1 <img size='1' image='cg_mission_files\id_icons\license.paa'/> <t color='#C80000'> Licencja Górnika </t> <br/> ",_message];
};

if(_licenses select 3 isEqualTo 1) then {
	_message = format ["%1 <img size='1' image='cg_mission_files\id_icons\license.paa'/> <t color='#C80000'> Licencja Drwala </t> <br/> ",_message];
};

if(_licenses select 4 isEqualTo 1) then {
	_message = format ["%1 <img size='1' image='cg_mission_files\id_icons\license.paa'/> <t color='#C80000'> Licencja Rybaka </t> <br/> ",_message];
};

hint parsetext _message;