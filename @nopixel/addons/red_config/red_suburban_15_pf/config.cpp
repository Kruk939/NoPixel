class CfgPatches
{
	class red_suburban_15_pf
	{
		units[] = {"red_suburban_15_p_f"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
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
	class red_suburban_15_p_f_base: Car_F
	{
		model = "\red_suburban_15_pf\red_suburban_15_p_f";
		picture	= "\red_base\textures\icon.paa"; /// icon in map	
		Icon	= "\red_base\textures\icon.paa"; /// icon in map	
		author = "Redhotsteel";
		weapons[] = {"red_horn_airhorn","red_horn_takedown1","red_horn_takedown2","red_horn_pullover","red_horn_handsup","red_horn_driver","red_horn_passenger"};
		hiddenSelections[] = {
		"camo1",
		"lb_1_b",
		"lb_2_b",
		"lb_3_b",
		"lb_4_b",
		"lb_1_r",
		"lb_2_r",
		"lb_3_r",
		"lb_4_r",
		"back_light",
		"back_light_1",
		"reverse_light_lb",
		"reverse_light_lb_2",
		"D1",
		"D2",
		"D3",
		"D4",
		"D5",
		"D6",
		"D7",
		"D8",
		"lock1",
		"lock2",
		"lock3",
		"target1",
		"target2",
		"target3",
		"patrol1",
		"patrol2",
		"patrol3"
	};
		hiddenSelectionsTextures[] = {"\red_base\colours\black.paa"};
		terrainCoef = 1.0;
		turnCoef = 2.5;
		precision = 10;
		fireResistance = 5;
		armor = 32;
		cost = 50000;
		transportMaxBackpacks = 6;
		transportSoldier = 6;
		driveOnComponent[] = {"wheel_1_1_damper","wheel_1_2_damper","wheel_2_1_damper","wheel_2_2_damper"};
		extCameraPosition[] = {0, 1, -8.25};
		
		class eventhandlers
		{
			init = "_this execVM ""red_suburban_15_pf\scripts\init.sqf"";";
		};
		
		class UserActions
		{
			class codeone
			{
				displayName = "<t color='#0000ff'>Code One</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player"; 
				statement = "this setVariable ['lightbar',0,true]; this setVariable ['siren',0,true]; this setVariable ['lights',0,true]; this setVariable ['directional',0,true]; this setVariable ['directional1',0,true]; this setVariable ['directional2',0,true]; this setVariable ['directional3',0,true]";
				onlyForplayer = 0;
			};
			class codetwo
			{
				displayName = "<t color='#0000ff'>Code Two</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['lightbar',0]) == 0 && (this getVariable ['directional3',0]) == 0";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',0,true]; this setVariable ['lights',1,true]; this setVariable ['directional',0,true]; this setVariable ['directional1',0,true]; this setVariable ['directional2',0,true]; this setVariable ['directional3',1,true]";
				onlyForplayer = 0;
			};
			class codetwo2
			{
				displayName = "<t color='#0000ff'>Code Two</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['siren',0]) == 1 && (this getVariable ['directional3',0]) == 0";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',0,true]; this setVariable ['lights',1,true]; this setVariable ['directional',0,true]; this setVariable ['directional1',0,true]; this setVariable ['directional2',0,true]; this setVariable ['directional3',1,true]";
				onlyForplayer = 0;
			};
			
			class sirenon
			{
				displayName = "<t color='#ff0000'>Code Three</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['siren',0]) == 0 && (this getVariable ['directional',0]) == 0";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',1,true]; this setVariable ['directional',1,true]; this setVariable ['directional1',0,true]; this setVariable ['directional2',0,true]; this setVariable ['directional3',0,true]";
				onlyForplayer = 0;
			};
			
			class directionalright
			{
				displayName = "<t color='#ffff00'>Directional Right</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['directional1',0]) == 0";
				statement = "this setVariable ['directional',0,true]; this setVariable ['directional1',1,true]; this setVariable ['directional2',0,true]; this setVariable ['directional3',0,true]";
				onlyForplayer = 0;
			};
			class directionalleft
			{
				displayName = "<t color='#ffff00'>Directional Left</t>";
				position = "drivewheel";
				radius = 2;
				condition = "driver this == player && (this getVariable ['directional2',0]) == 0";
				statement = "this setVariable ['directional',0,true]; this setVariable ['directional1',0,true]; this setVariable ['directional2',1,true]; this setVariable ['directional3',0,true]";
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
		driverAction = "driver_offroad01"; 
		cargoAction[] = {"passenger_low01","passenger_low01","passenger_low01"};
		getInAction = "GetInLow"; 
		getOutAction = "GetOutLow"; 
		cargoGetInAction[] 	= {"GetInLow"}; 
		cargoGetOutAction[] = {"GetOutLow"};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[]={"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",db-5,1};
		soundGetOut[]={"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",db-5,1, 40};
		soundDammage[]={"", db-5, 1};
		soundEngineOnInt[] = {"red_base\sounds\SUV_V8\exhaust_start_int",0.61622776,1.0};  /// Ignition On Interior
		soundEngineOnExt[] = {"red_base\sounds\SUV_V8\exhaust_start",1.39810717,1.0,200};  /// Ignition On Exterior
		soundEngineOffInt[] = {"red_base\sounds\SUV_V8\exhaust_stop_int",0.61622776,1.0};  /// Ignition Off Interior
		soundEngineOffExt[] = {"red_base\sounds\SUV_V8\exhaust_stop",1.39810717,1.0,200};  /// Ignition Off Exterior
		buildCrash0[]={"A3\Sounds_F\vehicles\soft\noises\crash_building_01", db-3, 1,200};
		buildCrash1[]={"A3\Sounds_F\vehicles\soft\noises\crash_building_02", db-3, 1,200};
		buildCrash2[]={"A3\Sounds_F\vehicles\soft\noises\crash_building_03", db-3, 1,200};
		buildCrash3[]={"A3\Sounds_F\vehicles\soft\noises\crash_building_04", db-3, 1,200};
		soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};
		WoodCrash0[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01", db-3, 1,200};
		WoodCrash1[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02", db-3, 1,200};
		WoodCrash2[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03", db-3, 1,200};
		WoodCrash3[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04", db-3, 1,200};
		WoodCrash4[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05", db-3, 1,200};
		WoodCrash5[]={"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06", db-3, 1,200};
		soundWoodCrash[]={woodCrash0, 0.166, woodCrash1, 0.166, woodCrash2, 0.166, woodCrash3, 0.166,woodCrash4, 0.166,woodCrash5, 0.166};
		ArmorCrash0[]={"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01", db-3, 1,200};
		ArmorCrash1[]={"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02", db-3, 1,200};
		ArmorCrash2[]={"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03", db-3, 1,200};
		ArmorCrash3[]={"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04", db-3, 1,200};
		soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Ext_00764",0.2818383,1,200};
				frequency = "0.9	+	((rpm/	6000) factor[(400/	6000),(1100/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(200/	6000),(600/	6000)])	*	((rpm/	6000) factor[(1100/	6000),(800/	6000)]))";
			};
			class Engine
			{
				sound[] = {"red_base\sounds\SUV_V8\Ext_01353",0.31622776,1,200};
				frequency = "0.8	+	((rpm/	6000) factor[(810/	6000),(2000/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(820/	6000),(1100/	6000)])	*	((rpm/	6000) factor[(2000/	6000),(1350/	6000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Ext_01839",0.35481337,1,210};
				frequency = "0.8	+	((rpm/	6000) factor[(1300/	6000),(2700/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(1300/	6000),(2000/	6000)])	*	((rpm/	6000) factor[(2700/	6000),(2150/	6000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Ext_02036",0.39810717,1,220};
				frequency = "0.8	+	((rpm/	6000) factor[(2100/	6000),(3500/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(2150/	6000),(2650/	6000)])	*	((rpm/	6000) factor[(3550/	6000),(2900/	6000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Ext_03221",0.4466836,1,230};
				frequency = "0.8	+	((rpm/	6000) factor[(2900/	6000),(4150/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(2900/	6000),(3500/	6000)])	*	((rpm/	6000) factor[(4180/	6000),(3700/	6000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Ext_03761",0.39810717,1,240};
				frequency = "0.8	+	((rpm/	6000) factor[(3700/	6000),(5200/	6000)]) *0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(3700/	6000),(4100/	6000)])	*	((rpm/	6000) factor[(5200/	6000),(4500/	6000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Ext_04181",0.35481337,1,250};
				frequency = "0.95	+	((rpm/	6000) factor[(4500/	6000),(6000/	6000)])*0.2";
				volume = "engineOn*camPos*((rpm/	6000) factor[(4500/	6000),(5600/	6000)])";
			};
			class IdleThrust
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_01",0.39810717,1,280};
				frequency = "0.9	+	((rpm/	6000) factor[(400/	6000),(1100/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(200/	6000),(600/	6000)])	*	((rpm/	6000) factor[(1100/	6000),(800/	6000)]))";
			};
			class EngineThrust
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_02",0.4466836,1,300};
				frequency = "0.9	+	((rpm/	6000) factor[(810/	6000),(2000/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(820/	6000),(1100/	6000)])	*	((rpm/	6000) factor[(2000/	6000),(1350/	6000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_03",0.5011872,1,310};
				frequency = "0.9	+	((rpm/	6000) factor[(1300/	6000),(2700/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(1300/	6000),(2000/	6000)])	*	((rpm/	6000) factor[(2700/	6000),(2150/	6000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_04",0.5011872,1,320};
				frequency = "0.9	+	((rpm/	6000) factor[(2100/	6000),(3500/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(2150/	6000),(2650/	6000)])	*	((rpm/	6000) factor[(3550/	6000),(2900/	6000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_05",0.5011872,1,330};
				frequency = "0.9	+	((rpm/	6000) factor[(2900/	6000),(4150/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(2900/	6000),(3500/	6000)])	*	((rpm/	6000) factor[(4180/	6000),(3700/	6000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_06",0.5011872,1,340};
				frequency = "0.9	+	((rpm/	6000) factor[(3700/	6000),(5200/	6000)]) *0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(3700/	6000),(4100/	6000)])	*	((rpm/	6000) factor[(5200/	6000),(4500/	6000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_07",0.5011872,1,350};
				frequency = "0.9	+	((rpm/	6000) factor[(4500/	6000),(6000/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6000) factor[(4500/	6000),(5600/	6000)])";
			};
			class Idle_int
			{
						sound[] = {"red_base\sounds\SUV_V8\Int_00764",0.25118864,1};
				frequency = "0.8 + ((rpm/ 6400) factor[(400/ 6400),(1100/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6400) factor[(200/ 6400),(600/ 6400)]) * ((rpm/ 6400) factor[(1100/ 6400),(800/ 6400)]))";
			};
			class Engine_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Int_01353",0.2818383,1};
				frequency = "0.8 + ((rpm/ 6400) factor[(810/ 6400),(2000/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6400) factor[(820/ 6400),(1100/ 6400)]) * ((rpm/ 6400) factor[(2000/ 6400),(1350/ 6400)]))";
			};
			class Engine1_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Int_01839",0.31622776,1};
				frequency = "0.8 + ((rpm/ 6400) factor[(1300/ 6400),(2700/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6400) factor[(1300/ 6400),(2000/ 6400)]) * ((rpm/ 6400) factor[(2700/ 6400),(2150/ 6400)]))";
			};
			class Engine2_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Int_02036",0.35481337,1};
				frequency = "0.8 + ((rpm/ 6400) factor[(2100/ 6400),(3500/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6400) factor[(2150/ 6400),(2650/ 6400)]) * ((rpm/ 6400) factor[(3550/ 6400),(2900/ 6400)]))";
			};
			class Engine3_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Int_03221",0.39810717,1};
				frequency = "0.8 + ((rpm/ 6400) factor[(2900/ 6400),(4150/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6400) factor[(2900/ 6400),(3500/ 6400)]) * ((rpm/ 6400) factor[(4180/ 6400),(3700/ 6400)]))";
			};
			class Engine4_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Int_03761",0.4466836,1};
				frequency = "0.8 + ((rpm/ 6400) factor[(3700/ 6400),(5200/ 6400)]) *0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6400) factor[(3700/ 6400),(4100/ 6400)]) * ((rpm/ 6400) factor[(5200/ 6400),(4500/ 6400)]))";
			};
			class Engine5_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Int_04181",0.5011872,1};
				frequency = "0.95 + ((rpm/ 6400) factor[(4500/ 6400),(6400/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/ 6400) factor[(4500/ 6400),(5600/ 6400)])";
			};
			class IdleThrust_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_01_int",0.35481337,1};
				frequency = "0.9 + ((rpm/ 6400) factor[(400/ 6400),(1100/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6400) factor[(200/ 6400),(600/ 6400)]) * ((rpm/ 6400) factor[(1100/ 6400),(800/ 6400)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_02_int",0.39810717,1};
				frequency = "0.9 + ((rpm/ 6400) factor[(810/ 6400),(2000/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6400) factor[(820/ 6400),(1100/ 6400)]) * ((rpm/ 6400) factor[(2000/ 6400),(1350/ 6400)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_03_int",0.4466836,1};
				frequency = "0.9 + ((rpm/ 6400) factor[(1300/ 6400),(2700/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6400) factor[(1300/ 6400),(2000/ 6400)]) * ((rpm/ 6400) factor[(2700/ 6400),(2150/ 6400)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_04_int",0.5011872,1};
				frequency = "0.9 + ((rpm/ 6400) factor[(2100/ 6400),(3500/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6400) factor[(2150/ 6400),(2650/ 6400)]) * ((rpm/ 6400) factor[(3550/ 6400),(2900/ 6400)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_05_int",0.5011872,1};
				frequency = "0.9 + ((rpm/ 6400) factor[(2900/ 6400),(4150/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6400) factor[(2900/ 6400),(3500/ 6400)]) * ((rpm/ 6400) factor[(4180/ 6400),(3700/ 6400)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_06_int",0.56234133,1};
				frequency = "0.9 + ((rpm/ 6400) factor[(3700/ 6400),(5200/ 6400)]) *0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6400) factor[(3700/ 6400),(4100/ 6400)]) * ((rpm/ 6400) factor[(5200/ 6400),(4500/ 6400)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"red_base\sounds\SUV_V8\Thrust_07_int",0.63095737,1};
				frequency = "0.9 + ((rpm/ 6400) factor[(4500/ 6400),(6400/ 6400)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 6400) factor[(4500/ 6400),(5600/ 6400)])";
			};
			class TiresRockOut /// Contact with ground
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.56234133,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.56234133,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.56234133,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.56234133,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.56234133,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.8912509,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.31622776,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.4466836,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.4466836,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.4466836,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.4466836,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.4466836,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.4466836,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.19952624,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[1,15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.39810717,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 15])";
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
		
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 350;	// max speed on level road, km/h
		fuelCapacity = 45;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 2.0;
		antiRollbarForceLimit = 2.0;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		idleRpm = 900;
		redRpm = 5600;
		
		class complexGearbox {
			GearboxRatios[] = {"R1", -3.231, "N", 0, "D1", 4.462, "D2", 3.57, "D3", 2.571, "D4", 1.97, "D5", 1.601, "D6", 0.9, "D7", 0.65};
			TransmissionRatios[] = {"High", 4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		
		simulation = "carx";
		dampersBumpCoef = 0.01;
		differentialType = "rear_limited";
		frontRearSplit = 0.3;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		clutchStrength = 55.0;
		maxOmega = 586.43;
		enginePower = 250;
		peakTorque = 640;
		dampingRateFullThrottle = 0.03;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		torqueCurve[] = {{0.0, 0.0}, {0.2, 0.65}, {0.3, 0.8}, {0.4, 0.95}, {0.6, 1.0}, {0.7, 0.95}, {0.9, 0.9}, {1.0, 0.5}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.20;
		latency = 0.8;
		
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 5.3;
				maxBrakeTorque = 5000;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.20;
				sprungMass = 273; 
				springStrength = 9813; //6813
				springDamperRate = 2500; //1091
				longitudinalStiffnessPerUnitGravity = 4800;
				latStiffX = 25;
				latStiffY = 220;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				side = "left";
				latStiffX = 25;
				latStiffY = 22000;
				maxHandBrakeTorque = 7500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";

				steering = 1;
				side = "right";
				latStiffX = 25;
				latStiffY = 220;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 7500;
				steering = 0;
				side = "right";
				latStiffX = 25;
				latStiffY = 22000;
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
				position = "exhaust";
				direction = "exhaust_dir";
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
				color[] 		= {1550, 1550, 2000};		/// approximate colour of standard lights
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
				flareSize 		= 0.5;	
				
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
			
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01"},{"LightCarHeadR01"}};
	};
	
	class red_suburban_15_p_f_ia: red_suburban_15_p_f_base
	{
		scope = 2;
		displayName = "2015 Suburban LTZ Internal Affairs (Undercover)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_suburban_15_pf\skins\IA.paa"};
	};

	class red_suburban_15_p_f_fbi: red_suburban_15_p_f_base
	{
		scope = 2;
		displayName = "2015 Suburban LTZ FBI (Undercover)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_suburban_15_pf\skins\fbi.paa"};
	};
	
	class red_suburban_15_p_f_black:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Black)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\black.paa"};
	};
	
	class red_suburban_15_p_f_aqua:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Aqua)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\aqua.paa"};
	};
	
	class red_suburban_15_p_f_blue:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Blue)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\blue.paa"};
	};
	
	class red_suburban_15_p_f_darkblue:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Dark Blue)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\darkblue.paa"};
	};
	
		class red_suburban_15_p_f_green:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Green)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\green.paa"};
	};
	
	class red_suburban_15_p_f_red:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Red)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\red.paa"};
	};
	
	class red_suburban_15_p_f_pink:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Pink)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\pink.paa"};
	};
	
		class red_suburban_15_p_f_yellow:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Yellow)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\yellow.paa"};
	};
	
	class red_suburban_15_p_f_orange:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Orange)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\orange.paa"};
	};
	
	class red_suburban_15_p_f_white:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (White)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\white.paa"};
	};
	
		class red_suburban_15_p_f_purple:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Purple)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\purple.paa"};
	};
	
		class red_suburban_15_p_f_darkgreen:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Dark Green)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\darkgreen.paa"};
	};
	
		class red_suburban_15_p_f_darkred:red_suburban_15_p_f_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2015 Chevrolet Suburban LTZ (Dark Red)(Undercover)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\darkred.paa"};
	};
	
	class red_suburban_15_p_f_custom1: red_suburban_15_p_f_base
	{
		scope = 2;
		displayName = "2015 Chevrolet Suburban (Custom 1)(Undercover)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"\red_config\red_suburban_15_pf\skins\custom1.paa"};
	};
	
	class red_suburban_15_p_f_custom2: red_suburban_15_p_f_base
	{
		scope = 2;
		displayName = "2015 Chevrolet Suburban (Custom 2)(Undercover)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"\red_config\red_suburban_15_pf\skins\custom2.paa"};
	};
	
	class red_suburban_15_p_f_custom3: red_suburban_15_p_f_base
	{
		scope = 2;
		displayName = "2015 Chevrolet Suburban (Custom 3)(Undercover)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"\red_config\red_suburban_15_pf\skins\custom3.paa"};
	};
	
	class red_suburban_15_p_f_custom4: red_suburban_15_p_f_base
	{
		scope = 2;
		displayName = "2015 Chevrolet Suburban (Custom 4)(Undercover)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"\red_config\red_suburban_15_pf\skins\custom4.paa"};
	};
	
	class red_suburban_15_p_f_custom5: red_suburban_15_p_f_base
	{
		scope = 2;
		displayName = "2015 Chevrolet Suburban (Custom 5)(Undercover)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"\red_config\red_suburban_15_pf\skins\custom5.paa"};
	};
};