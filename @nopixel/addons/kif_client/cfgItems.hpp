    class kif_BrickStack: ItemCore
	{
		scope=2;
		displayName="Bricks";
		descriptionShort="Hand these in at a Building Vendor!";
		picture="\kif_client\textures\icons\items\Bricks.paa";
		model="\A3\structures_f\civ\constructions\Bricks_V1_F";
		allowedSlots[]={901};
		mass=45;
	};
	class kif_MetalStack: ItemCore
	{
		scope=2;
		displayName="Iron Tubing";
		descriptionShort="Hand these in at a Building Vendor!";
		picture="\kif_client\textures\icons\items\Metal.paa";
		model="\A3\structures_f\civ\constructions\Pipes_Small_F";
		allowedSlots[]={901};
		mass=45;
	};
	class kif_Grinder: ItemCore
	{
		scope=2;
		displayName="Grinder";
		descriptionShort="Maybe a jail fence?!";
		picture="\kif_client\textures\icons\items\Grinder.paa";
		model="\A3\structures_f\items\Tools\Grinder_F";
		allowedSlots[]={901};
		mass=25;
	};
	class kif_Pseudo: ItemCore
	{
		scope=2;
		displayName="Pseudoephedrine";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\icons\items\container.paa";
		model="\A3\structures_f\Items\Vessels\CanisterPlastic_F";
		allowedSlots[]={901};
		mass=55;
	};
	class kif_GasCooker: ItemCore
	{
		scope=2;
		displayName="Gas Cooker";
		descriptionShort="Used for Cooking";
		picture="\kif_client\textures\icons\items\GasCooker.paa";
		model="\A3\structures_f_epa\items\Tools\GasCooker_F";
		allowedSlots[]={901};
		mass=15;
	};
	class kif_Acetone: ItemCore
	{
		scope=2;
		displayName="Acetone";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\icons\items\Acetone.paa";
		model="\A3\structures_f_epa\items\Medical\DisinfectantSpray_F";
		allowedSlots[]={901};
		mass=15;
	};
	class kif_Fuel: ItemCore
	{
		scope=2;
		displayName="Carnister of Fuel";
		descriptionShort="FUEL FUEL FUEL!";
		picture="\kif_client\textures\icons\items\container.paa";
		model="\A3\structures_f\Items\Vessels\CanisterPlastic_F";
		allowedSlots[]={901};
		mass=130;
	};
	class kif_100k: ItemCore
	{
		scope=2;
		displayName="100 000$";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\icons\items\suitcase.paa";
		model="\A3\structures_f\items\luggage\Suitcase_F";
		allowedSlots[]={901,801,701};
		mass=50;
	};
	class kif_50k: ItemCore
	{
		scope=2;
		displayName="50 000$";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\icons\items\suitcase.paa";
		model="\A3\structures_f\items\luggage\Suitcase_F";
		allowedSlots[]={901,801,701};
		mass=50;
	};
	class kif_25k: ItemCore
	{
		scope=2;
		displayName="25 000$";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\icons\items\suitcase.paa";
		model="\kif_client\models\suitcase\suitcase_closed.p3d";
		allowedSlots[]={901,801,701};
		mass=50;
	};
	class kif_10k: ItemCore
	{
		scope=2;
		displayName="10 000$";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\icons\items\suitcase.paa";
		model="\kif_client\models\suitcase\suitcase_closed.p3d";
		allowedSlots[]={901,801,701};
		mass=50;
	};
	class kif_5k: ItemCore
	{
		scope=2;
		displayName="5 000$";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\icons\items\suitcase.paa";
		model="\kif_client\models\suitcase\suitcase_closed.p3d";
		allowedSlots[]={901,801,701};
		mass=50;
	};
	class kif_gopro: ItemCore
	{
		scope=2;
		displayName="GoPro Hero 4";
		author="Extermi111";
		descriptionShort="GoPro for personal recording.";
		picture="\kif_client\textures\icons\items\gopro.paa";
		model="\kif_client\models\gopro\gopro.p3d";
		allowedSlots[]={901,801,701};
		mass=15;
	};
	class kif_nitro: ItemCore
	{
		scope=2;
		displayName="Nitrous Oxide Bottle";
		author="Extermi111";
		descriptionShort="Great NOS for my car. Oh yeah";
		picture="\kif_client\textures\icons\items\nitro.paa";
		model="\kif_client\models\nos\nitro.p3d";
		allowedSlots[]={901};
		mass=15;
	};
	class kif_panicbutton: ItemCore
	{
		scope=2;
		displayName="Panic Button";
		author="Extermi111";
		descriptionShort="I feel dangerously. I will click it!";
		picture="\kif_client\textures\icons\items\panicbutton.paa";
		model="\kif_client\models\panicbutton\button.p3d";
		allowedSlots[]={901,801,701};
		mass=15;
	};
	class kif_speedbomb: ItemCore
	{
		scope=2;
		displayName="Speed bomb";
		author="Extermi111";
		descriptionShort="I like cars, i like gunpowder plot.";
		picture="\kif_client\textures\icons\items\dynamite.paa";
		model="\kif_client\models\dynamit\dynamit.p3d";
		allowedSlots[]={901};
		mass=15;
	};
	class kif_gps: ItemCore
    {
        displayName="GPS Receiver";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        mass=1;
        author="Extermi111";
        simulation="ItemGPS";
        picture="\kif_client\textures\icons\items\gps.paa";
        icon="\kif_client\textures\icons\items\gps.paa";
        model="\kif_client\models\gps\transmitter.p3d";
        allowedSlots[] = {901, 801, 701};
    };
	class kif_fish_oil: ItemCore
	{
		scope=2;
		displayName="Tran";
		author="Extermi111";
		picture="\kif_client\textures\icons\items\fish_oil.paa";
		model="\kif_client\models\fish_oil\fish_oil.p3d";
		allowedSlots[]={901};
		mass=15;
	};
	class kif_gold_bar: ItemCore
	{
		scope=2;
		displayName="Gold bar";
		//picture="\kif_client\textures\icons\items\fish_oil.paa";
		model="\kif_client\models\ore_bar\gold_bar.p3d";
		allowedSlots[]={901};
		mass=15;
	};