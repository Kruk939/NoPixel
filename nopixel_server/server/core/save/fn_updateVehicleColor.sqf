_selectedColor = _this select 0;
_selectedFinish = _this select 1;
_selectedRims = _this select 2;
_selectedLights = _this select 3;
_selectedWindows = _this select 4;
_license = _this select 5;

_updatestr = format["vehicleChangeColor:%1:%2:%3:%4:%5:%6", _selectedColor, _selectedFinish, _selectedRims, _selectedWindows, _selectedLights, _license];
_update = [0, _updatestr] call ExternalS_fnc_ExtDBquery;