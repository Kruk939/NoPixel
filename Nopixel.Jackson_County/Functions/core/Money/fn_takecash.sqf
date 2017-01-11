if(bankrobber != 4) exitwith {};
bankrobber = 2;
hint "Ukradles $12000, przez 5 minut sluzby porzadkowe maja podgląd na Twoja pozycje.";
[12000] call Client_fnc_addCash;
closedialog 0;
player setvariable ["robber",true,true];
sleep 300;
player setvariable ["robber",nil,true];