class red_f350_08_p_p_base;
class sl_226: red_f350_08_p_p_base
	{
		scope = 2;
		displayName = "226 SHERIFF OFFICE 2008 Ford F-350 SUPERDUTY";
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
		hiddenSelectionsTextures[] = {"\sl_vehicles_red\tex\f350_08_p\sheriff.paa"};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_f350_08_p\scripts\init.sqf"";";
		};
        maxOmega=800;
		enginePower=500;
		peakTorque=1200;
	};