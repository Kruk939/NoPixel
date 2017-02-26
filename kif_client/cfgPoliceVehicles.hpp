/*	
Chevrolet Suburban LTZ 2015 
*/	
class SuburbanPDUC_01;
    class kif_suburban_black : SuburbanPDUC_01
	{
		displayName = "Chevrolet Suburban LTZ 2015 Slicktop Black";
		hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\suburban\black.paa","","","","","","","","","","",""};
	};
class red_suburban_15_p_marked;
    class kif_suburban_black_marked : red_suburban_15_p_marked
	{
		displayName = "Chevrolet Suburban LTZ 2015 Lightbar Black";
		hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\suburban\black.paa","","","","","","","","","","",""};
	};
/*	
Chevrolet Tahoe
*/	
class TahoeCB_01;
    class kif_tahoe_police : TahoeCB_01
	{
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
/*	
Ford Mustang
*/	
class kmc_Mustang_510;
    class kif_mustang_police : kmc_Mustang_510
	{
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
class red_taurus_10_p_sert;
    class kif_taurus_police : red_taurus_10_p_sert
	{
		displayName = "Ford Taurus Police";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\taurus\police.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
    //class kif_taurus_sheriff : kif_mustang_police
	//{
	//	displayName = "Ford Taurus Sheriff";
    //    hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\taurus\sheriff.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	//};
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
		enginePower=810;
		peakTorque=1190;
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