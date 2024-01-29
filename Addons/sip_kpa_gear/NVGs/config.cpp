class cfgPatches
{
    class SiP_Patch_kpa_nvgs
    {
        Name = "Suicide Is Painless - Korean War Mod - KPA nvgs";
        Author = "Letlev";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_KPA_Mosin_Pouches_nvg_slot",
            "SiP_KPA_DP_Backpack_nvg_slot",
            "SiP_KPA_PPSh_Pouches_nvg_slot"
        };
    };
};

class cfgWeapons
{
	class bandolier_addon_ligt;

	class SiP_KPA_Mosin_Pouches_nvg_slot: bandolier_addon_ligt
	{
		author = "Letlev";
		displayName = "[KPA] Rifleman Pouches";
		picture = "NORTH\NF_SOV_Bags\data\UI\sov_meshok_x_ca.paa";
		model = "NORTH\NF_Sov_Gear\Sov_gear_marine_2.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa"};
		modelOptics = "\A3\Weapons_F\empty";
		visionMode[] = {"Normal","Normal"};
		descriptionShort = "KPA Mosin Pouches";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "NORTH\NF_Sov_Gear\Sov_gear_marine_2.p3d";
			modelOff = "NORTH\NF_Sov_Gear\Sov_gear_marine_2.p3d";
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa"};
			mass = 2;
		};
	};

	class SiP_KPA_DP_Backpack_nvg_slot: SiP_KPA_Mosin_Pouches_nvg_slot
	{
		displayName = "[KPA] DP Fieldpack";
		model = "NORTH\NF_SOV_Bags\meshok_gasmaskbag_shinel.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Bags\data\SovietMeshok_CO.paa"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "NORTH\NF_SOV_Bags\meshok_gasmaskbag_shinel.p3d";
			modelOff = "NORTH\NF_SOV_Bags\meshok_gasmaskbag_shinel.p3d";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Bags\data\SovietMeshok_CO.paa"};
			mass = 2;
		};
	};
    
	class SiP_KPA_PPSh_Pouches_nvg_slot: SiP_KPA_Mosin_Pouches_nvg_slot
	{
		displayName = "[KPA] SMG Pouches";
		model = "NORTH\NF_Sov_Gear\Sov_gear_marine_6.p3d";
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Gear\data\Sov_officer_CO.paa","NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "NORTH\NF_Sov_Gear\Sov_gear_marine_6.p3d";
			modelOff = "NORTH\NF_Sov_Gear\Sov_gear_marine_6.p3d";
			hiddenSelections[] = {""};
			hiddenSelectionsTextures[] = {"NORTH\NF_SOV_Gear\data\Sov_officer_CO.paa","NORTH\NF_SOV_Gear\data\Soviet_Gearing_1_CO.paa","north\nf_sov_gear\data\soviet_gearing_2_co.paa"};
			mass = 2;
		};
	};
};
