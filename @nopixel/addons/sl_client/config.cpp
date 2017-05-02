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
class CfgVehicles {
	class All{};
	class Static: All{};
	class Building: Static{};
	class B_Competitor_F;
	class B_Soldier_lite_F;
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
