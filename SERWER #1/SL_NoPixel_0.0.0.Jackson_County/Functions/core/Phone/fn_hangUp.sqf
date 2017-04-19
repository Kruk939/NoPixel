
	playSound "cgphone_hangup";
	if(player == myCallOwner) exitwith {
		[] call StanLakesideClient_fnc_resetcall;
		callInProgress = false;
	};
	_total = myCallOwner getVariable "PhonecallNumber";
	_total = _total - 1;
	myCallOwner setvariable["PhoneCallNumber",_total,true];
	[] call StanLakesideClient_fnc_resetcall;
	callInProgress = false;
