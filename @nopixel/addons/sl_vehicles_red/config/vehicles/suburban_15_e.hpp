class red_suburban_15_e_e_base;
class sl_224: red_suburban_15_e_e_base
	{
		scope=2;
		displayName="224 CHEVROLET SUBURBAN SHERIFF OFFICE";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		author="Redhotsteel";
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles_red\tex\suburban_15_e\224.paa"
		};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_suburban_15_e\scripts\init.sqf"";";
		};
		#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
		#include "\sl_vehicles_red\data\sirenArray.hpp"
		enginePower=583;
		peakTorque=1000;
		frontBias = 2.5;
		rearBias = 2.5;
		class complexGearbox
		{	
			GearboxRatios[]    = {"R3",-5.970,"R2",-5.870,"R1",-4.231,"N",0,"D1",4.4619999,"D2",3.5699999,"D3",2.5710001,"D4",0.970,"D5",0.711};
			TransmissionRatios[] = {"High",4.111};
			gearBoxMode        = "auto"; 
			moveOffGear        = 1; 
			driveString        = "D"; 
			neutralString      = "N";
			reverseString      = "R";
		};
                torqueCurve[] = {{0.000, 0.000}, {0.178, 0.800}, {0.250, 1.0}, {0.461, 0.900}, {0.900, 0.800}, {1.000, 0.300}};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1550,1550,2000};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=30;
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
				intensity=250;
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