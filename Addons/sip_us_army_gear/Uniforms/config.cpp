class cfgPatches
{
	class SiP_Patch_US_Army_Uniforms
	{
		Name = " Suicide Is Painless - Korean War Mod - US Army Uniforms";
		Author = "Letlev";
		requiredAddons[] = {"simc_hillbilly_core"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgWeapons
{
	class U_Simc_67_BasicBody;
	class U_simc_surf: U_Simc_67_BasicBody
	{
		class ItemInfo;
	};
	class U_Simc_OG107_mk1: U_Simc_67_BasicBody
	{
		class ItemInfo;
	};
	class SiP_mash_uniform_potter: U_Simc_OG107_mk1
	{
		displayName = "[MASH] Colonel Potter's Uniform";
		hiddenSelectionsTextures[] = {"\simc_uaf_67\data\og107_mk1_co.paa","\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\shirt_ranks\US_med_COL_ca.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_col_potter";
		};
	};
	class SiP_Hawaii_Shirt_Red: U_simc_surf
	{
		author = "Letlev";
		displayName = "[MASH] Hawaii shirt (Red)";
		hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_units\Army\data\civ_clothes\red_hawaii.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_trapper_john";
		};
	};
	class SiP_Hawaii_Shirt_yellow: U_simc_surf
	{
		author = "Letlev";
		displayName = "[MASH] Hawaii shirt (Yellow)";
		hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_units\Army\data\civ_clothes\yellow_hawaii.paa"};
		class ItemInfo: ItemInfo
		{
			uniformClass = "SiP_beej";
		};
	};
};
