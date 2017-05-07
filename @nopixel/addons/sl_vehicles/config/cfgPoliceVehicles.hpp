/*	
Chevrolet Tahoe
*/	
class TahoeCB_01;
    class sl_tahoe_police : TahoeCB_01
	{
		maxSpeed = 330;
		enginePower = 550;
		displayName = "Chevrolet Tahoe Police";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\tahoe\police.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    class sl_tahoe_police_supervisor : sl_tahoe_police
	{
		displayName = "Chevrolet Tahoe Police Supervisor";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\tahoe\police_supervisor.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    class sl_tahoe_sheriff : sl_tahoe_police
	{
		displayName = "Chevrolet Tahoe Sheriff";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\tahoe\sheriff.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    class sl_tahoe_sheriff2 : sl_tahoe_police
	{
		displayName = "Chevrolet Tahoe Sheriff 2";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\tahoe\sheriff2.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
	class sl_tahoe_statetrooper : sl_tahoe_police
	{
		displayName = "Chevrolet Tahoe State Trooper";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\tahoe\statetrooper.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
class TahoePDUC_01;
	class sl_tahoeuc_police : TahoePDUC_01
	{
		maxSpeed = 330;
		enginePower = 550;
		displayName = "Chevrolet Tahoe Police UC";
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)","","","","","","","","","","","","","","","","","","","","","","",""};
	};
/*	
Ford Mustang
*/	
class kmc_Mustang_510;
    class sl_mustang_police : kmc_Mustang_510
	{
		enginePower = 1400;
		displayName = "Ford Mustang Boss 302 Police";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\mustang\police.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    class sl_mustang_sheriff : sl_mustang_police
	{
		displayName = "Ford Mustang Boss 302 Sheriff";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\mustang\sheriff.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
	class sl_mustang_swat : sl_mustang_police
	{
		displayName = "Ford Mustang Boss 302 SWAT";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\mustang\swat.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
/*
Ford F150
*/
class sl_f150_statetrooper;
	class kif_f150_statetrooper : sl_f150_statetrooper {
		displayName = "0405 Ford F150 State Trooper";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\f150\fordf150_st.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
/*	
Lamborghini Reventon
*/
class ivory_rev_marked;
	class kif_rev_marked: ivory_rev_marked
	{
		maxOmega = 1100;
		enginePower = 1500;
		peakTorque = 2500;
		maxSpeed = 450;
	};
class ivory_rev_unmarked;
	class kif_rev_unmarked: ivory_rev_unmarked
	{
		maxOmega = 1100;
		enginePower = 1500;
		peakTorque = 2500;
		maxSpeed = 450;
	};
	class kif_rev_unmarked_bb: kif_rev_unmarked
	{
		displayName = "Lamborghini Reventon Unmarked Black";
	};


/*
#       SEGMENT AIAD/DTU


BMW M3
*/	
class ivory_m3_base;
	class kif_m3_unmarked_bb: ivory_m3_base
	{
		author="Ivory";
		vehicleClass="IvoryExtra";
		displayName = "BMW M3 Unmarked Black";
		scope=2;
		scopeCurator=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		maxOmega=869.16998;
		enginePower=810;
		peakTorque = 2500;
		maxSpeed = 400;
		emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 0;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyNumbers = 0;
	};
	class kif_m3_unmarked_mbb : kif_m3_unmarked_bb
	{
		displayName = "BMW M3 Unmarked Black Metalic";
	};
	class kif_m3_unmarked_br : kif_m3_unmarked_bb
	{
		displayName = "BMW M3 Unmarked Black Red";
	};
	class kif_m3_unmarked_rb : kif_m3_unmarked_bb
	{
		displayName = "BMW M3 Unmarked Red Black";
	};
	class kif_m3_unmarked_rr : kif_m3_unmarked_bb
	{
		displayName = "BMW M3 Unmarked Red Red";
	};
	class kif_m3_unmarked_gb : kif_m3_unmarked_bb
	{
		displayName = "BMW M3 Unmarked Gray Black";
	};
	class kif_m3_unmarked_mgb : kif_m3_unmarked_bb
	{
		displayName = "BMW M3 Unmarked Gray Black Metalic";
	};
	class kif_m3_unmarked_blb : kif_m3_unmarked_bb
	{
		displayName = "BMW M3 Unmarked Blue Black";
	};
	class kif_m3_unmarked_mblb : kif_m3_unmarked_bb
	{
		displayName = "BMW M3 Unmarked Blue Black Metalic";
	};

/*	
Subaru WRX STI
*/	
class ivory_wrx_base;
	class kif_wrx_unmarked_bb: ivory_wrx_base
	{
		author="Ivory";
		vehicleClass="IvoryExtra";
        displayName = "Subaru WRX STI Unmarked Black";
		scope=2;
		scopeCurator=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
        maxOmega=869.16998;
		enginePower=810;
		peakTorque = 2500;
		maxSpeed = 400;
        emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 0;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyNumbers = 0;
	};
	class kif_wrx_unmarked_mbb : kif_wrx_unmarked_bb
	{
		displayName = "Subaru WRX STI Unmarked Black Metallic";
	};
	class kif_wrx_unmarked_br : kif_wrx_unmarked_bb
	{
		displayName = "Subaru WRX STI Unmarked Unmarked Black Red";
	};
	class kif_wrx_unmarked_rb : kif_wrx_unmarked_bb
	{
		displayName = "Subaru WRX STI Unmarked Unmarked Red Black";
	};
	class kif_wrx_unmarked_rr : kif_wrx_unmarked_bb
	{
		displayName = "Subaru WRX STI Unmarked Unmarked Red Red";
	};
	class kif_wrx_unmarked_gb : kif_wrx_unmarked_bb
	{
		displayName = "Subaru WRX STI Unmarked Unmarked Gray Black";
	};
	class kif_wrx_unmarked_mgb : kif_wrx_unmarked_bb
	{
		displayName = "Subaru WRX STI Unmarked Unmarked Gray Black Metalic";
	};
	class kif_wrx_unmarked_blb : kif_wrx_unmarked_bb
	{
		displayName = "Subaru WRX STI Unmarked Unmarked Blue Black";
	};
	class kif_wrx_unmarked_mblb : kif_wrx_unmarked_bb
	{
		displayName = "Subaru WRX STI Unmarked Unmarked Blue Black Metalic";
	};
/*	
Audi RS4
*/	
class ivory_rs4_base;
	class kif_rs4_unmarked_bb: ivory_rs4_base
	{
		author="Ivory";
		vehicleClass="IvoryExtra";
        displayName = "Audi RS4 Unmarked Black";
		scope=2;
		scopeCurator=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
       	maxOmega=869.16998;
		enginePower=810;
		peakTorque = 2500;
		maxSpeed = 400;
        emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 0;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyNumbers = 0;
	};
	class kif_rs4_unmarked_mbb : kif_rs4_unmarked_bb
	{
		displayName = "Audi RS4 Unmarked Black Metallic";
	};
	class kif_rs4_unmarked_br : kif_rs4_unmarked_bb
	{
		displayName = "Audi RS4 Unmarked Unmarked Black Red";
	};
	class kif_rs4_unmarked_rb : kif_rs4_unmarked_bb
	{
		displayName = "Audi RS4 Unmarked Unmarked Red Black";
	};
	class kif_rs4_unmarked_rr : kif_rs4_unmarked_bb
	{
		displayName = "Audi RS4 Unmarked Unmarked Red Red";
	};
	class kif_rs4_unmarked_gb : kif_rs4_unmarked_bb
	{
		displayName = "Audi RS4 Unmarked Unmarked Gray Black";
	};
	class kif_rs4_unmarked_mgb : kif_rs4_unmarked_bb
	{
		displayName = "Audi RS4 Unmarked Unmarked Gray Black Metalic";
	};
	class kif_rs4_unmarked_blb : kif_rs4_unmarked_bb
	{
		displayName = "Audi RS4 Unmarked Unmarked Blue Black";
	};
	class kif_rs4_unmarked_mblb : kif_rs4_unmarked_bb
	{
		displayName = "Audi RS4 Unmarked Unmarked Blue Black Metalic";
	};

/*	
Lancer Evo
*/	
class ivory_evox_base;
	class kif_evox_unmarked_bb: ivory_evox_base
	{
		author="Ivory";
		vehicleClass="IvoryExtra";
        displayName = "Mitsubishi Lancer Evo X Unmarked Black";
		scope=2;
		scopeCurator=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
        maxOmega=869.16998;
		enginePower=810;
		peakTorque = 2500;
		maxSpeed = 400;
        emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 0;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyNumbers = 0;
	};
	class kif_evox_unmarked_mbb : kif_evox_unmarked_bb
	{
		displayName = "Mitsubishi Lancer Evo X Unmarked Black Metallic";
	};
	class kif_evox_unmarked_br : kif_evox_unmarked_bb
	{
		displayName = "Mitsubishi Lancer Evo X Unmarked Unmarked Black Red";
	};
	class kif_evox_unmarked_rb : kif_evox_unmarked_bb
	{
		displayName = "Mitsubishi Lancer Evo X Unmarked Unmarked Red Black";
	};
	class kif_evox_unmarked_rr : kif_evox_unmarked_bb
	{
		displayName = "Mitsubishi Lancer Evo X Unmarked Unmarked Red Red";
	};
	class kif_evox_unmarked_gb : kif_evox_unmarked_bb
	{
		displayName = "Mitsubishi Lancer Evo X Unmarked Unmarked Gray Black";
	};
	class kif_evox_unmarked_mgb : kif_evox_unmarked_bb
	{
		displayName = "Mitsubishi Lancer Evo X Unmarked Unmarked Gray Black Metalic";
	};
	class kif_evox_unmarked_blb : kif_evox_unmarked_bb
	{
		displayName = "Mitsubishi Lancer Evo X Unmarked Unmarked Blue Black";
	};
	class kif_evox_unmarked_mblb : kif_evox_unmarked_bb
	{
		displayName = "Mitsubishi Lancer Evo X Unmarked Unmarked Blue Black Metalic";
	};

class ivory_e36_2;
    class ivory_e36_unmarked_bb_civ : ivory_e36_2
    {};

class ivory_m3_2;
    class ivory_e92_unmarked_bb_civ : ivory_m3_2
    {};

class ivory_isf_2;
    class ivory_isf_unmarked_bb_civ : ivory_isf_2
    {};

class ivory_wrx_2;
    class ivory_wrx_unmarked_bb_civ : ivory_wrx_2
    {};

class ivory_evox_2;
    class ivory_evox_unmarked_bb_civ : ivory_evox_2
    {};

class ivory_rs4_2;
    class ivory_rs4_unmarked_bb_civ : ivory_rs4_2
    {};

class ivory_gti_2;
    class ivory_gti_unmarked_bb_civ : ivory_gti_2
    {};

class ivory_c_2;
    class ivory_c_unmarked_bb_civ : ivory_c_2
    {};

class ivory_gt500_2;
    class ivory_gt500_unmarked_bb_civ : ivory_gt500_2
    {};

class ivory_190e_2;
    class ivory_190e_unmarked_bb_civ : ivory_190e_2
    {};

class ivory_lfa_2;
    class ivory_lfa_unmarked_bb_civ : ivory_lfa_2
    {};

class ivory_r34_2;
    class ivory_r34_unmarked_bb_civ : ivory_r34_2
    {};

class ivory_911_2;
    class ivory_911_unmarked_bb_civ : ivory_911_2
    {};

class ivory_lp560_2;
    class ivory_lp560_unmarked_bb_civ : ivory_lp560_2
    {};

class ivory_rev_2;
    class ivory_rev_unmarked_bb_civ : ivory_rev_2
    {};

class ivory_supra_2;
    class ivory_supra_unmarked_bb_civ : ivory_supra_2
    {};

class ivory_supra_topsecret_2;
    class ivory_supra_topsecret_unmarked_bb_civ : ivory_supra_topsecret_2
    {};

class ivory_f1_2;
    class ivory_f1_unmarked_bb_civ : ivory_f1_2
    {};

class ivory_elise_2;
    class ivory_elise_unmarked_bb_civ : ivory_elise_2
    {};

class ivory_ccx_2;
    class ivory_ccx_unmarked_bb_civ : ivory_ccx_2
    {};

class ivory_veyron_2;
    class ivory_veyron_unmarked_bb_civ : ivory_veyron_2
    {};

class ivory_mp4_2;
    class ivory_mp4_unmarked_bb_civ : ivory_mp4_2
    {};

class ivory_r8_spyder_2;
    class ivory_r8_spyder_unmarked_bb_civ : ivory_r8_spyder_2
    {};
