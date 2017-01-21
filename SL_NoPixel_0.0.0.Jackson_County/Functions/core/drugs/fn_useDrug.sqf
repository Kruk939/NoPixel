params["_type","_amount"];

_unhealth = client_unhealthiness / 50;


_amount = _amount - _unhealth;


if(_type isEqualTo "marijuana") then {
	client_marijuana = _amount;
	player setCustomAimCoef 0;
	["set",0] call Client_Fnc_DoHealth;
	["Czujesz się wspaniale i bardzo spokojnie.",false] spawn domsg;
};

if(_type isEqualTo "cocaine") then {
	client_cocaine = _amount;
	player setAnimSpeedCoef 1.2;
	["Czujesz, że mógłbyś przebiec maraton.",false] spawn domsg;
};

if(_type isEqualTo "heroin") then {
	client_heroin = _amount;
	player setUnitRecoilCoefficient 0.5;
	["Celowanie wydaje się teraz o wiele łatwiejsze!",false] spawn domsg;
};


if(_type isEqualTo "meth") then {
	client_meth = _amount;
	["Czujesz się niezniszczalny.",false] spawn domsg;
	//notazepls
};

if(_type isEqualTo "energy") then {
	client_energy = _amount;
	player enablefatigue false;
	player enablestamina false;
	["Czujesz się bardzo lekko!",false] spawn domsg;
};
["Add","unhealthiness",5] call client_fnc_sustain;

[format ["%1 will last %2m due to unhealthiness of %3",_type, (_amount * 5), client_unhealthiness],false] spawn domsg;


/*

	if(client_meth > 14) then { _damage = _damage / 1.1; };
	if(client_meth > 10) then { _damage = _damage / 1.1; };
	if(client_meth > 7) then { _damage = _damage / 1.1; };
	if(client_meth > 4) then { _damage = _damage / 1.1; };
	if(client_meth > 0) then { _damage = _damage / 1.1; };

*/