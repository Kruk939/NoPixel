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