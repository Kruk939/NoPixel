 class CfgPatches
 {
 	class sl_ivoryTextures
 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
		requiredAddons[]= {
			"A3_Data_F",
            "ivory_data"
		};
 	};
 };
class cfgFunctions
{
	class Love
	{
		class Authors
		{
			file="\sl_ivoryTextures";
			class WeLikeAuthors
			{
				preinit=1;
			};
		};
	};
};
#include "\sl_ivoryTextures\config\cfgIvoryTextures.hpp"