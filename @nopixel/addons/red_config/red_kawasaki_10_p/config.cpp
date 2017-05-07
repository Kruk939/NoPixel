class CfgPatches
{
	class red_kawasaki_10_p
	{
		units[] = {"red_kawasaki_10_p_p"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"red_base"};
	};
};


class CfgSounds
{
	sounds[] = {"Siren1","Siren2","Siren3", "ems_siren1", "ems_siren2", "ems_siren3"};
	class Siren1
	{
		name = "Siren1";
		sound[] = {"red_sounds\police\sounds\siren.wav",1,1};
		titles[] = {};
	};
	class Siren2
	{
		name = "Siren2";
		sound[] = {"red_sounds\police\sounds\yelp.wav",1,1};
		titles[] = {};
	};
};

class cfgWeapons
{
	class SportCarHorn;
	class red_horn_airhorn: SportCarHorn
	{
		displayname = "Airhorn";
		reloadTime = 4;
		drySound[] = {"red_sounds\police\sounds\FederalAirhorn.wav",1,1};
		scope = 2;
	};
	
	class red_horn_takedown1: SportCarHorn
	{
		displayName = "Takedown 1";
		reloadtime = 4;
		drysound[] = {"red_sounds\police\sounds\Takedown1.wav",1,1};
		scope = 2;
	};
	class red_horn_takedown2: SportCarHorn
	{
		displayName = "Takedown 2";
		reloadtime = 4;
		drysound[] = {"red_sounds\police\sounds\Takedown2.wav",1,1};
		scope = 2;
	};
	
	class red_horn_pullover: SportCarHorn
	{
		displayname = "Pull Over";
		reloadTime = 4;
		drySound[] = {"red_sounds\police\sounds\PullOver.wav",2,1};
		scope = 2;
	};

	class red_horn_handsup: SportCarHorn
	{
		displayName = "Hands Up";
		reloadtime = 4;
		drysound[] = {"red_sounds\police\sounds\HandsUp.wav",2,1};
		scope = 2;
	};
	
	class red_horn_passenger: SportCarHorn
	{
		displayName = "Passenger";
		reloadtime = 4;
		drysound[] = {"red_sounds\police\sounds\Passenger.wav",3,1};
		scope = 2;
	};
	
	class red_horn_driver: SportCarHorn
	{
		displayName = "Driver";
		reloadtime = 4;
		drysound[] = {"red_sounds\police\sounds\Driver.wav",3,1};
		scope = 2;
	};
};


