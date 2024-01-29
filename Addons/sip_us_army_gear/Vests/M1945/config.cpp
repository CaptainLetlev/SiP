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
        weapons[] = {};
    };
};

class cfgWeapons
{
    class VestItem;

    class V_Simc_US_Vest_basic;
    class V_Simc_US_Vest_basic_OD7;
    class V_Simc_US_Vest_SMG_OD7;
    class V_Simc_US_Vest_Carbine;
    class V_Simc_US_Vest_Carbine_45_OD7;
    class V_Simc_61;
    class V_Simc_61_ligt;
    class V_Simc_56_60_doppel_ligt;
    class V_Simc_US_Vest_Cartridge_45_OD7;
    class V_Simc_US_Vest_SMG_offzr_OD7;
    class V_Simc_US_Vest_SMG_45_OD7;
    class V_Simc_US_Vest_basic_45_garp_od7;
    class V_Simc_US_Vest_bar_OD7_asst;
    class V_Simc_61_rear;
    class V_Simc_US_Vest_basic_45_OD7;
    class V_Simc_US_AB_Vest_Carbine_OD7;

    class SiP_m1945_Vest_gpbag: V_Simc_US_Vest_basic
    {
        author = "Letlev";
        displayName = "[US] M1945 Web Gear (GP Bag)";
        picture = "\simc_uaf_44_preview\icons\belt_carb_ca.paa";
        model = "\simc_uaf_44\belt_drop.p3d";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_asst_m43.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left"};
            containerClass = "Supply140";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_rifleman1: V_Simc_US_Vest_basic
    {
        displayName = "[US] M1945 Web Gear (Rifleman)";
        model = "\simc_uaf_44\belt_drop_cartris_ab.p3d";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_garlan_m43.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left"};
            hiddenSelectionsTextures[] = 
            {
                "\simc_uaf_44\data\gear_belt_od7_co.paa",
                "",
                ""
            };
            containerClass = "Supply100";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_rifleman1_bayo: SiP_m1945_Vest_rifleman1
    {
        displayName = "[US] M1945 Web Gear (Rifleman/Bayo)";
        picture = "\simc_uaf_44_preview\icons\belt_garlan_ca.paa";
		model = "\simc_uaf_44\belt_drop_cartris.p3d";
		hiddenSelections[] = {"belt"};
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\gear_belt_od7_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_uaf_44\belt_garlan_erla.p3d";
			hiddenSelections[] = {"belt"};
			mass = 7;
		};
    };
    class SiP_m1945_Vest_rifleman1_45: V_Simc_US_Vest_Cartridge_45_OD7
    {
        displayName = "[US] M1945 Web Gear (Rifleman/Pistol)";
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
            containerClass = "Supply100";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_rifleman2: V_Simc_61_ligt
    {
        author = "Letlev";
        displayName = "[US] M1945 Web Gear (Carbine)";
        hiddenSelections[] = {"zusp","band"};
        hiddenSelectionsTextures[] = {""};
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_mc_67\belt_61.p3d";
            hiddenSelections[] = {"zusp","band"};
            containerClass = "Supply100";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_rifleman2_45: SiP_m1945_Vest_rifleman2
    {
        author = "Letlev";
        displayName = "[US] M1945 Web Gear (Carbine/Pistol)";
        hiddenSelections[] = {"band"};
        hiddenSelectionsTextures[] = {""};
        class ItemInfo: ItemInfo
        {
            uniformModel = "\simc_mc_67\belt_61_45.p3d";
            hiddenSelections[] = {"band"};
        };
    };
    class SiP_m1945_Vest_rifleman3: V_Simc_US_Vest_basic
    {
        displayName = "[US] M1945 Web Gear (Rifleman/e-tool)";
        model = "\simc_uaf_44\belt_drop_cartris_ab.p3d";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\sekop_43_od7_co.paa",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_garlan_m43.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left"};
            hiddenSelectionsTextures[] = 
            {
                "\simc_uaf_44\data\gear_belt_od7_co.paa",
                "",
                ""
            };
            containerClass = "Supply100";
            mass = 7;
        };
    };
    class SiP_m1944_Vest_carbine: V_Simc_US_Vest_Carbine
    {
        displayName = "[US] M1944 Web Gear (Carbine)";
        hiddenSelections[] = {"belt","camo3","sekop"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "",
            ""
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_43\belt_carb_eng.p3d";
            hiddenSelections[] = {"belt","camo3","sekop"};
            containerClass = "Supply100";
            mass = 7;
        };
    };
    class SiP_m1944_Vest_carbine_45: SiP_m1944_Vest_carbine
    {
        displayName = "[US] M1944 Web Gear (Carbine/Pistol)";
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
            containerClass = "Supply100";
        };
    };
    class SiP_m1945_Vest_smg: V_Simc_US_Vest_SMG_OD7
    {
        displayName = "[US] M1945 Web Gear (SMG)";
        model = "\simc_uaf_44\belt_drop.p3d";
        picture = "\simc_uaf_44_preview\icons\belt_carb_ca.paa";
        hiddenSelections[] = {"belt","sekop","garp_left"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_44\belt_smg_m43.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left"};
            containerClass = "Supply140";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_smg_sidearm: V_Simc_US_Vest_SMG_45_OD7
    {
        displayName = "[US] M1945 Web Gear (SMG/Pistol)";
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
    class SiP_m1945_Vest_45: V_Simc_US_Vest_basic_45_OD7
    {
        displayName = "[US] M1945 Web Gear (Pistol)";
        model = "\simc_uaf_43\belt_drop_45.p3d";
        hiddenSelections[] = {"belt","camo3","garp_left","camo4"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            ""
        };
    };
    class SiP_m1945_Vest_gpbag_45: V_Simc_US_Vest_basic_45_garp_od7
    {
        displayName = "[US] M1945 Web Gear (Pistol/GP bag)";
        model = "\simc_uaf_43\belt_drop_45.p3d";
        hiddenSelections[] = {"belt","sekop","garp_left","camo3","camo4"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\haversacc_breton_co.paa",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
            "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_43\belt_asst_45.p3d";
            hiddenSelections[] = {"belt","sekop","garp_left","camo3","camo4"};
            hiddenSelectionsTextures[] = 
            {
                "\simc_uaf_44\data\gear_belt_od7_co.paa",
                "\simc_uaf_44\data\haversacc_breton_co.paa",
                "\simc_uaf_44\data\gear_pouche_od7_co.paa",
                "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_merdc_co.paa",
                "\SiP\Addons\sip_us_army_gear\Vests\data\m1945_gear_pouche_co.paa"
            };
            containerClass = "Supply140";
            mass = 7;
        };
    };
    class SiP_m1945_Vest_BAR: V_Simc_US_Vest_bar_OD7_asst
    {
        displayName = "[US] M1945 Web Gear (BAR)";
        hiddenSelections[] = {"belt","garp"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\gear_belt_od7_co.paa",
            "\simc_uaf_44\data\gear_pouche_od7_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_43\belt_bar_asst.p3d";
            hiddenSelections[] = {"belt","garp"};
            hiddenSelectionsTextures[] = 
            {
                "\simc_uaf_44\data\gear_belt_od7_co.paa",
                "\simc_uaf_44\data\gear_pouche_od7_co.paa"
            };
            containerClass = "Supply140";
            mass = 12;
        };
    };
    class SiP_m1945_Vest_MG: V_Simc_56_60_doppel_ligt
    {
        displayName = "[US] M1945 Web Gear (MG)";
        hiddenSelections[] = {"botol","zusp"};
        hiddenSelectionsTextures[] = {"",""};
        class ItemInfo: VestItem
        {
            uniformModel = "\simc_uaf_67\belt_56_60.p3d";
            hiddenSelections[] = {"botol","zusp"};
            containerClass = "Supply230";
            mass = 15;
        };
    };
    class SiP_m1945_Vest_shotgun: V_Simc_61_rear
    {
        displayName = "[US] M1945 Web Gear (Shotgun)";
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