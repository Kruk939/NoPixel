if(callInProgress) exitwith { 
	["Jestes już w rozmowie!", false] spawn domsg; 
	//[] call StanLakeside_fnc_currentcallMenu; 
};
if(PhonesRinging) exitwith { 
	["Lacze!", false] spawn domsg;
	CurrentCaller spawn StanLakeside_fnc_answerCall;
};
if(TryingCall) exitwith { 
	["Zaczekaj, az obecne polaczenie się zakonczy!", false] spawn domsg; 
};
["Rozpoczynasz nowe polaczenie!", false] spawn domsg; 
[] call StanLakeside_fnc_callMenu; 





