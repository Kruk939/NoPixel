/*
    Author: KifKick
    Date: 15.02.2017

    Description: Bomb for vehicle, if vehicle get speec 70km/h bomb has been activated and if vehicle got under 50km/h bomb has been explode
    Return: None
 */
    private["_unit"];
    _unit = cursorObject;
    
    //if((!(_unit isKindOf "LandVehicle"))&&(!(_unit getVariable ["escorted",false])) && (ClientArrested) && (client_istazed)) exitWith {["Błąd","Nie możesz podłożyć bomby!",[255,0,0,1],""] call Client_fnc_showNotification;};
    //if(player distance _unit > 7) exitWith {["Błąd","Jesteś za daleko!",[255,0,0,1],""] call Client_fnc_showNotification; player addItem "kif_speedbomb";};
     
    //player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
    //sleep 1.5;
    //waitUntil {animationState player != "ainvpknlmstpsnonwnondnon_medic_1"};
     
    if(player distance _unit > 7) exitWith {["Błąd","Jesteś za daleko!",[255,0,0,1],""] call Client_fnc_showNotification; player addItem "kif_speedbomb";};
     
    ["Sukces","Podłożyłeś bombę pod pojazd!",[0,255,0,1],""] call Client_fnc_showNotification;
     
    [_unit] spawn
    {
    	_veh = _this select 0;
    	waitUntil {(speed _veh) > 70}; // 70 - Speed for activate the bomb.
        _crew = crew (vehicle _veh);
    	["<t color='#ff0000' size = '.8'>Uwaga!<br /> W pojeździe została podłożona bomba! Jeżeli prędkość pojazdu spadnie poniżej 50km/h bomba eksploduje! </t>",-1,-1,8,1,0,789] remoteExec ["BIS_fnc_dynamicText", _crew];
        playSound3D ["kif_client\sounds\bombhasbeenplanted.ogg", _veh, true, getPos _veh, 15, 1, 25];
    	waitUntil {(speed _veh) < 50}; // 50 - Speed that the bomb will explode. 
    	_test = "Bo_Mk82" createVehicle [0,0,9999];
    	_test setPos (getPos _veh);
        playSound3D ["kif_client\sounds\speedbombExplode.ogg", player, false, getPos _veh, 15, 1, 25];
    	_test setVelocity [100,0,0];
    };