/* 
numbero uno
*/
// Edytowane przez: Adi&Marasher

_class1 = ["CG_Heroin"];  
_class2 = ["CG_MethBag100","CG_MethBag90"]; 
_class3 = ["CG_Cocaine"]; 
_class4 = ["CG_WeedBag4"]; 
_class5 = ["CG_MethBag80","CG_WeedBag3"]; 
_class6 = ["CG_MethBag70","CG_WeedBag2"]; 
_class7 = ["CG_MethBag60"]; 
_class8 = ["CG_MethBag50","CG_WeedBag1"]; 

_total = 0;
_cashout = 0;

{
	_mag = _x;
	if(_mag IN _class1) then { _cashout = _cashout + 190; player removeMagazine _mag; _total = _total + 1; }; //510
	if(_mag IN _class2) then { _cashout = _cashout + 200; player removeMagazine _mag; _total = _total + 1; }; //540
	if(_mag IN _class3) then { _cashout = _cashout + 145; player removeMagazine _mag; _total = _total + 1; }; //375
	if(_mag IN _class4) then { _cashout = _cashout + 125; player removeMagazine _mag; _total = _total + 1; }; //315
	if(_mag IN _class5) then { _cashout = _cashout + 110; player removeMagazine _mag; _total = _total + 1; };  
	if(_mag IN _class6) then { _cashout = _cashout + 100; player removeMagazine _mag; _total = _total + 1; }; 
	if(_mag IN _class7) then { _cashout = _cashout + 90; player removeMagazine _mag; _total = _total + 1; }; 
	if(_mag IN _class8) then { _cashout = _cashout + 80; player removeMagazine _mag; _total = _total + 1; };

} forEach magazines player;

if(myjob == "Mafia") then { _cashout = _cashout * 3 };

[_cashout] call Client_fnc_addCash;

hint format["Zarobi³eœ $%1.",_cashout];



if(myJob != "Mafia") exitwith {};
[1,_total,player,getpos player] remoteExec ["server_fnc_drugJob",2];

/*
numbero two
*/
/*
petroleo < string to object
*/

private["_n","_i","_localProtection"];

_barArray = ["np_copperbar1","np_ironbar1","np_silverbar1","NP_Wood","CG_OilCanister"];
_priceArray = [80,155,275,90,470];

if(isNil "globalProtection") then { globalProtection = 0; };
if(globalProtection != 0) exitwith { hint "Ju¿ przetwarzam"; };
_localProtection = 0;


_n = 0;
_cashTotal = 0;
{
	_total = {_x == (_barArray select _n)} count magazines player;
	_i = _total;

	while{ _i > 0 } do {

		_localProtection = _localprotection + 1;
		globalProtection = globalProtection + 1;
		if(_localProtection != globalProtection) exitwith { [1,"Selling Ore Script"] spawn client_fnc_anticheat; };

		player removeitem (_barArray select _n);
		_value = (_priceArray select _n);
		[_value] call Client_fnc_addCash;
		_cashTotal = _cashTotal + _value;
		_i = _i - 1;
		playSound3D ["CG_Jobs\sounds\mining\mineF2.ogg", player, false, getPosasl player, 31, 1, 15];
		sleep 0.25;
		if(dialog) then { closedialog 0; };
	};

	_n = _n + 1;

} foreach _barArray;

globalProtection = 0;

hint format["Zarobi³eœ $%1",_cashTotal];