class DefaultEventhandlers;
class CfgVehicleClasses
{
	class JR_police_vehicles
	{
		displayName="[JR RPG] Police Vehicles";
	};
};
class CfgPatches
{
	class JR_ford_fusion_police
	{
		units[]=
		{
			"JR_ford_fusion_police"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class HitPoints
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
		class AnimationSources;
	};
	class JR_ford_fusion_police_base: Car_F
	{
		vehicleClass="JR_police_vehicles";
		model="JR_ford_fusion\police\JR_ford_fusion_police.p3d";
		picture="\A3\soft_f_gamma\Hatchback_01\Data\UI\portrait_car_CA.paa";
		Icon="\A3\soft_f_gamma\Hatchback_01\Data\UI\map_car_CA.paa";
		author="Jose Ramos";
		scope=1;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		displayName="Ford Fusion Police";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		terrainCoef=2;
		maximumLoad=500;
		precision=10;
		fireResistance=5;
		armor=75;
		cost=10000;
		transportMaxBackpacks=3;
		transportSoldier=5;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		maxFordingDepth=0.5;
		waterResistance=1;
		crewCrashProtection=0.25;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		extCameraPosition[]={0,0.30000001,-4.5};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=0;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=0;
			};
		};
		class eventhandlers
		{
			init="(_this select 0) call DD_fnc_VehicleInit; (_this select 0) spawn vhe_fnc_sirenas;[_this select 0] execVM '\JR_ford_fusion_police\radar.sqf';";
		};
		class Turrets
		{
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.75;
				passThrough="false";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.75;
				passThrough="false";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.75;
				passThrough="false";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.75;
				passThrough="false";
			};
			class HitFuel
			{
				armor=0.60000002;
				material=-1;
				name="palivo";
				visual="";
				passThrough="true";
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="engine";
				visual="";
				passThrough="true";
			};
			class HitBody: HitBody
			{
				name="karoserie";
				visual="camo1";
				passThrough="true";
			};
			class HitGlass1: HitGlass1
			{
				armor=0.5;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.5;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.5;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.5;
			};
		};
		hideWeaponsDriver="true";
		hideWeaponsCargo="true";
		weapons[]=
		{
			"CarHorn"
		};
		driverAction="driver_low01";
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_leanleft",
			"passenger_generic01_foldhands"
		};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			0.56234097,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			0.56234097,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234097,
			1
		};
		soundEngineOnInt[]=
		{
			"JR_ford_fusion\data\sound\int_start",
			0.39810699,
			1
		};
		soundEngineOnExt[]=
		{
			"JR_ford_fusion\data\sound\ext_start",
			0.446684,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"JR_ford_fusion\data\sound\int_stop",
			0.39810699,
			1
		};
		soundEngineOffExt[]=
		{
			"JR_ford_fusion\data\sound\ext_stop",
			0.446684,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_01",
			0.707946,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_02",
			0.707946,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_03",
			0.707946,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_04",
			0.707946,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01",
			0.707946,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02",
			0.707946,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03",
			0.707946,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04",
			0.707946,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05",
			0.707946,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06",
			0.707946,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01",
			0.707946,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02",
			0.707946,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03",
			0.707946,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04",
			0.707946,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"JR_ford_fusion\data\sound\ext_idle",
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
					"JR_ford_fusion\data\sound\ext_1000",
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
					"JR_ford_fusion\data\sound\ext_2000",
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
					"JR_ford_fusion\data\sound\ext_3000",
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
					"JR_ford_fusion\data\sound\ext_4000",
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
					"JR_ford_fusion\data\sound\ext_5000",
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
					"JR_ford_fusion\data\sound\ext_6000",
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
					"JR_ford_fusion\data\sound\ext_1000",
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
					"JR_ford_fusion\data\sound\ext_2000",
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
					"JR_ford_fusion\data\sound\ext_3000",
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
					"JR_ford_fusion\data\sound\ext_4000",
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
					"JR_ford_fusion\data\sound\ext_5000",
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
					"JR_ford_fusion\data\sound\ext_6000",
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
					"JR_ford_fusion\data\sound\ext_7000",
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
					"JR_ford_fusion\data\sound\int_idle",
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
					"JR_ford_fusion\data\sound\int_1000",
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
					"JR_ford_fusion\data\sound\int_2000",
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
					"JR_ford_fusion\data\sound\int_3000",
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
					"JR_ford_fusion\data\sound\int_4000",
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
					"JR_ford_fusion\data\sound\int_5000",
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
					"JR_ford_fusion\data\sound\int_6000",
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
					"JR_ford_fusion\data\sound\int_1000",
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
					"JR_ford_fusion\data\sound\int_2000",
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
					"JR_ford_fusion\data\sound\int_3000",
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
					"JR_ford_fusion\data\sound\int_4000",
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
					"JR_ford_fusion\data\sound\int_5000",
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
					"JR_ford_fusion\data\sound\int_6000",
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
					"JR_ford_fusion\data\sound\int_7000",
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
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=5;
					renderVisionMode=3;
					fov=0.69999999;
				};
			};
			class RearCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=5;
					renderVisionMode=3;
					fov=0.69999999;
				};
			};
			class FrontCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=5;
					renderVisionMode=3;
					fov=0.69999999;
				};
			};
			class radar
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=1.2;
				};
			};
		};
		brakeDistance=4;
		thrustDelay=0.1;
		brakeIdleSpeed=2;
		maxSpeed=360;
		fuelCapacity=60;
		wheelCircumference=2.277;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=0;
		acceleration=60;
		idleRpm=1000;
		redRpm=7000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.2309999,
				"N",
				0,
				"D1",
				4.4619999,
				"D2",
				3.5699999,
				"D3",
				2.5710001,
				"D4",
				1.97,
				"D5",
				1.601,
				"D6",
				0.89999998,
				"D7",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				4.1389999
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=0.0099999998;
		differentialType="all_open";
		frontRearSplit=0.30000001;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=2.5;
		clutchStrength=55;
		enginePower=450;
		maxOmega=720;
		peakTorque=800;
		dampingRateFullThrottle=0.029999999;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			{0,0},
			{0.2,0.64999998},
			{0.30000001,0.80000001},
			{0.40000001,0.94999999},
			{0.60000002,1},
			{0.69999999,0.94999999},
			{0.89999998,0.89999998},
			{1,0.5}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.98000002,0.98000002,0.98000002,0.98000002,0.97000003,0.94999999,0.94999999};
		switchTime=0.11;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width=0.2;
				mass=20;
				MOI=5.3000002;
				dampingRate=0.5;
				maxBrakeTorque=5000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				mMaxDroop=0.050000001;
				sprungMass=272.5;
				springStrength=27250;
				springDamperRate=6725;
				longitudinalStiffnessPerUnitGravity=100000;
				latStiffX=25;
				latStiffY=18000;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=4000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=4000;
			};
		};
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
		class Library
		{
		};
		class Damage
		{
			tex[]=
			{
				""
			};
			mat[]=
			{
				"A3\data_f\glass_veh_int.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\glass_veh.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
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
			class arcus_derecha1
			{
				color[]={0,0,2500};
				ambient[]={5,5,5};
				position="arcus_azul_der_start";
				direction="arcus_azul_der_end";
				hitpoint="arcus_azul_der_hitpoint";
				selection="arcus";
				size=1.25;
				innerAngle=150;
				outerAngle=170;
				coneFadeCoef=4;
				intensity=1;
				useFlare="true";
				dayLight="false";
				flareSize=1;
				flareMaxDistance=100;
				drawLight="false";
				activeLight="false";
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0.30000001;
					hardLimitStart=25;
					hardLimitEnd=35;
				};
			};
			class arcus_izquierda1
			{
				color[]={2500,0,0};
				ambient[]={5,5,5};
				position="arcus_azul_izq_start";
				direction="arcus_azul_izq_end";
				hitpoint="arcus_azul_izq_hitpoint";
				selection="arcus";
				size=1.25;
				innerAngle=150;
				outerAngle=170;
				coneFadeCoef=4;
				intensity=1;
				useFlare="true";
				dayLight="false";
				flareSize=1;
				flareMaxDistance=100;
				drawLight="false";
				activeLight="false";
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0.30000001;
					hardLimitStart=25;
					hardLimitEnd=35;
				};
			};
			class arcus_derecha2: arcus_derecha1
			{
				position="arcus_azul_der_start_1";
				direction="arcus_azul_der_end_1";
				hitpoint="arcus_azul_der_hitpoint_1";
				selection="arcus";
			};
			class arcus_izquierda2: arcus_izquierda1
			{
				position="arcus_azul_izq_start_1";
				direction="arcus_azul_izq_end_1";
				hitpoint="arcus_azul_izq_hitpoint_1";
				selection="arcus";
			};
		};
		class UserActions
		{
			class puenteOff
			{
				displayName="<t color='#0000FF'>LIGHTBAR OFF</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'arcus_start' > 0.5) AND driver this == player";
				statement="this animate ['arcus_start', 0], this animate ['arcus_dir_izq_start', 0], this animate ['arcus_dir_der_start', 0], this animate ['arcus_dir_flash_start', 0]";
				onlyForplayer=0;
				shortcut="user1";
				showWindow=0;
			};
			class puenteON
			{
				displayName="<t color='#0000FF'>LIGHTBAR ON</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'arcus_start' < 0.5) AND driver this == player";
				statement="this animate ['arcus_start', 1], this animate ['arcus_dir_flash_start', 1], this animate ['arcus_cristal_1', 0], this animate ['arcus_cristal_2', 0], this animate ['arcus_dir_der_start', 0], this animate ['arcus_dir_izq_start', 0]";
				onlyForplayer=0;
				shortcut="user1";
				showWindow=0;
			};
			class directionalOff
			{
				displayName="<t color='#FFFF00'>DIRECTION OFF</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'arcus_dir_der_start' > 0.5) AND driver this == player";
				statement="this animate ['arcus_dir_der_start', 0]";
				onlyForplayer=0;
				shortcut="user4";
				showWindow=0;
			};
			class directionalOff1
			{
				displayName="<t color='#FFFF00'>DIRECTION OFF</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'arcus_dir_izq_start' > 0.5) AND driver this == player";
				statement="this animate ['arcus_dir_izq_start', 0]";
				onlyForplayer=0;
				shortcut="user4";
				showWindow=0;
			};
			class directionalOff2
			{
				displayName="<t color='#FFFF00'>DIRECTION OFF</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'arcus_dir_flash_start' > 0.5) AND driver this == player";
				statement="this animate ['arcus_dir_flash_start', 0]";
				onlyForplayer=0;
				shortcut="user4";
				showWindow=0;
			};
			class directionalIzq
			{
				displayName="<t color='#FFFF00'>DIRECTION LEFT</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'arcus_dir_izq_start' < 0.5) AND driver this == player";
				statement="this animate ['arcus_dir_izq_start', 1], this animate ['arcus_dir_der_start', 0], this animate ['arcus_dir_flash_start', 0]";
				onlyForplayer=0;
				shortcut="user5";
				showWindow=0;
			};
			class directionalDer
			{
				displayName="<t color='#FFFF00'>DIRECTION RIGHT</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'arcus_dir_der_start' < 0.5) AND driver this == player";
				statement="this animate ['arcus_dir_izq_start', 0], this animate ['arcus_dir_der_start', 1], this animate ['arcus_dir_flash_start', 0]";
				onlyForplayer=0;
				shortcut="user6";
				showWindow=0;
			};
			class directionalflash
			{
				displayName="<t color='#FFFF00'>DIRECTION FLASH</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'arcus_dir_flash_start' < 0.5) AND driver this == player";
				statement="this animate ['arcus_dir_izq_start', 0], this animate ['arcus_dir_der_start', 0], this animate ['arcus_dir_flash_start', 1]";
				onlyForplayer=0;
				shortcut="user7";
				showWindow=0;
			};
			class radaron
			{
				displayName="<t color='#00FF00'>RADAR ON</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'radar' == 0) AND driver this == player";
				statement="this animate ['radar', 1]";
				onlyForplayer=0;
				showWindow=0;
			};
			class radaroff
			{
				displayName="<t color='#00FF00'>RADAR OFF</t>";
				position="drivewheel_axis";
				radius=1000;
				condition="(this animationPhase 'radar' == 1) AND driver this == player";
				statement="this animate ['radar', 0]";
				onlyForplayer=0;
				showWindow=0;
			};
		};
		class AnimationSources
		{
			class arcus_dir_izq
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
			class arcus_dir_der
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
			class arcus_dir_flash
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
			class ani_arcus
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
			class arcus_cristal
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
			class ani_sirena_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
			class policia
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
			class ani_radar
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
		};
	};
	class JR_ford_fusion_police_1: JR_ford_fusion_police_base
	{
		scope=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		displayName="Ford Fusion Police";
		vehicleClass="JR_police_vehicles";
		author="Jose Ramos";
		hiddenSelectionsTextures[]=
		{
			"JR_ford_fusion\data\textures\police\police.paa"
		};
        #include "\sl_vehicles_red\data\sirenArray.hpp"
	};
	class JR_ford_fusion_police_sheriff: JR_ford_fusion_police_base
	{
		scope=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		displayName="Ford Fusion Sheriff";
		vehicleClass="JR_police_vehicles";
		author="Jose Ramos";
		hiddenSelectionsTextures[]=
		{
			"JR_ford_fusion\data\textures\police\sheriff.paa"
		};
        #include "\sl_vehicles_red\data\sirenArray.hpp"
	};
	class JR_ford_fusion_police_FBI: JR_ford_fusion_police_base
	{
		scope=2;
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		displayName="Ford Fusion FBI";
		vehicleClass="JR_police_vehicles";
		author="Jose Ramos";
		hiddenSelectionsTextures[]=
		{
			"JR_ford_fusion\data\textures\police\FBI.paa"
		};
        #include "\sl_vehicles_red\data\sirenArray.hpp"
	};
};
class cfgMods
{
	author="[POP] Jose Ramos";
	timepacked="1497369697";
};
