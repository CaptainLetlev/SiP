class cfgPatches
{
    class SiP_Patch_us_army_187rct_units
    {
        Name = "Suicide Is Painless - Korean War Mod - US Army 187th RCT Units";
        addonRootClass = "SiP_Patch_us_units";
        requiredAddons[] = 
        {
            "A3_Data_F",
            "A3_Characters_F",
            "WW2_Assets_c_Characters_Americans_c_US_Airborne",
            "simc_ua_inf_44"
        };
        units[] = 
        {
            "SiP_US_Army_1bn_187_rifleman1",
            "SiP_US_Army_1bn_187_rifleman2",
            "SiP_US_Army_1bn_187_smg1",
            "SiP_US_Army_1bn_187_smg2",
            "SiP_US_Army_1bn_187_autorifleman",
            "SiP_US_Army_1bn_187_machinegunner",
            "SiP_US_Army_1bn_187_sniper",
            "SiP_US_Army_1bn_187_m20_bazooka",
            "SiP_US_Army_1bn_187_shotgunner",
            "SiP_US_Army_1bn_187_grenadier",
            "SiP_US_Army_1bn_187_RTO",
            "SiP_US_Army_1bn_187_Corporal",
            "SiP_US_Army_1bn_187_Sergeant",
            "SiP_US_Army_1bn_187_Sergeant_1stclass",
            "SiP_US_Army_1bn_187_Master_Sergeant",
            "SiP_US_Army_1bn_187_1st_Sergeant",
            "SiP_US_Army_1bn_187_2Lt",
            "SiP_US_Army_1bn_187_1Lt",
            "SiP_US_Army_1bn_187_captain",
            "SiP_US_Army_1bn_187_major",
            "SiP_US_Army_1bn_187_ltcol",

            "SiP_US_Army_2bn_187_rifleman1",
            "SiP_US_Army_2bn_187_rifleman2",
            "SiP_US_Army_2bn_187_smg1",
            "SiP_US_Army_2bn_187_smg2",
            "SiP_US_Army_2bn_187_autorifleman",
            "SiP_US_Army_2bn_187_machinegunner",
            "SiP_US_Army_2bn_187_m20_bazooka",
            "SiP_US_Army_2bn_187_grenadier",
            "SiP_US_Army_2bn_187_RTO",
            "SiP_US_Army_2bn_187_Corporal",
            "SiP_US_Army_2bn_187_Sergeant",
            "SiP_US_Army_2bn_187_Sergeant_1stclass",
            "SiP_US_Army_2bn_187_Master_Sergeant",
            "SiP_US_Army_2bn_187_1st_Sergeant",
            "SiP_US_Army_2bn_187_2Lt",
            "SiP_US_Army_2bn_187_1Lt",
            "SiP_US_Army_2bn_187_captain",
            "SiP_US_Army_2bn_187_major",
            "SiP_US_Army_2bn_187_ltcol",
            "SiP_US_Army_187_col",
            "SiP_US_Army_2bn_187_sniper",
            "SiP_US_Army_2bn_187_shotgunner"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class SiP_US_Army_rifleman1;

    class SiP_US_Army_1bn_187_rifleman1: SiP_US_Army_rifleman1
    {
        displayName = "Rifleman (Garand)";
        editorSubcategory = "SiP_1bn_187_Editor_Subcategory";
        model = "\simc_uaf_44\m43_para_2.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2","badge"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","","\simc_uaf_44\data\falg_arm.paa","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa"};
        role = "Rifleman";
        icon = "iconManRifleman";
        weapons[] = {"SiP_m1_garand","Throw","Put"};
        magazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1_garand","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag"
        };
        headgearList[] = {"SiP_M1C_Helmet_1bt_187rct"};
        LIB_RandomizeHeadgear = 0;
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_rifleman1","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_rifleman1","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool";
        uniformClass = "SiP_m51_ab_uniform";
    };
    class SiP_US_Army_1bn_187_rifleman2: SiP_US_Army_1bn_187_rifleman1
    {
        displayName = "Rifleman (Carbine)";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            ""
        };
        weapons[] = {"SiP_m1a1_carbine","Throw","Put"};
        magazines[] = 
        {
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag"
        };
        respawnWeapons[] = {"SiP_m1a1_carbine","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        uniformClass = "SiP_m51_ab_uniform_pvt";
    };
    class SiP_US_Army_1bn_187_smg1: SiP_US_Army_1bn_187_rifleman1
    {
        displayName = "SMG-Soldier (Thompson)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        uniformClass = "SiP_m51_ab_uniform_pvt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            ""
        };
        weapons[] = {"SiP_m1928a1_thompson","Throw","Put"};
        magazines[] = 
        {
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag"
        };
        respawnWeapons[] = {"SiP_m1928a1_thompson","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag",
            "vn_m1a1_30_mag"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_1bn_187_smg2: SiP_US_Army_1bn_187_smg1
    {
        displayName = "SMG-Soldier (Grease Gun)";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            ""
        };
        weapons[] = {"SiP_m3a1_greasegun","Throw","Put"};
        magazines[] = 
        {
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag"
        };
        respawnWeapons[] = {"SiP_m3a1_greasegun","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
        uniformClass = "SiP_m51_ab_uniform";
    };
    class SiP_US_Army_1bn_187_autorifleman: SiP_US_Army_1bn_187_smg1
    {
        displayName = "Auto-Rifleman";
        icon = "iconManSMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        weapons[] = {"SiP_m1918A2_bar","Throw","Put"};
        magazines[] = 
        {
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag"
        };
        respawnWeapons[] = {"SiP_m1918A2_bar","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag",
            "vn_m1918_mag"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_BAR","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_BAR","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool_bar";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_MG_s"};
                speechPlural[] = {"veh_infantry_MG_p"};
            };
            class en: Default{};
        };
    };
    class SiP_US_Army_1bn_187_machinegunner: SiP_US_Army_1bn_187_smg1
    {
        displayName = "Machine Gunner";
        icon = "iconManMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        weapons[] = {"SiP_m1919a6","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1919a6","SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "ace_compat_sip_m1919_250",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_MG","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_MG","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool_mg";
    };
    class SiP_US_Army_1bn_187_sniper: SiP_US_Army_1bn_187_rifleman1
    {
        displayName = "Sniper (Garand)";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = {"SiP_m1d_garand_scope","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1d_garand_scope","SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_1bn_187_m20_bazooka: SiP_US_Army_1bn_187_rifleman2
    {
        displayName = "Bazooka Soldier (M20)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        cost = 190000;
        threat[] = {0.7,0.7,0.1};
        weapons[] = {"SiP_m3a1_greasegun","SiP_m20_super_bazooka","Throw","Put"};
        magazines[] = 
        {
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "SiP_M28A2_heat_rocket"
        };
        respawnWeapons[] = {"SiP_m3a1_greasegun","SiP_m20_super_bazooka","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "vn_m3a1_mag",
            "SiP_M28A2_heat_rocket"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_packboard_m20bazooka";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_AT_s"};
                speechPlural[] = {"veh_infantry_AT_p"};
            };
            class en: Default{};
        };
    };
    class SiP_US_Army_1bn_187_shotgunner: SiP_US_Army_1bn_187_rifleman1
    {
        displayName = "Shotgunner (Trenchgun)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        weapons[] = {"SiP_m1897_trenchgun","Throw","Put"};
        magazines[] = 
        {
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag"
        };
        respawnWeapons[] = {"SiP_m1897_trenchgun","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag",
            "vn_m1897_buck_mag"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_rifleman3","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1945_Vest_rifleman3","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_shotgun";
    };
    class SiP_US_Army_1bn_187_grenadier: SiP_US_Army_1bn_187_rifleman1
    {
        displayName = "Grenadier";
        weapons[] = {"SiP_m1_garand_gl","Throw","Put"};
        magazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1_garand_gl","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag"
        };
        backpack = "SiP_m1945_backpack_roll_etool_gren";
    };
    class SiP_US_Army_1bn_187_rto: SiP_US_Army_1bn_187_smg2
    {
        displayName = "Radio Operator";
        icon = "iconManRTO";
        cost = 400000;
        weapons[] = {"SiP_m1a1_carbine","Throw","Put"};
        magazines[] = 
        {
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag"
        };
        respawnWeapons[] = {"SiP_m1a1_carbine","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag"
        };
        linkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1bt_187rct","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_packboard_prc10";
    };
    class SiP_US_Army_1bn_187_Corporal: SiP_US_Army_1bn_187_rifleman1
    {
        displayName = "Corporal";
        icon = "iconManLeader";
        cost = 115000;
        uniformClass = "SiP_m51_ab_uniform_cpl";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Corporal_co.paa",
            "",
            "",
            "\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            ""
        };
        weapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        headgearList[] = {"SiP_M1C_Helmet_cpl_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_cpl_1bt_187rct","SiP_m1944_Vest_carbine_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_cpl_1bt_187rct","SiP_m1944_Vest_carbine_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_1bn_187_Sergeant: SiP_US_Army_1bn_187_Corporal
    {
        displayName = "Sergeant";
        cost = 200000;
        uniformClass = "SiP_m51_ab_uniform_sgt";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            ""
        };
        weapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag"
        };
        headgearList[] = {"SiP_M1C_Helmet_sgt_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_sgt_1bt_187rct","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_sgt_1bt_187rct","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_1bn_187_Sergeant_1stclass: SiP_US_Army_1bn_187_Sergeant
    {
        displayName = "Sergeant First Class";
        uniformClass = "SiP_m51_ab_uniform_sfc";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa",
            "",
            "",
            "\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",
            ""
        };
        weapons[] = {"SiP_m2_carbine","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m2_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_carbine_30_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        headgearList[] = {"SiP_M1C_Helmet_sgt_1stclass_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_sgt_1stclass_1bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_sgt_1stclass_1bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_1bn_187_Master_Sergeant: SiP_US_Army_1bn_187_Sergeant
    {
        displayName = "Master Sergeant";
        uniformClass = "SiP_m51_ab_uniform_msg";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        weapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_master_sgt_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_master_sgt_1bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_master_sgt_1bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_1bn_187_1st_Sergeant: SiP_US_Army_1bn_187_Sergeant
    {
        displayName = "First Sergeant";
        uniformClass = "SiP_m51_ab_uniform_1sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        weapons[] = {"SiP_m3a1_greasegun","SiP_m1911","Throw","Put"};
        magazines[] = {"vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m3a1_greasegun","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_first_sgt_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_first_sgt_1bt_187rct","SiP_m1945_Vest_smg_sidearm","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_first_sgt_1bt_187rct","SiP_m1945_Vest_smg_sidearm","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_1bn_187_2lt: SiP_US_Army_1bn_187_Sergeant
    {
        displayName = "2nd Lieutenant";
        icon = "iconManOfficer";
        cost = 450000;
        uniformClass = "SiP_m51_ab_uniform_2lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_2lt_ca.paa"};
        weapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_2ndlt_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_2ndlt_1bt_187rct","SiP_m1945_Vest_smg_sidearm","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2ndlt_1bt_187rct","SiP_m1945_Vest_smg_sidearm","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_1bn_187_1lt: SiP_US_Army_1bn_187_2lt
    {
        displayName = "1st Lieutenant";
        cost = 500000;
        uniformClass = "SiP_m51_ab_uniform_1lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa"};
        weapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        respawnWeapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        headgearList[] = {"SiP_M1C_Helmet_1stlt_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_1stlt_1bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1stlt_1bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_1bn_187_captain: SiP_US_Army_1bn_187_2lt
    {
        displayName = "Captain";
        cost = 500000;
        uniformClass = "SiP_m51_ab_uniform_capt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_cpt_ca.paa"};
        weapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        respawnWeapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        headgearList[] = {"SiP_M1C_Helmet_captain_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_captain_1bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_captain_1bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_1bn_187_major: SiP_US_Army_1bn_187_2lt
    {
        displayName = "Major";
        cost = 550000;
        uniformClass = "SiP_m51_ab_uniform_maj";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_major_ca.paa"};
        weapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_major_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_major_1bt_187rct","SiP_m1944_Vest_carbine_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_major_1bt_187rct","SiP_m1944_Vest_carbine_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_1bn_187_ltcol: SiP_US_Army_1bn_187_major
    {
        displayName = "Lieutenant Colonel";
        cost = 600000;
        uniformClass = "SiP_m51_ab_uniform_ltcol";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"};
        weapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_ltcol_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_ltcol_1bt_187rct","SiP_m1945_Vest_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_ltcol_1bt_187rct","SiP_m1945_Vest_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    
    class SiP_US_Army_2bn_187_rifleman1: SiP_US_Army_rifleman1
    {
        displayName = "Rifleman (Garand)";
        identityTypes[] = {"LanguageENG_F","Head_EURO","LIB_Glasses"};
        faction = "SiP_US_Army";
        editorSubcategory = "SiP_2bn_187_Editor_Subcategory";
        portrait = "";
        scope = 2;
        side = 1;
        genericNames = "EnglishMen";
        model = "\simc_uaf_44\m43_para_2.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2","badge"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","","\simc_uaf_44\data\falg_arm.paa","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa"};
        role = "Rifleman";
        icon = "iconManRifleman";
        weapons[] = {"SiP_m1_garand","Throw","Put"};
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        respawnWeapons[] = {"SiP_m1_garand","Throw","Put"};
        respawnMagazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        editorPreview = "\simc_uaf_44_preview\preview\ua_goon_m43.jpg";
        headgearList[] = {"SiP_M1C_Helmet_2bt_187rct"};
        LIB_RandomizeHeadgear = 0;
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_rifleman1","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_rifleman1","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool";
        uniformClass = "SiP_m51_ab_uniform";
    };
    class SiP_US_Army_2bn_187_rifleman2: SiP_US_Army_2bn_187_rifleman1
    {
        displayName = "Rifleman (Carbine)";
        weapons[] = {"SiP_m1a1_carbine","Throw","Put"};
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag"};
        respawnWeapons[] = {"SiP_m1a1_carbine","Throw","Put"};
        respawnMagazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        uniformClass = "SiP_m51_ab_uniform_pvt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_1stclass_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
    };
    class SiP_US_Army_2bn_187_smg1: SiP_US_Army_2bn_187_rifleman1
    {
        displayName = "SMG-Soldier (Thompson)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        uniformClass = "SiP_m51_ab_uniform_pvt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_1stclass_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        weapons[] = {"SiP_m1928a1_thompson","Throw","Put"};
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag"};
        respawnWeapons[] = {"SiP_m1928a1_thompson","Throw","Put"};
        respawnMagazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_2bn_187_smg2: SiP_US_Army_2bn_187_smg1
    {
        displayName = "SMG-Soldier (Grease Gun)";
        weapons[] = {"SiP_m3a1_greasegun","Throw","Put"};
        magazines[] = {"vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag"};
        respawnWeapons[] = {"SiP_m3a1_greasegun","Throw","Put"};
        respawnMagazines[] = {"vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        uniformClass = "SiP_m51_ab_uniform";
    };
    class SiP_US_Army_2bn_187_autorifleman: SiP_US_Army_2bn_187_smg1
    {
        displayName = "Auto-Rifleman";
        icon = "iconManSMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        weapons[] = {"SiP_m1918A2_bar","Throw","Put"};
        magazines[] = {"vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag"};
        respawnWeapons[] = {"SiP_m1918A2_bar","Throw","Put"};
        respawnMagazines[] = {"vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag","vn_m1918_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_BAR","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_BAR","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool_bar";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_MG_s"};
                speechPlural[] = {"veh_infantry_MG_p"};
            };
            class en: Default{};
        };
    };
    class SiP_US_Army_2bn_187_machinegunner: SiP_US_Army_2bn_187_smg1
    {
        displayName = "Machine Gunner";
        icon = "iconManMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        weapons[] = {"SiP_m1919a6","SiP_m1911","Throw","Put"};
        magazines[] = {"ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1919a6","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","ace_compat_sip_m1919_250","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_MG","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_MG","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool_mg";
    };
    class SiP_US_Army_2bn_187_sniper: SiP_US_Army_2bn_187_rifleman1
    {
        displayName = "Sniper (Garand)";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = {"SiP_m1903a4_Springfield_scope","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag"};
        respawnWeapons[] = {"SiP_m1903a4_Springfield_scope","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag","SiP_springfield_5_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_2bn_187_m20_bazooka: SiP_US_Army_2bn_187_rifleman2
    {
        displayName = "Bazooka Soldier (M20)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        cost = 190000;
        threat[] = {0.7,0.7,0.1};
        weapons[] = {"SiP_m3a1_greasegun","SiP_m20_super_bazooka","Throw","Put"};
        magazines[] = {"vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag"};
        respawnWeapons[] = {"SiP_m3a1_greasegun","SiP_m20_super_bazooka","Throw","Put"};
        respawnMagazines[] = {"vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_packboard_m20bazooka";
        class SpeechVariants
        {
            class Default
            {
                speechSingular[] = {"veh_infantry_AT_s"};
                speechPlural[] = {"veh_infantry_AT_p"};
            };
            class en: Default{};
        };
    };
    class SiP_US_Army_2bn_187_shotgunner: SiP_US_Army_2bn_187_rifleman1
    {
        displayName = "Shotgunner (Trenchgun)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        weapons[] = {"SiP_m1897_trenchgun","Throw","Put"};
        magazines[] = {"vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag"};
        respawnWeapons[] = {"SiP_m1897_trenchgun","Throw","Put"};
        respawnMagazines[] = {"vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag","vn_m1897_buck_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_rifleman3","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_rifleman3","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_shotgun";
    };
    class SiP_US_Army_2bn_187_grenadier: SiP_US_Army_2bn_187_rifleman1
    {
        displayName = "Grenadier";
        weapons[] = {"SiP_m1_garand_gl","Throw","Put"};
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        respawnWeapons[] = {"SiP_m1_garand_gl","Throw","Put"};
        respawnMagazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        backpack = "SiP_m1945_backpack_roll_etool_gren";
    };
    class SiP_US_Army_2bn_187_rto: SiP_US_Army_2bn_187_smg2
    {
        displayName = "Radio Operator";
        icon = "iconManRTO";
        cost = 400000;
        weapons[] = {"SiP_m1a1_carbine","Throw","Put"};
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag"};
        respawnWeapons[] = {"SiP_m1a1_carbine","Throw","Put"};
        respawnMagazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_packboard_prc10";
    };
    class SiP_US_Army_2bn_187_Corporal: SiP_US_Army_2bn_187_rifleman1
    {
        displayName = "Corporal";
        icon = "iconManLeader";
        cost = 115000;
        uniformClass = "SiP_m51_ab_uniform_cpl";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Corporal_co.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        weapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1944_Vest_carbine_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1944_Vest_carbine_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_2bn_187_Sergeant: SiP_US_Army_2bn_187_Corporal
    {
        displayName = "Sergeant";
        cost = 200000;
        uniformClass = "SiP_m51_ab_uniform_sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        weapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        respawnWeapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_2bn_187_Sergeant_1stclass: SiP_US_Army_2bn_187_Sergeant
    {
        displayName = "Sergeant First Class";
        uniformClass = "SiP_m51_ab_uniform_sfc";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        weapons[] = {"SiP_m2_carbine","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m2_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_carbine_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_2bn_187_Master_Sergeant: SiP_US_Army_2bn_187_Sergeant
    {
        displayName = "Master Sergeant";
        uniformClass = "SiP_m51_ab_uniform_msg";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        weapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_2bn_187_1st_Sergeant: SiP_US_Army_2bn_187_Sergeant
    {
        displayName = "First Sergeant";
        uniformClass = "SiP_m51_ab_uniform_1sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
        weapons[] = {"SiP_m3a1_greasegun","SiP_m1911","Throw","Put"};
        magazines[] = {"vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m3a1_greasegun","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","vn_m3a1_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_2bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_smg_sidearm","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2bt_187rct","SiP_m1945_Vest_smg_sidearm","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_2bn_187_2lt: SiP_US_Army_2bn_187_Sergeant
    {
        displayName = "2nd Lieutenant";
        icon = "iconManOfficer";
        cost = 450000;
        uniformClass = "SiP_m51_ab_uniform_2lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_2lt_ca.paa"};
        weapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_2ndlt_2bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_2ndlt_2bt_187rct","SiP_m1945_Vest_smg_sidearm","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_2ndlt_2bt_187rct","SiP_m1945_Vest_smg_sidearm","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_2bn_187_1lt: SiP_US_Army_2bn_187_2lt
    {
        displayName = "1st Lieutenant";
        cost = 500000;
        uniformClass = "SiP_m51_ab_uniform_1lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa"};
        weapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        respawnWeapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        headgearList[] = {"SiP_M1C_Helmet_1stlt_2bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_1stlt_2bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_1stlt_2bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_2bn_187_captain: SiP_US_Army_2bn_187_2lt
    {
        displayName = "Captain";
        cost = 500000;
        uniformClass = "SiP_m51_ab_uniform_capt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_cpt_ca.paa"};
        weapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        respawnWeapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag","SiP_m1_garand_mag"};
        headgearList[] = {"SiP_M1C_Helmet_captain_2bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_captain_2bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_captain_2bt_187rct","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_2bn_187_major: SiP_US_Army_2bn_187_2lt
    {
        displayName = "Major";
        cost = 550000;
        uniformClass = "SiP_m51_ab_uniform_maj";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_major_ca.paa"};
        weapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_major_1bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_major_1bt_187rct","SiP_m1944_Vest_carbine_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_major_1bt_187rct","SiP_m1944_Vest_carbine_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","mapcas_addon_od7"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_2bn_187_ltcol: SiP_US_Army_2bn_187_major
    {
        displayName = "Lieutenant Colonel";
        cost = 600000;
        uniformClass = "SiP_m51_ab_uniform_ltcol";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"};
        weapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        respawnWeapons[] = {"SiP_m1a1_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_carbine_15_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag","SiP_m1911_mag"};
        headgearList[] = {"SiP_M1C_Helmet_ltcol_2bt_187rct"};
        linkedItems[] = {"SiP_M1C_Helmet_ltcol_2bt_187rct","SiP_m1945_Vest_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1C_Helmet_ltcol_2bt_187rct","SiP_m1945_Vest_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    
    class SiP_US_Army_187_col: SiP_US_Army_1bn_187_major
    {
        displayName = "Colonel";
        cost = 650000;
        uniformClass = "SiP_m51_uniform_col";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","","\simc_uaf_44\patches\US_Shld_col_ca.paa"};
        headgearList[] = {"SiP_M1_Helmet_NS_Col"};
        linkedItems[] = {"SiP_M1_Helmet_NS_Col","SiP_m1945_Vest_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_NS_Col","SiP_m1945_Vest_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
    };
};

class CfgGroups
{
    class West
    {
        class SiP_US_Army
        {
            name = "US Army [Korea]";
            class SiP_1bn_187_Infantry_Squads
            {
                name = "1st Battalion, 187th RCT";
                class SiP_1bn_187_Rifle_Squad_1
                {
                    name = "Rifle Squad 1";
                    side = 1;
                    faction = "SiP_US_Army";
                    rarityGroup = 0.8;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_Sergeant";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_Corporal";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_grenadier";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_1bn_187_Rifle_Squad_2: SiP_1bn_187_Rifle_Squad_1
                {
                    name = "Rifle Squad 2";
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_Sergeant_1stclass";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_Corporal";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_smg2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_sniper";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_1bn_187_Rifle_Squad_3: SiP_1bn_187_Rifle_Squad_2
                {
                    name = "Rifle Squad 3";
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_Master_Sergeant";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_Sergeant";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_smg1";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_m20_bazooka";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_1bn_187_sniper";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
            };

            class SiP_2bn_187_Infantry_Squads
            {
                name = "2nd Battalion, 187th RCT";
                class SiP_2bn_187_Rifle_Squad_1
                {
                    name = "Rifle Squad 1";
                    side = 1;
                    faction = "SiP_US_Army";
                    rarityGroup = 0.8;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_Sergeant";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_Corporal";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_grenadier";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_2bn_187_Rifle_Squad_2: SiP_2bn_187_Rifle_Squad_1
                {
                    name = "Rifle Squad 2";
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_Sergeant_1stclass";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_Corporal";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_smg2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_sniper";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_2bn_187_Rifle_Squad_3: SiP_2bn_187_Rifle_Squad_2
                {
                    name = "Rifle Squad 3";
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_Master_Sergeant";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_Sergeant";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_smg1";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_m20_bazooka";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_2bn_187_sniper";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
            };
        };
    };
};