class cfgPatches
{
    class SiP_Patch_M45_vests
    {
        addonRootClass = "SiP_Patch_us_vests";
        requiredAddons[] = 
        {
            "simc_uaf_44_assets",
            "simc_uaf_51_assets",
            "simc_mc_67_assets"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m1945_Vest",
            "SiP_m1945_Vest_gpbag",
            "SiP_m1945_Vest_etool",
            "SiP_m1945_Vest_etool_gpbag",
            "SiP_m1945_Vest_jfak",
            "SiP_m1945_Vest_45",
            "SiP_m1945_Vest_gpbag_45",

            "SiP_m1945_Vest_rifleman1_bayo",
            "SiP_m1945_Vest_rifleman1_gpbag",
            "SiP_m1945_Vest_rifleman1_jfak",
            "SiP_m1945_Vest_rifleman1_engi",
            "SiP_m1945_Vest_rifleman1_engi_etool",
            "SiP_m1945_Vest_rifleman1_45",

            "SiP_m1944_Vest_rifleman2",
            "SiP_m1944_Vest_rifleman2_gpbag",
            "SiP_m1944_Vest_rifleman2_etool",
            "SiP_m1944_Vest_rifleman2_jfak",
            "SiP_m1944_Vest_rifleman2_engi",
            "SiP_m1944_Vest_rifleman2_45",
            "SiP_m1944_Vest_rifleman2_45_etool",
            "SiP_m1944_Vest_rifleman2_45_mapcase",
            "SiP_m1944_Vest_rifleman2_45_mapcase_nosus",
            "SiP_m1945_Vest_rifleman2",
            "SiP_m1945_Vest_rifleman2_etool",
            "SiP_m1945_Vest_rifleman2_45",

            "SiP_m1945_Vest_smg",
            "SiP_m1945_Vest_smg_gpbag",
            "SiP_m1945_Vest_smg_etool",
            "SiP_m1945_Vest_smg_gpbag_etool",
            "SiP_m1945_Vest_smg_jfak",
            "SiP_m1945_Vest_smg_45",
            "SiP_m1945_Vest_smg_45_nosus",
            "SiP_m1945_Vest_smg_45_mapcase",
            "SiP_m1945_Vest_smg_45_mapcase_nosus",

            "SiP_m1945_Vest_BAR",
            "SiP_m1945_Vest_BAR_gpbag",
            "SiP_m1945_Vest_BAR_etool",
            "SiP_m1945_Vest_BAR_jfak",

            "SiP_m1945_Vest_MG",

            "SiP_m1945_Vest_shotgun"
        };
    };
};

class cfgWeapons
{
    class VestItem;

    class V_Simc_US_Vest_basic_OD7;
    class V_Simc_56_60_doppel_ligt;
    class V_Simc_US_Vest_Cartridge_45_OD7;
    class V_Simc_US_Vest_SMG_offzr_OD7;
    class V_Simc_US_Vest_SMG_45_OD7;
    class V_Simc_US_Vest_basic_45_garp_od7;
    class V_Simc_US_Vest_bar_OD7_asst;
    class V_Simc_61_rear;
    class V_Simc_US_Vest_basic_45_OD7;
    class V_Simc_56_ligt;
    
