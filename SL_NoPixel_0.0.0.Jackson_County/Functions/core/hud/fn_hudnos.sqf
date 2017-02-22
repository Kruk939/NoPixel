disableSerialization;
	//428 cutfadeout 1; 
if(client_nos_count > 0) then {
	428 cutRsc ["HUDGoPro","PLAIN"];
    //_ui = uiNameSpace getVariable ["HUDGoPro",displayNull];
    //_nosimg = _ui displayCtrl 119871;
    //if (client_nos_count == 1) then {((uiNamespace getVariable ["HUDGoPro",displayNull]) displayCtrl 119871) ctrlSetText "kif_client\textures\icons\nos1.paa";};
    //if (client_nos_count == 2) then {((uiNamespace getVariable ["HUDGoPro",displayNull]) displayCtrl 119871) ctrlSetText "kif_client\textures\icons\nos2.paa";};
    //if (client_nos_count == 3) then {((uiNamespace getVariable ["HUDGoPro",displayNull]) displayCtrl 119871) ctrlSetText "kif_client\textures\icons\nos3.paa";};
    //if (client_nos_count == 4) then {((uiNamespace getVariable ["HUDGoPro",displayNull]) displayCtrl 119871) ctrlSetText "kif_client\textures\icons\nos4.paa";};
    //if (client_nos_count == 5) then {((uiNamespace getVariable ["HUDGoPro",displayNull]) displayCtrl 119871) ctrlSetText "kif_client\textures\icons\nos5.paa";};
    //if (client_nos_count == 6) then {((uiNamespace getVariable ["HUDGoPro",displayNull]) displayCtrl 119871) ctrlSetText "kif_client\textures\icons\nos6.paa";};
} else {
    428 cutfadeout 1;
};
