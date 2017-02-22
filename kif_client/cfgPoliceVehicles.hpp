/*	
Chevrolet Suburban LTZ 2015 
*/	
class SuburbanPDUC_01;
    class kif_suburban_black : SuburbanPDUC_01
	{
		displayName = "Chevrolet Suburban LTZ 2015 Slicktop Black";
	};
class red_suburban_15_p_marked;
    class kif_suburban_black_marked : red_suburban_15_p_marked
	{
		displayName = "Chevrolet Suburban LTZ 2015 Lightbar Black";
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
Kawasaki Z1-P 2010
*/	
class red_kawasaki_10_p_p_sheriff;
    //class kif_kawasaki_police : red_kawasaki_10_p_p_sheriff
	//{
	//	displayName = "Kawasaki Z1-P 2010 Police";
    //    hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\kawasaki_z1p\police.paa"};
	//};
    class kif_kawasaki_sheriff : red_kawasaki_10_p_p_sheriff
	{
		displayName = "Kawasaki Z1-P 2010 Sheriff";
        hiddenSelectionsTextures[] = {"\kif_client\textures\vehicles\kawasaki_z1p\sheriff.paa"};
	};