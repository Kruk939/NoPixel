//SUSPECTID / OFFICERID / CHARGES / STATUS / EVIDENCE / activate


_currentitemindex = lbCurSel 911;
if (_currentitemindex == -1) exitWith {};
_status = lbData [911, _currentitemindex];
_charges = ctrlText 1116;
currentcursortarget = call compile format ["%1",currentcursortarget];

_suspectName = name currentcursortarget;
_suspectUID = getplayeruid currentcursortarget;
_officerUID = getplayeruid player;
_officerName = name player;
_evidence = []; // lodged later.
_active = 1; // enabled instantly

[_suspectName, _suspectUID, _officerName, _officerUID, _charges, _status, _evidence, _active] remoteexec ["server_fnc_addcriminal",2];

closedialog 0;