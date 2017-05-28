class red_charger_12_p_p_base;
class sl_charger_220: red_charger_12_p_p_base
	{
		scope=2;
		displayName="220 SHERIFF OFFICE DODGE CHARGER 2012";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles_red\tex\charger_12_p\sheriff_220.paa"
		};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_charger_12_p\scripts\init.sqf"";";
		};
        #include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
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