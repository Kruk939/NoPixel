class sl_dorian_jaguar: red_xkrs_12_black
{
	scope=2;
	displayName="Jaguar XKR-S BATMAN [Dorian Lych Wielki]";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
    hiddenSelectionsTextures[] = {"\sl_vehicles_red\tex\Jaguar\batman.paa"};
    hiddenSelectionsMaterials[] = {"\sl_impala\rvmat\body.rvmat"};
	#include "\sl_vehicles_red\lights\red_civ_lights.hpp"
    #include "\sl_vehicles_red\handling\physx_highplus.hpp"
};
class sl_dorian_charger_15: red_charger_15_base
{
	scope=2;
	displayName="Dodge Charger [Dorian Lych Wielki]";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
    hiddenSelectionsTextures[] = {"\sl_vehicles_red\tex\Dodge_Charger_15\dorian.paa"};
	#include "\sl_vehicles_red\lights\red_civ_lights.hpp"
    #include "\sl_vehicles_red\handling\physx_mediumplus.hpp"
};