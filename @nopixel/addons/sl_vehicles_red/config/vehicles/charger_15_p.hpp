class red_charger_15_p_p_base;
class sl_260: red_charger_15_p_p_base
{
	scope=2;
	displayName="260 Sheriff Office Dodge Charger 2015";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
    hiddenSelectionsTextures[] = {"\sl_vehicles_red\tex\charger_15_p\260.paa"};
	class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_charger_15_p\scripts\init.sqf"";";
		};
	#include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
};
class sl_rru_117: red_charger_15_p_p_base
{
	scope=2;
	displayName="RRU Charger 2015 (117)";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
    hiddenSelectionsTextures[] = {"\sl_vehicles_red\tex\charger_15_p\117_dodge_charger_2015_RRU.paa"};
	class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_charger_15_p\scripts\init.sqf"";";
		};
	#include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
};
class sl_rru_118: red_charger_15_p_p_base
{
	scope=2;
	displayName="RRU Charger 2015 (118)";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
    hiddenSelectionsTextures[] = {"\sl_vehicles_red\tex\charger_15_p\118_dodge_charger_2015_RRU.paa"};
	class eventhandlers
		{
			init = "_this call DD_fnc_VehicleInit; _this execVM ""red_charger_15_p\scripts\init.sqf"";";
		};
	#include "\sl_vehicles_red\handling\physx_fast.hpp"
	#include "\sl_vehicles_red\lights\red_spotlight_lights.hpp"
	#include "\sl_vehicles_red\data\weapons_sheriff_vehicle.hpp"
	#include "\sl_vehicles_red\data\sirenArray.hpp"
};