class sl_fd_chief: V_TacVest_blk_POLICE
	{
		scope=2;
		displayName="SilverLake F.D. Chief Vest";
		picture = "\sl_fd\Data\ui\sl_logo.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sl_fd\Data\clothing\fd\vest\chief_fd.paa"
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
class sl_fd_probie: sl_fd_chief{
    displayName="SilverLake Probie Vest";
    hiddenSelectionsTextures[]=
		{
			"\sl_fd\Data\clothing\fd\vest\probie.paa"
		};
};
class sl_fd_fd: sl_fd_chief{
    displayName="SilverLake F.D. Vest";
    hiddenSelectionsTextures[]=
		{
			"\sl_fd\Data\clothing\fd\vest\fd.paa"
		};
};
class sl_fd_divchief: sl_fd_chief{
    displayName="SilverLake F.D. Divison Chief";
    hiddenSelectionsTextures[]=
		{
			"\sl_fd\Data\clothing\fd\vest\div_chief.paa"
		};
};