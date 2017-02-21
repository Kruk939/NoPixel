disableSerialization;
	428 cutfadeout 1; 
if(client_nos_count > 0) then {
	428 cutRsc ["HUDGoPro","PLAIN"];
    _ui = uiNameSpace getVariable ["HUDGoPro",displayNull];
    _nosimg = _ui displayCtrl 119871;
    if (client_nos_count == 1) then {_message = "<img size='2' image='kif_client\textures\icons\nos1.paa'/>"; _nosimg ctrlSetStructuredText parseText format["%1",_message];}; 
    if (client_nos_count == 2) then {_message = "<img size='2' image='kif_client\textures\icons\nos2.paa'/>"; _nosimg ctrlSetStructuredText parseText format["%1",_message];}; 
    if (client_nos_count == 3) then {_message = "<img size='2' image='kif_client\textures\icons\nos3.paa'/>"; _nosimg ctrlSetStructuredText parseText format["%1",_message];}; 
    if (client_nos_count == 4) then {_message = "<img size='2' image='kif_client\textures\icons\nos4.paa'/>"; _nosimg ctrlSetStructuredText parseText format["%1",_message];}; 
    if (client_nos_count == 5) then {_message = "<img size='2' image='kif_client\textures\icons\nos5.paa'/>"; _nosimg ctrlSetStructuredText parseText format["%1",_message];}; 
    if (client_nos_count == 6) then {_message = "<img size='2' image='kif_client\textures\icons\nos6.paa'/>"; _nosimg ctrlSetStructuredText parseText format["%1",_message];}; 
} else {
    428 cutfadeout 1;
};
