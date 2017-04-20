if(!hasInterface) exitWith {}; //This is a headless client, he doesn't need to do anything but keep being headless..
Np_ProfileVars = profilenamespace getvariable "Nopix_Profile";
if(isnil "Np_ProfileVars") then {
	profilenamespace setvariable ["Nopix_Profile",[[["Witamy na Silverlake ","Witamy", "Verizon"]],[["Witamy","Witamy na Silverlake", "Poczta"]]]];
};


{ _x setFuelCargo 0; } forEach (nearestObjects [[6728.31,5269.87,0.56609], ["Land_fs_feed_F"], 20000]);

[] spawn StanLakeside_fnc_setGuiColor;

waitUntil {sleep 0.05; !(isNil {player}) && player == player && alive player};

[] call StanLakeside_fnc_miscVariables;
player allowdamage false;
[player] remoteexec ["StanLakesideServer_fnc_initStats",2];
waituntil {(player getvariable "loaded") == 1};
player allowdamage true;
[] call StanLakeside_fnc_initInteractions;
[] spawn StanLakeside_fnc_escInterupt;
waituntil {(player getvariable "loaded") == 2};

[] call StanLakeside_fnc_karmaPhoneInit;

player setVariable["loaded", nil, false];

waitUntil {!isNull (findDisplay 46)};

_vehicle = "ivory_wrx" createvehiclelocal getpos player;
[_vehicle, ["black","matte"], "black", 1, 1] call StanLakeside_fnc_IvoryInitVehicle;
[_vehicle, "FuckYou", "ivory"] call StanLakeside_fnc_numberPlate;

uisleep 0.05;
deletevehicle _vehicle;

if(myhealth > 0.99) exitwith {
	["Zabijanie gracza za battleloga.", true] spawn domsg;
	[player,objNull,3,format ["%1 został zabity przez Battleloga", name player],"", ""] remoteExec ["StanLakesideServer_fnc_deathLog", 2];
	diag_log format["Zabijam %1 za battleloga", player];
	["Remove",1] call StanLakeside_fnc_doHealth;
	_respawn = player getVariable "respawn";
	if (_respawn == 0) then {
		[] spawn StanLakeside_fnc_respawnTimer;
	};	
};

cutText ["", "BLACK"];

(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call StanLakeside_fnc_HandleKeys"];
(findDisplay 46) displayAddEventHandler ["KeyUp", "_this call StanLakeside_fnc_HandleKeysUp"];

player addEventHandler["InventoryOpened", {_this call StanLakeside_fnc_inventoryOpened;}];
player addEventHandler["InventoryClosed", {_this call StanLakeside_fnc_inventoryClosed;}];
//player addEventHandler["ContainerClosed", {_this call StanLakeside_fnc_inventoryClosed;}];

[StanLakeside_fnc_HudEffects, 3] execFSM "call.fsm";
[StanLakeside_fnc_Survival, 300] execFSM "call.fsm";

if(uniform player == "" && female) then {
	player forceadduniform "vvv_character_protibanador";
};
player setdamage myHealth;
client_seatwarn = false;
client_seatbelt = false;
[] spawn StanLakeside_fnc_seatbelts;
[] spawn StanLakeside_fnc_gunholster;
[] spawn StanLakeside_fnc_checkRadio;
//[] spawn StanLakeside_fnc_forceFirstPerson;
[] spawn StanLakeside_fnc_speedMeters;

_respawn = player getVariable "respawn";
if (_respawn == 0) then {
		[] spawn StanLakeside_fnc_respawnTimer;
};
if(im_dead) exitWith {};
437 cutRsc ["HUDLoading","PLAIN"];

sleep 5;
420 cutRsc ["playerHUD","PLAIN"];
cutText ["","BLACK IN", 10];

sleep 2;
437 cutfadeout 1;

[] call StanLakeside_fnc_initWelcome;
["Klawisz Windows lub shift + 5 otwiera menu interakcji.", true] spawn domsg;