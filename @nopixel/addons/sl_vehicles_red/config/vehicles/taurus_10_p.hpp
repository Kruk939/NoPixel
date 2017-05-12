class red_taurus_10_p_p_base;
class sl_taurus_232: red_taurus_10_p_p_base
	{
		scope=2;
		displayName="232 Ford Police Interceptor Sedan";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
		#include "\sl_vehicles_red\data\sirenArray.hpp"
		hiddenSelectionsTextures[]=
		{"\sl_vehicles_red\tex\taurus_10_p\232.paa"};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_taurus_10_p\scripts\init.sqf"";";
		};
		maxSpeed=330;
		enginePower=900;
		peakTorque=1600;
                GearboxRatios[]    = {"R3",-5.970,"R2",-5.870,"R1",-4.231,"N",0,"D1",2.462,"D2",1.870,"D3",1.241,"D4",0.970,"D5",0.711};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={2000,2000,1700};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=25;
				useFlare="true";
				dayLight="false";
				flareSize=0.5;
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
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class LightCarHeadS01
			{
				color[]={1900,1800,2000};
				ambient[]={5,5,5};
				position="LightCarHeadS01";
				direction="LightCarHeadS01_end";
				hitpoint="Light_S";
				selection="Light_S";
				size=1;
				innerAngle=50;
				outerAngle=80;
				coneFadeCoef=10;
				intensity=50;
				useFlare="true";
				dayLight="false";
				flareSize=2;
			};
			class LightCarHeadS02: LightCarHeadS01
			{
				position="LightCarHeadS02";
				direction="LightCarHeadS02_end";
				hitpoint="Light_S2";
				selection="Light_S2";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01"
			},
			
			{
				"LightCarHeadR01"
			},
			
			{
				"LightCarHeadS01"
			},
			
			{
				"LightCarHeadS02"
			}
		};
	};	
        class sl_taurus_233: sl_taurus_232
	{
		displayName="233 Ford Police Interceptor Sedan";
		hiddenSelectionsTextures[]=
		{"\sl_vehicles_red\tex\taurus_10_p\233.paa"};
		weapons[]=
		{
                        "Airhorn1",
                        "Airhorn2",
                        "Howler",
                        "Manual",
                        "Takedown",
                        "pull",
                        "sl_traffic",
                        "sl_manual",
			"red_horn_handsup",
			"red_horn_driver",
			"red_horn_passenger"
		};
	};