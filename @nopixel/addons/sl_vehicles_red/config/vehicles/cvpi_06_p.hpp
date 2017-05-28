class red_cvpi_06_p_p_base;
class sl_241: red_cvpi_06_p_p_base
	{
		scope=2;
		displayName="241 Ford Crown Victoria Police Interceptor";
		crew="C_man_1";
		side=3;
		faction="CIV_F";
		hiddenSelectionsTextures[]=
		{"\sl_vehicles_red\tex\cvpi_06_p\241.paa"};
		class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_cvpi_06_p\scripts\init.sqf"";";
		};
        #include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
	};
	class sl_cvpi_242: sl_241
	{
		displayName="242 Ford Crown Victoria Police Interceptor";
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles_red\tex\cvpi_06_p\242.paa"
		};
	};
	class sl_243: sl_241
	{
		displayName="243 Ford Crown Victoria Police Interceptor";
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles_red\tex\cvpi_06_p\243.paa"
		};
	};
	class sl_244: sl_241
	{
		displayName="244 Ford Crown Victoria Police Interceptor";
		hiddenSelectionsTextures[]=
		{
			"\sl_vehicles_red\tex\cvpi_06_p\244.paa"
		};
	};