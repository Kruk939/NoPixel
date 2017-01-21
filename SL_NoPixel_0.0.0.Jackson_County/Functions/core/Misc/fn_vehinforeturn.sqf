params ["_vehicle","_owedPlayers","_owedInformation","_object"];
private["_owner"];
_carowner = _vehicle select 8;
{

	if( (getplayeruid _x) == _carowner ) then {
		_owner = _x;
	};

} foreach playableunits;


//copy from car shop - cunt.
_civilianVehicle = [
	["Jonzie_XB",1900],
	["VVV_Chevrolet_Cone0",2000],
	["ADM_1969_Camaro",2200],
	["Jonzie_Mini_Cooper",2300],
	["Jonzie_Ceed",2400],
	["ADM_1964_Impala",2500],
	["ivory_190e",2600],
	["jonzie_30CSL",3200],
	["ADM_1969_Charger",3500],
	["ivory_rs4",5000],
	["VVV_Abarth_500",5000],
	["ADM_GMC_Vandura",5100], // can farm
	["ivory_gti",6000],	
	["Jonzie_Transit",6400], //can farm
	["VVV_Chevrolet_Bel_Air",7000],
	["ivory_e36",8000],
	["VVV_Alfa_Romeo_Spider_Duetto",8000],
	["VVV_Chevrolet_Camaro_RS",9000],
	["Jonzie_Mini_Cooper_r_spec",9000],	
	["ADM_Ford_F100",9500], // can farm	
	["nopixel_GMC_Campervan",9999],	
	["nopixel_Box_Default",9999],	
	["VVV_Chevrolet_Blazer",10000],
	["VVV_Alfa_Romeo_59", 10000],
	["VVV_Chevrolet_Impala",10000],
	["Jonzie_Raptor",12000], // can farm	
	["Jonzie_Escalade",12000],
	["ivory_gt500",12000],
	["VVV_Chevrolet_Corvette_Cone",12000],
	["VVV_Abarth_695",15000],
	["VVV_Cadillac_Eldorado",15000],
	["ivory_m3",15000],
	["ivory_evox",18000],	
	["ivory_supra",19000],	
	["ivory_r34",22000],
	["ivory_c",25000],	
	["VVV_Cadillac_CTSV",25000],
	["ivory_wrx",27000],
	["VVV_Cadillac_Escalade",30000],
	["VVV_Audi_A4",30000],
	["ivory_elise",30000],		
	["ivory_isf",35000],		
	["Jonzie_Viper",39999],
	["VVV_Audi_RS6_Avant_C6",40000],
	["VVV_Audi_Q7",50000],
	["VVV_Audi_Q7",50000],
	["VVV_Cadillac_DTS",75000],
	["ivory_lfa",85000],
	["ivory_mp4",95000],
	["VVV_Cadillac_XLR_V",95000],
	["VVV_Aston_Martin_DB9", 100000],
	["ivory_911",100000],
	["VVV_Aston_Martin_Rapide", 150000],
	["ivory_veyron",150000],
	["ivory_f1",250000]
];

if(_owner IN _owedPlayers) then {

	_pia = _owedplayers FIND _owner;

	_amount = (_owedinformation SELECT _pia) SELECT 1;

	_typeofVeh = (_vehicle select 1);
	_licensePlate = (_vehicle select 0);
	_value = 0;

	{
		if((_x select 0) == _typeofVeh) then { _value = (_x select 1) * 0.65; };
	}foreach _civilianVehicle;

	if(_value == 0) exitwith { hint "Wartość pojazdu to 0"; };

	_amount = _amount - _value;
	if(_amount < 0) then { _amount = 0; };

	["set","MafiaMoney",_amount] remoteExec ["client_fnc_sustain",_owner];

	//add funds to mafia bank

	["Add",_value] remoteexec ["server_fnc_updateMafiaBank",2];


	[_licensePlate, _vehicle, nil, nil, nil, nil, nil, nil, nil, "Remove", _owner] remoteExec ["Server_fnc_garageUpdate",2];
	
	deletevehicle _object;
	//delete from database

} else {
	hint "Wlasciciel tego pojazdu nie ma dlugu u mafii.";	
};