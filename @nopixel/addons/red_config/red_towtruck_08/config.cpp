class CfgPatches
{
	class red_towtruck_08
	{
		units[] = {"red_towtruck_08_p"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
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
	
	class red_towtruck_08_base: Car_F
	{
		model = "\red_towtruck_08\red_towtruck_08_p";
		picture	= "\red_base\textures\icon.paa"; /// icon in map	
		Icon	= "\red_base\textures\icon.paa"; /// icon in map	
		author = "Redhotsteel";
		hiddenSelections[] = {"camo1","plate1","plate2","plate3","plate4","plate5","plate6","plate7","light1","light2"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,1.0,CO)","",""};
		terrainCoef = 1.0;
		turnCoef = 2.5;
		precision = 10;
		fireResistance = 5;
		armor = 32;
		cost = 50000;
		transportMaxBackpacks = 3;
		transportSoldier = 4;
		extCameraPosition[] = {0, 1, -10.75};
		
		class AnimationSources
		{
			class Fake
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
		class eventhandlers
		{
			init = "_this execVM ""red_towtruck_08\scripts\init.sqf"";";
		};
		class UserActions
		{
			class Light_on
			{
				displayName="Beacons On";
				radius=15;
				position="drivewheel";
				onlyforplayer=0;
				condition="driver this == player && vehicle player animationPhase ""Beacons_unhide"" == 0;";
				statement="this execVM '\red_towtruck_08\scripts\LightbarOn.sqf';";
			};
			
			class Light_off
			{
				displayName="Beacons Off";
				radius=15;
				position="drivewheel";
				onlyforplayer=0;
				condition="driver this == player && vehicle player animationPhase ""Beacons_unhide"" == 1;";
				statement="this execVM '\red_towtruck_08\scripts\Lightbaroff.sqf';";
			};
			
			class tow 
			{
				displayName 		 = "Tow Vehicle";	
				displayNameDefault 	 = "Tow Vehicle";
				position = "drivewheel_axis";
				radius = 3;
				condition = "count attachedObjects this == 0";
				statement = "[] spawn client_fnc_towvehicle";
				onlyForplayer = 0;
				showWindow = 0;
			};

			class untow
			{
				displayName 		 = "Untow Vehicle";	
				displayNameDefault 	 = "Untow Vehicle";
				position = "drivewheel_axis";
				radius = 3;
				condition = "count attachedObjects this > 0";
				statement = "[] spawn client_fnc_untowvehicle";
				onlyForplayer = 0;
				showWindow = 0;
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
		cargoAction[] = {"passenger_low01"};
		getInAction = "GetInLow"; 
		getOutAction = "GetOutLow"; 
		cargoGetInAction[] 	= {"GetInLow"}; 
		cargoGetOutAction[] = {"GetOutLow"};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Truck_02\getin", 0.562341, 1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Truck_02\getout", 0.562341, 1, 20};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_start", 0.398107, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_start", 0.630957, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_stop", 0.398107, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_stop", 0.630957, 1, 200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.25, "woodCrash1", 0.25, "woodCrash2", 0.25, "woodCrash3", 0.25};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", 1, 1, 200};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", 1, 1, 200};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", 1, 1, 200};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", 1, 1, 200};
		soundCrashes[] = {"Crash0", 0.25, "Crash1", 0.25, "Crash2", 0.25, "Crash3", 0.25};
		
		class Sounds {
			class Idle_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_00", db-9, 1, 200};
				frequency = "0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			
			class Engine {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_01", 0.398107, 1, 200};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			
			class Engine1_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_02", 0.398107, 1, 200};
				frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			
			class Engine2_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_03", db-7, 1, 250};
				frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			
			class Engine3_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_04", db-6, 1, 300};
				frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			
			class Engine4_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_05", db-6, 1, 300};
				frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			
			class Engine5_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_engine_06", 0.562341, 1, 300};
				frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*camPos*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			
			class IdleThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_00", db-6, 1, 200};
				frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			
			class EngineThrust {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_01", db-6, 1, 200};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			
			class Engine1_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_02", 0.562341, 1, 200};
				frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			
			class Engine2_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_03", 0.630957, 1, 250};
				frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			
			class Engine3_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_04", db-2, 1, 350};
				frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			
			class Engine4_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_05", db-1, 1, 350};
				frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			
			class Engine5_Thrust_ext {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\ext_exhaust_06", 1, 1, 400};
				frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			
			class Idle_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_00", db-13, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			
			class Engine_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_01", db-12, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			
			class Engine1_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_02", 0.281838, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			
			class Engine2_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_03", db-10, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			
			class Engine3_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_04", db-10, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			
			class Engine4_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_05", db-9, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			
			class Engine5_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_engine_06", 0.398107, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			
			class IdleThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_00", db-9, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(800/	3000),(600/	3000)]))";
			};
			
			class EngineThrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_01", 0.398107, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1200/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			
			class Engine1_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_02", db-7, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(1000/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(950/	3000),(1150/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1300/	3000)]))";
			};
			
			class Engine2_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_03", db-6, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(1300/	3000),(1850/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1260/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1850/	3000),(1600/	3000)]))";
			};
			
			class Engine3_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_04", 0.562341, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2200/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1550/	3000),(1800/	3000)])	*	((rpm/	3000) factor[(2200/	3000),(1950/	3000)]))";
			};
			
			class Engine4_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_05", 0.630957, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(2000/	3000),(2600/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1900/	3000),(2150/	3000)])	*	((rpm/	3000) factor[(2600/	3000),(2300/	3000)]))";
			};
			
			class Engine5_Thrust_int {
				sound[] = {"A3\Sounds_F\vehicles\soft\Truck_02\int_exhaust_06", db-3, 1};
				frequency = "0.8	+	((rpm/	3000) factor[(2300/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2300/	3000),(2700/	3000)])";
			};
			
			class TiresRockOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2", db-2, 1, 120};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			
			class TiresSandOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-3, 1, 120};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1", db-3, 1, 120};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			
			class TiresMudOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-3, 1, 120};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2", db-3, 1, 120};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1", db-3, 1, 120};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseOut {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db2, 1, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			
			class TiresRockIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2", 0.398107, 1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			
			class TiresSandIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 0.398107, 1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			
			class TiresGrassIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1", 0.398107, 1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			
			class TiresMudIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 0.398107, 1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			
			class TiresGravelIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2", 0.398107, 1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			
			class TiresAsphaltIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1", 0.398107, 1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			
			class NoiseIn {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-6, 1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			
			class breaking_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 0.398107, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			
			class acceleration_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			
			class turn_left_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_ext_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 0.398107, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			
			class acceleration_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			
			class turn_left_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_ext_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 0.398107, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			
			class acceleration_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			
			class turn_left_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_int_road {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			
			class breaking_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			
			class acceleration_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			
			class turn_left_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			
			class turn_right_int_dirt {
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
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
		maxSpeed = 136;
		fuelCapacity = 35;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 0.5;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		idleRpm = 900;
		redRpm = 3000;
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
		differentialType = "all_open";
		frontRearSplit = 0.3;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		clutchStrength = 55;
		maxOmega = 314.16;
		enginePower = 224;
		peakTorque = 420;
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
				maxBrakeTorque = 1600;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.20;
				sprungMass = 273; 
				springStrength = 48000; //6813
				springDamperRate = 12000; //1091
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
				maxHandBrakeTorque = 800;
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
				maxHandBrakeTorque = 800;
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
		
		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
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
				flareSize 		= 0.5;	

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};

			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			
			class Lightbar1: LightCarHeadL01
			{
				position = "light_mem_1";
				direction = "light_mem_1_end";
				dayLight = 1;
				hitpoint = "light_1_h";
				selection = "lb1";
				color[] = {1900,1200,0};
				ambient[] = {5,2,0};
				intensity = 1.5;
				class Attenuation
				{
					start = 2;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 40;
					hardLimitEnd = 80;
				};
			};
			class Lightbar2: Lightbar1
			{
				position = "light_mem_2";
				direction = "light_mem_2_end";
				hitpoint = "light_2_h";
				selection = "lb2";
			};
			class Lightbar3: Lightbar1
			{
				position = "light_mem_3";
				direction = "light_mem_3_end";
				hitpoint = "light_3_h";
				selection = "lb3";
				color[] = {1900,0,0};
				ambient[] = {5,0,0};
			};
			class Lightbar4: Lightbar1
			{
				position = "light_mem_4";
				direction = "light_mem_4_end";
				hitpoint = "light_4_h";
				selection = "lb4";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01"},{"LightCarHeadR01"}}; /// aggregating reflectors helps the engine a lot
	};
	
	class red_towtruck_08_black:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck (Black)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\black.paa","",""};
	};
	
	class red_towtruck_08_aqua:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck (Aqua)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\aqua.paa","",""};
	};
	
	class red_towtruck_08_blue:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Blue)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\blue.paa","",""};
	};
	
	class red_towtruck_08_darkblue:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Dark Blue)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\darkblue.paa","",""};
	};
	
		class red_towtruck_08_green:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Green)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\green.paa","",""};
	};
	
	class red_towtruck_08_red:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Red)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\red.paa","",""};
	};
	
	class red_towtruck_08_pink:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Pink)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\pink.paa","",""};
	};
	
		class red_towtruck_08_yellow:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Yellow)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\yellow.paa","",""};
	};
	
	class red_towtruck_08_orange:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Orange)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\orange.paa","",""};
	};
	
	class red_towtruck_08_white:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (White)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\white.paa","",""};
	};
	
		class red_towtruck_08_purple:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Purple)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\purple.paa","",""};
	};
	
		class red_towtruck_08_darkgreen:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Dark Green)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\darkgreen.paa","",""};
	};
	
		class red_towtruck_08_darkred:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Dark Red)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_base\colours\darkred.paa","",""};
	};
	
	class red_towtruck_08_tow1:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Sunrise Side Towing)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_towtruck_08\textures\tow1.paa","",""};
	};
	
		class red_towtruck_08_tow2:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Sunrise Side Towing V2)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_towtruck_08\textures\tow2.paa","",""};
	};
	
		class red_towtruck_08_custom:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Custom 1)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_towtruck_08\skins\custom1.paa","",""};
	};
	
		class red_towtruck_08_custom2:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Custom 2)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_towtruck_08\skins\custom2.paa","",""};
	};
	
		class red_towtruck_08_custom3:red_towtruck_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 GMC C5500 Towtruck  (Custom 3)";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_towtruck_08\skins\custom3.paa","",""};
	};
};