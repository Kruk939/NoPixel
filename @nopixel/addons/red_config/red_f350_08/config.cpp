class CfgPatches
{
	class red_f350_08
	{
		units[] = {"red_f350_08_p"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};

class DefaultEventhandlers;

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgVehicleClasses 
{
	class red_civilian
	{
		displayName = "Redhotsteel's Cars";
	};
};

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints /// we want to use hitpoints predefined for all cars
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
		};	
		class EventHandlers;
	};

	class red_f350_08_base: Car_F
	{
		model 	= "\red_f350_08\red_f350_08_p";  /// simple path to model
		picture	= "\red_base\textures\icon.paa"; /// icon in map	
		Icon	= "\red_base\textures\icon.paa"; /// icon in map		
		author = "Redhotsteel";
		hiddenSelections[] = {"camo1","license1","license2","license3","license4","license5","license6","license7"}; ///we want to allow changing the color of this selection	
		terrainCoef 	= 1.0; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 2.5; 	/// should match the wheel turn radius
		precision 		= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration 	= 15; 	/// how fast acceleration does the AI think the car has
		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 32; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle
		
		transportMaxBackpacks 	= 4; /// just some backpacks fit the trunk by default
		transportSoldier 		= 3; /// number of cargo except driver
		
		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		driveOnComponent[] = {"wheel_1_1_damper","wheel_1_2_damper","wheel_2_1_damper","wheel_2_2_damper"};
		extCameraPosition[] = {0, 1, -7.5};
		
		class CargoTurret;	// External class reference
		
		class Turrets{};

		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel	{armor=0.125; passThrough=0;}; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel: HitLF2Wheel	{armor=0.125; passThrough=0;};

			class HitRFWheel: HitRFWheel	{armor=0.125; passThrough=0;};
			class HitRF2Wheel: HitRF2Wheel 	{armor=0.125; passThrough=0;}; 

			class HitFuel 			{armor=0.50; material=-1; name="fueltank"; visual=""; passThrough=0.2;}; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine 		{armor=0.50; material=-1; name="engine"; visual=""; passThrough=0.2;};
			class HitBody: HitBody 	{name = "body"; visual="camo1"; passThrough=1;}; /// all damage to the hull is aFRLied to total damage

			class HitGlass1: HitGlass1 {armor=0.25;}; /// it is pretty easy to puncture the glass but not so easy to remove it
			class HitGlass2: HitGlass2 {armor=0.25;};
			class HitGlass3: HitGlass3 {armor=0.25;};
			class HitGlass4: HitGlass4 {armor=0.25;};
		};
		
		driverAction 		= driver_offroad01; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] 		= {passenger_low01,passenger_generic01_leanleft,passenger_generic01_leanright};
		getInAction 		= GetInLow; 		/// how does driver look while getting in
		getOutAction 		= GetOutLow; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case
		
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

				
		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "TrackFLL"; 
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR"; 
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL"; 
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR"; 
		// front right track, left offset
		memoryPointTrackFRL = "TrackFRL"; 
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR"; 
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL"; 
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR"; 		

		class Damage /// damage changes material in specific places (visual in hitPoint)
		{
			tex[]={};
			mat[]=
			{
				"A3\data_f\glass_veh_int.rvmat", 		/// material mapped in model
				"A3\data_f\Glass_veh_damage.rvmat", 	/// changes to this one once damage of the part reaches 0.5
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes to this one once damage of the part reaches 1

				"A3\data_f\glass_veh.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat"
			};
		};
		
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 350;	// max speed on level road, km/h
		fuelCapacity = 30;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 2.4;
		antiRollbarForceLimit = 2.0;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		idleRpm = 1000;
		redRpm = 5000;
		
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
		differentialType = "all_open";
		frontRearSplit = 0.3;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		clutchStrength = 55.0;
		maxOmega = 523.6;
		enginePower = 224;
		peakTorque = 495;
		dampingRateFullThrottle = 0.03;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		torqueCurve[] = {{0.0, 0.0}, {0.2, 0.65}, {0.3, 0.8}, {0.4, 0.95}, {0.6, 1.0}, {0.7, 0.95}, {0.9, 0.9}, {1.0, 0.5}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.20;
		latency = 1.0;
		
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
				maxHandBrakeTorque = 2500;
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
				maxHandBrakeTorque = 2500;
				steering = 0;
				side = "right";
				latStiffX = 25;
				latStiffY = 22000;
			};
		};
		
		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position 	= "exhaust1_pos";  		/// name of initial memory point
				direction 	= "exhaust1_dir";	/// name of memory point for exhaust direction
				effect 		= "ExhaustsEffect";	/// what particle effect is it going to use
			};

			class Exhaust2
			{
				position 	= "exhaust2_pos";
				direction 	= "exhaust2_dir";
				effect 		= "ExhaustsEffect";
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
				flareSize 		= 1.0;						/// how big is the flare

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
		};
		aggregateReflectors[] = {{"LightCarHeadL01"}, {"LightCarHeadR01"}}; /// aggregating reflectors helps the engine a lot
	};

	class red_f350_08_black:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Black)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\black.paa","","","","","","",""};
	};
	
	class red_f350_08_aqua:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Aqua)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\aqua.paa","","","","","","",""};
	};
	
	class red_f350_08_darkblue:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Dark Blue)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\darkblue.paa","","","","","","",""};
	};
	
	class red_f350_08_green:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Green)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\green.paa","","","","","","",""};
	};
	
	class red_f350_08_red:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Red)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\red.paa","","","","","","",""};
	};
	
	class red_f350_08_pink:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Pink)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\pink.paa","","","","","","",""};
	};
	
	class red_f350_08_yellow:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Yellow)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\yellow.paa","","","","","","",""};
	};
	
	class red_f350_08_orange:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Orange)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\orange.paa","","","","","","",""};
	};
	
	class red_f350_08_white:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (White)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\white.paa","","","","","","",""};
	};
	
	class red_f350_08_purple:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Purple)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\purple.paa","","","","","","",""};
	};
	
	class red_f350_08_darkgreen:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Dark Green)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\darkgreen.paa","","","","","","",""};
	};
	
	class red_f350_08_darkred:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Dark Red)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\darkred.paa","","","","","","",""};
	};
	
	class red_f350_08_blue:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Blue)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"red_base\colours\blue.paa","","","","","","",""};
	};
	
	class red_f350_08_custom:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Custom 1)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_f350_08\skins\custom1.paa","","","","","","",""};
	};
	
	class red_f350_08_custom2:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Custom 2)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_f350_08\skins\custom2.paa","","","","","","",""};
	};
	
	class red_f350_08_custom3:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Custom 3)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_f350_08\skins\custom3.paa","","","","","","",""};
	};
	
	class red_f350_08_custom4:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Custom 4)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_f350_08\skins\custom4.paa","","","","","","",""};
	};
	
	class red_f350_08_custom5:red_f350_08_base
	{	
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		displayName = "2008 Ford F-350 SUPERDUTY (Custom 5)";
		vehicleClass = "red_civilian";
		author = "Redhotsteel";
		hiddenSelectionsTextures[] = {"\red_config\red_f350_08\skins\custom5.paa","","","","","","",""};
	};
};