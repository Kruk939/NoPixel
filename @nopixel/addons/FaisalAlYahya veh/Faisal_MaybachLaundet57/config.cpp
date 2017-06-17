////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.87
//'now' is Tue Dec 13 04:58:13 2016 : 'file' last modified on Mon Sep 05 21:27:35 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class Faisal_MaybachLaundet57 : config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class Faisal_MaybachLaundet57
	{
		units[] = {"Faisal_MaybachLaundet57"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RscPicture;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Faisal_MaybachLaundet57_base: Car_F
	{
		vehicleClass="Faisal_Cars";
		model="Faisal_MaybachLaundet57\Faisal_MaybachLaundet57";
		picture="\A3\soft_f_gamma\Hatchback_01\Data\UI\portrait_car_CA.paa";
		Icon="\A3\soft_f_gamma\Hatchback_01\Data\UI\map_car_CA.paa";
		author="Faisal Al-Yahya";
		displayName="[Faisal] Maybach Laundet 57";
		hiddenSelections[]= {"camo1","camo2","camo3","camo4","license1","license2","license3","license4","license5","license6","license7","lb_red","lb_blue","lb-corner-left","lb-corner-right", "lb-dir-1","lb-dir-2","lb-dir-3","lb-dir-4","lb-dir-5","lb-dir-6","lb-dir-7", "lb-rear-blue1","lb-rear-blue2","lb-rear-red1","lb-rear-red2", "lb-red-top","lb-blue-top"};
		terrainCoef = 2;
		turnCoef = 3;
		precision = 10;
		fireResistance = 5;
		armor = 65;
		cost = 50000;
		supplyRadius = 2;
		transportMaxBackpacks = 5;
		transportSoldier = 3;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		extCameraPosition[] = {0,1,-8};
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		class TransportItems{};
		class Turrets{};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5;
				material = -1;
				passThrough = 0.2;
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				material = -1;
				passThrough = 0.2;
			};
			class HitBody: HitBody
			{
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.05;
				passThrough = 1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
				passThrough = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
				passThrough = 1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.05;
				passThrough = 1;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.05;
				passThrough = 1;
			};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst = 1;
			turnIncreaseLinear = 3;
			turnIncreaseTime = 0;
			turnDecreaseConst = 8;
			turnDecreaseLinear = 0;
			turnDecreaseTime = 0;
			maxTurnHundred = 1;
		};
		driverAction="driver_low01";
		driverInAction = "GetInLow";
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
		};
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetOutAction[] = {"GetOutLow"};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"Faisal_MaybachLaundet57\Audio\int_start",0.39810717,1};
		soundEngineOnExt[] = {"Faisal_MaybachLaundet57\Audio\ext_start",0.4466836,1,200};
		soundEngineOffInt[] = {"",0.39810717,1};
		soundEngineOffExt[] = {"",0.4466836,1,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1,1,200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1,1,200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1,1,200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_idle",
					0.22387211,
					1,
					150
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_1000",
					0.281838,
					1,
					200
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_2000",
					0.3548134,
					1,
					240
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_3000",
					0.39810699,
					1,
					280
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_4000",
					0.44668359,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_5000",
					0.50118721,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_6000",
					0.56234097,
					1,
					420
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*camPos*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_1000",
					0.50118721,
					1,
					200
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_2000",
					0.56234097,
					1,
					250
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_3000",
					0.63095701,
					1,
					280
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_4000",
					0.70794576,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_5000",
					0.79432821,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_6000",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\ext_7000",
					1.2589254,
					1,
					450
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_idle",
					0.17782794,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_1000",
					0.199526,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_2000",
					0.25118864,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_3000",
					0.281838,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_4000",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_5000",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_6000",
					0.50118721,
					1
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_1000",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_2000",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_3000",
					0.39810699,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_4000",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_5000",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_6000",
					0.56234097,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"Faisal_MaybachLaundet57\Audio\int_7000",
					0.63095701,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					0.39810699,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.25118864,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
			class RenderTargets
		{
			class CenterMirror
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
			class LeftMirror
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
			class RightMirror
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
			class RearCam
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		brakeDistance = 5;
		thrustDelay = 0;
		brakeIdleSpeed = 2;
		maxSpeed = 329;
		fuelCapacity = 30;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		acceleration = 15;
		idleRpm = 900;
		redRpm = 6000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.031,"N",0,"D1",4.17,"D2",2.34,"D3",1.52,"D4",1.14,"D5",0.86,"D6",0.69};
			TransmissionRatios[] = {"High",3.524};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.025;
		differentialType = "all_limited";
		frontRearSplit = 0.3;
		frontBias = 2.5;
		rearBias = 2.5;
		centreBias = 2.5;
		clutchStrength = 5;
		maxOmega = 800.32;
		enginePower = 560;
		peakTorque = 800;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		slowSpeedForwardCoef = 1;
		normalSpeedForwardCoef = 1;
		torqueCurve[] = {{0,0},{0.14,0.78},{0.29,1},{0.43,1},{0.57,1},{0.71,0.98},{0.86,0.95},{1,0.9}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95,0.9};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 5.3;
				dampingRate = 0.5;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				maxBrakeTorque = 3000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.1;
				sprungMass = 272.5;
				springStrength = 185000;
				springDamperRate = 6619;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 18;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 4000;
				latStiffX = 18;
				latStiffY = 18000;
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
				latStiffX = 18;
				latStiffY = 180;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 4000;
				latStiffX = 18;
				latStiffY = 18000;
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
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 50;
				outerAngle = 120;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 0.5;
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
hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)", "", "", "", "", "", "", "", "", "", "","",""};		class AnimationSources: AnimationSources
		{
			class turn_left
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class turn_right: turn_left{};
			class backfire: turn_left{};
			class spoiler
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
		class UserActions
		{
		};
		class eventhandlers
		{
			init = "if (local (_this select 0)) then { [_this select 0] call ivory_fnc_initVehicle; [_this select 0] call ivory_fnc_setLicense;}; _this execVM '\ivory_data\scripts\init.sqf';";
		};
	};
	class Faisal_MaybachLaundet57: Faisal_MaybachLaundet57_base
	{
		author = "Faisal Al-Yahya";
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
		weapons[] = {"SportCarHorn"};
	};
};
//};
