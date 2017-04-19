private ["_old", "_new"];
params ["_amount"];
_old = player getVariable "sl_wallet_silverlake";
_new = _old - _amount;
if (_new < 0) then {
	_return = false;
} else {
	player setVariable ["wallet", _new, false];
	[player, "wallet", _new] remoteExec ["StanLakesideServer_fnc_setVariable",2];
	[1,_new,_new,getplayeruid player] remoteExec ["StanLakesideServer_fnc_syncmoney",2];
	_return = true;
};