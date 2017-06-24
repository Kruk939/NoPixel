createDialog "garage3";

ctrlSetText [1000, "Garage"];

_garage = [];
	
if(myJob == "EMS" || myJob == "Fire") then {
	_garage = [
				"ems_ambulance_101",
				"ems_ambulance_102",
				"ems_ambulance_103",
				"ems_ambulance_104",
				"ems_ambulance_105",
				"ems_ambulance_106",
				"red_ambulance_08_107",
				"red_ambulance_08_108",
				"red_ambulance_08_109",
				"red_ambulance_08_110",
				"",
				"sl_rru_111",
				"sl_rru_112",
				"sl_rru_113",
				"sl_rru_114",
				"sl_rru_115",
				"sl_rru_116",
				"sl_rru_117",
				"sl_rru_118",
				"sl_rru_119",
				"sl_rru_120",
				"sl_rru_121",
				"sl_rru_122",
				"",
				"EC635_IVY_635",
				"M900_IVY",
				"IVY_MH9",
				"",
				"np_Jonzie_Ambulancefire",
				"red_ambulance_08_SR",
				"red_ambulance_08_FD",
				"red_stretcher_e_e",
				"vvv_fire_truck",
				"B_Boat_Transport_01_F",
				"C_Boat_Civil_01_F",
				"sl_tahoe_coastguard",
				"VVV_dodge_charger_medic",
				"VVV_DodgeDurango_medic",
				"sl_impala_fire_fd",
				"sl_fd_explorer16p",
				"ivory_isf_fd",
				"SL_MCP",
				"A3PL_Engine",
				"A3PL_Ladder",
				"A3PL_Rescue",
				"AM_Rescue",
				"nopixel_guardacostas",
				"kif_orca_ems",
				"sl_boat_fire"
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




