detach myDT2;
growingweed = true;
player removeAction myDrugAction2;
hint "Twoja sadzonka została zasadzona!";
myActionStart2 = myDT2 addAction [ "Start Growing", {  
	[] spawn client_fnc_weedgrowing;
	myDrugValue2 = 4;
	totalskills = 4;
	myDT2 removeaction myActionStart2;
	myAction12 = myDT2 addAction [ "Podlej rosline", { ["Water"] call client_fnc_upweedgrowing; } ];
	myAction22 = myDT2 addAction [ "Przytnij rosline", { ["Prune"] call client_fnc_upweedgrowing; } ];
	myAction32 = myDT2 addAction [ "Ochlodz rosline", { ["Cool"] call client_fnc_upweedgrowing; } ];
	myAction42 = myDT2 addAction [ "Ogrzej rosline", { ["Heat"] call client_fnc_upweedgrowing; } ];
	myAction52 = myDT2 addAction [ "Kultywatorowanie", { ["Turnover"] call client_fnc_upweedgrowing; } ];
} ];
