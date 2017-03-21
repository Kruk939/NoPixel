/*	
Chevrolet Suburban LTZ 2015 
*/	
class red_suburban_15_p_u_black;
    class kif_suburban_black : red_suburban_15_p_u_black
	{
		displayName = "Chevrolet Suburban LTZ 2015 Slicktop Black";
	};
/*	
Chevrolet Tahoe
*/	
class TahoeCB_01;
    class kif_tahoe_police : TahoeCB_01
	{
		maxSpeed = 330;
		enginePower = 550;
		displayName = "Chevrolet Tahoe Police";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\tahoe\police.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    class kif_tahoe_police_supervisor : kif_tahoe_police
	{
		displayName = "Chevrolet Tahoe Police Supervisor";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\tahoe\police_supervisor.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    class kif_tahoe_sheriff : kif_tahoe_police
	{
		displayName = "Chevrolet Tahoe Sheriff";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\tahoe\sheriff.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    class kif_tahoe_sheriff2 : kif_tahoe_police
	{
		displayName = "Chevrolet Tahoe Sheriff 2";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\tahoe\sheriff2.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
	class kif_tahoe_statetrooper : kif_tahoe_police
	{
		displayName = "Chevrolet Tahoe State Trooper";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\tahoe\statetrooper.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
class TahoePDUC_01;
	class kif_tahoeuc_police : TahoePDUC_01
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
    class kif_mustang_police : kmc_Mustang_510
	{
		enginePower = 1400;
		displayName = "Ford Mustang Boss 302 Police";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\mustang\police.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
     class kif_mustang_sheriff : kif_mustang_police
	{
		displayName = "Ford Mustang Boss 302 Sheriff";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\mustang\sheriff.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
/*	
Ford Taurus
*/	
class red_taurus_10_p;
    class kif_taurus_police : red_taurus_10_p
	{
		enginePower = 500;
		peakTorque = 800;
		maxOmega = 700;

		displayName = "Ford Taurus Police";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\taurus\police.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    //class kif_taurus_sheriff : kif_mustang_police
	//{
	//	displayName = "Ford Taurus Sheriff";
    //    hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\taurus\sheriff.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	//};
/*	
Ford F350 SWAT z dildo
*/
class red_swat_08_p_swat;
	class kif_ford350_swat: red_swat_08_p_swat
	{
		displayName = "Ford F350 SWAT z dilodsem";
	};
/*	
Lamborghini Reventon
*/
class ivory_rev_marked;
	class kif_rev_marked: ivory_rev_marked
	{
		maxOmega = 1100;
		enginePower = 1500;
		peakTorque = 1300;
		maxSpeed = 450;
	};
class ivory_rev_unmarked;
	class kif_rev_unmarked: ivory_rev_unmarked
	{
		maxOmega = 1100;
		enginePower = 1500;
		peakTorque = 1300;
		maxSpeed = 450;
	};
/*	
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
		peakTorque=1190;
		maxSpeed = 330;
        emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
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
		peakTorque=1190;
		maxSpeed = 330;
        emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
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
		peakTorque=1190;
		maxSpeed = 330;
        emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
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
		peakTorque=1190;
		maxSpeed = 330;
        emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
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
