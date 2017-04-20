_vehicle = cursorTarget;
if(isNull _vehicle) exitWith {["Nie patrzysz się na pojazd!", false] spawn domsg; player addItem "kif_Fuel";};

['Uzupełniam paliwo',1, StanLakeside_fnc_itemFuelVehicle,player,'AinvPknlMstpSnonWnonDnon_medic_1',CurrentCursorTarget,"cg_sndimg\sounds\repair.ogg",0] spawn StanLakeside_fnc_dotask;
StanLakeside_fnc_itemFuelVehicle = {


    switch (true) do
    {
	    case (_vehicle isKindOF "LandVehicle"):
	    {
		    if(!local _vehicle) then
		    {
		    	[_vehicle,(Fuel _vehicle) + 0.5] remoteExec ["StanLakeside_fnc_setFuel",_vehicle];
		    }
		    	else
		    {
		    	_vehicle setFuel ((Fuel _vehicle) + 0.5);
		    };
	    };
	
	    case (_vehicle isKindOf "Air"):
	    {
		    if(!local _vehicle) then
		    {
		    	[_vehicle,(Fuel _vehicle) + 0.2] remoteExec ["StanLakeside_fnc_setFuel",_vehicle];
		    }
		    	else
		    {
		    	_vehicle setFuel ((Fuel _vehicle) + 0.2);
		    };
	    };
        
	    case (_vehicle isKindOf "Ship"):
	    {
		    if(!local _vehicle) then
		    {
		    	[_vehicle,(Fuel _vehicle) + 0.35] remoteExec ["StanLakeside_fnc_setFuel",_vehicle];
		    }
		    	else
		    {
		    	_vehicle setFuel ((Fuel _vehicle) + 0.35);
		    };
	    };
    };
};