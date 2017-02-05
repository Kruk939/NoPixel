_length = ctrlText 2222;
_reason = ctrlText 1111;

[_length, _reason,CurrentCursorTarget,true] remoteExec ["server_fnc_jailsetup",2];
[player,currentcursortarget,4,format ["%1 aresztował %2 na czas %3 z powodem %4", name player, name currentcursortarget, _length, _reason],_length] remoteExec ["server_fnc_copLog", 2];

closedialog 0;