if(str CurrentCursorTarget find "tallerdepinturaabandonado" > -1 || str CurrentCursorTarget find "otros" > -1 || str CurrentCursorTarget find "garaje" > -1 ) then { createdialog "garageplates"; } else { createDialog "garage3"; };

ctrlSetText [1000, "Garage"];

_garage = [];

if(myJob == "Cop") then {
	_garage = [
			"MELB_H6M",
			"VVV_Ford_CVPI_Normal",
			"VVV_Ford_CVPI_sheriff",
			"VVV_Ford_CVPI_swat",
			"VVV_dodge_charger_normal",
			"VVV_dodge_charger_swat",
			"VVV_dodge_charger_black",
			"VVV_Dodge_Charger_HighWay",
			"vvv_DodgeDurango_POLICE",
			"VVV_DodgeDurango_Highway",
			"ivory_suburban_unmarked",
			"ivory_suburban_slicktop",
			"ivory_suburban_marked",
			"ivory_evox_unmarked",
			"ivory_evox_slicktop",
			"ivory_evox_marked",
			"ivory_isf_unmarked",
			"ivory_isf_slicktop",
			"ivory_isf_marked",
			"ivory_m3_unmarked",
			"ivory_m3_slicktop",
			"ivory_m3_marked",
			"ivory_rev_marked",
			"ivory_rev_unmarked",
			"sl_impala_201_supervisior",
			"sl_impala_202",
			"sl_impala_203",
			"sl_impala_204",
			"B_Boat_Transport_01_F",
			"ivory_rs4_unmarked",
			"vvv_HarleyDavidson_CustomBobber",
			"C_Boat_Civil_01_F"
			];
	//if(player getvariable "cop" > 7) then { _garage pushback "B_MRAP_01_hmg_F"; };
};
if(myJob == "EMS" || myJob == "Fire") then {
	_garage = [
				"C_hh60j_unarmed_F",
				"VVV_dodge_charger_white",
				"NP_Jonzie_Ambulance1",
				"NP_Jonzie_Ambulance2",
				"vvv_fire_truck",
				"B_Boat_Transport_01_F",
				"C_Boat_Civil_01_F",
				"VVV_dodge_charger_medic",
				"VVV_DodgeDurango_medic",
				"ivory_suburban_ems",
				"SL_MCP",
				"A3PL_Engine",
				"A3PL_Ladder",
				"A3PL_Rescue",
				"AM_Rescue",
				"nopixel_guardacostas"
			];
};
if(myJob == "Mafia") then {
_garage = [
	"VVV_Bentley_Continental_SS",
	"VVV_Bentley_Arnage",
	"VVV_Aston_Martin_1964_DB5",
	"vvv_NewYacht",
	"C_Boat_Civil_01_F"
	];
};


{
	_class = _x;
	_vehicleName = [_x] call Client_fnc_getVehicleName; 
	if((str CurrentCursorTarget find "embarcadero" > -1 ) && _class isKindOf "Ship" ) then {
		_veh = lbAdd [1500, format["%1",_vehicleName] ];
		lbSetData [1500, _veh, format["%1",Str(_x)]];
	} else {
		if !(_class isKindOf "Ship") then {
			_veh = lbAdd [1500, format["%1",_vehicleName] ];
			lbSetData [1500, _veh, format["%1",Str(_x)]];
		};
	};
}forEach _garage;

lbSetCurSel [1500, 0];




