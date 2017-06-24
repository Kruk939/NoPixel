/*	
TAHOE COAST GUARD
*/	
	class sl_tahoe_coastguard : sl_tahoe_police
	{
		displayName = "Chevrolet Tahoe Coast Guard";
        hiddenSelectionsTextures[] = {"\sl_vehicles\textures\tahoe\coastguard.paa","","","","","","","","","","","","","","","","","","","","","","",""};
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
	class IVY_MH9: B_Heli_Light_01_F
	{
		displayName="AMS Hammingbird MH9 (IVY-MH9)";
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
			"\sl_vehicles\textures\mh9\MH9_Hammingbird_EMS.paa"
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
class C_Heli_Light_01_civil_F;
	class M900_IVY: C_Heli_Light_01_civil_F
	{
		faction="CIV_F";
		side=3;
		displayName="AMS Hammingbird M900 (IVY-M900)";
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles\textures\mh9\m_900_EMS.paa"
		};
		class eventhandlers
		{
			init = "this setVariable [""BIS_enableRandomization"", false],(_this select 0) setobjecttexture [0,""\sl_vehicles\textures\mh9\m_900_EMS.paa""]";
		};
	};

class JR_ford_fusion_police_not_wall_base;
class sl_rru_119: JR_ford_fusion_police_not_wall_base
	{
		scope = 2;
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		displayName = "RRU Ford Fusion (119)";
		vehicleClass = "JR_police_vehicles";
		author = "Jose Ramos";
		class eventhandlers
		{
			init="(_this select 0) call DD_fnc_VehicleInit; (_this select 0) spawn vhe_fnc_sirenas;[_this select 0] execVM '\JR_ford_fusion_police\radar.sqf';";
		};
		hiddenSelectionsTextures[] = {"\sl_vehicles\textures\ford_fusion\119_Ford_Fusion_RRU.paa"};
		#include "\sl_vehicles_red\data\sirenArray.hpp"
	};
class sl_rru_120: JR_ford_fusion_police_not_wall_base
	{
		scope = 2;
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		displayName = "RRU Ford Fusion (120)";
		vehicleClass = "JR_police_vehicles";
		author = "Jose Ramos";
		class eventhandlers
		{
			init="(_this select 0) call DD_fnc_VehicleInit; (_this select 0) spawn vhe_fnc_sirenas;[_this select 0] execVM '\JR_ford_fusion_police\radar.sqf';";
		};
		hiddenSelectionsTextures[] = {"\sl_vehicles\textures\ford_fusion\120_Ford_Fusion_RRU.paa"};
		#include "\sl_vehicles_red\data\sirenArray.hpp"
	};
class EC635_Unarmed;
class EC635_IVY_635: EC635_Unarmed
	{
		author = "Aplion";
		displayName = "AMS Eurocopter EC-635 (IVY-635)";
		scope = 2;
		side = 3;
		faction = "CIV_F";
		crew = "C_man_1_1_F";
		typicalCargo[] = {"C_man_1_1_F","C_man_1_1_F"};
		vehicleClass = "Air";
		hiddenSelectionsTextures[] = {"\sl_vehicles\textures\eurocopter\ems\OuterHaul_co.paa","\sl_vehicles\textures\eurocopter\ems\UpperParts_co.paa","\sl_vehicles\textures\eurocopter\ems\Tail_co.paa","\sl_vehicles\textures\eurocopter\ems\bawl_co.paa","\sl_vehicles\textures\eurocopter\ems\SideDoors_co.paa","\sl_vehicles\textures\eurocopter\ems\CargoDoors_co.paa"};
	};
class Jonzie_Ambulance;

	class ems_ambulance_101 : Jonzie_Ambulance {
		displayName = "GMC Ambulance BLUE (101)";
		class eventhandlers
		{
			init = "(_this select 0) setobjecttexture [0,""\sl_vehicles\textures\jonzie_ambulance\EMS_blue_101.paa""],[_this select 0] execVM ""\Jonzie_Code\functions\Ambulance\Init_Ambulance.sqf""";
		};
	};
	class ems_ambulance_102 : Jonzie_Ambulance {
		displayName = "GMC Ambulance BLUE (102)";
		class eventhandlers
		{
			init = "(_this select 0) setobjecttexture [0,""\sl_vehicles\textures\jonzie_ambulance\EMS_blue_102.paa""],[_this select 0] execVM ""\Jonzie_Code\functions\Ambulance\Init_Ambulance.sqf""";
		};
	};
	class ems_ambulance_103 : Jonzie_Ambulance {
		displayName = "GMC Ambulance BLUE (103)";
		class eventhandlers
		{
			init = "(_this select 0) setobjecttexture [0,""\sl_vehicles\textures\jonzie_ambulance\EMS_blue_103.paa""],[_this select 0] execVM ""\Jonzie_Code\functions\Ambulance\Init_Ambulance.sqf""";
		};
	};
	class ems_ambulance_104 : Jonzie_Ambulance {
		displayName = "GMC Ambulance RED (104)";
		class eventhandlers
		{
			init = "(_this select 0) setobjecttexture [0,""\sl_vehicles\textures\jonzie_ambulance\EMS_red_104.paa""],[_this select 0] execVM ""\Jonzie_Code\functions\Ambulance\Init_Ambulance.sqf""";
		};
	};
	class ems_ambulance_105 : Jonzie_Ambulance {
		displayName = "GMC Ambulance RED (105)";
		class eventhandlers
		{
			init = "(_this select 0) setobjecttexture [0,""\sl_vehicles\textures\jonzie_ambulance\EMS_red_105.paa""],[_this select 0] execVM ""\Jonzie_Code\functions\Ambulance\Init_Ambulance.sqf""";
		};
	};
	class ems_ambulance_106 : Jonzie_Ambulance {
		displayName = "GMC Ambulance RED (106)";
		class eventhandlers
		{
			init = "(_this select 0) setobjecttexture [0,""\sl_vehicles\textures\jonzie_ambulance\EMS_red_106.paa""],[_this select 0] execVM ""\Jonzie_Code\functions\Ambulance\Init_Ambulance.sqf""";
		};
	};
class ivory_isf_base;
	class sl_rru_121: ivory_isf_base
	{
		author="Ivory";
		vehicleClass="IvoryExtra";
        displayName = "RRU Lexus ISF (121)";
		scope=2;
		scopeCurator=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
        enginePower=810;
		peakTorque=1190;
        emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 1;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 0;
		emergencyRambar = 0;
		emergencyRadar = 0;
		emergencyNumbers = 0;
		texture="isf_rru_121";
	};
	class sl_rru_122: kif_isf_medic_rru_121
	{
		displayName = "RRU Lexus ISF (122)";
		texture="isf_rru_122";
	};
	class ivory_isf_fd: kif_isf_medic_rru_121
	{
		displayName = "Lexus IS-F Fire Department";
		texture="isf_fd";
	};