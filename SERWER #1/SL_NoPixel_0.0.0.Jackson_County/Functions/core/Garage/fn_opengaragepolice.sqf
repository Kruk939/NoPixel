if(str CurrentCursorTarget find "tallerdepinturaabandonado" > -1 || str CurrentCursorTarget find "otros" > -1 || str CurrentCursorTarget find "garaje" > -1 ) then { createdialog "garageplates"; } else { createDialog "garage3"; };

ctrlSetText [1000, "Garage"];

_garage = [];

if(myJob == "Cop") then {
	_garage = [
			"kif_cvpi_police",
			"kif_cvpi_police2",
			"kif_cvpi_sheriff",
			"kif_cvpi_swat",
			"kif_cvpi_highway",
			//"kif_cvpi_black",
			//"kif_cvpi_white",
			"kif_dodge_charger_police",
			"kif_dodge_charger_police2",
			"kif_dodge_charger_sheriff",
			"kif_dodge_charger_swat",
			"kif_dodge_charger_highway",
			//"kif_dodge_charger_black",
			//"kif_dodge_charger_white",
			"kif_dodgedurango_police",
			"kif_dodgedurango_police2",
			"kif_dodgedurango_sheriff",
			"kif_dodgedurango_swat",
			"kif_dodgedurango_highway",
			//"kif_dodgedurango_black",
			//"kif_dodgedurango_white",
			"sl_impala_201_supervisior",
			"sl_impala_202",
			"sl_impala_203",
			"sl_impala_204",
			"sl_impala_um_white",
			"sl_impala_um_black",
			"sl_impala_um_blue",
			"sl_impala_um_red",
			"sl_f150_so",
			"sl_cvpi_241",
			"sl_cvpi_242",
			"sl_cvpi_243",
			"sl_cvpi_244",
			"sl_suburban_251",
			"sl_suburban_250",
			"sl_taurus_232",
			"sl_taurus_233",
			"sl_taurus_231",
			"sl_fpiu_so",
			"sl_fpiu_227",
			"sl_charger_220",
			"sl_charger_slicktop_221",
			"sl_224",
			"red_kawasaki_10_p_sheriff",
			"red_f350_08_p_parkranger",
			"kif_suburban_black",
			"kif_tahoe_police",
			"kif_tahoe_police_supervisor",
			"kif_tahoe_sheriff",
			"kif_tahoe_sheriff2",
			"kif_tahoeuc_police",
			"kif_mustang_police",
			"kif_mustang_sheriff",
			"sl_charger_sert",
			"SL_Command_Unit",
			"kif_taurus_police",
			"red_cvpi_06_p_trooper",
			"red_explorer_16_p_statetrooper",
			"red_f350_08_p_statetrooper",
			"sl_f150_statetrooper",
			"kif_tahoe_statetrooper",
			"fpiu_01",
			"red_explorer_16_p_fto",
			"red_kawasaki_10_p",
			"red_porsche_12_p_u_black",
			"red_suburban_15_p_f_ia",
			"FPIU_04",
			"kif_ford350_swat",
			"kif_charger12_swat",
			"kif_mustang_swat",
			"cg_suburban_sert_pol",
			"Abruzzi_LencoPD_01",
			//"Abruzzi_LencoPD_01",
			//"kif_taurus_sheriff",
			//"kif_kawasaki_police",
			//"kif_kawasaki_sheriff",
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
			"kif_rev_marked",
			"kif_rev_unmarked",
			"B_Boat_Transport_01_F",
			"ivory_rs4_unmarked",
			"vvv_HarleyDavidson_CustomBobber",
			"C_Boat_Civil_01_F",
			"C_Scooter_Transport_01_F",
			"MELB_H6M",
			"MELB_MH6M"
			];
			if (client_dtu_actions >= 1) then {
			_garageMore = [
			
                //UC
                
				"kif_m3_unmarked_bb",
				"kif_m3_unmarked_mbb",
				"kif_m3_unmarked_br",
				"kif_m3_unmarked_rr",
				"kif_m3_unmarked_rb",
				"kif_m3_unmarked_gb",
				"kif_m3_unmarked_mgb",
				"kif_m3_unmarked_blb",
				"kif_m3_unmarked_mblb",
				
				"kif_wrx_unmarked_bb",
				"kif_wrx_unmarked_mbb",
				"kif_wrx_unmarked_br",
				"kif_wrx_unmarked_rb",
				"kif_wrx_unmarked_rr",
				"kif_wrx_unmarked_gb",
				"kif_wrx_unmarked_mgb",
				"kif_wrx_unmarked_blb",
				"kif_wrx_unmarked_mblb",
				
				"kif_rs4_unmarked_bb",
				"kif_rs4_unmarked_mbb",
				"kif_rs4_unmarked_br",
				"kif_rs4_unmarked_rb",
				"kif_rs4_unmarked_rr",
				"kif_rs4_unmarked_gb",
				"kif_rs4_unmarked_mgb",
				"kif_rs4_unmarked_blb",
				"kif_rs4_unmarked_mblb",
				
				"kif_evox_unmarked_bb",
				"kif_evox_unmarked_mbb",
				"kif_evox_unmarked_br",
				"kif_evox_unmarked_rb",
				"kif_evox_unmarked_rr",
				"kif_evox_unmarked_gb",
				"kif_evox_unmarked_mgb",
				"kif_evox_unmarked_blb",
				"kif_evox_unmarked_mblb",
				
				"kif_rev_unmarked_bb",
                
                //CIV
                "ivory_e36_unmarked_bb_civ",
                "ivory_e92_unmarked_bb_civ",
                "ivory_isf_unmarked_bb_civ",
                "ivory_wrx_unmarked_bb_civ",
                "ivory_evox_unmarked_bb_civ",
                "ivory_rs4_unmarked_bb_civ",
                "ivory_gti_unmarked_bb_civ",
                "ivory_c_unmarked_bb_civ",
                "ivory_gt500_unmarked_bb_civ",
                "ivory_190e_unmarked_bb_civ",
                "ivory_lfa_unmarked_bb_civ",
                "ivory_r34_unmarked_bb_civ",
                "ivory_911_unmarked_bb_civ",
                "ivory_lp560_unmarked_bb_civ",
                "ivory_rev_unmarked_bb_civ",
                "ivory_supra_unmarked_bb_civ",
                "ivory_supra_topsecret_unmarked_bb_civ",
                "ivory_f1_unmarked_bb_civ",
                "ivory_elise_unmarked_bb_civ",
                "ivory_ccx_unmarked_bb_civ",
                "ivory_veyron_unmarked_bb_civ",
                "ivory_mp4_unmarked_bb_civ",
                "ivory_r8_spyder_unmarked_bb_civ"
			];
			_garage = _garage + _garageMore;
			};
			if(getPlayerUID player in ["76561197998091289","76561198201987250","76561197982469013"]) then {
				_garageMore = [
				"kif_panamera_uc_black"
			];
			_garage = _garage + _garageMore;
			};
	//if(player getvariable "cop" > 7) then { _garage pushback "B_MRAP_01_hmg_F"; };
};
if(myJob == "EMS" || myJob == "Fire") then {
	_garage = [
				"C_hh60j_unarmed_F",
				"ivory_isf_medic_rr",
				"NP_Jonzie_Ambulance1",
				"NP_Jonzie_Ambulance2",
				//"red_ambulance_08_EMS",
				//"red_ambulance_08_FD",
				//"red_ambulance_08_SR",
				"vvv_fire_truck",
				"B_Boat_Transport_01_F",
				"C_Boat_Civil_01_F",
				"kif_tahoe_coastguard",
				"VVV_dodge_charger_medic",
				"VVV_DodgeDurango_medic",
				"ivory_suburban_ems",
				"FPIUEMS_01",
				"sl_impala_fire_fd",
				"ivory_isf_fd",
				"SL_MCP",
				"A3PL_Engine",
				"A3PL_Ladder",
				"A3PL_Rescue",
				"AM_Rescue",
				"nopixel_guardacostas",
				"kif_orca_ems",
				"kif_mh9_ems",
				"EC635_SAR"
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




