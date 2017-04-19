callInProgress = true;

if(isNil "trackedby") then { trackedby = []; };

if(count trackedby > 0) then {
	if(str CurrentCursorTarget find "cabinatelefonica" == -1) then {
		[mycallowner,player] remoteexec ["StanLakesideClient_fnc_trackedcall",trackedby];
	};
};

[] spawn {
	while{callInProgress} do {
		_total = myCallOwner getVariable "PhonecallNumber";
		playSound "cgphone_static";
		_total = 1;
		[format["Zaplaciles %1 dolarów ze rozmowę!",_total], false] spawn domsg;
		[round(_total)] spawn StanLakesideClient_fnc_removeCash;
		sleep 140;
	};
};

[] spawn {
	sleep 7;
	while{callInProgress} do {
		if( isNull myCallOwner ) exitwith { [] call StanLakesideClient_fnc_resetcall; };
		_total = myCallOwner getVariable "PhonecallNumber";	
		if( _total < 2 ) exitwith { [] call StanLakesideClient_fnc_resetcall; };
		if( deadPlayer && myCallOwner != player ) exitwith { ["Rozmowa zakonczona", false] spawn domsg; [] call StanLakesideClient_fnc_hangup };	
		if( client_battery < 5 ) exitwith { ["Rozmowa zakonczona (Niski poziom baterii)", false] spawn domsg; [] call StanLakesideClient_fnc_hangup };	
		sleep 5;
	};
};