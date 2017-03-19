class kif_slpa_vest: Vest_Camo_Base
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
			"\kif_client\textures\vests\short\short_police_slpa.paa"
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
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=38;
					passThrough=0.41;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=38;
					passThrough=0.41;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=38;
					passThrough=0.41;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=38;
					passThrough=0.41;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=38;
					passThrough=0.41;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.41;
				};
			};
		};
	};
class kif_traffic_vest: kif_slpa_vest
    {
        displayName="Traffic Vest";
        hiddenSelectionsTextures[]=
		{
			"\kif_client\textures\vests\short\short_traffic_vest.paa"
		};  
    };
class kif_traffic_sheriff_vest: kif_slpa_vest
    {
        displayName="Sheriff Traffic Vest";
        hiddenSelectionsTextures[]=
		{
			"\kif_client\textures\vests\short\short_sheriff_trafic_vest.paa"
		};  
    };
class kif_police_vest: kif_slpa_vest
    {
        displayName="Police Vest";
        hiddenSelectionsTextures[]=
		{
			"\kif_client\textures\vests\short\short_police_vest.paa"
		};  
    };
class kif_sheriff_vest: kif_slpa_vest
    {
        displayName="Sheriff Vest";
        hiddenSelectionsTextures[]=
		{
			"\kif_client\textures\vests\short\short_sheriff_vest.paa"
		};  
    };
class kif_police_blue_vest: kif_slpa_vest
    {
        displayName="Police Blue Vest";
        hiddenSelectionsTextures[]=
		{
			"\kif_client\textures\vests\short\short_police_blue_vest.paa"
		};  
    };