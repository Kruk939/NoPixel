class red_taurus_10_p_u_base;
class sl_taurus_231: red_taurus_10_p_u_base
{
	scope=2;
	displayName="231 Slicktop Ford Police Interceptor Sedan";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
	hiddenSelectionsTextures[] = {"\sl_vehicles_red\tex\taurus_10_pu\231.paa"};
	class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_taurus_10_p\scripts\init.sqf"";";
		};
    #include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
};
class sl_280: red_taurus_10_p_u_base
{
	scope=2;
	displayName="280 Blue Unmarked Ford Police Interceptor Sedan";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
    hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.141176,0.0784314,0.396078,1.0,CO)"};
	class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_taurus_10_p\scripts\init.sqf"";";
		};
	#include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
};
class sl_281: red_taurus_10_p_u_base
{
	scope=2;
	displayName="281 White Unmarked Ford Police Interceptor Sedan";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
    hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.831373,0.831373,0.831373,1.0,CO)"};
	class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_taurus_10_p\scripts\init.sqf"";";
		};
	#include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
};
class sl_282: red_taurus_10_p_u_base
{
	scope=2;
	displayName="282 Black Unmarked Ford Police Interceptor Sedan";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
    hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)"};
	class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_taurus_10_p\scripts\init.sqf"";";
		};
	#include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
};