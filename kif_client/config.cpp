 class CfgPatches
 {
 	class kif_client
 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
		requiredAddons[]= {
			"A3_Data_F",
			"plp_containers"
		};
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
	class kif_BrickStack: ItemCore
	{
		scope=2;
		displayName="Bricks";
		descriptionShort="Hand these in at a Building Vendor!";
		picture="\kif_client\textures\Bricks.paa";
		model="\A3\structures_f\civ\constructions\Bricks_V1_F";
		allowedSlots[]={901};
		mass=45;
	};
	class kif_MetalStack: ItemCore
	{
		scope=2;
		displayName="Iron Tubing";
		descriptionShort="Hand these in at a Building Vendor!";
		picture="\kif_client\textures\Metal.paa";
		model="\A3\structures_f\civ\constructions\Pipes_Small_F";
		allowedSlots[]={901};
		mass=45;
	};
	class kif_Grinder: ItemCore
	{
		scope=2;
		displayName="Grinder";
		descriptionShort="Maybe a jail fence?!";
		picture="\kif_client\textures\Grinder.paa";
		model="\A3\structures_f\items\Tools\Grinder_F";
		allowedSlots[]={901,801,701};
		mass=25;
	};
	class kif_Pseudo: ItemCore
	{
		scope=2;
		displayName="Pseudoephedrine";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\container.paa";
		model="\A3\structures_f\Items\Vessels\CanisterPlastic_F";
		allowedSlots[]={901,801,701};
		mass=55;
	};
	class kif_GasCooker: ItemCore
	{
		scope=2;
		displayName="Gas Cooker";
		descriptionShort="Used for Cooking";
		picture="\kif_client\textures\GasCooker.paa";
		model="\A3\structures_f_epa\items\Tools\GasCooker_F";
		allowedSlots[]={901,801,701};
		mass=15;
	};
	class kif_Acetone: ItemCore
	{
		scope=2;
		displayName="Acetone";
		descriptionShort="I hope you know what to do with this!";
		picture="\kif_client\textures\Acetone.paa";
		model="\A3\structures_f_epa\items\Medical\DisinfectantSpray_F";
		allowedSlots[]={901,801,701};
		mass=15;
	};
};
class CfgVehicles {
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
	class plp_ct_Sack;
	class kif_storage_sack: plp_ct_Sack
	{
		transportFuel=500;
		maximumLoad=500;
	};
	class plp_ct_CartonDarkMedium;
	class kif_storage_cartondarkmedium: plp_ct_CartonDarkMedium
	{
		transportFuel=850;
		maximumLoad=850;
	};
	class plp_ct_TravelBagBlue;
	class kif_storage_travelbag: plp_ct_TravelBagBlue
	{
		transportFuel=1200;
		maximumLoad=1200;
	};
	class plp_ct_SuitcaseBigBlack;
	class kif_storage_suitcase: plp_ct_SuitcaseBigBlack
	{
		transportFuel=1550;
		maximumLoad=1550;
	};
	class plp_ct_CartonLightBig;
	class kif_storage_cartonlightbig: plp_ct_CartonLightBig
	{
		transportFuel=1900;
		maximumLoad=1900;
	};
	class plp_ct_woodboxlightmedium;
	class kif_storage_wood: plp_ct_woodboxlightmedium
	{
		transportFuel=2250;
		maximumLoad=2250;
	};
	class plp_ct_WoodBarrelDark;
	class kif_storage_woodbarrel: plp_ct_WoodBarrelDark
	{
		transportFuel=2600;
		maximumLoad=2600;
	};
	class plp_ct_woodboxlightbig;
	class kif_storage_woodbox: plp_ct_woodboxlightbig
	{
		transportFuel=2950;
		maximumLoad=2950;
	};
	class kif_storage_cargobox: kif_chest_base
	{
		scope=2;
		scopeCurator=2;
		displayName="Cargo Box";
		model="a3\structures_f\ind\cargo\cargobox_v1_f.p3d";
		transportFuel=3650;
		maximumLoad=3650;
	};
};
#include "\kif_client\cfgSounds.hpp"