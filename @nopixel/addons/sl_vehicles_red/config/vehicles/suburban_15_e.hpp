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
        #include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
	};