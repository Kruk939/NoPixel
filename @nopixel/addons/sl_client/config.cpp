class CfgPatches
 {
 	class sl_client
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
			file="\sl_client";
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
	#include "\sl_client\cfgItems.hpp"
};
class CfgVehicles {
	class All{};
	class Static: All{};
	class Building: Static{};
	class ReammoBox;
	class ThingX;
	class B_Competitor_F;
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
        #include "\sl_client\cfgHouseStorages.hpp"
	#include "\sl_client\cfgPDUniformsV.hpp"
	#include "\sl_client\cfgBuildings.hpp"
};
#include "\sl_client\cfgSounds.hpp"
#include "\sl_client\cfgMainMenu.hpp"
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
	#include "\sl_client\cfgPDCaps.hpp"
	#include "\sl_client\cfgItemsWeapons.hpp"
};