class DefaultEventhandlers;
class cfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1{};
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class red_kawasaki_10_p_p_base: Car_F
	{
		model = "\red_kawasaki_10_p\red_kawasaki_10_p_p";
		picture	= "\red_base\textures\icon.paa"; /// icon in map	
		Icon	= "\red_base\textures\icon.paa"; /// icon in map	
		author = "Redhotsteel";
		weapons[] = {"red_horn_airhorn","red_horn_takedown1","red_horn_takedown2","red_horn_pullover","red_horn_handsup","red_horn_driver","red_horn_passenger"};
		hiddenSelections[] = {
		"camo1",
		"L1",
		"L2",
		"L3",
		"L4",
		"L5",
		"L6",
		"L7",
		"L8",
		"L9",
		"L10"
	};
		hiddenSelectionsTextures[] = {""};
		terrainCoef = 1.0;
		turnCoef = 2.5;
		precision = 10;
		fireResistance = 5;
		armor = 32;
		cost = 50000;
		transportMaxBackpacks = 2;
		transportSoldier = 0;
		extCameraPosition[] = {0, 1, -6.0};
		
		class eventhandlers
		{
			init = "_this execVM ""red_kawasaki_10_p\scripts\init.sqf"";";
		};
		class UserActions
		{
			class codeone
			{
				displayName = "<t color='#0000ff'>Code One</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['lightbar',0]) == 1";
				statement = "this setVariable ['lightbar',0,true]; this setVariable ['siren',0,true]; this setVariable ['lights',0,true]";
				onlyForplayer = 0;
			};
			class codetwo
			{
				displayName = "<t color='#0000ff'>Code Two</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['lightbar',0]) == 0";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',0,true]; this setVariable ['lights',1,true]";
				onlyForplayer = 0;
			};
			class codetwo2
			{
				displayName = "<t color='#0000ff'>Code Two</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['siren',0]) == 1";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',0,true]; this setVariable ['lights',1,true]";
				onlyForplayer = 0;
			};
			class sirenon
			{
				displayName = "<t color='#ff0000'>Code Three</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['siren',0]) == 0 && (this getVariable ['siren',0]) == 0";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',1,true]";
				onlyForplayer = 0;
			};
		};
		
		class HitPoints2
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		class Turrets{};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1.5;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 0.2;
			};
			class HitEngine
			{
				armor = 1.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0.2;
			};
			class HitBody: HitBody
			{
				name = "body";
				visual = "camo1";
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.75;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.75;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.75;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.75;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.75;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.75;
			};
		};
		driverAction = "driver_quadbike"; 
		cargoAction[] = {"passenger_low01","passenger_generic01_leanleft","passenger_generic01_leanright"};
		getInAction = "GetInLow"; 
		getOutAction = "GetOutLow";
		cargoGetInAction[] 	= {"GetInLow"}; 
		cargoGetOutAction[] = {"GetOutLow"};
		
		attenuationEffectType = "CarAttenuation";
		soundGear[] = {"",0.0005623413,1};
		SoundGetIn[] = {"",0.017782794,1};
		SoundGetOut[] = {"",0.017782794,1};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-start-01.wav",0.39810717,1};
		soundEngineOnExt[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-start-01.wav",0.4466836,1,200};
		soundEngineOffInt[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-stop-01.wav",0.39810717,1};
		soundEngineOffExt[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-stop-01.wav",0.4466836,1,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-idle-01.wav",0.2238721,1,150};
				frequency = "0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-idle-01.wav",0.2818383,1,200};
				frequency = "0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.35481337,1,240};
				frequency = "0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.39810717,1,280};
				frequency = "0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.4466836,1,320};
				frequency = "0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.5011872,1,360};
				frequency = "0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.56234133,1,420};
				frequency = "0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume = "engineOn*camPos*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.5011872,1,200};
				frequency = "0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.56234133,1,250};
				frequency = "0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.63095737,1,280};
				frequency = "0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.70794576,1,320};
				frequency = "0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.7943282,1,360};
				frequency = "0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",1,1,400};
				frequency = "0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",1.2589254,1,450};
				frequency = "0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Idle_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-idle-01.wav",0.17782794,1};
				frequency = "0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.19952624,1};
				frequency = "0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-02.wav",0.25118864,1};
				frequency = "0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.2818383,1};
				frequency = "0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.31622776,1};
				frequency = "0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.35481337,1};
				frequency = "0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.5011872,1};
				frequency = "0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-idle-01.wav",0.31622776,1};
				frequency = "0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.35481337,1};
				frequency = "0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.39810717,1};
				frequency = "0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.4466836,1};
				frequency = "0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.5011872,1};
				frequency = "0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.56234133,1};
				frequency = "0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"red_kawasaki_10_p\sounds\engine\ext-hrly-engine-accel-01.wav",0.63095737,1};
				frequency = "0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.5011872,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.5011872,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.5011872,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.5011872,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.5011872,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.5011872,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.39810717,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.25118864,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RearCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class FrontCam
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		
		thrustDelay            	= 0.2; 		/// initial delay to cause lesser slip when on 1st gear - thrust goes from zero to full in this time
		brakeIdleSpeed         	= 1.78; 	/// under what speed (in m/s) does the brake apply for a vehicle without thrust
		maxSpeed               	= 217; 		/// vehicle can go a bit over, but dramatically decreases thrust
		fuelCapacity           	= 45; 
		wheelCircumference     	= 2.277; 	/// diameter of 725

		antiRollbarForceCoef	= 0.5; 	/// how strong is the anti-roll bar of vehicle preventing it to lose grip in turns (not any magical stuff, real ARB)
		antiRollbarForceLimit	= 0.5; 	/// highest possible force of ARB
		antiRollbarSpeedMin 	= 20; 	/// the roll bar force gets from zero to full in range of min and max speed
		antiRollbarSpeedMax		= 80;  	/// this simulates losing grip at high speed turns
		idleRpm = 1200;
		redRpm = 7500;

		class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.231,"N",0,"D1",4.462,"D2",3.57,"D3",2.571,"D4",1.97,"D5",1.601,"D6",0.9,"D7",0.65};
			TransmissionRatios[] = {"High",4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.01;
		differentialType = "all_open";
		frontRearSplit = 0.3;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		clutchStrength = 55;
		enginePower = 239;
		maxOmega = 785;
		peakTorque = 350;
		dampingRateFullThrottle = 0.03;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		torqueCurve[] = {{0,0},{0.2,0.65},{0.3,0.8},{0.4,0.95},{0.6,1},{0.7,0.95},{0.9,0.9},{1,0.5}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.20;
		latency = 1;

		class Wheels
		{
			class LF
			{

				boneName = "wheel_1_1_damper";
				steering = true;
				side = "left";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 0;
				MOI = 3.3;
				dampingRate = 0.5;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.2;
				mMaxDroop = 0.2;
				sprungMass = 140;
				springStrength = 70000 - 5000;
				springDamperRate = 3500;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;

				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1.0}, {1, 1}}; 
			};
			class RF : LF
			{
				steering = false;	//バイクの後輪にする
				boneName = "wheel_2_1_damper";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "right";
			};
			class LR : LF
			{
				boneName = "wheel_1_2_damper";
				steering = false;
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 1000;
				latStiffY = 180;
				sprungMass = 30;
				springStrength = 10;
				springDamperRate = 1350;
			};
			class RR : RF
			{
				boneName = "wheel_2_2_damper";
				steering = false;
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 1000;
				latStiffY = 180;
				sprungMass = 30;
				springStrength = 10;
				springDamperRate = 1350;			
			};
		};
		
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\data_f\glass_veh_int.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\glass_veh.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat"};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
			color[] 		= {2000, 2000, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 100;						/// angle of full light
				outerAngle 		= 179;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;		
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01"}};
	};
	
	class red_kawasaki_10_p_sheriff: red_kawasaki_10_p_p_base
	{
		scope = 2;
		displayName = "2010 Kawasaki Z1-P (Sheriff)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_kawasaki_10_p\skins\sheriff.paa"};
	};
	
		class red_kawasaki_10_p_trooper: red_kawasaki_10_p_p_base
	{
		scope = 2;
		displayName = "2010 Kawasaki Z1-P (State Trooper)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_kawasaki_10_p\skins\biketrooper.paa"};
	};
	
	class red_kawasaki_10_p_custom1: red_kawasaki_10_p_p_base
	{
		scope = 2;
		displayName = "2010 Kawasaki Z1-P (Custom 1)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_kawasaki_10_p\skins\custom1.paa"};
	};
	
	class red_kawasaki_10_p_custom2: red_kawasaki_10_p_p_base
	{
		scope = 2;
		displayName = "2010 Kawasaki Z1-P (Custom 2)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_kawasaki_10_p\skins\custom2.paa"};
	};
		class red_kawasaki_10_p_custom3: red_kawasaki_10_p_p_base
	{
		scope = 2;
		displayName = "2010 Kawasaki Z1-P (Custom 3)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_kawasaki_10_p\skins\custom3.paa"};
	};
	
	class red_kawasaki_10_p_custom4: red_kawasaki_10_p_p_base
	{
		scope = 2;
		displayName = "2010 Kawasaki Z1-P (Custom 4)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_kawasaki_10_p\skins\custom4.paa"};
	};
		class red_kawasaki_10_p_custom5: red_kawasaki_10_p_p_base
	{
		scope = 2;
		displayName = "2010 Kawasaki Z1-P (Custom 5)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_kawasaki_10_p\skins\custom5.paa"};
	};
	class sl_kawasaki_so: red_kawasaki_10_p_p_base
	{
		scope=2;
		displayName="2010 Kawasaki Z1-P SHERIFF";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		author="Redhotsteel";
		weapons[] = {"Airhorn1","Airhorn2","Howler","Manual","Takedown"};
		hiddenSelectionsTextures[]=
		{
			"red_config\red_kawasaki_10_p\skins\sheriff"
		};
	};
};