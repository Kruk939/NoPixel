/*	
TAHOE COAST GUARD
*/	
	class sl_tahoe_coastguard : sl_tahoe_police
	{
		displayName = "Chevrolet Tahoe Coast Guard";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\tahoe\coastguard.paa","","","","","","","","","","","","","","","","","","","","","","",""};
	};
/*	
LEXUS IS-F
*/	
class ivory_isf_base;
	class ivory_isf_medic_rr: ivory_isf_base
	{
		author="Ivory";
		vehicleClass="IvoryExtra";
        displayName = "Lexus IS-F Rapid Response";
		scope=2;
		scopeCurator=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		enginePower=810;
		peakTorque=1190;
        emergencySiren=1;
		emergencyLightbarType=1;
		emergencyLightbarTop=1;
		emergencyLightbarFront=0;
		emergencyLightbarBack=0;
		emergencyCage=0;
		emergencyRambar=0;
		emergencyRadar=0;
		emergencyNumbers=0;
        texture="isf_rr_medic";
	};
	class ivory_isf_fd: ivory_isf_medic_rr
	{
		displayName = "Lexus IS-F Fire Department";
		texture="isf_fd";
	};
/*	
ORCA
*/	
class O_Heli_Light_02_unarmed_F;
	class kif_orca_ems: O_Heli_Light_02_unarmed_F
	{
		displayName="PO-30 Orca (EMS)";
		faction="CIV_F";
		side=3;
		crew="C_man_1_1_F";
		typicalCargo[]=
		{
			"C_man_1_1_F",
			"C_man_1_2_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles\textures\ems\helicopters\heli_light_02_ext_EMS.paa"
		};
	};
/*	
MH-9
*/
class B_Heli_Light_01_F;
	class kif_mh9_ems: B_Heli_Light_01_F
	{
		displayName="MH-9 (EMS)";
		faction="CIV_F";
		side=3;
		crew="C_man_1_1_F";
		typicalCargo[]=
		{
			"C_man_1_1_F",
			"C_man_1_2_F"
		};
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles\textures\ems\helicopters\heli_light_01_ext_EMS.paa"
		};
		transportSoldier=2;
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="rtd2_pos";
					pointDirection="rtd2_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
			class LowerMirror
			{
				renderTarget="rendertarget1";
				class CameraView
				{
					pointPosition="rtd1_pos";
					pointDirection="rtd1_dir";
					renderQuality=0;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
	};