    //Standard
    class SiP_m1945_Vest_gpbag: V_Simc_US_Vest_basic_OD7
    {
        author = "Letlev";
        displayName = "[US] M1945 Standard Gear - GP Bag";
        picture = "\simc_uaf_44_preview\icons\belt_carb_ca.paa";
        model = "\simc_uaf_44\belt_drop.p3d";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_asst_m43.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left"};
            containerClass = "Supply140";
            mass = 7;
        };
    };
    class SiP_m1945_Vest: SiP_m1945_Vest_gpbag
    {
        displayName = "[US] M1945 Standard Gear";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa","",""};
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply80";
        };
    };
    class SiP_m1945_Vest_etool: SiP_m1945_Vest
    {
        displayName = "[US] M1945 Standard Gear - E-Tool";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa","\simc_uaf_44\data\sekop_43_od7_co.paa",""};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_44\belt_asst_m43.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left"};
            containerClass = "Supply90";
        };
    };
    class SiP_m1945_Vest_etool_gpbag: SiP_m1945_Vest_gpbag
    {
        displayName = "[US] M1945 Standard Gear - E-Tool/GP Bag";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa","\simc_uaf_44\data\sekop_43_od7_co.paa","simc_uaf_44\data\gear_pouche_od7_co.paa"};
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply140";
        };
    };
    class SiP_m1945_Vest_jfak: SiP_m1945_Vest
    {
        displayName = "[US] M1945 Standard Gear - JFAK";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa","",""};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_asst_jfak.p3d";
            containerClass = "Supply100";
        };
    };
    class SiP_m1945_Vest_45: V_Simc_US_Vest_basic_45_OD7
    {
        displayName = "[US] M1945 Standard Gear - Pistol";
        model = "\simc_uaf_43\belt_drop_45.p3d";
        hiddenSelections[] = {"belt","garp_left","camo3","camo4"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_43\belt_asst_45.p3d";
            hiddenSelections[] = {"belt","garp_left","camo3","camo4"};
            containerClass = "Supply120";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_gpbag_45: SiP_m1945_Vest_45
    {
        displayName = "[US] M1945 Standard Gear - Pistol/GP Bag";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply140";
        };
    };
    class SiP_m1945_Vest_medic: SiP_m1945_Vest
    {
        displayName = "[US] M1945 Standard Gear - Medic";
        picture = "\simc_uaf_44_preview\icons\bag_meds_od7_ca.paa";
        hiddenSelections[] = {"belt","camo3","zusp","padoru"};
		hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_43\data\gear_merdc_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_paket_co.paa",
            ""
        };
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_uaf_43\belt_AB_med.p3d";
			hiddenSelections[] = {"belt","camo3","zusp","padoru"};
			containerClass = "Supply180";
		};
    };

    //Garand-Springfield
    class SiP_m1945_Vest_rifleman1_bayo: V_Simc_US_Vest_basic_OD7
    {
        author = "Letlev";
        displayName = "[US] M1945 Rifle Gear";
        picture = "\simc_uaf_44_preview\icons\belt_garlan_ca.paa";
        model = "\simc_uaf_44\belt_drop_cartris.p3d";
        hiddenSelections[] = {"belt"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_garlan_erla.p3d";
            hiddenSelections[] = {"belt"};
            containerClass = "Supply120";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_rifleman1_gpbag: SiP_m1945_Vest_rifleman1_bayo
    {
        displayName = "[US] M1945 Rifle Gear - GP Bag";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\sekop_43_od7_co.paa",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_44\belt_garlan_m43.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left"};
            containerClass = "Supply140";
        };
    };
    class SiP_m1945_Vest_rifleman1_jfak: SiP_m1945_Vest_rifleman1_bayo
    {
        displayName = "[US] M1945 Rifle Gear - JFAK";
        hiddenSelections[] = {"belt"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_garlan_jfak_nife.p3d";
            hiddenSelections[] = {"belt"};
            containerClass = "Supply140";
        };
    };
    class SiP_m1945_Vest_rifleman1_engi: SiP_m1945_Vest_rifleman1_bayo
    {
        displayName = "[US] M1945 Rifle Gear - Engineer";
        hiddenSelections[] = {"belt","sekop","camo3"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_garlan_eng.p3d";
            hiddenSelections[] = {"belt","sekop","camo3"};
        };
    };
    class SiP_m1945_Vest_rifleman1_engi_etool: SiP_m1945_Vest_rifleman1_bayo
    {
        displayName = "[US] M1945 Rifle Gear - Engineer/E-Tool";
        hiddenSelections[] = {"belt","sekop","camo3"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\sekop_43_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_garlan_eng_m43.p3d";
            hiddenSelections[] = {"belt","sekop","camo3"};
        };
    };
    class SiP_m1945_Vest_rifleman1_45: V_Simc_US_Vest_Cartridge_45_OD7
    {
        author = "Letlev";
        displayName = "[US] M1945 Rifle Gear - Pistol";
        hiddenSelections[] = {"belt","camo3","skepop"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            ""
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_43\belt_garlan_45.p3d";
            hiddenSelections[] = {"belt","camo3"};
            containerClass = "Supply120";
            mass = 7;
        };
    };

    //Carbine
    class SiP_m1944_Vest_rifleman2: V_Simc_US_Vest_basic_OD7
    {
        author = "Letlev";
        displayName = "[US] M1944 Carbine Gear";
        picture = "\simc_uaf_44_preview\icons\belt_carb_ca.paa";
        model = "\simc_uaf_44\belt_drop.p3d";
        hiddenSelections[] = {"belt","sekop"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa",""};
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_carb_m43.p3d";
            hiddenSelections[] = {"belt","sekop"};
            containerClass = "Supply100";
            mass = 7;
        };
    };
    class SiP_m1944_Vest_rifleman2_etool: SiP_m1944_Vest_rifleman2
    {
        displayName = "[US] M1944 Carbine Gear - E-Tool";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\sekop_43_od7_co.paa"
        };
    };
    class SiP_m1944_Vest_rifleman2_gpbag: SiP_m1944_Vest_rifleman2
    {
        displayName = "[US] M1944 Carbine Gear - GP";
        hiddenSelections[] = {"belt","camo3","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_carb_eng.p3d";
            hiddenSelections[] = {"belt","camo3","sekop","garp_left"};
            containerClass = "Supply140";
        };
    };
    class SiP_m1944_Vest_rifleman2_engi: SiP_m1944_Vest_rifleman2_gpbag
    {
        displayName = "[US] M1944 Carbine Gear - Engineer";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
    };
    class SiP_m1944_Vest_rifleman2_jfak: SiP_m1944_Vest_rifleman2
    {
        displayName = "[US] M1944 Carbine Gear - JFAK";
        hiddenSelections[] = {"belt","camo3","pouche"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_carb_jfak.p3d";
            hiddenSelections[] = {"belt","camo3","pouche"};
            containerClass = "Supply130";
        };
    };
    class SiP_m1944_Vest_rifleman2_45: SiP_m1944_Vest_rifleman2
    {
        displayName = "[US] M1944 Carbine Gear - Pistol";
        model = "\simc_uaf_43\belt_drop_45.p3d";
        hiddenSelections[] = {"belt","sekop","camo3"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_carb_45_laat.p3d";
            hiddenSelections[] = {"belt","sekop","camo3"};
        };
    };
    class SiP_m1944_Vest_rifleman2_45_etool: SiP_m1944_Vest_rifleman2_45
    {
        displayName = "[US] M1944 Carbine Gear - Pistol/E-Tool";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\sekop_43_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa"
        };
    };
    class SiP_m1944_Vest_rifleman2_45_mapcase: SiP_m1944_Vest_rifleman2_45
    {
        displayName = "[US] M1944 Carbine Gear - Pistol/Mapcase";
        hiddenSelections[] = {"belt","camo3","zusp"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_paket_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_carb_off_laat.p3d";
            hiddenSelections[] = {"belt","camo3","zusp"};
            containerClass = "Supply130";
        };
    };
    class SiP_m1944_Vest_rifleman2_45_mapcase_nosus: SiP_m1944_Vest_rifleman2_45_mapcase
    {
        displayName = "[US] M1944 Carbine Gear - Pstl/Mpcs/NoSus";
        hiddenSelections[] = {"belt","camo3","zusp"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            ""
        };
    };

    class SiP_m1945_Vest_rifleman2: V_Simc_US_Vest_basic_OD7
    {
        author = "Letlev";
        displayName = "[US] M1945 Carbine Gear";
        hiddenSelections[] = {"camo","ass","sekop","band"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_67\data\gear_56_co.paa",
            "",
            "",
            ""
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_67\belt_56_ligt.p3d";
            hiddenSelections[] = {"camo","ass","sekop","band"};
            containerClass = "Supply130";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_rifleman2_etool: SiP_m1945_Vest_rifleman2
    {
        displayName = "[US] M1945 Carbine Gear - E-Tool";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_67\data\gear_56_co.paa",
            "",
            "\simc_uaf_67\data\gear_56_co.paa",
            ""
        };
    };
    class SiP_m1945_Vest_rifleman2_45: SiP_m1945_Vest_rifleman2
    {
        displayName = "[US] M1945 Carbine Gear - Pistol";
        hiddenSelections[] = {"zusp","botol"};
        hiddenSelectionsTextures[] = {""};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_67\belt_56_M43_side.p3d";
            hiddenSelections[] = {"zusp","botol"};
        };
    };

    //SMG
    class SiP_m1945_Vest_smg: V_Simc_US_Vest_basic_OD7
    {
        author = "Letlev";
        displayName = "[US] M1945 SMG Gear";
        model = "\simc_uaf_44\belt_drop.p3d";
        picture = "\simc_uaf_44_preview\icons\belt_carb_ca.paa";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            ""
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_smg.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left"};
            containerClass = "Supply130";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_smg_etool: SiP_m1945_Vest_smg
    {
        displayName = "[US] M1945 SMG Gear - E-Tool";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\sekop_43_od7_co.paa",
            ""
        };
    };
    class SiP_m1945_Vest_smg_gpbag: SiP_m1945_Vest_smg
    {
        displayName = "[US] M1945 SMG Gear - GP Bag";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply140";
        };
    };
    class SiP_m1945_Vest_smg_gpbag_etool: SiP_m1945_Vest_smg_gpbag
    {
        displayName = "[US] M1945 SMG Gear - E-Tool/GP Bag";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\sekop_43_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa"
        };
    };
    class SiP_m1945_Vest_smg_jfak: SiP_m1945_Vest_smg
    {
        displayName = "[US] M1945 SMG Gear - JFAK";
        hiddenSelections[] = {"belt","garp_left"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa",""};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_smg_jfak.p3d";
            hiddenSelections[] = {"belt","garp_left"};
            containerClass = "Supply140";
        };
    };
    class SiP_m1945_Vest_smg_45: V_Simc_US_Vest_SMG_45_OD7
    {
        author = "Letlev";
        displayName = "[US] M1945 SMG Gear - Pistol";
        hiddenSelections[] = {"belt","camo3","zusp","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_paket_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_43\belt_smg_45.p3d";
            hiddenSelections[] = {"belt","camo3","zusp"};
            containerClass = "Supply140";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_smg_45_mapcase: V_Simc_US_Vest_SMG_offzr_OD7
    {
        author = "Letlev";
        displayName = "[US] M1945 SMG Gear - Mapcase";
        hiddenSelections[] = {"belt","camo2","camo3","zusp"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_paket_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_43\belt_smg_off.p3d";
            hiddenSelections[] = {"belt","camo2","camo3","zusp"};
            containerClass = "Supply140";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_smg_45_nosus: SiP_m1945_Vest_smg_45
    {
        displayName = "[US] M1945 SMG Gear - Pistol/NoSus";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa"
        };
    };

    //BAR
    class SiP_m1945_Vest_BAR: V_Simc_US_Vest_bar_OD7_asst
    {
        author = "Letlev";
        displayName = "[US] M1945 BAR Gear";
        hiddenSelections[] = {"belt","sekop"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa",""};
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_bar.p3d";
            hiddenSelections[] = {"belt","sekop"};
            containerClass = "Supply130";
            mass = 12;
        };
    };
    class SiP_m1945_Vest_BAR_gpbag: SiP_m1945_Vest_BAR
    {
        displayName = "[US] M1945 BAR Gear - GP Bag";
        hiddenSelections[] = {"belt","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_bar_asst.p3d";
            hiddenSelections[] = {"belt","garp_left"};
            containerClass = "Supply140";
        };
    };
    class SiP_m1945_Vest_BAR_etool: SiP_m1945_Vest_BAR
    {
        displayName = "[US] M1945 BAR Gear - E-Tool";
        hiddenSelections[] = {"belt"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_43\belt_bar_jfak.p3d";
            hiddenSelections[] = {"belt"};
        };
    };
    class SiP_m1945_Vest_BAR_jfak: SiP_m1945_Vest_BAR
    {
        displayName = "[US] M1945 BAR Gear - JFAK";
        hiddenSelections[] = {"belt","sekop"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa","\simc_uaf_44\data\sekop_43_od7_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_uaf_44\belt_bar_m43.p3d";
            hiddenSelections[] = {"belt","sekop"};
        };
    };

    class SiP_m1945_Vest_MG: V_Simc_56_60_doppel_ligt
    {
        displayName = "[US] M1945 MG Gear";
        hiddenSelections[] = {"botol","zusp"};
        hiddenSelectionsTextures[] = {"",""};
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_67\belt_56_60.p3d";
            hiddenSelections[] = {"botol","zusp"};
            containerClass = "Supply180";
            mass = 15;
        };
    };

    class SiP_m1945_Vest_shotgun: V_Simc_61_rear
    {
        displayName = "[US] M1945 Shotgun Gear";
        hiddenSelections[] = {"band"};
        hiddenSelectionsTextures[] = {""};
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_mc_68\belt_61_rear.p3d";
            hiddenSelections[] = {"band"};
            containerClass = "Supply140";
            mass = 15;
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        ////M1923 Cartridge Belt////
        class V_hssn_SiP_US_M1923_Catridge_Belt
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "config"
            };
            class config
            {
                label = "Configuration";
                values[]=
                {
                    "SiP_m1945_Vest_rifleman1_bayo",
                    "SiP_m1945_Vest_rifleman1_gpbag",
                    "SiP_m1945_Vest_rifleman1_jfak",
                    "SiP_m1945_Vest_rifleman1_engi",
                    "SiP_m1945_Vest_rifleman1_engi_etool",
                    "SiP_m1945_Vest_rifleman1_45"
                };
                class SiP_m1945_Vest_rifleman1_bayo
                {
                    label = "Standard";
                };
                class SiP_m1945_Vest_rifleman1_gpbag
                {
                    label = "GP Bag";
                };
                class SiP_m1945_Vest_rifleman1_jfak
                {
                    label = "Medic";
                };
                class SiP_m1945_Vest_rifleman1_engi
                {
                    label = "Engi";
                };
                class SiP_m1945_Vest_rifleman1_engi_etool
                {
                    label = "Engi/E-Tool";
                };
                class SiP_m1945_Vest_rifleman1_45
                {
                    label = "Sidearm";
                };
            };
        };
        
        ////M1936 Pistol Belt////
        class V_hssn_SiP_US_M1936_Pistol_Belt
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "config"
            };
            class config
            {
                label = "Configuration";
                values[]=
                {
                    "SiP_m1945_Vest",
                    "SiP_m1945_Vest_gpbag",
                    "SiP_m1945_Vest_etool",
                    "SiP_m1945_Vest_etool_gpbag",
                    "SiP_m1945_Vest_jfak",
                    "SiP_m1945_Vest_45",
                    "SiP_m1945_Vest_gpbag_45",
                    "SiP_m1945_Vest_medic"
                };
                class SiP_m1945_Vest
                {
                    label = "Standard";
                };
                class SiP_m1945_Vest_gpbag
                {
                    label = "GP Bag";
                };
                class SiP_m1945_Vest_etool
                {
                    label = "E-Tool";
                };
                class SiP_m1945_Vest_etool_gpbag
                {
                    label = "E-Tool/GP Bag";
                };
                class SiP_m1945_Vest_jfak
                {
                    label = "JFAK";
                };
                class SiP_m1945_Vest_45
                {
                    label = "Pistol";
                };
                class SiP_m1945_Vest_gpbag_45
                {
                    label = "Pistol/GP Bag";
                };
                class SiP_m1945_Vest_medic
                {
                    label = "Medic";
                };
            };
        };
        
        ////M1936 Pistol Belt - Carbine////
        class V_hssn_SiP_US_M1936_Carbine_Belt
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "config"
            };
            class config
            {
                label = "Configuration";
                values[]=
                {
                    "SiP_m1944_Vest_rifleman2",
                    "SiP_m1944_Vest_rifleman2_gpbag",
                    "SiP_m1944_Vest_rifleman2_etool",
                    "SiP_m1944_Vest_rifleman2_jfak",
                    "SiP_m1944_Vest_rifleman2_engi",
                    "SiP_m1944_Vest_rifleman2_45",
                    "SiP_m1944_Vest_rifleman2_45_etool",
                    "SiP_m1944_Vest_rifleman2_45_mapcase",
                    "SiP_m1944_Vest_rifleman2_45_mapcase_nosus",
                    "SiP_m1945_Vest_rifleman2",
                    "SiP_m1945_Vest_rifleman2_etool",
                    "SiP_m1945_Vest_rifleman2_45"
                };
                class SiP_m1944_Vest_rifleman2
                {
                    label = "15'/Standard";
                };
                class SiP_m1944_Vest_rifleman2_gpbag
                {
                    label = "15'/GP Bag";
                };
                class SiP_m1944_Vest_rifleman2_etool
                {
                    label = "15'/E-Tool";
                };
                class SiP_m1944_Vest_rifleman2_jfak
                {
                    label = "15'/Medic";
                };
                class SiP_m1944_Vest_rifleman2_engi
                {
                    label = "15'/Engi";
                };
                class SiP_m1944_Vest_rifleman2_45
                {
                    label = "15'/Pistol";
                };
                class SiP_m1944_Vest_rifleman2_45_etool
                {
                    label = "15'/Pstl/ETool";
                };
                class SiP_m1944_Vest_rifleman2_45_mapcase
                {
                    label = "15'/Pstl/Map";
                };
                class SiP_m1944_Vest_rifleman2_45_mapcase_nosus
                {
                    label = "15'/Pstl/Map/NoSus";
                };
                class SiP_m1945_Vest_rifleman2
                {
                    label = "30'/Standard";
                };
                class SiP_m1945_Vest_rifleman2_etool
                {
                    label = "30'/E-Tool";
                };
                class SiP_m1945_Vest_rifleman2_45
                {
                    label = "30'/Pstl";
                };
            };
        };

        ////M1936 Pistol Belt - SMG////
        class V_hssn_SiP_US_M1936_SMG_Belt
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "config"
            };
            class config
            {
                label = "Configuration";
                values[]=
                {
                    "SiP_m1945_Vest_smg",
                    "SiP_m1945_Vest_smg_gpbag",
                    "SiP_m1945_Vest_smg_etool",
                    "SiP_m1945_Vest_smg_gpbag_etool",
                    "SiP_m1945_Vest_smg_jfak",
                    "SiP_m1945_Vest_smg_45",
                    "SiP_m1945_Vest_smg_45_nosus",
                    "SiP_m1945_Vest_smg_45_mapcase",
                    "SiP_m1945_Vest_smg_45_mapcase_nosus"
                };
                class SiP_m1945_Vest_smg
                {
                    label = "Standard";
                };
                class SiP_m1945_Vest_smg_gpbag
                {
                    label = "GP Bag";
                };
                class SiP_m1945_Vest_smg_etool
                {
                    label = "E-Tool";
                };
                class SiP_m1945_Vest_smg_gpbag_etool
                {
                    label = "E-Tool/GP Bag";
                };
                class SiP_m1945_Vest_smg_jfak
                {
                    label = "Medic";
                };
                class SiP_m1945_Vest_smg_45
                {
                    label = "Pistol";
                };
                class SiP_m1945_Vest_smg_45_nosus
                {
                    label = "Pistol/NoSus";
                };
                class SiP_m1945_Vest_smg_45_mapcase
                {
                    label = "Pistol/Map";
                };
                class SiP_m1945_Vest_smg_45_mapcase_nosus
                {
                    label = "Pistol/Map/NoSus";
                };
            };
        };

        ////M1937 BAR Belt////
        class V_hssn_SiP_US_M1937_BAR_Belt
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "config"
            };
            class config
            {
                label = "Configuration";
                values[]=
                {
                    "SiP_m1945_Vest_BAR",
                    "SiP_m1945_Vest_BAR_gpbag",
                    "SiP_m1945_Vest_BAR_etool",
                    "SiP_m1945_Vest_BAR_jfak"
                };
                class SiP_m1945_Vest_BAR
                {
                    label = "Standard";
                };
                class SiP_m1945_Vest_BAR_gpbag
                {
                    label = "GP Bag";
                };
                class SiP_m1945_Vest_BAR_etool
                {
                    label = "E-Tool";
                };
                class SiP_m1945_Vest_BAR_jfak
                {
                    label = "Medic";
                };
            };
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        ////M1923 Cartridge Belt////
        class SiP_m1945_Vest_rifleman1_bayo
        {
            model = "V_hssn_SiP_US_M1923_Catridge_Belt";
            config = "SiP_m1945_Vest_rifleman1_bayo";
        };
        class SiP_m1945_Vest_rifleman1_gpbag
        {
            model = "V_hssn_SiP_US_M1923_Catridge_Belt";
            config = "SiP_m1945_Vest_rifleman1_gpbag";
        };
        class SiP_m1945_Vest_rifleman1_etool
        {
            model = "V_hssn_SiP_US_M1923_Catridge_Belt";
            config = "SiP_m1945_Vest_rifleman_gpbag";
        };
        class SiP_m1945_Vest_rifleman1_jfak
        {
            model = "V_hssn_SiP_US_M1923_Catridge_Belt";
            config = "SiP_m1945_Vest_rifleman1_jfak";
        };
        class SiP_m1945_Vest_rifleman1_engi
        {
            model = "V_hssn_SiP_US_M1923_Catridge_Belt";
            config = "SiP_m1945_Vest_rifleman1_engi";
        };
        class SiP_m1945_Vest_rifleman1_engi_etool
        {
            model = "V_hssn_SiP_US_M1923_Catridge_Belt";
            config = "SiP_m1945_Vest_rifleman1_engi_etool";
        };
        class SiP_m1945_Vest_rifleman1_45
        {
            model = "V_hssn_SiP_US_M1923_Catridge_Belt";
            config = "SiP_m1945_Vest_rifleman1_45";
        };

        ////M1936 Pistol Belt - Carbine////
        class SiP_m1944_Vest_rifleman2
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2";
        };
        class SiP_m1944_Vest_rifleman2_gpbag
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2_gpbag";
        };
        class SiP_m1944_Vest_rifleman2_etool
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2_etool";
        };
        class SiP_m1944_Vest_rifleman2_engi
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2_engi";
        };
        class SiP_m1944_Vest_rifleman2_jfak
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2_jfak";
        };
        class SiP_m1944_Vest_rifleman2_45
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2_45";
        };
        class SiP_m1944_Vest_rifleman2_45_etool
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2_45_etool";
        };
        class SiP_m1944_Vest_rifleman2_45_mapcase
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2_45_mapcase";
        };
        class SiP_m1944_Vest_rifleman2_45_mapcase_nosus
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1944_Vest_rifleman2_45_mapcase_nosus";
        };
        class SiP_m1945_Vest_rifleman2
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1945_Vest_rifleman2";
        };
        class SiP_m1945_Vest_rifleman2_etool
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1945_Vest_rifleman2_etool";
        };
        class SiP_m1945_Vest_rifleman2_45
        {
            model = "V_hssn_SiP_US_M1936_Carbine_Belt";
            config = "SiP_m1945_Vest_rifleman2_45";
        };

        ////M1936 Pistol Belt////
        class SiP_m1945_Vest
        {
            model = "V_hssn_SiP_US_M1936_Pistol_Belt";
            config = "SiP_m1945_Vest";
        };
        class SiP_m1945_Vest_gpbag
        {
            model = "V_hssn_SiP_US_M1936_Pistol_Belt";
            config = "SiP_m1945_Vest_gpbag";
        };
        class SiP_m1945_Vest_etool
        {
            model = "V_hssn_SiP_US_M1936_Pistol_Belt";
            config = "SiP_m1945_Vest_etool";
        };
        class SiP_m1945_Vest_etool_gpbag
        {
            model = "V_hssn_SiP_US_M1936_Pistol_Belt";
            config = "SiP_m1945_Vest_etool_gpbag";
        };
        class SiP_m1945_Vest_jfak
        {
            model = "V_hssn_SiP_US_M1936_Pistol_Belt";
            config = "SiP_m1945_Vest_jfak";
        };
        class SiP_m1945_Vest_45
        {
            model = "V_hssn_SiP_US_M1936_Pistol_Belt";
            config = "SiP_m1945_Vest_45";
        };
        class SiP_m1945_Vest_gpbag_45
        {
            model = "V_hssn_SiP_US_M1936_Pistol_Belt";
            config = "SiP_m1945_Vest_gpbag_45";
        };
        class SiP_m1945_Vest_medic
        {
            model = "V_hssn_SiP_US_M1936_Pistol_Belt";
            config = "SiP_m1945_Vest_medic";
        };

        ////M1936 Pistol Belt - SMG////
        class SiP_m1945_Vest_smg
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg";
        };
        class SiP_m1945_Vest_smg_gpbag
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg_gpbag";
        };
        class SiP_m1945_Vest_smg_etool
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg_etool";
        };
        class SiP_m1945_Vest_smg_gpbag_etool
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg_gpbag_etool";
        };
        class SiP_m1945_Vest_smg_jfak
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg_jfak";
        };
        class SiP_m1945_Vest_smg_45
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg_45";
        };
        class SiP_m1945_Vest_smg_45_nosus
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg_45_nosus";
        };
        class SiP_m1945_Vest_smg_45_mapcase
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg_45_mapcase";
        };
        class SiP_m1945_Vest_smg_45_mapcase_nosus
        {
            model = "V_hssn_SiP_US_M1936_SMG_Belt";
            config = "SiP_m1945_Vest_smg_45_mapcase_nosus";
        };

        ////M1937 BAR Belt////
        class SiP_m1945_Vest_BAR
        {
            model = "V_hssn_SiP_US_M1937_BAR_Belt";
            config = "SiP_m1945_Vest_BAR";
        };
        class SiP_m1945_Vest_BAR_gpbag
        {
            model = "V_hssn_SiP_US_M1937_BAR_Belt";
            config = "SiP_m1945_Vest_BAR_gpbag";
        };
        class SiP_m1945_Vest_BAR_etool
        {
            model = "V_hssn_SiP_US_M1937_BAR_Belt";
            config = "SiP_m1945_Vest_BAR_etool";
        };
        class SiP_m1945_Vest_BAR_jfak
        {
            model = "V_hssn_SiP_US_M1937_BAR_Belt";
            config = "SiP_m1945_Vest_BAR_jfak";
        };
    };
};