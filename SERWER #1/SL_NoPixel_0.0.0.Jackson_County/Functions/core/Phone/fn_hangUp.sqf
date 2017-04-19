
	playSound "cgphone_hangup";
	if(player == myCallOwner) exitwith {
		[] call StanLakeside_fnc_resetcall;
		callInProgress = false;
	};
	_total = myCallOwner getVariable "PhonecallNumber";
	_total = _total - 1;
	myCallOwner setvariable["PhoneCallNumber",_total,true];
	[] call StanLakeside_fnc_resetcall;
	callInProgress = false;
