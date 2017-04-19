hint "Wynająłeś biuro!";

player setvariable ["office",currentcursortarget,false];
myoffice = getpos currentcursortarget;
[250] call StanLakesideClient_fnc_removeCash;
closedialog 0;