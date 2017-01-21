
if (vehicle player isEqualTo player) exitwith { hint "Musisz znajdować się w pojeździe!"; };
_PROCESS = vehicle player;
_civilianVehicle = [
	["Jonzie_XB",1900],
	["vvv_Chevrolet_Cone0",2000],
	["ADM_1969_Camaro",2200],
	["Jonzie_Mini_Cooper",2300],
	["Jonzie_Ceed",2400],
	["ADM_1964_Impala",2500],
	["ivory_190e",2600],
	["jonzie_30CSL",3200],
	["ADM_1969_Charger",3500],
	["ivory_rs4",5000],
	["vvv_Abarth_500",5000],
	["ADM_GMC_Vandura",5100], // can farm
	["ivory_gti",6000],	
	["Jonzie_Transit",6400], //can farm
	["vvv_Chevrolet_Bel_Air",7000],
	["ivory_e36",8000],
	["vvv_Alfa_Romeo_Spider_Duetto",8000],
	["vvv_Chevrolet_Camaro_RS",9000],
	["Jonzie_Mini_Cooper_r_spec",9000],	
	["ADM_Ford_F100",9500], // can farm	
	["nopixel_GMC_Campervan",9999],	
	["nopixel_Box_Default",9999],	
	["vvv_Chevrolet_Blazer",10000],
	["vvv_Alfa_Romeo_59", 10000],
	["vvv_Chevrolet_Impala",10000],
	["Jonzie_Raptor",12000], // can farm	
	["Jonzie_Escalade",12000],
	["ivory_gt500",12000],
	["vvv_Chevrolet_Corvette_Cone",12000],
	["vvv_Abarth_695",15000],
	["vvv_Cadillac_Eldorado",15000],
	["ivory_m3",15000],
	["ivory_evox",18000],	
	["ivory_supra",19000],	
	["ivory_r34",22000],
	["ivory_c",25000],	
	["vvv_Cadillac_CTSV",25000],
	["ivory_wrx",27000],
	["vvv_Cadillac_Escalade",30000],
	["vvv_Audi_A4",30000],
	["ivory_elise",30000],		
	["ivory_isf",35000],		
	["Jonzie_Viper",39999],
	["vvv_Audi_RS6_Avant_C6",40000],
	["vvv_Audi_Q7",50000],
	["vvv_Audi_Q7",50000],
	["vvv_Cadillac_DTS",75000],
	["ivory_lfa",85000],
	["ivory_mp4",95000],
	["vvv_Cadillac_XLR_V",95000],
	["vvv_Aston_Martin_DB9", 100000],
	["ivory_911",100000],
	["vvv_Aston_Martin_Rapide", 150000],
	["ivory_veyron",150000],
	["ivory_f1",250000]
];
_num = 0;
_reprocess = false;
_price = 5000;
if(typeof _PROCESS IN ["ADM_1964_Impala","ADM_1969_Charger","ADM_1969_Camaro","ADM_1964_Impala_1","ADM_1969_Charger_1","ADM_1969_Camaro_1"]) then {
	_reprocess = true;
	_price = 500;
} else {

	_typeof = TYPEOF (_PROCESS) splitString "_1" joinString "_";
	_typeof = _typeof splitString "_2" joinString "_";
	{ if(_typeof isEqualTo _x select 0) then { _price = (_x select 1) * 0.25; }; } foreach _civilianVehicle;
};


_cashcheck = [2,_price] call client_fnc_checkmoney;
if!(_cashCheck) exitwith { hint format["$%1 - Nie masz wystarczająco dużo pieniędzy!",_price]; };

[_price] call Client_fnc_removebank;

_vehicle = _PROCESS;
_oldveh = _vehicle;
_vehicle = typeof _vehicle;
_attempt = false;
_newVehicle = _vehicle;

if(_reprocess) then {

		if(_vehicle isEqualTo "ADM_1964_Impala") exitwith { _attempt = true; _newVehicle = format["%1_1",_vehicle]; };
		if(_vehicle isEqualTo "ADM_1964_Impala_1") exitwith { _attempt = true; _newVehicle = "ADM_1964_Impala_2"; };
		if(_vehicle isEqualTo "ADM_1964_Impala_2") exitwith { _attempt = false; };

		if(_vehicle isEqualTo "ADM_1969_Charger") exitwith { _attempt = true; _newVehicle = format["%1_1",_vehicle]; };
		if(_vehicle isEqualTo "ADM_1969_Charger_1") exitwith { _attempt = true; _newVehicle = "ADM_1969_Charger_2"; };
		if(_vehicle isEqualTo "ADM_1969_Charger_2") exitwith { _attempt = false; };

		if(_vehicle isEqualTo "ADM_1969_Camaro") exitwith { _attempt = true; _newVehicle = format["%1_1",_vehicle]; };
		if(_vehicle isEqualTo "ADM_1969_Camaro_1") exitwith { _attempt = true; _newVehicle = "ADM_1969_Camaro_2"; };
		if(_vehicle isEqualTo "ADM_1969_Camaro_2") exitwith { _attempt = false; };		

} else {

	if (_vehicle find "_2" isEqualTo -1 && _vehicle find "_1" isEqualTo -1) then {

			_newVehicle = format["%1_1",_vehicle];
			_attempt = isClass (ConfigFile >> "CfgVehicles" >> _newVehicle);

	} else {

			_vehicle = _vehicle splitString "_1" joinString "_";
			_newVehicle = format["%1_2",_vehicle];
			_attempt = isClass (ConfigFile >> "CfgVehicles" >> _newVehicle);

	};
};

if(_attempt && _oldveh in current_cars) then {

 	_car = _oldveh getvariable "information";

 	if(isNil "_car") exitwith { hint "Nie możesz ulepszyć tego pojazdu..."; };

	_garage = player getVariable "garage";

	_car SET [1,_newVehicle];
	_garage pushback _car;

	player setVariable ["garage", _garage, false];

	_numberplate = _car select 0;

	_pia = Current_Cars find _car;
	Current_Cars deleteAt _pia;
	deletevehicle _oldveh;

	[_garage,_numberPlate,_newVehicle,player,getPlayerUID player,Current_Cars] remoteexec ["server_fnc_upgradeVehicle",2];
	[_price] call Client_fnc_removeCash;

} else {
	hint "Ten pojazd został już ulepszony, albo nie może być ulepszony w ogóle!";
};