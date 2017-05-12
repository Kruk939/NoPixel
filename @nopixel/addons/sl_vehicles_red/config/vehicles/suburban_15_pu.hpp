class red_suburban_15_p_u_base;
class sl_suburban_250: red_suburban_15_p_u_base
	{
		scope=2;
		displayName="250 Slicktop Chevrolet Suburban COMMAND SUPERVISIOR";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
		#include "\sl_vehicles_red\data\sirenArray.hpp"
		hiddenSelectionsTextures[]=
		{"\sl_vehicles_red\tex\suburban_15_pu\250.paa"};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_suburban_15_p\scripts\init.sqf"";";
		};
		thrustDelay=0.0;
		maxSpeed=350;
		enginePower=1000;
		peakTorque=2000;
		idleRpm = 800;
		redRpm = 7000;
		maxOmega=720;
		dampersBumpCoef = 0.0;
                GearboxRatios[]    = {"R3",-5.970,"R2",-5.870,"R1",-4.231,"N",0,"D1",2.462,"D2",1.870,"D3",1.241,"D4",0.970,"D5",0.711};
                torqueCurve[] = {{0.000, 0.000}, {0.178, 0.800}, {0.250, 1.0}, {0.461, 0.900}, {0.900, 0.800}, {1.000, 0.300}};
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
class red_suburban_15_p_u_black;
class kif_suburban_black : red_suburban_15_p_u_black
{
	displayName = "Chevrolet Suburban LTZ 2015 Slicktop Black";
};