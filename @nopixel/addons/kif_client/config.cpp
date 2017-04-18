 class CfgPatches
 {
 	class kif_client
 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
		requiredAddons[]= {
			"A3_Data_F",
			"plp_containers",
			"ivory_data",
			"ivory_isf",
			"ivory_m3",
             "np_ivory"
		};
 	};
 };
class cfgFunctions
{
	class Love
	{
		class Authors
		{
			file="\kif_client";
			class WeLikeAuthors
			{
				preinit=1;
			};
		};
	};
};
class CfgVehicleClasses
{
	class kif_client
	{
		displayName = "Stan Lakeside Buildings";
	};
};
class CfgMagazines
{
	class InventoryItem_Base_F;
	class BoxItem: InventoryItem_Base_F
	{
		type=620;
		allowedSlots[]={901};
		mass=16;
	};
	class Default;
	class ItemCore: Default
	{
		type=131072;
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		muzzles[]={};
		class Armory
		{
			disabled=1;
		};
	};
	#include "\kif_client\cfgItems.hpp"
};
class CfgVehicles {
	class All{};
	class Static: All{};
	class Building: Static{};
	class ReammoBox;
	class ThingX;
	class kif_chest_base: ThingX
	{
		animated=0;
		scope=0;
		scopeCurator=0;
		editorCategory="EdCat_Supplies";
		editorSubcategory="EdSubcat_Storage";
		icon="iconCrate";
		model="\A3\Weapons_f\dummyweapon.p3d";
		accuracy=0.2;
		typicalCargo[]={};
		vehicleClass="plp_containers";
		destrType="DestructNo";
		class DestructionEffects
		{
		};
		maximumLoad=500;
		transportMaxWeapons=5;
		transportMaxMagazines=100;
		transportMaxBackpacks=2;
		transportAmmo=0;
		transportRepair=0;
		transportFuel=0;
		supplyRadius=1.4;
		cost=0;
		armor=200;
		mapSize=2;
		waterLinearDampingCoefY=1;
		waterAngularDampingCoef=0.1;
	};
	#include "\kif_client\cfgHouseStorages.hpp"
	#include "\kif_client\cfgVVV.hpp"
	#include "\kif_client\cfgPoliceVehicles.hpp"
	#include "\kif_client\cfgMedicVehicles.hpp"
	#include "\kif_client\cfgBuildings.hpp"
};
#include "\kif_client\cfgSounds.hpp"
#include "\kif_client\cfgIvoryTextures.hpp"
#include "\kif_client\cfgMainMenu.hpp"

class cfgWeapons {
	class V_TacVest_blk_POLICE;
	class VestItem;
	class HeadgearItem;
	#include "\kif_client\cfgPoliceVests.hpp"
	#include "\kif_client\cfgPoliceCaps.hpp"
	#include "\kif_client\cfgItemsWeapons.hpp"
};
