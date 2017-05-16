class red_suburban_15_p_p_base;
class sl_251: red_suburban_15_p_p_base
	{
		scope=2;
		displayName="251 Chevrolet Suburban";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		hiddenSelectionsTextures[]=
		{"\sl_vehicles_red\tex\suburban_15_p\251.paa"};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_suburban_15_p\scripts\init.sqf"";";
		};
        #include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
	};