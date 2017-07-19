_uid = _this select 0;
if (_uid isEqualTo getPlayerUID player) then {
	[] spawn client_fnc_syncData;
} else {};
