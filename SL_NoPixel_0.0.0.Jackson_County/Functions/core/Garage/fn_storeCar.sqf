params ["_ct"];

_pia = Current_Cars find _ct;
Current_Cars deleteAt _pia;

_garage = player getVariable "garage";
_information = _ct getVariable "information";

	if(!isnil "_information") then {

	_garage pushBack _information;

	player setVariable ["garage", _garage, false];

	[getPlayerUID player, "usedgarage", current_cars] remoteExec ["Server_fnc_setVariable",2];
	
};

_className = typeOf _ct;
deleteVehicle _ct;
_vehicleName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
[player,3,format ["%1 schował pojazd %2", name player, _vehicleName],"",_className,_vehicleName] remoteExec ["server_fnc_vehicleLog", 2];