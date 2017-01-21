/*
	Author: Kajetan "Kruk" Mruk
	For: stanlakeside.pl
	Date: 19.01.2017 (Non-retard Units)
	
	Params: none
	Description: Function that get price from GUI and sets vehicle variable. TODO: attachTo car dealer building - it was not working correctly
	Return: nothing
*/


//if(!dialog) exitWith {};

_display = findDisplay 7001;


_price = parseNumber(ctrlText 4202);
_shop = nearestObject [getPos player, "Land_ModernShowroom"];
_veh = cursorTarget;
_dir = getDir _shop;
_carsInShop = _shop getVariable ["CarsToBuy",[]];
_information = _object getVariable "information";
_carowner = _information select 8;
_pos = [
	[0,[2,-18,1.2], -140],
	[1,[-3,-18,1.2], -140],
	[2,[-8,-18,1.2], -140],
	[3,[2,-11,1.2], -140],
	[4,[-3,-11,1.2], -140],
	[5,[-8,-11,1.2], -140],
	[6,[-26.5,-17,1.4], 130]
];

if(_price <= 0) exitWith { ["Cena nie zgadza się!", true] spawn domsg; }; //Za mala cena
if(count _carsInShop isEqualTo count _pos) exitWith { ["W salonie nie ma miejsca!", true] spawn domsg; }; //Nie ma miejsca w salonie
if(isNull _veh) exitWith {}; //Nie ma takiego pojazdu
if(!(_veh isKindOf "Car")) exitWith {}; //To nie jest samochod
if(player distance _shop > 40) exitWith { ["Jesteś za daleko!", true] spawn domsg; }; //Jestes za daleko
if(_carowner != getPlayerUID player) exitWith { ["Nie jesteś właścicielem pojazdu!", true] spawn domsg; }; //To nie jest Twoj samochod

_takenPos = [];
_newPos = [];
{ _takenPos pushBack ((_carsInShop select _forEachIndex) select 0); } foreach _carsInShop;
for "_i" from 0 to (count _pos) do {
	if(!(_i in _takenPos)) exitWith {
		_newPos = _pos select _i;
	};
};

//_veh setDir (_dir + (_newPos select 2));
//_veh attachTo[_shop, (_newPos select 1)];
_carsInShop pushBack [_newPos select 0, _price, _veh];
_shop setVariable ["CarsToBuy",_carsInShop,true];
_veh setVariable ["vehPrice", _price, true];
closeDialog 0;