createDialog "garage3";

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
};


{
	_class = _x;
	_vehicleName = [_x] call StanLakeside_fnc_getVehicleName; 
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




