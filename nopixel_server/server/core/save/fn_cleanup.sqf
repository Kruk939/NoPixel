_chance = random 100;

if (_chance > 20) then {
    "Jeden z banków właśnie otrzymał dostawę pieniędzy." remoteexec["hint", -2];
    _mybank = banks call BIS_fnc_selectRandom;
    _thebankcontainer = "plp_ct_HighSecMediumBlack" createvehicle [9794,978,0.0014];
    _pos = getpos _mybank;
    _thebankcontainer setdir(getdir _mybank) - 89;
    _containerpos = _mybank getrelpos[-3, 0];
    _thebankcontainer setpos _containerpos;
    _newpos = _thebankcontainer getrelpos[-1.2, 0];
    _thebankcontainer setpos[(_newpos select 0), (_newpos select 1), (_newpos select 2) + 4];
	diag_log format ["Bank pos - %1", _pos];
};

/*
if (isNil "carArray") then {
    carArray = [];
};

if (isNil "carPosition") then {
    carPosition = [];
};

{
    _nearc = nearestObjects[getPos _x, ["Man"], 55];
    if (((count _nearc) == 0 && (count crew _x) == 0 && isNull driver vehicle _x && isNull attachedTo _x) || getdammage _x == 1) then {
        if (_x in carArray) then {
            _pia = cararray FIND _x;
            _location = carposition SELECT _pia;
            cararray deleteAT _pia;
            carposition deleteAT _pia;
            if (_x distance _location < 5) then {
                deletevehicle _x;
            };
        } else {
            cararray pushback _x;
            carposition pushback getpos _x;
        };
    };
} foreach vehicles;


_list = (allMissionObjects "WeaponHolder") +
    (allMissionObjects "GroundWeaponHolder") +
    (allMissionObjects "WeaponHolderSimulated") +
    (allMissionObjects "SmokeShell") +
    (allMissionObjects "CraterLong") +
    (allMissionObjects "CraterShort") +
    (allMissionObjects "StaticWeapon") +
    (allMissionObjects "test_EmptyObjectForFireBig") +
    (allMissionObjects "Default");

{
    _nearestc = _x nearEntities["man", 50];
    if (((count _nearestc) == 0)) then {
        deleteVehicle _x;
    };
}
forEach _list;
*/
diag_log "server_fnc_cleanup";