class CfgPatches
{
	class kif_pduniforms
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
			file="\kif_pduniforms";
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
	#include "\kif_pduniforms\cfgPoliceUniformsV.hpp"
	#include "\kif_pduniforms\cfgSheriffUniformsV.hpp"
	#include "\kif_pduniforms\cfgSwatUniformsV.hpp"

};

class cfgWeapons
{
	class ItemCore;
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;

	class V_TacVest_blk_POLICE;
	class VestItem;
	class HeadgearItem;

	#include "\kif_pduniforms\cfgPoliceVests.hpp"

	#include "\kif_pduniforms\cfgPoliceUniformsW.hpp"
	#include "\kif_pduniforms\cfgSheriffUniformsW.hpp"
	#include "\kif_pduniforms\cfgSwatUniformsW.hpp"

};
