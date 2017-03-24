class CfgPatches
{
	class kif_pduniforms
	{
		units[] = {"B_Competitor_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgFunctions
{
	class Love
	{
		class Authors
		{
			file="\kif_pduniforms";
			class WeLikeAuthors
			{
				preinit=1;
			};
		};
	};
};
class CfgVehicles
{
	class B_Competitor_F;

	
	class kifpd_rafwhite: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_rafwhite";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\RAF_white.paa"};
		displayName = "Police Uniform Raf Graf White";
		
	};
	
	class kifpd_rafblue: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_rafblue";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\RAF_blue.paa"};
		displayName = "Police Uniform Raf Graf Blue";
		
	};
	
	class kifpd_dzokawhite: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_dzokawhite";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\DZOKA_white.paa"};
		displayName = "Police Uniform Dzoka White";
		
	};
	
	class kifpd_dzokablue: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_dzokablue";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\DZOKA_blue.paa"};
		displayName = "Police Uniform Dzoka Blue";
		
	};
	
	class kifpd_cadet: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_cadet";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\cadet.paa"};
		displayName = "Police Uniform Cadet";
		
	};
	
	class kifpd_cptpolice: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_cptpolice";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\CPT+police.paa"};
		displayName = "Police Uniform Captain";
		
	};
	
	class kifpd_ltpolice: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_ltpolice";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\LT+police.paa"};
		displayName = "Police Uniform Lieutenant";
		
	};
	
	class kifpd_po1: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_po1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\PO1.paa"};
		displayName = "Police Uniform Police Officer 1";
		
	};
	
	class kifpd_po2: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_po2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\PO2.paa"};
		displayName = "Police Uniform Police Officer 2";
		
	};
	
	class kifpd_po3: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_po3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\PO3.paa"};
		displayName = "Police Uniform Police Officer 3";
		
	};
	
	class kifpd_po4: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_po4";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\PO4.paa"};
		displayName = "Police Uniform Police Officer 4";
		
	};
	
	class kifpd_sgt: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_sgt";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\SGT.paa"};
		displayName = "Police Uniform Sergeant";
		
	};
	
	class kifpd_ssgt: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_ssgt";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\pd\SSGT.paa"};
		displayName = "Police Uniform Staff Sergeant";
		
	};

	class kifpd_aiad_chief: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_aiad_chief";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\aiad\depdivision.paa"};
		displayName = "Police Uniform AIAD Division Chief";
		
	};

	class kifpd_aiad_depchief: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_aiad_depchief";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\aiad\deputy.paa"};
		displayName = "Police Uniform AIAD Deputy Division Chief";
		
	};


	class kifpd_aiad_inspector: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_aiad_inspector";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\aiad\inspector.paa"};
		displayName = "Police Uniform AIAD Inspector";
		
	};

	class kifpd_sheriff_chief: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_sheriff_chief";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\sheriff\sheriff_chief.paa"};
		displayName = "Sheriff Uniform Chief Jasny";
		
	};
	class kifpd_swat_ssgt: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_swat_ssgt";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\swat\SWAT_SSGT.paa"};
		displayName = "SWAT Staff Sergeant";
		
	};
	class kifpd_swat_sgt: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_swat_sgt";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\swat\SWAT_SGT.paa"};
		displayName = "SWAT Sergeant";
		
	};
	class kifpd_swat_po4: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "kifpd_uni_swat_po4";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"kif_pduniforms\Data\clothing\swat\SWAT_PO4.paa"};
		displayName = "SWAT Police Officer 4";
		
	};

};

class cfgWeapons
{
	class ItemCore;	// External class reference
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	
	class kifpd_uni_rafwhite: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Raf Graf White";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_rafwhite";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_dzokawhite: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Dzoka White";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_dzokawhite";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_dzokablue: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Dzoka Blue";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_dzokablue";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_rafblue: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Raf Graf Blue";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_rafblue";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_cadet: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Cadet";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_cadet";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_cptpolice: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Captain";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_cptpolice";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_ltpolice: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Lieutenant";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_ltpolice";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_po1: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Police Officer 1";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_po1";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_po2: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Police Officer 2";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_po2";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_po3: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Police Officer 3";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_po3";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_po4: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Police Officer 4";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_po4";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_sgt: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Sergeant";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_sgt";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_ssgt: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform Staff Sergeant";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_ssgt";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_aiad_chief: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform AIAD Division Chief";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_aiad_chief";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_aiad_depchief: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform AIAD Deputy Division Chief";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_aiad_depchief";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_aiad_inspector: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform AIAD Inspector";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_aiad_inspector";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_sheriff_chief: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Uniform Chief Jasny";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_sheriff_chief";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_swat_ssgt: Uniform_Base
	{
		scope = 2;
		displayName = "SWAT Staff Sergeant";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_swat_ssgt";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_swat_sgt: Uniform_Base
	{
		scope = 2;
		displayName = "SWAT Sergeant";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_swat_sgt";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};
	class kifpd_uni_swat_po4: Uniform_Base
	{
		scope = 2;
		displayName = "SWAT Police Officer 4";
		picture = "\kif_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "kifpd_swat_po4";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};


};
//};
