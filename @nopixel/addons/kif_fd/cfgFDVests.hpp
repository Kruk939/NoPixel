class kif_fd_chief: V_TacVest_blk_POLICE
	{
		scope=2;
		displayName="SilverLake F.D. Chief Vest";
		picture = "\kif_fd\Data\ui\sl_logo.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\kif_fd\Data\clothing\fd\vest\chief_fd.paa"
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
class kif_fd_probie: kif_fd_chief{
    displayName="SilverLake Probie Vest";
    hiddenSelectionsTextures[]=
		{
			"\kif_fd\Data\clothing\fd\vest\probie.paa"
		};
};
class kif_fd_fd: kif_fd_chief{
    displayName="SilverLake F.D. Vest";
    hiddenSelectionsTextures[]=
		{
			"\kif_fd\Data\clothing\fd\vest\fd.paa"
		};
};
class kif_fd_divchief: kif_fd_chief{
    displayName="SilverLake F.D. Divison Chief";
    hiddenSelectionsTextures[]=
		{
			"\kif_fd\Data\clothing\fd\vest\div_chief.paa"
		};
};