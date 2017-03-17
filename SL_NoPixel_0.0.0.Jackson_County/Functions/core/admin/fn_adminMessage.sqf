_display = findDisplay 8001;
_text = ctrlText 5202;
if (!dialog) exitWith {};
["Wysłałeś wiadomość do wszystkich graczy!", true] spawn domsg;
["<t color='#ff0000' size = '.8'>Wiadomość od administratora!<br />"+ _text +"</t>",-1,-1,10,1,0,789] remoteExec ["BIS_fnc_dynamicText",playableunits];
closeDialog 0;