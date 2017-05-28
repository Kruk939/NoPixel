class red_taurus_10_p_p_base;
class sl_232: red_taurus_10_p_p_base
	{
		scope=2;
		displayName="232 Ford Police Interceptor Sedan";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		hiddenSelectionsTextures[]=
		{"\sl_vehicles_red\tex\taurus_10_p\232.paa"};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_taurus_10_p\scripts\init.sqf"";";
		};
        #include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
	};	
        class sl_233: sl_232
	{
		displayName="233 Ford Police Interceptor Sedan";
		hiddenSelectionsTextures[]=
		{"\sl_vehicles_red\tex\taurus_10_p\233.paa"};
	};