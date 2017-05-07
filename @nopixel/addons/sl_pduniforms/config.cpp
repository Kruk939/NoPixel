class CfgPatches
{
	class sl_pduniforms
	{
		units[] = {"B_Competitor_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgFunctions
{
	class Love
	{
		class Authors
		{
			file="\sl_pduniforms";
			class WeLikeAuthors
			{
				preinit=1;
			};
		};
	};
};
class CfgVehicles
{
	class B_Competitor_F;
	class B_Soldier_lite_F;
	#include "\sl_pduniforms\cfgPoliceUniformsV.hpp"
	#include "\sl_pduniforms\cfgSheriffUniformsV.hpp"
	#include "\sl_pduniforms\cfgSwatUniformsV.hpp"
	#include "\sl_pduniforms\cfgDtuUniformsV.hpp"

};

class cfgWeapons
{
	class ItemCore;
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;

	class V_TacVest_blk_POLICE;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;

	#include "\sl_pduniforms\cfgPoliceVests.hpp"

	#include "\sl_pduniforms\cfgPoliceUniformsW.hpp"
	#include "\sl_pduniforms\cfgSheriffUniformsW.hpp"
	#include "\sl_pduniforms\cfgSwatUniformsW.hpp"
	#include "\sl_pduniforms\cfgDtuUniformsW.hpp"

};
