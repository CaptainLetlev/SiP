class cfgPatches
{
	class SiP_Patch_N1951_patrol_cap
	{
		addonRootClass = "SiP_Patch_US_Army_Headgear";
		requiredAddons[] = 
		{
			"simc_uaf_68_core"
		};
		units[] = {};
		weapons[] = {};
	};
};

class cfgWeapons
{
	class H_Simc_Hat_Patrol_od7;

	class SiP_m51_cap_colonel: H_Simc_Hat_Patrol_od7
	{
		author = "Letlev";
		displayName = "[US] M1951 Field Cap (Col)";
		hiddenSelectionsTextures[] = {"\simc_uaf_69\data\hats_od7_co.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_patrol_51_col_ca.paa"};
	};
	class SiP_m51_cap_lt_colonel: SiP_m51_cap_colonel
	{
		scope = 1;
		displayName = "[US] M1951 Field Cap (Lt. Col)";
		hiddenSelectionsTextures[] = {"\simc_uaf_69\data\hats_od7_co.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_patrol_51_col_ca.paa"};
	};
	class SiP_m51_cap_Major: SiP_m51_cap_colonel
	{
		scope = 1;
		displayName = "[US] M1951 Field Cap (Major)";
		hiddenSelectionsTextures[] = {"\simc_uaf_69\data\hats_od7_co.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_patrol_51_major_ca.paa"};
	};
};
