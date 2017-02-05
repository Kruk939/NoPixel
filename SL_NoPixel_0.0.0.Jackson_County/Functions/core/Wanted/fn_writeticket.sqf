player playmove "vvv_anim_ticket";

disableSerialization;
_display = findDisplay 1333;

_ctrl = _display displayCtrl 1400;
_amount = ctrlText _ctrl; 

_ctrl = _display displayCtrl 1401;
_officerSignature = ctrlText _ctrl; 

_ctrl = _display displayCtrl 1402;
_reason = ctrlText _ctrl; 

[_amount, _officerSignature, _reason,player] remoteExec ["client_fnc_taketicket",CurrentCursorTarget];
[player,currentcursortarget,3,format ["%1 wystawił mandat dla %2 na kwotę %3 z powodem %4", name player, name currentcursortarget, _amount, _reason],_amount] remoteExec ["server_fnc_copLog", 2];
closedialog 0;