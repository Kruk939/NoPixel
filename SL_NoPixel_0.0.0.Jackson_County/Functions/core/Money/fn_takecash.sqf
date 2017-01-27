if(bankrobber != 4) exitwith {};
bankrobber = 2;
_random = round(random(8000)) + 12000;
[format["Ukradles $%1, przez 5 minut służby porządkowe mają podgląd na Twoją pozycję", _random], false] call domsg;
[_random] call Client_fnc_addCash;
closedialog 0;
player setvariable ["robber",true,true];
sleep 300;
player setvariable ["robber",nil,true];