class red_charger_15_p_p_base;
class sl_260: red_charger_15_p_p_base
{
	scope=2;
	displayName="260 Sheriff Office Dodge Charger 2015";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"\sl_client\tex\vehicles\Dodge_Charger_15\260.paa"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};

class red_taurus_10_p_u_base;
class sl_280: red_taurus_10_p_u_base
{
	scope=2;
	displayName="280 Blue Unmarked Ford Police Interceptor Sedan";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.141176,0.0784314,0.396078,1.0,CO)"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};
class sl_281: red_taurus_10_p_u_base
{
	scope=2;
	displayName="281 White Unmarked Ford Police Interceptor Sedan";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.831373,0.831373,0.831373,1.0,CO)"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};
class sl_282: red_taurus_10_p_u_base
{
	scope=2;
	displayName="282 Black Unmarked Ford Police Interceptor Sedan";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};

class red_charger_12_p_u_base;
class sl_283: red_charger_12_p_u_base
{
	scope=2;
	displayName="283 Black Dodge Charger 2012 Unmarked";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};
class sl_284: red_charger_12_p_u_base
{
	scope=2;
	displayName="284 Blue Dodge Charger 2012 Unmarked";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.141176,0.0784314,0.396078,1.0,CO)"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};
class red_charger_15_p_u_base;
class sl_285: red_charger_15_p_u_base
{
	scope=2;
	displayName="285 Black Dodge Charger 2015 Unmarked";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};
class sl_286: red_charger_15_p_u_base
{
	scope=2;
	displayName="286 Blue Dodge Charger 2015 Unmarked";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.141176,0.0784314,0.396078,1.0,CO)"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};

class C_Boat_Civil_01_police_F;
class Eventhandlers;
class sl_boat_fire: C_Boat_Civil_01_police_F
{
	author="Jeffrey StanLakeside";
	scope=2;
	displayName="Fire Department Motorboat";
        maxSpeed = 150;
        enginePower = 325;
	class Eventhandlers: Eventhandlers
	{
		init="_this select 0 animate [""HidePoliceSigns"",1,true]; _this select 0 animate [""HideRescueSigns"",1,true]; _this select 0 animate [""HidePolice"",0,true];";
	};
	hiddenSelectionsTextures[]=
	{
		"sl_client\tex\vehicles\boat\fire.paa",
		"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"
	};

};
class red_explorer_16_p_p_base;
class sl_222: red_explorer_16_p_p_base
{
	scope=2;
	displayName="222 Sheriff FTO FPIU";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"\sl_client\tex\vehicles\Explorer\222.paa"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};
class sl_055: red_explorer_16_p_p_base
{
	scope=2;
	displayName="055 Police FTO FPIU";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"\sl_client\tex\vehicles\Explorer\055.paa"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};
class sl_225: red_explorer_16_p_p_base
{
	scope=2;
	displayName="225 Sheriff's FPIU";
	crew="C_man_1";
	side=3;
	faction="CIV_F";
        hiddenSelectionsTextures[] = {"\sl_client\tex\vehicles\Explorer\225.paa"};
	#include "\sl_client\handling\physx_fast.hpp"
	#include "\sl_client\lights\red_spotlight_lights.hpp"
	#include "\sl_client\data\weapons_sheriff_vehicle.hpp"
};


