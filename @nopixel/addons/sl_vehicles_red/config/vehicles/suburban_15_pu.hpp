class red_suburban_15_p_u_base;
class sl_250: red_suburban_15_p_u_base
	{
		scope=2;
		displayName="250 Slicktop Chevrolet Suburban COMMAND SUPERVISIOR";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		hiddenSelectionsTextures[]=
		{"\sl_vehicles_red\tex\suburban_15_pu\250.paa"};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_suburban_15_p\scripts\init.sqf"";";
		};
        #include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
	};
class red_suburban_15_p_u_black;
class kif_suburban_black : red_suburban_15_p_u_black
{
	displayName = "Chevrolet Suburban LTZ 2015 Slicktop Black";
};