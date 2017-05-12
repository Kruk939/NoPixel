class red_charger_12_p_p_base;
class sl_charger_220: red_charger_12_p_p_base
	{
		scope=2;
		displayName="220 SHERIFF OFFICE DODGE CHARGER 2012";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
		#include "\sl_vehicles_red\data\sirenArray.hpp"
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles_red\tex\charget_12_p\sheriff_220.paa"
		};
		frontBias=2.5;
		rearBias=2.5;
		enginePower=950;
		peakTorque=1500.23;
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_charger_12_p\scripts\init.sqf"";";
		};
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
				flareSize=1;
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
class sl_charger_sert: sl_charger_220
	{
		scope=2;
		displayName="Dodge Charger S.E.R.T.";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		weapons[] = {"Airhorn1","Airhorn2","Howler","Manual","Takedown"};
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles_red\tex\charger_12_p\sert02.paa"
		};
	};