_price = _this select 0;
_veh = _this select 1;
_buyer = _this select 2;
_information = _this select 3;

_player = objNull;

_carowner = _information select 8;
_information set [8, (getPlayerUID _buyer)];
 
_garageArray = _buyer getvariable "garage";
_garageArray pushback _information;




 {if (getplayeruid _x == _carowner) exitwith { _player = _x; }; } foreach playableunits;



[_price, _veh] remoteExec["client_fnc_vehSold", _player];
 
_updatestr = format ["updateVehOwner:%1:%2", _information select 0, getPlayerUID _buyer]; 
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery; 
 
