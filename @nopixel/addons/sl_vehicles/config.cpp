 class CfgPatches
 {
 	class sl_vehicles
 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
		requiredAddons[]= {
			"A3_Data_F"
		};
 	};
 };
class cfgFunctions
{
	class Love
	{
		class Authors
		{
			file="\sl_vehicles";
			class WeLikeAuthors
			{
				preinit=1;
			};
		};
	};
};

class cfgVehicles {
    #include "\sl_vehicles\config\cfgPoliceVehicles.hpp"
    #include "\sl_vehicles\config\cfgMedicVehicles.hpp"
    #include "\sl_vehicles\config\cfgVVV.hpp"
};