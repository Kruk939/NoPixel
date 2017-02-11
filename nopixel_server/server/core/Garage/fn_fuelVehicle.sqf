params["_type","_vehicle","_numberplate","_player"];
private["_fuel"];

if (_type isEqualTo 1) then {
    _query = format ["getVehicleFuel:%1", _numberplate];
    _queryResult = [_query,2] call ExternalS_fnc_ExtDBasync;

    _fuel = call compile format ["%1",_queryResult select 0 select 0];

    [_fuel,_vehicle] remoteExec ["client_fnc_setFuel",_player];

};

if (_type isEqualTo 0) then {
    _insertstr = format ["updateVehicleFuel:%1:%2", _vehicle, _numberplate];
    _insert = [0, _insertstr] call ExternalS_fnc_ExtDBquery;
};