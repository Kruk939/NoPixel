_currentitemindex = lbCurSel 9001;
if (_currentitemindex == -1) exitWith { hint "Error"; closedialog 0; };
_amount = lbData [9001, _currentitemindex];
_amount = call compile format["%1",_amount];

_amountcheck = _amount select 1;
closedialog 0;

_owed = round(_amountcheck + (_amountcheck / 10));

if(mafiabank < _amountcheck) exitwith { hint "Mafia nie ma na to pieniędzy."; };

hint format["Dostales pozyczke %1 - Musisz splacic %2",_amountcheck,_owed];

loan SET [0,_amount select 0];
loan SET [2,_amount select 2];
loan SET [3,_amount select 3];




[_amountcheck] call StanLakesideClient_fnc_addCash;

["Remove",_amountcheck] remoteexec ["StanLakesideServer_fnc_updateMafiaBank",2];

["Add","MafiaMoney",_owed] call StanLakesideClient_fnc_sustain;

