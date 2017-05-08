class sl_traffic_so: V_TacVest_blk_POLICE
	{
		scope=2;
		displayName="SL SHERIFF TRAFFIC VEST";
		picture="\sl_client\data\ui\logo.paa";
		model="sl_client\models\vest\sl_vest.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sl_client\textures\clothing\vests\short\traffic.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="sl_client\models\vest\sl_vest.p3d";
			containerClass="Supply180";
			passThrough=0.40000001;
			hiddenSelections[]=
			{
				"camo"
			};
		    hiddenSelectionsTextures[]=
		    {
			"\sl_client\textures\clothing\vests\short\traffic.paa"
		    };
			mass=10;
		};
	};
class sl_academy: sl_traffic_so
	{
		displayName="SL POLICE ACADEMY VEST";
		hiddenSelectionsTextures[]=
		{
			"\sl_client\textures\clothing\vests\short\academy.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="sl_client\models\vest\sl_vest.p3d";
			containerClass="Supply180";
			passThrough=0.40000001;
			hiddenSelections[]=
			{
				"camo"
			};
		    hiddenSelectionsTextures[]=
		    {
			"\sl_client\textures\clothing\vests\short\academy.paa"
		    };
			mass=10;
		};
	};
class sl_traffic_fire: sl_traffic_so
	{
		displayName="SL FIRE DEPARTMENT TRAFFIC VEST";
		hiddenSelectionsTextures[]=
		{
			"\sl_client\textures\clothing\vests\short\fire.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="sl_client\models\vest\sl_vest.p3d";
			containerClass="Supply180";
			passThrough=0.40000001;
			hiddenSelections[]=
			{
				"camo"
			};
		    hiddenSelectionsTextures[]=
		    {
			"\sl_client\textures\clothing\vests\short\fire.paa"
		    };
			mass=10;
		};
	};
class kif_slpa_vest: V_TacVest_blk_POLICE
	{
		scope=2;
		displayName="SilverLake Police Academy Vest";
		picture="\sl_client\textures\icons\sl_logo.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\sl_client\textures\clothing\vests\short\short_police_slpa.paa"
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
			"\sl_client\textures\clothing\vests\short\short_traffic_vest.paa"
		};  
    };
class kif_traffic_sheriff_vest: kif_slpa_vest
    {
        displayName="Sheriff Traffic Vest";
        hiddenSelectionsTextures[]=
		{
			"\sl_client\textures\clothing\vests\short\short_sheriff_trafic_vest.paa"
		};  
    };