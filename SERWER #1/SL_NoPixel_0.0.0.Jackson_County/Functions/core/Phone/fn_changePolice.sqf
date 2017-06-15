/*
player setvariable["PhoneCallNumber",33.3,true];
player setvariable["PhoneID",33.3,true];
_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
_channel = _channel + 1;
[(call TFAR_fnc_activeSwRadio), _channel, 33.3] call TFAR_fnc_SetChannelFrequency;
callInProgress = false;
myCallOwner = player;
player setVariable ["tf_unable_to_use_radio", false];
call TFAR_fnc_HideHint;
["Jesteś na radiu PD!", false] spawn domsg;
*/

if (myjob =="EMS") then {
	player setvariable["PhoneCallNumber",33.1,true];
	player setvariable["PhoneID",33.1,true];
	_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
	_channel = _channel + 1;
	[(call TFAR_fnc_activeSwRadio), _channel, 33.1] call TFAR_fnc_SetChannelFrequency;
	callInProgress = false;
	myCallOwner = player;
	player setVariable ["tf_unable_to_use_radio", false];
	call TFAR_fnc_HideHint;
	["Jestes na czestotliwosci EMS!", false] spawn domsg;
};
if (myjob =="Fire") then {
	player setvariable["PhoneCallNumber",33.1,true];
	player setvariable["PhoneID",33.1,true];
	_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
	_channel = _channel + 1;
	[(call TFAR_fnc_activeSwRadio), _channel, 33.1] call TFAR_fnc_SetChannelFrequency;
	callInProgress = false;
	myCallOwner = player;
	player setVariable ["tf_unable_to_use_radio", false];
	call TFAR_fnc_HideHint;
	["Jestes na czestotliwosci Służby FD!", false] spawn domsg;
};
if (myjob =="Cop") then {
	player setvariable["PhoneCallNumber",33.3,true];
	player setvariable["PhoneID",33.3,true];
	_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
	_channel = _channel + 1;
	[(call TFAR_fnc_activeSwRadio), _channel, 33.3] call TFAR_fnc_SetChannelFrequency;
	callInProgress = false;
	myCallOwner = player;
	player setVariable ["tf_unable_to_use_radio", false];
	call TFAR_fnc_HideHint;
	["Jestes na czestotliwosci PD!", false] spawn domsg;
};
if (myjob =="FBI") then {
	player setvariable["PhoneCallNumber",0,true];
	player setvariable["PhoneID",0,true];
	callInProgress = false;
	myCallOwner = player;
	_mynumber = getPlayerUID player;
	player setVariable ["tf_unable_to_use_radio", false];
	_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
	_channel = _channel + 1;
	[(call TFAR_fnc_activeSwRadio), _channel, _mynumber] call TFAR_fnc_SetChannelFrequency;
	call TFAR_fnc_HideHint;
};