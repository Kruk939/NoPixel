class CfgPatches
{
	class kif_fd
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
			file="\kif_fd";
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
	#include "\kif_fd\cfgFDUniformsV.hpp"

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

	#include "\kif_fd\cfgFDUniformsW.hpp"
	#include "\kif_fd\cfgFDVests.hpp"

};
