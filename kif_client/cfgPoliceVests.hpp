class kif_slpa_vest: V_TacVest_blk_POLICE
	{
		scope=2;
		displayName="SilverLake Police Academy Vest";
		picture="\kif_client\textures\icons\sl_logo.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\kif_client\textures\clothing\vests\short\short_police_slpa.paa"
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
class kif_traffic_vest: kif_slpa_vest
    {
        displayName="Traffic Vest";
        hiddenSelectionsTextures[]=
		{
			"\kif_client\textures\clothing\vests\short\short_traffic_vest.paa"
		};  
    };
class kif_traffic_sheriff_vest: kif_slpa_vest
    {
        displayName="Sheriff Traffic Vest";
        hiddenSelectionsTextures[]=
		{
			"\kif_client\textures\clothing\vests\short\short_sheriff_trafic_vest.paa"
		};  
    };