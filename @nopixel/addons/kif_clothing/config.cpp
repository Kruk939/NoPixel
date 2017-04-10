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
			file="\kif_clothing";
			class WeLikeAuthors
			{
				preinit=1;
			};
		};
	};
};

class cfgWeapons
{
    class B_Bergen_sgg;
    #include "\kif_clothing\cfgBackpacks.hpp"

};