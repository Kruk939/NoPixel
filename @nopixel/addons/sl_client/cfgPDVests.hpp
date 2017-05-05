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
			"\sl_client\tex\vest\traffic.paa"
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
			"\sl_client\tex\vest\traffic.paa"
		    };
			mass=10;
		};
	};
class sl_academy: sl_traffic_so
	{
		displayName="SL POLICE ACADEMY VEST";
		hiddenSelectionsTextures[]=
		{
			"\sl_client\tex\vest\academy.paa"
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
			"\sl_client\tex\vest\academy.paa"
		    };
			mass=10;
		};
	};
class sl_traffic_fire: sl_traffic_so
	{
		displayName="SL FIRE DEPARTMENT TRAFFIC VEST";
		hiddenSelectionsTextures[]=
		{
			"\sl_client\tex\vest\fire.paa"
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
			"\sl_client\tex\vest\fire.paa"
		    };
			mass=10;
		};
	};