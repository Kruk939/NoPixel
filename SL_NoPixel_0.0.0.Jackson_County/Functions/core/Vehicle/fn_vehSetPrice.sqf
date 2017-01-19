if(!dialog) exitWith {};

_display = findDisplay 7001;
_control = _display displayCtrl 4202;

_price = parseNumber(_control);
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

if(_price <= 0) exitWith {}; //Za mala cena
if(count _carsInShop == count _pos) exitWith {}; //Nie ma miejsca w salonie
if(isNull _veh) exitWtih {}; //Nie ma takiego pojazdu
if(!(_veh isKindOf "Car")) exitWith {}; //To nie jest samochod
if(player distance _shop > 40) exitWith {}; //Jestes za daleko
if(_carowner != getPlayerUID) exitWith {}; //To nie jest Twoj samochod

_takenPos = [];
_newPos = [];
{ _takenPos pushBack (_carsInShop select 0); } foreach _carsInShop;
for "_i" from 0 to (count _pos) do {
	if(!(_i in _takenPos)) exitWith {
		_newPos = _pos select _i;
	};
};

_veh setDir (_dir + (_pos select 1));
_veh attachTo[_shop, (_pos select 0)];
_carsInShop pushBack [_newPos select 0, _price, _veh];
_shop setVariable ["CarsToBuy",_carsInShop,true];
_veh setVariable ["vehPrice", _price, true];

closeDialog 0;