 class CfgPatches
 {
 	class kif_client
 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
		requiredAddons[]= {
			"A3_Data_F"
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
#include "\kif_client\cfgSounds.hpp"