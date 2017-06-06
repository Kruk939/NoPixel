class slpd_black_vest: V_TacVest_blk_POLICE
	{
		scope=2;
		displayName="SL PD Vest Black";
		picture = "\sl_fd\Data\ui\sl_logo.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sl_pduniforms\Data\clothing\pd\vest\VEST_BLACK.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			containerClass="Supply180";
			passThrough=0.40000001;
			hiddenSelections[]=
			{
				"camo"
			};
			mass=100;
		};
	};
class slpd_yellow_vest: slpd_black_vest{
    displayName="SL PD Vest Yellow";
    hiddenSelectionsTextures[]=
		{
			"sl_pduniforms\Data\clothing\pd\vest\VEST_YELLOW.paa"
		};
};
class slpd_sheriff_black_vest: slpd_black_vest{
    displayName="SL Sheriff Black Vest";
    hiddenSelectionsTextures[]=
		{
			"sl_pduniforms\Data\clothing\sheriff\vest\sl_vest_so_black.paa"
		};
};
class slpd_sheriff_orange_vest: slpd_black_vest{
    displayName="SL Sheriff Orange Vest";
    hiddenSelectionsTextures[]=
		{
			"sl_pduniforms\Data\clothing\sheriff\vest\sl_vest_so_orange.paa"
		};
};
/*
	dtu
*/
class slpd_detective_vest_black: slpd_black_vest{
    displayName="SL DTU Detective Black Vest";
    hiddenSelectionsTextures[]=
		{
			"sl_pduniforms\Data\clothing\dtu\vest\detective_vest_black.paa"
		};
};
class slpd_detective_vest_white: slpd_black_vest{
    displayName="SL DTU Detective White Vest";
    hiddenSelectionsTextures[]=
		{
			"sl_pduniforms\Data\clothing\dtu\vest\detective_vest_white.paa"
		};
};
class slpd_dtu_vest_black: slpd_black_vest{
    displayName="SL DTU Black Vest";
    hiddenSelectionsTextures[]=
		{
			"sl_pduniforms\Data\clothing\dtu\vest\dtu_vest_black.paa"
		};
};
class slpd_dtu_vest_white: slpd_black_vest{
    displayName="SL DTU White Vest";
    hiddenSelectionsTextures[]=
		{
			"sl_pduniforms\Data\clothing\dtu\vest\dtu_vest_white.paa"
		};
};
class slpd_sert_vest : V_PlateCarrier1_rgr {
		displayName = "SERT Kamizelka Bojowa GREEN";
		picture = "\sl_pduniforms\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		class ItemInfo : ItemInfo {
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply500";
			mass = 1;
			armor = 80;
			passThrough = 1;
			hiddenSelections[] = { "camo" };
		};
		hiddenSelections[] = { "camo" };
		hiddenSelectionsTextures[]=
		{ 
			"sl_pduniforms\Data\clothing\sert\vest\green_vest.paa" 
		};
	};