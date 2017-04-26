#include "basicdefines_A3.hpp"
class DefaultEventhandlers;
class CfgPatches
{
	class sl_characters
	{
		weapons[]=
		{
			"sl_traffic_so",
			"sl_academy"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class cfgWeapons
{
class InventoryItem_Base_F;
class ItemCore;
class VestItem: InventoryItem_Base_F
{
	type = VEST_SLOT;			/// vests fit into vest slot
	hiddenSelections[] = {};	/// no changeable selections by default
	armor = 5*0;				/// what protection does the vest provide
	passThrough = 1;			/// coef of damage passed to total damage
	hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
	containerClass="Supply300";
	mass=60;
};

class Vest_Camo_Base: ItemCore /// base class for vests with changeable textures
{
	scope = 0;	/// base classes should not be visible in editor
	allowedSlots[] = {BACKPACK_SLOT}; /// you should be able to put a vest into backpack
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures

	class ItemInfo: VestItem
	{
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		LOAD(0,0) /// macro from basicdefines_A3.hpp
	};
};

class sl_traffic_so: Vest_Camo_Base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "SL SHERIFF TRAFFIC VEST"; /// how would the stuff be displayed in inventory and on ground
	picture = "sl_characters\tex\sl_logo.paa"; /// this icon fits the vest surprisingly well
	model   = "sl_characters\sl_vest.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"sl_characters\tex\traffic.paa"}; /// what texture is going to be used

	class ItemInfo: VestItem
	{
		uniformModel   = "sl_characters\sl_vest.p3d"; /// what model does the vest use
                hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		LOAD(40,100) /// macro from basicdefines_A3.hpp
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 8; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 8;
				passThrough	= 0.5;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 24; 
				passThrough	= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 24;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 24;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};
class sl_academy: sl_traffic_so
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "SL ACADEMY VEST"; /// how would the stuff be displayed in inventory and on ground
	picture = "sl_characters\tex\sl_logo.paa"; /// this icon fits the vest surprisingly well
	model   = "sl_characters\sl_vest.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"sl_characters\tex\academy.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem
		{
			uniformModel="sl_characters\sl_vest.p3d";
			containerClass="Supply300";
			mass=60;
			armor=15;
			passThrough=0.40000001;
			hiddenSelections[]=
			{
				"camo"
			};
		};
};
};