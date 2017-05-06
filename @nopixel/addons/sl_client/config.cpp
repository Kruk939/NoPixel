class CfgPatches
 {
 	class sl_client
 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
		requiredAddons[]= {"A3_Data_F"};
 	};
 };
class cfgFunctions
{
 	class Love
	{
		class Authors
		{
			file="\sl_client";
			class WeLikeAuthors
			{
				preinit=1;
			};
		};
	};
};
class CfgVehicles {
	class All{};
	class Static: All{};
	class Building: Static{};
	class B_Competitor_F;
	class red_camaro_12_black;
	class red_charger_12_black;
	class red_charger_15_black;
	class red_corvette_14_black;
	class red_genesis_16_black;
	class red_gs350_13_black;
	class red_panamera_10_black;
	class red_porsche_12_black;
	class red_s65_12_black;
	class red_suburban_15_black;
	class red_taurus_10_black;
	class red_vanquish_13_black;
	class red_xkrs_12_black;
	class red_venomgt_11_black;
	#include "\sl_client\cfgCivilianVehicles.hpp"
	#include "\sl_client\cfgPDVehicles.hpp"
	#include "\sl_client\cfgPDUniformsV.hpp"
	#include "\sl_client\cfgBuildings.hpp"
};
class cfgWeapons {
	class ItemCore;
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;

	class V_TacVest_blk_POLICE;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	#include "\sl_client\cfgPDVests.hpp"
	#include "\sl_client\cfgPDUniformsW.hpp"
};
