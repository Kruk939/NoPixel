////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.87
//'now' is Fri Dec 16 20:26:20 2016 : 'file' last modified on Mon Sep 05 21:27:37 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class AMG_Caprice1993 : config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class AMG_Caprice1993
	{
		units[] = {"AMG_Caprice1993"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class cfgWeapons
{
	class SportCarHorn;
	class NormalHorn: SportCarHorn
	{
		displayname="NormalHorn";
		reloadTime=4;
		scope=2;
		drySound[]={"\FaisalAlYahya_CrownVicPolice\Sirens\NormalHorn.wav", 1, 1};
	};

  class AMGHorn1: NormalHorn {
    displayname = "AMGHorn1";
    drySound[]= {"\FaisalAlYahya_CrownVicPolice\Sirens\AMGHorn1.wav", 1, 1};

  };
  class AMGHorn2: NormalHorn {
    displayname = "AMGHorn2";
    drySound[]= {"\FaisalAlYahya_CrownVicPolice\Sirens\AMGHorn2.wav", 1, 1};

  };
  class AMGHorn3: NormalHorn {   displayname = "AMGHorn3";
    drySound[]= {"\FaisalAlYahya_CrownVicPolice\Sirens\AMGHorn3.wav", 1, 1};

  };
  class AMGHorn4: NormalHorn {   displayname = "AMGHorn4";
    drySound[]= {"\FaisalAlYahya_CrownVicPolice\Sirens\AMGHorn4.wav", 1, 1};

  };
  class AMGHorn5: NormalHorn {   displayname = "AMGHorn5";
    drySound[]= {"\FaisalAlYahya_CrownVicPolice\Sirens\AMGHorn5.wav", 1, 1};

  };
  class AMGHorn6: NormalHorn {   displayname = "AMGHorn6";
    drySound[]= {"\FaisalAlYahya_CrownVicPolice\Sirens\AMGHorn6.ogg", 1, 1};

  };	
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class cfgSounds
{
	sounds[] = {"Siren1"};
	class Siren1
	{
		name = "Wail";
		sound[] = {"FaisalAlYahya_CrownVicPolice\Sirens\siren1.wav",1,1};
		titles[] = {};
	};
	class Siren2
	{
		name = "Wail2";
		sound[] = {"FaisalAlYahya_CrownVicPolice\Sirens\siren2.wav",1,1};
		titles[] = {};
	};
	class Siren3
	{
		name = "Wail3";
		sound[] = {"FaisalAlYahya_CrownVicPolice\Sirens\siren3.wav",1,1};
		titles[] = {};
	};
};

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
	class AMG_Caprice1993_base: Car_F
	{
		model = "FaisalAlYahya_Caprice1996\AMG_Caprice1993";
		extCameraPosition[] = {0,1,-8};
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		displayName = "Chevy Caprice 1993";
		supplyRadius = 2;
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
		hiddenSelections[]= {"camo1","camo2","camo3","camo4","license1","license2","license3","license4","license5","license6","license7","lb_red","lb_blue","lb-corner-left","lb-corner-right", "lb-dir-1","lb-dir-2","lb-dir-3","lb-dir-4","lb-dir-5","lb-dir-6","lb-dir-7", "lb-rear-blue1","lb-rear-blue2","lb-rear-red1","lb-rear-red2", "lb-red-top","lb-blue-top"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)","","","","","","","","","","","","","","","","","","","","","","",""};
		terrainCoef = 2;
		turnCoef = 3;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		armor = 65;
		cost = 50000;
		transportMaxBackpacks = 3;
		transportSoldier = 3;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";

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
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_startup.wss",0.39810717,1};
		soundEngineOnExt[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_startup.wss",0.4466836,1,200};
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
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_idle",0.17782794,1,100};
				frequency = "0.9	+	((rpm/	6000) factor[(400/	6000),(1150/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(400/	6000),(700/	6000)])	*	((rpm/	6000) factor[(1100/	6000),(900/	6000)]))";
			};
			class Engine
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offverylow",0.17782794,1,100};
				frequency = "0.8	+	((rpm/	6000) factor[(900/	6000),(2100/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(870/	6000),(1100/	6000)])	*	((rpm/	6000) factor[(2100/	6000),(1300/	6000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offverylow",0.17782794,1,100};
				frequency = "0.8	+		((rpm/	6000) factor[(1300/	6000),(3100/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(1250/	6000),(2050/	6000)])	*	((rpm/	6000) factor[(3100/	6000),(2300/	6000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offlow",0.17782794,1,100};
				frequency = "0.8	+	((rpm/	6000) factor[(2200/	6000),(4100/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(2250/	6000),(3050/	6000)])	*	((rpm/	6000) factor[(4100/	6000),(3300/	6000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offlow",0.17782794,1,100};
				frequency = "0.8	+	((rpm/	6000) factor[(3300/	6000),(4900/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(3250/	6000),(4050/	6000)])	*	((rpm/	6000) factor[(4870/	6000),(4200/	6000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offmid",0.17782794,1,100};
				frequency = "0.8	+	((rpm/	6000) factor[(4200/	6000),(6200/	6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	6000) factor[(4150/	6000),(4800/	6000)])	*	((rpm/	6000) factor[(6150/	6000),(5150/	6000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offhigh",0.17782794,1,100};
				frequency = "0.95	+	((rpm/	6000) factor[(5100/	6000),(6800/	6000)])*0.15";
				volume = "engineOn*camPos*((rpm/	6000) factor[(5100/	6000),(6100/	6000)])";
			};
			class IdleThrust
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onidle",0.17782794,1,100};
				frequency = "0.9	+	((rpm/	6000) factor[(400/	6000),(1150/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(400/	6000),(700/	6000)])	*	((rpm/	6000) factor[(1100/	6000),(900/	6000)]))";
			};
			class EngineThrust
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onverylow",0.17782794,1,100};
				frequency = "0.8	+	((rpm/	6000) factor[(900/	6000),(2100/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(870/	6000),(1100/	6000)])	*	((rpm/	6000) factor[(2100/	6000),(1300/	6000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onverylow",0.17782794,1,100};
				frequency = "0.8	+		((rpm/	6000) factor[(1300/	6000),(3100/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(1250/	6000),(2050/	6000)])	*	((rpm/	6000) factor[(3100/	6000),(2300/	6000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onlow",0.17782794,1,100};
				frequency = "0.8	+	((rpm/	6000) factor[(2200/	6000),(4100/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(2250/	6000),(3050/	6000)])	*	((rpm/	6000) factor[(4100/	6000),(3300/	6000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onlow",0.17782794,1,100};
				frequency = "0.8	+	((rpm/	6000) factor[(3300/	6000),(4900/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(3250/	6000),(4050/	6000)])	*	((rpm/	6000) factor[(4870/	6000),(4200/	6000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onmid",0.17782794,1,100};
				frequency = "0.8	+	((rpm/	6000) factor[(4200/	6000),(6200/	6000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(4150/	6000),(4800/	6000)])	*	((rpm/	6000) factor[(6150/	6000),(5150/	6000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onhigh",0.17782794,1,100};
				frequency = "0.9	+	((rpm/	6000) factor[(5100/	6000),(6800/	6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6000) factor[(5100/	6000),(6100/	6000)])";
			};
			class Idle_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_idle",0.099999994,1};
				frequency = "0.9	+	((rpm/	6000) factor[(400/	6000),(1150/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6000) factor[(400/	6000),(700/	6000)])	*	((rpm/	6000) factor[(1100/	6000),(900/	6000)]))";
			};
			class Engine_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offverylow",0.099999994,1};
				frequency = "0.8	+	((rpm/	6000) factor[(900/	6000),(2100/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6000) factor[(870/	6000),(1100/	6000)])	*	((rpm/	6000) factor[(2100/	6000),(1300/	6000)]))";
			};
			class Engine1_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offverylow",0.099999994,1};
				frequency = "0.8	+		((rpm/	6000) factor[(1300/	6000),(3100/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6000) factor[(1250/	6000),(2050/	6000)])	*	((rpm/	6000) factor[(3100/	6000),(2300/	6000)]))";
			};
			class Engine2_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offlow",0.099999994,1};
				frequency = "0.8	+	((rpm/	6000) factor[(2200/	6000),(4100/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6000) factor[(2250/	6000),(3050/	6000)])	*	((rpm/	6000) factor[(4100/	6000),(3300/	6000)]))";
			};
			class Engine3_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offlow",0.099999994,1};
				frequency = "0.8	+	((rpm/	6000) factor[(3300/	6000),(4900/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6000) factor[(3250/	6000),(4050/	6000)])	*	((rpm/	6000) factor[(4870/	6000),(4200/	6000)]))";
			};
			class Engine4_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offmid",0.099999994,1};
				frequency = "0.8	+	((rpm/	6000) factor[(4200/	6000),(6200/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	6000) factor[(4150/	6000),(4800/	6000)])	*	((rpm/	6000) factor[(6150/	6000),(5150/	6000)]))";
			};
			class Engine5_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_offhigh",0.099999994,1};
				frequency = "0.95	+	((rpm/	6000) factor[(5100/	6000),(6800/	6000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/	6000) factor[(5100/	6000),(6100/	6000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onidle",0.099999994,1};
				frequency = "0.9	+	((rpm/	6000) factor[(400/	6000),(1150/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(400/	6000),(700/	6000)])	*	((rpm/	6000) factor[(1100/	6000),(900/	6000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onverylow",0.099999994,1};
				frequency = "0.8	+	((rpm/	6000) factor[(900/	6000),(2100/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(870/	6000),(1100/	6000)])	*	((rpm/	6000) factor[(2100/	6000),(1300/	6000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onverylow",0.099999994,1};
				frequency = "0.8	+		((rpm/	6000) factor[(1300/	6000),(3100/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(1250/	6000),(2050/	6000)])	*	((rpm/	6000) factor[(3100/	6000),(2300/	6000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onlow",0.099999994,1};
				frequency = "0.8	+	((rpm/	6000) factor[(2200/	6000),(4100/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(2250/	6000),(3050/	6000)])	*	((rpm/	6000) factor[(4100/	6000),(3300/	6000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onlow",0.099999994,1};
				frequency = "0.8	+	((rpm/	6000) factor[(3300/	6000),(4900/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(3250/	6000),(4050/	6000)])	*	((rpm/	6000) factor[(4870/	6000),(4200/	6000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onmid",0.099999994,1};
				frequency = "0.8	+	((rpm/	6000) factor[(4200/	6000),(6200/	6000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6000) factor[(4150/	6000),(4800/	6000)])	*	((rpm/	6000) factor[(6150/	6000),(5150/	6000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"FaisalAlYahya_CrownVicPolice\Sound\m3_onhigh",0.099999994,1};
				frequency = "0.9	+	((rpm/	6000) factor[(5100/	6000),(6800/	6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6000) factor[(5100/	6000),(6100/	6000)])";
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
			class Rear
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
		thrustDelay = 0;
		engineStartSpeed = 1.5;
		brakeIdleSpeed = 1.78;
		maxSpeed = 280;
		fuelCapacity = 25;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		idleRpm = 1000;
		redRpm = 7000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.68,"N",0,"D1",4.2,"D2",2.49,"D3",1.9,"D4",1.24,"D5",1};
			TransmissionRatios[] = {"High",3.15};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.025;
		differentialType = "rear_limited";
		frontRearSplit = 0.3;
		frontBias = 2.5;
		rearBias = 2.5;
		centreBias = 2.5;
		clutchStrength = 5;
		maxOmega = 900.04;
		enginePower = 650;
		peakTorque = 320;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		slowSpeedForwardCoef = 1;
		normalSpeedForwardCoef = 1;
		torqueCurve[] = {{0,0},{0.14,0.78},{0.29,0.98},{0.43,0.98},{0.57,0.98},{0.71,0.96},{0.86,0.91},{1,0.85}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.8};
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
				maxBrakeTorque = 4000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.1;
				sprungMass = 200;
				springStrength = 150000;
				springDamperRate = 6990;
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
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		class UserActions {};
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
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				FlareSize=0.5;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				FlareSize=0.5;
			};
		};
	};
	class AMG_Caprice1993: AMG_Caprice1993_base
	{
		author = "Faisal Al-Yahya";
		vehicleClass = "Faisal_Cars";
		scope = 2;
		scopeCurator = 2;
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		class eventhandlers: eventhandlers
		{
			init="_this execVM ""FaisalAlYahya_CrownVicPolice\scripts\init.sqf""; if (local (_this select 0)) then { [_this select 0] call ivory_fnc_initVehicle; [_this select 0] call ivory_fnc_setLicense;};";
		};
	class UserActions {
		class codeone
			{
				displayName = "<t color='#0000ff'>Code One</t>";
				position = "drivewheel";
				radius = 2;
				condition = "this animationPhase ""POLICE"" == 1 && driver this == player && (this getVariable ['lightbar',0]) == 1";
				statement = "this setVariable ['lightbar',0,true]; this setVariable ['siren',0,true]";
				onlyForplayer = 0;
			};
			class codetwo
			{
				displayName = "<t color='#0000ff'>Code Two</t>";
				position = "drivewheel";
				radius = 2;
				condition = "this animationPhase ""POLICE"" == 1 && driver this == player && (this getVariable ['lightbar',0]) == 0";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',0,true]";
				onlyForplayer = 0;
			};
			class codetwo2
			{
				displayName = "<t color='#0000ff'>Code Two</t>";
				position = "drivewheel";
				radius = 2;
				condition = "this animationPhase ""POLICE"" == 1 && driver this == player && (this getVariable ['siren',0]) == 1";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',0,true]";
				onlyForplayer = 0;
			};
			class sirenon
			{
				displayName = "<t color='#ff0000'>Code Three</t>";
				position = "drivewheel";
				radius = 2;
				condition = "this animationPhase ""POLICE"" == 1 && driver this == player && (this getVariable ['siren',0]) == 0 && (this getVariable ['siren',0]) == 0";
				statement = "this setVariable ['lightbar',1,true]; this setVariable ['siren',1,true]";
				onlyForplayer = 0;
			};
	};
		
	};
		};
//};
