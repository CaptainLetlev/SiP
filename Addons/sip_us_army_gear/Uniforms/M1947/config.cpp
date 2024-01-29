class cfgPatches
{
	class SiP_Patch_M1947_uniform
	{
		addonRootClass = "SiP_Patch_US_Uniforms";
		requiredAddons[] = 
		{
			"simc_uaf_44_gare"
		};
		units[] = {};
		weapons[] = 
		{
			"SiP_M1947_uniform"
		};
	};
};

class cfgWeapons
{
	class Uniform_Base;
	class ItemCore;
	class U_BasicBody;

	class U_Simc_51_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};

	class SiP_M1947_uniform: U_Simc_51_BasicBody
	{
		scope = 2;
		author = "Letlev";
		displayName = "[US] M1947 HBT";
		descriptionShort = "Uniform, Herringbone Twill, OD#7, 1951";
		picture = "\simc_uaf_51_preview\icons\hbt_47_ca.paa";
		model = "\simc_uaf_51\suitpack_hbt_47.p3d";
		hiddenSelections[] = {"camo","rank","insignia","nom"};
		hiddenSelectionsTextures[] = {"\simc_uaf_51\data\hbt_47_co.paa",""};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_M1947_uniform_base";
		};
	};
};

class cfgVehicles
{
	class simc_hbt_47;

	class SiP_M1947_uniform_base: simc_hbt_47
	{
		uniformClass = "SiP_M1947_uniform";
		model = "\simc_uaf_51\hbt_47.p3d";
		hiddenSelections[] = {"camo","rank","insignia","nom"};
		hiddenSelectionsTextures[] = 
		{
			"\simc_uaf_51\data\hbt_47_co.paa",
			""
		};
	};

	class SiP_mash_uniform_potter_base: SiP_M1947_uniform_base
	{
		uniformClass = "SiP_mash_uniform_potter";
		hiddenSelectionsTextures[] = {"\simc_uaf_51\data\hbt_47_co.paa","\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\shirt_ranks\US_med_COL_ca.paa"};
	};
};