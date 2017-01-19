_veh = cursorTarget;
_price = _veh getVariable ["vehPrice",0];
_shop = getpos nearestObject [getPos player, "Land_ModernShowroom"];
_carsInShop = _shop getVariable ["CarsToBuy",[]];
_cash = player getVariable ["wallet",0];

if(_price <= 0) exitWtih {}; //za mala cena
if(count _carsInShop == 0) exitWith {}; //Cos poszlo nie tak
if(isNull _veh) exitWith {}; //Brak pojazdu
if(_cash < _price) exitWith {}; //Nie masz pieniedzy
[_price] call Client_fnc_removeCash;
_infomation = _veh getVariable ["information",[]];




{
	if(_veh == _x select 2) exitWith {
		_carsInShop set [_forEachIndex, -1];
		_carsInShop = _carsInShop - [-1];
	};
} forEach _carsInShop;
_shop setVariable ["CarsToBuy", _carsInShop, true];


[_price, _veh, player, _infomation] remoteExec ["Server_fnc_vehBuy",2];