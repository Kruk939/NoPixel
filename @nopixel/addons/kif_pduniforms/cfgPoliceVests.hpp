class kifpd_black_vest: V_TacVest_blk_POLICE
	{
		scope=2;
		displayName="SL PD Vest Black";
		picture = "\kif_fd\Data\ui\sl_logo.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"kif_pduniforms\Data\clothing\pd\vest\VEST_BLACK.paa"
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
class kifpd_yellow_vest: kifpd_black_vest{
    displayName="SL PD Vest Yellow";
    hiddenSelectionsTextures[]=
		{
			"kif_pduniforms\Data\clothing\pd\vest\VEST_YELLOW.paa"
		};
};
class kifpd_sheriff_black_vest: kifpd_black_vest{
    displayName="SL Sheriff Black Vest";
    hiddenSelectionsTextures[]=
		{
			"kif_pduniforms\Data\clothing\sheriff\vest\sl_vest_so_black.paa"
		};
};
class kifpd_sheriff_orange_vest: kifpd_black_vest{
    displayName="SL Sheriff Orange Vest";
    hiddenSelectionsTextures[]=
		{
			"kif_pduniforms\Data\clothing\sheriff\vest\sl_vest_so_orange.paa"
		};
};
/*
	dtu
*/
class kifpd_detective_vest_black: kifpd_black_vest{
    displayName="SL DTU Detective Black Vest";
    hiddenSelectionsTextures[]=
		{
			"kif_pduniforms\Data\clothing\dtu\vest\detective_vest_black.paa"
		};
};
class kifpd_detective_vest_white: kifpd_black_vest{
    displayName="SL DTU Detective White Vest";
    hiddenSelectionsTextures[]=
		{
			"kif_pduniforms\Data\clothing\dtu\vest\detective_vest_white.paa"
		};
};
class kifpd_dtu_vest_black: kifpd_black_vest{
    displayName="SL DTU Black Vest";
    hiddenSelectionsTextures[]=
		{
			"kif_pduniforms\Data\clothing\dtu\vest\dtu_vest_black.paa"
		};
};
class kifpd_dtu_vest_white: kifpd_black_vest{
    displayName="SL DTU White Vest";
    hiddenSelectionsTextures[]=
		{
			"kif_pduniforms\Data\clothing\dtu\vest\dtu_vest_white.paa"
		};
};