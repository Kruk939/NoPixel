class CfgPatches
{
	class red_charger_15_p
	{
		units[] = {"red_charger_15_p_p"};
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
	class red_charger_15_p_p_base: Car_F
	{
		model = "\red_charger_15_p\red_charger_15_p_p";
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
		transportMaxBackpacks = 3;
		transportSoldier = 3;
		extCameraPosition[] = {0, 1, -7.5};
		
		class eventhandlers
		{
			init = "_this execVM ""red_charger_15_p\scripts\init.sqf"";";
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
			
			class SpotlightOnLeft
			{
				displayName =  "<t color='#00ff00'>Spotlight On (L)</t>";
				position = "drivewheel";
				radius = 2;
				onlyForPlayer = 0;
				shortcut = "LeanLeft";
				condition = "driver this == player && (this getVariable ['spotlight_L',0]) == 0";
				statement = "this setVariable ['spotlight_L',1,true]";
			};
			
			class SpotlightOffLeft
			{
				displayName =  "<t color='#00ff00'>Spotlight Off (L)</t>";
				position = "drivewheel";
				radius = 2;
				onlyForPlayer = 0;
				shortcut = "LeanLeft";
				condition = "driver this == player && (this getVariable ['spotlight_L',0]) == 1";
				statement = "this setVariable ['spotlight_L',0,true]";
			};
			
			class SpotlightOnRight
			{
				displayName =  "<t color='#00ff00'>Spotlight On (R)</t>";
				position = "drivewheel";
				radius = 2;
				onlyForPlayer = 0;
				shortcut = "LeanRight";
				condition = "driver this == player && (this getVariable ['spotlight_R',0]) == 0";
				statement = "this setVariable ['spotlight_R',1,true]";
			};
			
			class SpotlightOffRight
			{
				displayName =  "<t color='#00ff00'>Spotlight Off (R)</t>";
				position = "drivewheel";
				radius = 2;
				onlyForPlayer = 0;
				shortcut = "LeanRight";
				condition = "driver this == player && (this getVariable ['spotlight_R',0]) == 1";
				statement = "this setVariable ['spotlight_R',0,true]";
			};
			
			class Reset
			{
				displayName="<t color='#ff0000'>Reset Lock/Fast</t>";
				position="drivewheel";
				radius=10;
				condition = "player IN this";
				statement="this setobjecttextureglobal [24,'\red_base\textures\emergency\pic0.paa']; this setobjecttextureglobal [25,'\red_base\textures\emergency\pic0.paa']; this setobjecttextureglobal [26,'\red_base\textures\emergency\pic0.paa']; Prevspeed = 0;";
				onlyForplayer=1;
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
		cargoAction[] = {passenger_low01,passenger_generic01_leanleft,passenger_generic01_leanright};
		getInAction = "GetInLow"; 
		getOutAction = "GetOutLow"; 
		cargoGetInAction[] 	= {"GetInLow"}; 
		cargoGetOutAction[] = {"GetOutLow"};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door", 0.562341, 1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door", 0.562341, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"\red_base\sounds\MUSCLE_V8_2\EngineStartUp_int.ogg", 0.794328, 1};
		soundEngineOnExt[] = {"\red_base\sounds\MUSCLE_V8_2\EngineStartUp.ogg", 1.41254, 1, 200};
		soundEngineOffInt[] = {"\red_base\sounds\MUSCLE_V8_2\V8stop.wav", 0.794328, 1};
		soundEngineOffExt[] = {"\red_base\sounds\MUSCLE_V8_2\V8stop.wav", 0.562341, 1, 200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_01", 0.707946, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_02", 0.707946, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_03", 0.707946, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_04", 0.707946, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01", 0.707946, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02", 0.707946, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03", 0.707946, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04", 0.707946, 1, 200};
		WoodCrash4[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05", 0.707946, 1, 200};
		WoodCrash5[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06", 0.707946, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01", 0.707946, 1, 200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02", 0.707946, 1, 200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03", 0.707946, 1, 200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04", 0.707946, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};

		class Sounds
		{
			#define	FACTOR(val,from,to)	(val factor[from,to])
			#define	RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))
			#define	FACTOR2(val,from0,to0,from1,to1) (FACTOR(val,from0,to0)	*	FACTOR(val,to1,from1))

			#define	MAX_RPM	6900
			#define	RPM(rpm) (rpm/MAX_RPM)

			#define	FACTOR_RPM(from,to)	FACTOR(RPM(rpm),RPM(from),RPM(to))
			#define	FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0)	*	FACTOR_RPM(to1,from1))
			#define	RANGE_RPM(from,band0,to,band1) FACTOR2_RPM(from,(from+band0),to,(to+band1))
			
			#define HZ_IDLE FACTOR_RPM(400,1150)
			#define HZ_RPM1 FACTOR_RPM(900,2100)
			#define HZ_RPM2	FACTOR_RPM(1300,3100)
			#define HZ_RPM3 FACTOR_RPM(2200,4100)
			#define HZ_RPM4 FACTOR_RPM(3300,4900)
			#define HZ_RPM5 FACTOR_RPM(4200,6200)
			#define HZ_RPM6 FACTOR_RPM(5100,6900)
			
			#define VOLUME_IDLE FACTOR2_RPM(400,700,900,1100)
			#define VOLUME_RPM1 FACTOR2_RPM(870,1100,1300,2100)
			#define VOLUME_RPM2 FACTOR2_RPM(1250,2050,2300,3100)
			#define VOLUME_RPM3 FACTOR2_RPM(2250,3050,3300,4100)
			#define VOLUME_RPM4 FACTOR2_RPM(3250,4050,4200,4870)
			#define VOLUME_RPM5 FACTOR2_RPM(4150,4800,5150,6150)
			#define VOLUME_RPM6 FACTOR_RPM(5100,6100)
				
			class Idle_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\1 EngB_00775.wav", 0.281838, 1, 150};
				frequency = "0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			
			class Engine {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\2 EngB_01000.wav", 0.281838, 1, 200};
				frequency = "0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			
			class Engine1_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\3 EngB_01200.wav", db-9, 1, 240};
				frequency = "0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			
			class Engine2_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\4 EngB_01500.wav", 0.398107, 1, 280};
				frequency = "0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			
			class Engine3_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\5 EngB_01700.wav", db-7, 1, 320};
				frequency = "0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			
			class Engine4_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\6 EngB_02000.wav", db-6, 1, 360};
				frequency = "0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			
			class Engine5_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\7 EngB_02500.wav", 0.562341, 1, 420};
				frequency = "0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume = "engineOn*camPos*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			
			class IdleThrust {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\1 ExhL_00529.wav", 0.630957, 1, 200};
				frequency = "0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			
			class EngineThrust {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\2 ExhL_01633.wav", 0.562341, 1, 250};
				frequency = "0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			
			class Engine1_Thrust_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\3 ExhL_02175.wav", 0.630957, 1, 280};
				frequency = "0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			
			class Engine2_Thrust_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\4 ExhL_02721.wav", db-3, 1, 320};
				frequency = "0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			
			class Engine3_Thrust_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\5 ExhL_03265.wav", db-2, 1, 360};
				frequency = "0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			
			class Engine4_Thrust_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\6 ExhL_03811.wav", 1, 1, 400};
				frequency = "0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			
			class Engine5_Thrust_ext {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\7 ExhL_04348.wav", db2, 1, 450};
				frequency = "0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			
			class Idle_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\1 EngA_00775.wav", 0.199526, 1};
				frequency = "0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			
			class Engine_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\2 EngA_01000.wav", 0.199526, 1};
				frequency = "0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			
			class Engine1_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\3 EngA_01200.wav", db-12, 1};
				frequency = "0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			
			class Engine2_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\4 EngA_01500.wav", 0.281838, 1};
				frequency = "0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			
			class Engine3_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\5 EngA_01700.wav", db-10, 1};
				frequency = "0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			
			class Engine4_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\6 EngA_02000.wav", db-9, 1};
				frequency = "0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			
			class Engine5_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\7 EngA_02500.wav", db-6, 1};
				frequency = "0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			
			class IdleThrust_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\1 ExhL_00529.wav", db-9, 1};
				frequency = "0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			
			class EngineThrust_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\2 ExhL_01633.wav", db-9, 1};
				frequency = "0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			
			class Engine1_Thrust_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\3 ExhL_02175.wav", 0.398107, 1};
				frequency = "0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			
			class Engine2_Thrust_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\4 ExhL_02721.wav", db-7, 1};
				frequency = "0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			
			class Engine3_Thrust_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\5 ExhL_03265.wav", db-6, 1};
				frequency = "0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			
			class Engine4_Thrust_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\6 ExhL_03811.wav", 0.562341, 1};
				frequency = "0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			
			class Engine5_Thrust_int {
				sound[] = {"\red_base\sounds\MUSCLE_V8_2\7 ExhL_04348.wav", 0.630957, 1};
				frequency = "0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			
			class Movement {
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			
			class TiresRockOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-6, 1, 60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-6, 1, 60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-6, 1, 60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-6, 1, 60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-6, 1, 60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-6, 1, 60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", 0.398107, 1, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			
			class TiresRockIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-6, 1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-6, 1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-6, 1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-6, 1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-6, 1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-6, 1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-12, 1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class breaking_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			
			class acceleration_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			
			class turn_left_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			
			class turn_right_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			
			class breaking_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class acceleration_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			
			class turn_left_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			
			class turn_right_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			
			class breaking_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			
			class acceleration_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			
			class turn_left_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			
			class turn_right_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			
			class breaking_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			
			class acceleration_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			
			class turn_left_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10, 1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			
			class turn_right_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10, 1};
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
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 350;
		fuelCapacity = 45;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 2.4;
		antiRollbarForceLimit = 2;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		idleRpm = 900;
		redRpm = 5250;
		class complexGearbox
		
		{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",4.462,"D2",3.57,"D3",2.571,"D4",1.97,"D5",1.601,"D6",0.9,"D7",0.65};
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
		differentialType = "rear_limited";
		frontRearSplit = 0.3;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		clutchStrength = 55.0;
		maxOmega = 549.78;
		enginePower = 276;
		peakTorque = 680;
		dampingRateFullThrottle = 0.03;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		torqueCurve[] = {{0,0},{0.2,0.65},{0.3,0.8},{0.4,0.95},{0.6,1},{0.7,0.95},{0.9,0.9},{1,0.5}};
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
				springStrength = 6813; //6813
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
			
			class LightCarHeadS01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 2000};		/// approximate colour of standard 
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadS01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadS01_end";	/// memory point for the light direction
				hitpoint 		= "Light_S";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_S";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 50;						/// angle of full light
				outerAngle 		= 80;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 4;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;			
			};
			
			class LightCarHeadS02: LightCarHeadS01
				{
				position 	= "LightCarHeadS02";
				direction 	= "LightCarHeadS02_end";
				hitpoint 	= "Light_S2";
				selection 	= "Light_S2";
				};
		};
		aggregateReflectors[] = {{"LightCarHeadL01"},{"LightCarHeadR01"},{"LightCarHeadS01"},{"LightCarHeadS02"}};
	};
	
	class red_charger_15_p_sheriff: red_charger_15_p_p_base
	{
		scope = 2;
		displayName = "2015 Dodge Charger R/T Sheriff";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"red_config\red_charger_15_p\skins\sheriff.paa"};
	};

	class red_charger_15_p_sert: red_charger_15_p_p_base
	{
		scope = 2;
		displayName = "2015 Dodge Charger R/T SERT";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"red_config\red_charger_15_p\skins\sert.paa"};
	};
	class red_charger_15_p_statetrooper: red_charger_15_p_p_base
	{
		scope = 2;
		displayName = "2015 Dodge Charger R/T State Trooper";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"red_config\red_charger_15_p\skins\StateTrooper.paa"};
	};
	class red_charger_15_p_custom1: red_charger_15_p_p_base
	{
		scope = 2;
		displayName = "2015 Dodge Charger R/T (P)(Custom 1)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"red_config\red_charger_15_p\skins\custom1.paa"};
	};
	
	class red_charger_15_p_custom2: red_charger_15_p_p_base
	{
		scope = 2;
		displayName = "2015 Dodge Charger R/T (P)(Custom 2)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"red_config\red_charger_15_p\skins\custom2.paa"};
	};
	
	class red_charger_15_p_custom3: red_charger_15_p_p_base
	{
		scope = 2;
		displayName = "2015 Dodge Charger R/T (P)(Custom 3)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"red_config\red_charger_15_p\skins\custom3.paa"};
	};
	
	class red_charger_15_p_custom4: red_charger_15_p_p_base
	{
		scope = 2;
		displayName = "2015 Dodge Charger R/T (P)(Custom 4)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"red_config\red_charger_15_p\skins\custom4.paa"};
	};
	
	class red_charger_15_p_custom5: red_charger_15_p_p_base
	{
		scope = 2;
		displayName = "2015 Dodge Charger R/T (P)(Custom 5)";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		hiddenSelectionsTextures[] = {"red_config\red_charger_15_p\skins\custom5.paa"};
	};
};