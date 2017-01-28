private["_vehicle"];

_vehicle = _this select 0;

if(isNil "Attachedcar") then {
	attachedcar = true;
};
attachedcar = true;

_vehicle attachTo [player, [0, 2.5, 3.5]]; 
if(_vehicle iskindof "SHIP") then {
	_vehicle attachTo [player, [0, 4.5, 5.5]]; 
};

_vehicle setdir 90;

clearMagazineCargoGlobal _vehicle;
clearWeaponCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;

_vehicle setvariable ["tracker1",objNull,true];
_vehicle setvariable ["tracker2",objNull,true];
_vehicle setvariable ["tracker3",objNull,true];

while { attachedcar } do {
	uisleep 0.1;
	if(vehicle player != player) exitWith { [] spawn client_fnc_detach; };
};