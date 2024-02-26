class cfgPatches
{
    class SiP_Patch_us_army_units
    {
        Name = "Suicide Is Painless - Korean War Mod - US Army Units";
        addonRootClass = "SiP_Patch_us_units";
        requiredAddons[] = 
        {
            "A3_Data_F",
            "A3_Characters_F",
            "WW2_SPE_Assets_c_Characters_Americans_c_US_Army",
            "simc_ua_inf_44"
        };
        units[] = 
        {
            "SiP_US_Army_rifleman1",
            "SiP_US_Army_rifleman2",
            "SiP_US_Army_smg1",
            "SiP_US_Army_smg2",
            "SiP_US_Army_flamer",
            "SiP_US_Army_autorifleman",
            "SiP_US_Army_machinegunner",
            "SiP_US_Army_sniper1",
            "SiP_US_Army_sniper2",
            "SiP_US_Army_m9_bazooka",
            "SiP_US_Army_m20_bazooka",
            "SiP_US_Army_shotgunner1",
            "SiP_US_Army_shotgunner2",
            "SiP_US_Army_shotgunner3",
            "SiP_US_Army_grenadier",
            "SiP_US_Army_RTO",
            "SiP_US_Army_Corporal",
            "SiP_US_Army_Sergeant",
            "SiP_US_Army_Sergeant_1stclass",
            "SiP_US_Army_Master_Sergeant",
            "SiP_US_Army_1st_Sergeant",
            "SiP_US_Army_2Lt",
            "SiP_US_Army_1Lt",
            "SiP_US_Army_captain",
            "SiP_US_Army_major",
            "SiP_US_Army_ltcol",
            "SiP_US_Army_col",
            "SiP_US_Army_driver",
            "SiP_US_Army_gunner",
            "SiP_US_Army_tank_driver",
            "SiP_US_Army_tank_bow",
            "SiP_US_Army_tank_gunner",
            "SiP_US_Army_tank_commander",

            "SiP_US_Army_Heli_Pilot",

            "SiP_USAF_Transport_Pilot",
            "SiP_USAF_Transport_Radio_Operator",

            "SiP_USAF_Fighter_Pilot",

            "SiP_ROKAF_Fighter_Pilot"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class B_Soldier_base_F;
    class SPE_US_Soldier_base;
    class SPE_US_Tank_Crew;

    class SiP_US_Army_rifleman1: SPE_US_Soldier_base
    {
        author = "Letlev";
        displayName = "Rifleman (Garand)";
        identityTypes[] = {"LanguageENG_F","Head_EURO","Head_African","Head_Asian"};
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Infantry_Editor_Subcategory";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        genericNames = "EnglishMen";
        nakedUniform = "vn_b_uniform_basecharacter_01";
        model = "simc_uaf_44\m43.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        role = "Rifleman";
        icon = "iconManRifleman";
        weapons[] = {"SiP_m1_garand","Throw","Put"};
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1_garand","Throw","Put"};
        respawnMagazines[] =
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        editorPreview = "";
        portrait = "";
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_NS1",
            "H_hssn_SiP_M1_Helmet_NS2",
            "H_hssn_SiP_M1_Helmet_NS3",
            "H_hssn_SiP_M1_Helmet_NS4",
            "H_hssn_SiP_M1_Helmet_NS5",
            "H_hssn_SiP_M1_Helmet_NS6",

            "H_hssn_SiP_M1_Helmet_NS1_net1",
            "H_hssn_SiP_M1_Helmet_NS1_net2",
            "H_hssn_SiP_M1_Helmet_NS1_net3",
            "H_hssn_SiP_M1_Helmet_NS1_net4",
            "H_hssn_SiP_M1_Helmet_NS1_net5",
            "H_hssn_SiP_M1_Helmet_NS1_net6",
            "H_hssn_SiP_M1_Helmet_NS1_cover_canvas",

            "H_hssn_SiP_M1_Helmet_NS2_net1",
            "H_hssn_SiP_M1_Helmet_NS2_net2",
            "H_hssn_SiP_M1_Helmet_NS2_net3",
            "H_hssn_SiP_M1_Helmet_NS2_net4",
            "H_hssn_SiP_M1_Helmet_NS2_net5",
            "H_hssn_SiP_M1_Helmet_NS2_net6",
            "H_hssn_SiP_M1_Helmet_NS2_cover_canvas",

            "H_hssn_SiP_M1_Helmet_NS3_net1",
            "H_hssn_SiP_M1_Helmet_NS3_net2",
            "H_hssn_SiP_M1_Helmet_NS3_net3",
            "H_hssn_SiP_M1_Helmet_NS3_net4",
            "H_hssn_SiP_M1_Helmet_NS3_net5",
            "H_hssn_SiP_M1_Helmet_NS3_net6",
            "H_hssn_SiP_M1_Helmet_NS3_cover_canvas",

            "H_hssn_SiP_M1_Helmet_NS4_net1",
            "H_hssn_SiP_M1_Helmet_NS4_net2",
            "H_hssn_SiP_M1_Helmet_NS4_net3",
            "H_hssn_SiP_M1_Helmet_NS4_net4",
            "H_hssn_SiP_M1_Helmet_NS4_net5",
            "H_hssn_SiP_M1_Helmet_NS4_net6",
            "H_hssn_SiP_M1_Helmet_NS4_cover_canvas",

            "H_hssn_SiP_M1_Helmet_NS5_net1",
            "H_hssn_SiP_M1_Helmet_NS5_net2",
            "H_hssn_SiP_M1_Helmet_NS5_net3",
            "H_hssn_SiP_M1_Helmet_NS5_net4",
            "H_hssn_SiP_M1_Helmet_NS5_net5",
            "H_hssn_SiP_M1_Helmet_NS5_net6",
            "H_hssn_SiP_M1_Helmet_NS5_cover_canvas",

            "H_hssn_SiP_M1_Helmet_NS6_net1",
            "H_hssn_SiP_M1_Helmet_NS6_net2",
            "H_hssn_SiP_M1_Helmet_NS6_net3",
            "H_hssn_SiP_M1_Helmet_NS6_net4",
            "H_hssn_SiP_M1_Helmet_NS6_net5",
            "H_hssn_SiP_M1_Helmet_NS6_net6",
            "H_hssn_SiP_M1_Helmet_NS6_cover_canvas"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_NS1",1,
            "H_hssn_SiP_M1_Helmet_NS2",1,
            "H_hssn_SiP_M1_Helmet_NS3",1,
            "H_hssn_SiP_M1_Helmet_NS4",1,
            "H_hssn_SiP_M1_Helmet_NS5",1,
            "H_hssn_SiP_M1_Helmet_NS6",1,

            "H_hssn_SiP_M1_Helmet_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_NS1_net6",1,
            "H_hssn_SiP_M1_Helmet_NS1_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_NS2_net6",1,
            "H_hssn_SiP_M1_Helmet_NS2_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_NS3_net6",1,
            "H_hssn_SiP_M1_Helmet_NS3_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_NS4_net6",1,
            "H_hssn_SiP_M1_Helmet_NS4_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_NS5_net6",1,
            "H_hssn_SiP_M1_Helmet_NS5_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_NS6_net6",1,
            "H_hssn_SiP_M1_Helmet_NS6_cover_canvas",1
        };
        SPE_RandomizeHeadgear = 1;
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman1_bayo","SiP_m1945_cargopack_facewear","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman1_bayo","SiP_m1945_cargopack_facewear","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool";
        uniformClass = "SiP_m51_uniform";
        class EventHandlers{};
    };
    class SiP_US_Army_rifleman2: SiP_US_Army_rifleman1
    {
        displayName = "Rifleman (Carbine)";
        weapons[] = {"SiP_m2_carbine","Throw","Put"};
        magazines[] = 
        {
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag"
        };
        respawnWeapons[] = {"SiP_m2_carbine","Throw","Put"};
        respawnMagazines[] =
        {
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag"
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman2","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman2","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_smg1: SiP_US_Army_rifleman1
    {
        displayName = "SMG-Soldier (Thompson)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManRecon";
        role = "Assault";
        weapons[] = {"SiP_m1a1_thompson","Throw","Put"};
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
        respawnWeapons[] = {"SiP_m1a1_thompson","Throw","Put"};
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
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_smg2: SiP_US_Army_smg1
    {
        displayName = "SMG-Soldier (Grease Gun)";
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
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    
    class SiP_US_Army_flamer: SiP_US_Army_smg2
    {
        displayName = "Flamethrower Soldier";
        weapons[] = {"SPE_M2_Flamethrower","Throw","Put"};
        magazines[] = {};
        respawnWeapons[] = {"SPE_M2_Flamethrower","Throw","Put"};
        respawnMagazines[] = {"SPE_M2_Flamethrower_Mag"};
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman2_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman2_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "B_SPE_US_M2Flamethrower";
    };

    class SiP_US_Army_autorifleman: SiP_US_Army_smg1
    {
        displayName = "Auto-Rifleman";
        icon = "iconManSMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        weapons[] = {"SiP_m1918A2_bar_bipod","Throw","Put"};
        magazines[] = 
        {
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag"
        };
        respawnWeapons[] = {"SiP_m1918A2_bar_bipod","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag",
            "vn_m1918_t_mag"
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_BAR_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_BAR_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
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
    class SiP_US_Army_machinegunner: SiP_US_Army_smg1
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
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
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
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_MG","SiP_m1945_cargopack_facewear","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_MG","SiP_m1945_cargopack_facewear","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_backpack_roll_etool_mg";
    };
    class SiP_US_Army_sniper1: SiP_US_Army_rifleman1
    {
        displayName = "Sniper (Springfield)";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = {"SiP_m1903a4_Springfield_scope","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag"
        };
        respawnWeapons[] = {"SiP_m1903a4_Springfield_scope","SiP_m1911","Throw","Put"};
        respawnMagazines[] =
        {
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag",
            "vn_m1903_mag"
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_sniper2: SiP_US_Army_sniper1
    {
        displayName = "Sniper (Garand)";
        weapons[] = {"SiP_m1c_garand_scope","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1c_garand_scope","SiP_m1911","Throw","Put"};
        respawnMagazines[] =
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman1_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_m9_bazooka: SiP_US_Army_rifleman2
    {
        displayName = "Bazooka Soldier (M9)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        cost = 190000;
        threat[] = {0.7,0.7,0.1};
        weapons[] = {"SiP_m2_carbine","SiP_m9a1_bazooka","Throw","Put"};
        magazines[] = 
        {
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag"
        };
        respawnWeapons[] = {"SiP_m2_carbine","SiP_m9a1_bazooka","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag"
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman2","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman2","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_packboard_m9bazooka";
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
    class SiP_US_Army_m20_bazooka: SiP_US_Army_m9_bazooka
    {
        displayName = "Bazooka Soldier (M20)";
        weapons[] = {"SiP_m2_carbine","SiP_m20_super_bazooka","Throw","Put"};
        respawnWeapons[] = {"SiP_m2_carbine","SiP_m20_super_bazooka","Throw","Put"};
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
    class SiP_US_Army_shotgunner1: SiP_US_Army_rifleman1
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
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_rifleman_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool_shotgun";
    };
    class SiP_US_Army_shotgunner2: SiP_US_Army_shotgunner1
    {
        displayName = "Shotgunner (M1912)";
        weapons[] = {"SiP_m1912_shotgun","Throw","Put"};
        respawnWeapons[] = {"SiP_m1912_shotgun","Throw","Put"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
    };
    class SiP_US_Army_shotgunner3: SiP_US_Army_shotgunner2
    {
        displayName = "Shotgunner (Ithaca)";
        weapons[] = {"SiP_ithaca37_shotgun","Throw","Put"};
        respawnWeapons[] = {"SiP_ithaca37_shotgun","Throw","Put"};
    };
    class SiP_US_Army_grenadier: SiP_US_Army_rifleman1
    {
        displayName = "Grenadier";
        weapons[] = {"SiP_m1_garand_gl","Throw","Put"};
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1_garand_gl","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        backpack = "SiP_m1945_backpack_roll_etool_gren";
    };
    class SiP_US_Army_rto: SiP_US_Army_smg2
    {
        displayName = "Radio Operator";
        icon = "iconManRTO";
        cost = 400000;
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
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_packboard_prc10_radio";
    };
    class SiP_US_Army_Corporal: SiP_US_Army_rifleman1
    {
        displayName = "Corporal";
        icon = "iconManLeader";
        cost = 115000;
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Corporal_co.paa"
        };
        uniformClass = "SiP_m51_uniform_corporal";
        weapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_cpl_NS1",
            "H_hssn_SiP_M1_Helmet_cpl_NS2",
            "H_hssn_SiP_M1_Helmet_cpl_NS3",
            "H_hssn_SiP_M1_Helmet_cpl_NS4",
            "H_hssn_SiP_M1_Helmet_cpl_NS5",
            "H_hssn_SiP_M1_Helmet_cpl_NS6",

            "H_hssn_SiP_M1_Helmet_cpl_NS1_net1",
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net2",
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net3",
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net4",
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net5",
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net6",

            "H_hssn_SiP_M1_Helmet_cpl_NS2_net1",
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net2",
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net3",
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net4",
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net5",
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net6",

            "H_hssn_SiP_M1_Helmet_cpl_NS3_net1",
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net2",
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net3",
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net4",
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net5",
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net6",

            "H_hssn_SiP_M1_Helmet_cpl_NS4_net1",
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net2",
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net3",
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net4",
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net5",
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net6",

            "H_hssn_SiP_M1_Helmet_cpl_NS5_net1",
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net2",
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net3",
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net4",
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net5",
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net6",

            "H_hssn_SiP_M1_Helmet_cpl_NS6_net1",
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net2",
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net3",
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net4",
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net5",
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_cpl_NS1",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS2",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS3",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS4",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS5",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS6",1,

            "H_hssn_SiP_M1_Helmet_cpl_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_cpl_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_cpl_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_cpl_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_cpl_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_cpl_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_cpl_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_cpl_NS1","SiP_m1945_Vest_rifleman1_45","SiP_m1945_cargopack_facewear","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_cpl_NS1","SiP_m1945_Vest_rifleman1_45","SiP_m1945_cargopack_facewear","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_Sergeant: SiP_US_Army_Corporal
    {
        displayName = "Sergeant";
        cost = 200000;
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa"
        };
        uniformClass = "SiP_m51_uniform_sergeant";
        weapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
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
            "vn_m1a1_30_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1a1_thompson","SiP_m1911","Throw","Put"};
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
            "vn_m1a1_30_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_sgt_NS1",
            "H_hssn_SiP_M1_Helmet_sgt_NS2",
            "H_hssn_SiP_M1_Helmet_sgt_NS3",
            "H_hssn_SiP_M1_Helmet_sgt_NS4",
            "H_hssn_SiP_M1_Helmet_sgt_NS5",
            "H_hssn_SiP_M1_Helmet_sgt_NS6",

            "H_hssn_SiP_M1_Helmet_sgt_NS1_net1",
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net2",
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net3",
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net4",
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net5",
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net6",

            "H_hssn_SiP_M1_Helmet_sgt_NS2_net1",
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net2",
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net3",
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net4",
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net5",
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net6",

            "H_hssn_SiP_M1_Helmet_sgt_NS3_net1",
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net2",
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net3",
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net4",
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net5",
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net6",

            "H_hssn_SiP_M1_Helmet_sgt_NS4_net1",
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net2",
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net3",
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net4",
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net5",
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net6",

            "H_hssn_SiP_M1_Helmet_sgt_NS5_net1",
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net2",
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net3",
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net4",
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net5",
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net6",

            "H_hssn_SiP_M1_Helmet_sgt_NS6_net1",
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net2",
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net3",
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net4",
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net5",
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_sgt_NS1",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS2",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS3",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS4",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS5",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS6",1,

            "H_hssn_SiP_M1_Helmet_sgt_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_sgt_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_sgt_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_sgt_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_sgt_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_sgt_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_sgt_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_sgt_NS1","SiP_m1945_Vest_smg_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_sgt_NS1","SiP_m1945_Vest_smg_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_Sergeant_1stclass: SiP_US_Army_Sergeant
    {
        displayName = "Sergeant First Class";
        uniformClass = "SiP_m51_uniform_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa"
        };
        weapons[] = {"SiP_m3a1_greasegun","SiP_m1911","Throw","Put"};
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
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m3a1_greasegun","SiP_m1911","Throw","Put"};
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
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_sfc_NS1",
            "H_hssn_SiP_M1_Helmet_sfc_NS2",
            "H_hssn_SiP_M1_Helmet_sfc_NS3",
            "H_hssn_SiP_M1_Helmet_sfc_NS4",
            "H_hssn_SiP_M1_Helmet_sfc_NS5",
            "H_hssn_SiP_M1_Helmet_sfc_NS6",

            "H_hssn_SiP_M1_Helmet_sfc_NS1_net1",
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net2",
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net3",
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net4",
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net5",
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net6",

            "H_hssn_SiP_M1_Helmet_sfc_NS2_net1",
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net2",
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net3",
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net4",
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net5",
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net6",

            "H_hssn_SiP_M1_Helmet_sfc_NS3_net1",
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net2",
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net3",
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net4",
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net5",
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net6",

            "H_hssn_SiP_M1_Helmet_sfc_NS4_net1",
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net2",
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net3",
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net4",
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net5",
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net6",

            "H_hssn_SiP_M1_Helmet_sfc_NS5_net1",
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net2",
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net3",
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net4",
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net5",
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net6",

            "H_hssn_SiP_M1_Helmet_sfc_NS6_net1",
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net2",
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net3",
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net4",
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net5",
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_sfc_NS1",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS2",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS3",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS4",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS5",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS6",1,

            "H_hssn_SiP_M1_Helmet_sfc_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_sfc_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_sfc_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_sfc_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_sfc_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_sfc_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_sfc_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_sfc_NS1","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_sfc_NS1","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_Master_Sergeant: SiP_US_Army_Sergeant
    {
        displayName = "Master Sergeant";
        uniformClass = "SiP_m51_uniform_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa"
        };
        weapons[] = {"SiP_m1897_trenchgun","SiP_m1911","Throw","Put"};
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
        respawnWeapons[] = {"SiP_m1897_trenchgun","SiP_m1911","Throw","Put"};
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
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_msg_NS1",
            "H_hssn_SiP_M1_Helmet_msg_NS2",
            "H_hssn_SiP_M1_Helmet_msg_NS3",
            "H_hssn_SiP_M1_Helmet_msg_NS4",
            "H_hssn_SiP_M1_Helmet_msg_NS5",
            "H_hssn_SiP_M1_Helmet_msg_NS6",

            "H_hssn_SiP_M1_Helmet_msg_NS1_net1",
            "H_hssn_SiP_M1_Helmet_msg_NS1_net2",
            "H_hssn_SiP_M1_Helmet_msg_NS1_net3",
            "H_hssn_SiP_M1_Helmet_msg_NS1_net4",
            "H_hssn_SiP_M1_Helmet_msg_NS1_net5",
            "H_hssn_SiP_M1_Helmet_msg_NS1_net6",

            "H_hssn_SiP_M1_Helmet_msg_NS2_net1",
            "H_hssn_SiP_M1_Helmet_msg_NS2_net2",
            "H_hssn_SiP_M1_Helmet_msg_NS2_net3",
            "H_hssn_SiP_M1_Helmet_msg_NS2_net4",
            "H_hssn_SiP_M1_Helmet_msg_NS2_net5",
            "H_hssn_SiP_M1_Helmet_msg_NS2_net6",

            "H_hssn_SiP_M1_Helmet_msg_NS3_net1",
            "H_hssn_SiP_M1_Helmet_msg_NS3_net2",
            "H_hssn_SiP_M1_Helmet_msg_NS3_net3",
            "H_hssn_SiP_M1_Helmet_msg_NS3_net4",
            "H_hssn_SiP_M1_Helmet_msg_NS3_net5",
            "H_hssn_SiP_M1_Helmet_msg_NS3_net6",

            "H_hssn_SiP_M1_Helmet_msg_NS4_net1",
            "H_hssn_SiP_M1_Helmet_msg_NS4_net2",
            "H_hssn_SiP_M1_Helmet_msg_NS4_net3",
            "H_hssn_SiP_M1_Helmet_msg_NS4_net4",
            "H_hssn_SiP_M1_Helmet_msg_NS4_net5",
            "H_hssn_SiP_M1_Helmet_msg_NS4_net6",

            "H_hssn_SiP_M1_Helmet_msg_NS5_net1",
            "H_hssn_SiP_M1_Helmet_msg_NS5_net2",
            "H_hssn_SiP_M1_Helmet_msg_NS5_net3",
            "H_hssn_SiP_M1_Helmet_msg_NS5_net4",
            "H_hssn_SiP_M1_Helmet_msg_NS5_net5",
            "H_hssn_SiP_M1_Helmet_msg_NS5_net6",

            "H_hssn_SiP_M1_Helmet_msg_NS6_net1",
            "H_hssn_SiP_M1_Helmet_msg_NS6_net2",
            "H_hssn_SiP_M1_Helmet_msg_NS6_net3",
            "H_hssn_SiP_M1_Helmet_msg_NS6_net4",
            "H_hssn_SiP_M1_Helmet_msg_NS6_net5",
            "H_hssn_SiP_M1_Helmet_msg_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_msg_NS1",1,
            "H_hssn_SiP_M1_Helmet_msg_NS2",1,
            "H_hssn_SiP_M1_Helmet_msg_NS3",1,
            "H_hssn_SiP_M1_Helmet_msg_NS4",1,
            "H_hssn_SiP_M1_Helmet_msg_NS5",1,
            "H_hssn_SiP_M1_Helmet_msg_NS6",1,

            "H_hssn_SiP_M1_Helmet_msg_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_msg_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_msg_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_msg_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_msg_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_msg_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_msg_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_msg_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_msg_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_msg_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_msg_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_msg_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_msg_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_msg_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_msg_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_msg_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_msg_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_msg_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_msg_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_msg_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_msg_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_msg_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_msg_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_msg_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_msg_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_msg_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_msg_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_msg_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_msg_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_msg_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_msg_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_msg_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_msg_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_msg_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_msg_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_msg_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_msg_NS1","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_msg_NS1","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_backpack_roll_etool_shotgun";
    };
    class SiP_US_Army_1st_Sergeant: SiP_US_Army_Sergeant
    {
        displayName = "First Sergeant";
        uniformClass = "SiP_m51_uniform_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa"
        };
        weapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        respawnWeapons[] = {"SiP_m1_garand","SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag",
            "vn_m1_garand_mag"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6",

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net1",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net2",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net3",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net4",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net5",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net6",

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net1",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net2",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net3",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net4",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net5",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net6",

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net1",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net2",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net3",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net4",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net5",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net6",

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net1",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net2",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net3",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net4",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net5",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net6",

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net1",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net2",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net3",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net4",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net5",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net6",

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net1",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net2",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net3",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net4",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net5",
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6",1,

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_sgt_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_1st_sgt_NS1","SiP_m1945_Vest_rifleman1_45","SiP_m1945_cargopack_facewear","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_1st_sgt_NS1","SiP_m1945_Vest_rifleman1_45","SiP_m1945_cargopack_facewear","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_2lt: SiP_US_Army_Sergeant
    {
        displayName = "2nd Lieutenant";
        icon = "iconManOfficer";
        cost = 450000;
        uniformClass = "SiP_m51_uniform_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_2lt_ca.paa"
        };
        weapons[] = {"SiP_m2_carbine","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m2_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] =
        {
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_carbine_30_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6",

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net1",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net2",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net3",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net4",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net5",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net6",

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net1",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net2",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net3",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net4",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net5",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net6",

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net1",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net2",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net3",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net4",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net5",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net6",

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net1",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net2",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net3",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net4",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net5",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net6",

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net1",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net2",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net3",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net4",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net5",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net6",

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net1",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net2",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net3",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net4",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net5",
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6",1,

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_2nd_Lt_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_2nd_Lt_NS1","SiP_m1945_Vest_rifleman2_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_2nd_Lt_NS1","SiP_m1945_Vest_rifleman2_45","","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_1lt: SiP_US_Army_2lt
    {
        displayName = "1st Lieutenant";
        cost = 500000;
        uniformClass = "SiP_m51_uniform_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_1lt_ca.paa"
        };
        weapons[] = {"SiP_m1928a1_thompson","SiP_m1911","Throw","Put"};
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
        respawnWeapons[] = {"SiP_m1928a1_thompson","SiP_m1911","Throw","Put"};
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
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6",

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net1",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net2",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net3",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net4",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net5",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net6",

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net1",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net2",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net3",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net4",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net5",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net6",

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net1",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net2",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net3",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net4",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net5",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net6",

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net1",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net2",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net3",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net4",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net5",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net6",

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net1",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net2",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net3",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net4",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net5",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net6",

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net1",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net2",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net3",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net4",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net5",
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6",1,

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_1st_Lt_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_1st_Lt_NS1","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_1st_Lt_NS1","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","mapcas_addon_od7"};
        backpack = "SiP_m1945_backpack_roll_etool_sniper";
    };
    class SiP_US_Army_captain: SiP_US_Army_2lt
    {
        displayName = "Captain";
        cost = 500000;
        uniformClass = "SiP_m51_uniform_captain";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_cpt_ca.paa"
        };
        weapons[] = {"SiP_m1_carbine","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1_carbine","SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_Captain_NS1",
            "H_hssn_SiP_M1_Helmet_Captain_NS2",
            "H_hssn_SiP_M1_Helmet_Captain_NS3",
            "H_hssn_SiP_M1_Helmet_Captain_NS4",
            "H_hssn_SiP_M1_Helmet_Captain_NS5",
            "H_hssn_SiP_M1_Helmet_Captain_NS6",

            "H_hssn_SiP_M1_Helmet_Captain_NS1_net1",
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net2",
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net3",
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net4",
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net5",
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net6",

            "H_hssn_SiP_M1_Helmet_Captain_NS2_net1",
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net2",
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net3",
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net4",
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net5",
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net6",

            "H_hssn_SiP_M1_Helmet_Captain_NS3_net1",
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net2",
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net3",
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net4",
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net5",
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net6",

            "H_hssn_SiP_M1_Helmet_Captain_NS4_net1",
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net2",
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net3",
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net4",
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net5",
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net6",

            "H_hssn_SiP_M1_Helmet_Captain_NS5_net1",
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net2",
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net3",
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net4",
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net5",
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net6",

            "H_hssn_SiP_M1_Helmet_Captain_NS6_net1",
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net2",
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net3",
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net4",
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net5",
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_Captain_NS1",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS2",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS3",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS4",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS5",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS6",1,

            "H_hssn_SiP_M1_Helmet_Captain_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_Captain_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_Captain_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_Captain_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_Captain_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_Captain_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_Captain_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_Captain_NS1","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","mapcas_addon_od7"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_Captain_NS1","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","mapcas_addon_od7"};
        backpack = "SiP_m1945_backpack_roll_etool";
    };
    class SiP_US_Army_major: SiP_US_Army_2lt
    {
        displayName = "Major";
        cost = 550000;
        uniformClass = "SiP_m51_uniform_major";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_major_ca.paa"
        };
        weapons[] = {"SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_Major_NS1",
            "H_hssn_SiP_M1_Helmet_Major_NS2",
            "H_hssn_SiP_M1_Helmet_Major_NS3",
            "H_hssn_SiP_M1_Helmet_Major_NS4",
            "H_hssn_SiP_M1_Helmet_Major_NS5",
            "H_hssn_SiP_M1_Helmet_Major_NS6",

            "H_hssn_SiP_M1_Helmet_Major_NS1_net1",
            "H_hssn_SiP_M1_Helmet_Major_NS1_net2",
            "H_hssn_SiP_M1_Helmet_Major_NS1_net3",
            "H_hssn_SiP_M1_Helmet_Major_NS1_net4",
            "H_hssn_SiP_M1_Helmet_Major_NS1_net5",
            "H_hssn_SiP_M1_Helmet_Major_NS1_net6",
            "H_hssn_SiP_M1_Helmet_Major_NS1_cover_canvas",

            "H_hssn_SiP_M1_Helmet_Major_NS2_net1",
            "H_hssn_SiP_M1_Helmet_Major_NS2_net2",
            "H_hssn_SiP_M1_Helmet_Major_NS2_net3",
            "H_hssn_SiP_M1_Helmet_Major_NS2_net4",
            "H_hssn_SiP_M1_Helmet_Major_NS2_net5",
            "H_hssn_SiP_M1_Helmet_Major_NS2_net6",
            "H_hssn_SiP_M1_Helmet_Major_NS2_cover_canvas",

            "H_hssn_SiP_M1_Helmet_Major_NS3_net1",
            "H_hssn_SiP_M1_Helmet_Major_NS3_net2",
            "H_hssn_SiP_M1_Helmet_Major_NS3_net3",
            "H_hssn_SiP_M1_Helmet_Major_NS3_net4",
            "H_hssn_SiP_M1_Helmet_Major_NS3_net5",
            "H_hssn_SiP_M1_Helmet_Major_NS3_net6",
            "H_hssn_SiP_M1_Helmet_Major_NS3_cover_canvas",

            "H_hssn_SiP_M1_Helmet_Major_NS4_net1",
            "H_hssn_SiP_M1_Helmet_Major_NS4_net2",
            "H_hssn_SiP_M1_Helmet_Major_NS4_net3",
            "H_hssn_SiP_M1_Helmet_Major_NS4_net4",
            "H_hssn_SiP_M1_Helmet_Major_NS4_net5",
            "H_hssn_SiP_M1_Helmet_Major_NS4_net6",
            "H_hssn_SiP_M1_Helmet_Major_NS4_cover_canvas",

            "H_hssn_SiP_M1_Helmet_Major_NS5_net1",
            "H_hssn_SiP_M1_Helmet_Major_NS5_net2",
            "H_hssn_SiP_M1_Helmet_Major_NS5_net3",
            "H_hssn_SiP_M1_Helmet_Major_NS5_net4",
            "H_hssn_SiP_M1_Helmet_Major_NS5_net5",
            "H_hssn_SiP_M1_Helmet_Major_NS5_net6",
            "H_hssn_SiP_M1_Helmet_Major_NS5_cover_canvas",

            "H_hssn_SiP_M1_Helmet_Major_NS6_net1",
            "H_hssn_SiP_M1_Helmet_Major_NS6_net2",
            "H_hssn_SiP_M1_Helmet_Major_NS6_net3",
            "H_hssn_SiP_M1_Helmet_Major_NS6_net4",
            "H_hssn_SiP_M1_Helmet_Major_NS6_net5",
            "H_hssn_SiP_M1_Helmet_Major_NS6_net6",
            "H_hssn_SiP_M1_Helmet_Major_NS6_cover_canvas"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_Major_NS1",1,
            "H_hssn_SiP_M1_Helmet_Major_NS2",1,
            "H_hssn_SiP_M1_Helmet_Major_NS3",1,
            "H_hssn_SiP_M1_Helmet_Major_NS4",1,
            "H_hssn_SiP_M1_Helmet_Major_NS5",1,
            "H_hssn_SiP_M1_Helmet_Major_NS6",1,

            "H_hssn_SiP_M1_Helmet_Major_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_Major_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_Major_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_Major_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_Major_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_Major_NS1_net6",1,
            "H_hssn_SiP_M1_Helmet_Major_NS1_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_Major_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_Major_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_Major_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_Major_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_Major_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_Major_NS2_net6",1,
            "H_hssn_SiP_M1_Helmet_Major_NS2_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_Major_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_Major_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_Major_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_Major_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_Major_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_Major_NS3_net6",1,
            "H_hssn_SiP_M1_Helmet_Major_NS3_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_Major_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_Major_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_Major_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_Major_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_Major_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_Major_NS4_net6",1,
            "H_hssn_SiP_M1_Helmet_Major_NS4_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_Major_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_Major_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_Major_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_Major_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_Major_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_Major_NS5_net6",1,
            "H_hssn_SiP_M1_Helmet_Major_NS5_cover_canvas",1,

            "H_hssn_SiP_M1_Helmet_Major_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_Major_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_Major_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_Major_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_Major_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_Major_NS6_net6",1,
            "H_hssn_SiP_M1_Helmet_Major_NS6_cover_canvas",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_Major_NS1","SiP_m1945_Vest_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_Major_NS1","SiP_m1945_Vest_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "";
    };
    class SiP_US_Army_ltcol: SiP_US_Army_major
    {
        displayName = "Lieutenant Colonel";
        cost = 600000;
        uniformClass = "SiP_m51_uniform_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6",

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net1",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net2",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net3",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net4",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net5",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net6",

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net1",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net2",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net3",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net4",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net5",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net6",

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net1",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net2",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net3",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net4",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net5",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net6",

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net1",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net2",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net3",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net4",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net5",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net6",

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net1",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net2",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net3",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net4",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net5",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net6",

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net1",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net2",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net3",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net4",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net5",
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6",1,

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_Lt_Col_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_Lt_Col_NS1","SiP_m1945_Vest_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_Lt_Col_NS1","SiP_m1945_Vest_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
    };
    class SiP_US_Army_col: SiP_US_Army_major
    {
        displayName = "Colonel";
        cost = 650000;
        uniformClass = "SiP_m51_uniform_col";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_col_ca.paa"
        };
        allowedHeadgear[] =
        {
            "H_hssn_SiP_M1_Helmet_Col_NS1",
            "H_hssn_SiP_M1_Helmet_Col_NS2",
            "H_hssn_SiP_M1_Helmet_Col_NS3",
            "H_hssn_SiP_M1_Helmet_Col_NS4",
            "H_hssn_SiP_M1_Helmet_Col_NS5",
            "H_hssn_SiP_M1_Helmet_Col_NS6",

            "H_hssn_SiP_M1_Helmet_Col_NS1_net1",
            "H_hssn_SiP_M1_Helmet_Col_NS1_net2",
            "H_hssn_SiP_M1_Helmet_Col_NS1_net3",
            "H_hssn_SiP_M1_Helmet_Col_NS1_net4",
            "H_hssn_SiP_M1_Helmet_Col_NS1_net5",
            "H_hssn_SiP_M1_Helmet_Col_NS1_net6",

            "H_hssn_SiP_M1_Helmet_Col_NS2_net1",
            "H_hssn_SiP_M1_Helmet_Col_NS2_net2",
            "H_hssn_SiP_M1_Helmet_Col_NS2_net3",
            "H_hssn_SiP_M1_Helmet_Col_NS2_net4",
            "H_hssn_SiP_M1_Helmet_Col_NS2_net5",
            "H_hssn_SiP_M1_Helmet_Col_NS2_net6",

            "H_hssn_SiP_M1_Helmet_Col_NS3_net1",
            "H_hssn_SiP_M1_Helmet_Col_NS3_net2",
            "H_hssn_SiP_M1_Helmet_Col_NS3_net3",
            "H_hssn_SiP_M1_Helmet_Col_NS3_net4",
            "H_hssn_SiP_M1_Helmet_Col_NS3_net5",
            "H_hssn_SiP_M1_Helmet_Col_NS3_net6",

            "H_hssn_SiP_M1_Helmet_Col_NS4_net1",
            "H_hssn_SiP_M1_Helmet_Col_NS4_net2",
            "H_hssn_SiP_M1_Helmet_Col_NS4_net3",
            "H_hssn_SiP_M1_Helmet_Col_NS4_net4",
            "H_hssn_SiP_M1_Helmet_Col_NS4_net5",
            "H_hssn_SiP_M1_Helmet_Col_NS4_net6",

            "H_hssn_SiP_M1_Helmet_Col_NS5_net1",
            "H_hssn_SiP_M1_Helmet_Col_NS5_net2",
            "H_hssn_SiP_M1_Helmet_Col_NS5_net3",
            "H_hssn_SiP_M1_Helmet_Col_NS5_net4",
            "H_hssn_SiP_M1_Helmet_Col_NS5_net5",
            "H_hssn_SiP_M1_Helmet_Col_NS5_net6",

            "H_hssn_SiP_M1_Helmet_Col_NS6_net1",
            "H_hssn_SiP_M1_Helmet_Col_NS6_net2",
            "H_hssn_SiP_M1_Helmet_Col_NS6_net3",
            "H_hssn_SiP_M1_Helmet_Col_NS6_net4",
            "H_hssn_SiP_M1_Helmet_Col_NS6_net5",
            "H_hssn_SiP_M1_Helmet_Col_NS6_net6"
        };
        headgearList[] = 
        {
            "H_hssn_SiP_M1_Helmet_Col_NS1",1,
            "H_hssn_SiP_M1_Helmet_Col_NS2",1,
            "H_hssn_SiP_M1_Helmet_Col_NS3",1,
            "H_hssn_SiP_M1_Helmet_Col_NS4",1,
            "H_hssn_SiP_M1_Helmet_Col_NS5",1,
            "H_hssn_SiP_M1_Helmet_Col_NS6",1,

            "H_hssn_SiP_M1_Helmet_Col_NS1_net1",1,
            "H_hssn_SiP_M1_Helmet_Col_NS1_net2",1,
            "H_hssn_SiP_M1_Helmet_Col_NS1_net3",1,
            "H_hssn_SiP_M1_Helmet_Col_NS1_net4",1,
            "H_hssn_SiP_M1_Helmet_Col_NS1_net5",1,
            "H_hssn_SiP_M1_Helmet_Col_NS1_net6",1,

            "H_hssn_SiP_M1_Helmet_Col_NS2_net1",1,
            "H_hssn_SiP_M1_Helmet_Col_NS2_net2",1,
            "H_hssn_SiP_M1_Helmet_Col_NS2_net3",1,
            "H_hssn_SiP_M1_Helmet_Col_NS2_net4",1,
            "H_hssn_SiP_M1_Helmet_Col_NS2_net5",1,
            "H_hssn_SiP_M1_Helmet_Col_NS2_net6",1,

            "H_hssn_SiP_M1_Helmet_Col_NS3_net1",1,
            "H_hssn_SiP_M1_Helmet_Col_NS3_net2",1,
            "H_hssn_SiP_M1_Helmet_Col_NS3_net3",1,
            "H_hssn_SiP_M1_Helmet_Col_NS3_net4",1,
            "H_hssn_SiP_M1_Helmet_Col_NS3_net5",1,
            "H_hssn_SiP_M1_Helmet_Col_NS3_net6",1,

            "H_hssn_SiP_M1_Helmet_Col_NS4_net1",1,
            "H_hssn_SiP_M1_Helmet_Col_NS4_net2",1,
            "H_hssn_SiP_M1_Helmet_Col_NS4_net3",1,
            "H_hssn_SiP_M1_Helmet_Col_NS4_net4",1,
            "H_hssn_SiP_M1_Helmet_Col_NS4_net5",1,
            "H_hssn_SiP_M1_Helmet_Col_NS4_net6",1,

            "H_hssn_SiP_M1_Helmet_Col_NS5_net1",1,
            "H_hssn_SiP_M1_Helmet_Col_NS5_net2",1,
            "H_hssn_SiP_M1_Helmet_Col_NS5_net3",1,
            "H_hssn_SiP_M1_Helmet_Col_NS5_net4",1,
            "H_hssn_SiP_M1_Helmet_Col_NS5_net5",1,
            "H_hssn_SiP_M1_Helmet_Col_NS5_net6",1,

            "H_hssn_SiP_M1_Helmet_Col_NS6_net1",1,
            "H_hssn_SiP_M1_Helmet_Col_NS6_net2",1,
            "H_hssn_SiP_M1_Helmet_Col_NS6_net3",1,
            "H_hssn_SiP_M1_Helmet_Col_NS6_net4",1,
            "H_hssn_SiP_M1_Helmet_Col_NS6_net5",1,
            "H_hssn_SiP_M1_Helmet_Col_NS6_net6",1
        };
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_Col_NS1","SiP_m1945_Vest_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_Col_NS1","SiP_m1945_Vest_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
    };
    class SiP_US_Army_driver: SiP_US_Army_rifleman1
    {
        displayName = "Driver";
        role = "Rifleman";
        icon = "iconMan";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        allowedHeadgear[] = {"H_hssn_SiP_M1_Helmet_NS1"};
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1944_Vest_rifleman2","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1944_Vest_rifleman2","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        weapons[] = {"SiP_m1_carbine","Throw","Put"};
        magazines[] = 
        {
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag"
        };
        respawnWeapons[] = {"SiP_m1_carbine","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag"
        };
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "";
    };
    class SiP_US_Army_gunner: SiP_US_Army_driver
    {
        displayName = "Gunner";
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
        linkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_hssn_SiP_M1_Helmet_NS1","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
    };
    class SiP_US_Army_tank_driver: SPE_US_Tank_Crew
    {
        author = "Letlev";
        identityTypes[] = {"LanguageENG_F","Head_EURO","LIB_Glasses"};
        scope = 2;
        side = 1;
        faction = "SiP_US_Army";
        displayName = "Tank Driver";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        editorPreview = "";
        portrait = "";
        SPE_RandomizeHeadgear = 1;
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
            "vn_m3a1_mag"
        };
        allowedHeadgear[] = 
        {
            "H_SPE_US_Helmet_Tank_NG",
            "H_SPE_US_Helmet_Tank_tapes",
            "H_SPE_US_Helmet_Tank",
            "H_SPE_US_Helmet_Tank_polar_low",
            "H_SPE_US_Helmet_Tank_polar",
            "H_SPE_US_Helmet_Tank_polar_tapes"
        };
        headgearList[] = 
        {
            "H_SPE_US_Helmet_Tank_NG",1,
            "H_SPE_US_Helmet_Tank_tapes",1,
            "H_SPE_US_Helmet_Tank",1,
            "H_SPE_US_Helmet_Tank_polar_low",1,
            "H_SPE_US_Helmet_Tank_polar",1,
            "H_SPE_US_Helmet_Tank_polar_tapes",1
        };
        linkedItems[] = {"H_SPE_US_Helmet_Tank","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","vn_b_item_radio_urc10"};
        respawnLinkedItems[] = {"H_SPE_US_Helmet_Tank","SiP_m1945_Vest_smg_gpbag","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","vn_b_item_radio_urc10"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        icon = "iconManTankcrew";
        role = "Crewman";
        cost = 90000;
        threat[] = {0.6,0.1,0.1};
        uniformClass = "SiP_m51_uniform";
        backpack = "B_simc_US_GP_left_OD7";
    };
    class SiP_US_Army_tank_bow: SiP_US_Army_tank_driver
    {
        displayName = "Tank Bow Gunner";
        uniformClass = "SiP_m51_uniform_private";
        weapons[] = {"SiP_m1_carbine","Throw","Put"};
        respawnWeapons[] = {"SiP_m1_carbine","Throw","Put"};
        magazines[] = 
        {
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag"
        };
        respawnMagazines[] = 
       {
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag",
            "vn_carbine_15_mag"
        };
        linkedItems[] = {"H_LIB_US_Helmet_Tank","SiP_m1944_Vest_rifleman2","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","vn_b_item_radio_urc10"};
        respawnLinkedItems[] = {"H_LIB_US_Helmet_Tank","SiP_m1944_Vest_rifleman2","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","vn_b_item_radio_urc10"};
        backpack = "B_simc_US_GP_left";
    };
    class SiP_US_Army_tank_gunner: SiP_US_Army_tank_bow
    {
        displayName = "Tank Gunner";
        uniformClass = "SiP_m51_uniform_corporal";
    };
    class SiP_US_Army_tank_commander: SiP_US_Army_tank_bow
    {
        displayName = "Tank Commander";
        uniformClass = "SiP_m51_uniform_sergeant";
        backpack = "B_simc_US_GP_left_OD7";
        weapons[] = {"SiP_m3a1_greasegun","SiP_m1911","Throw","Put"};
        respawnWeapons[] = {"SiP_m3a1_greasegun","SiP_m1911","Throw","Put"};
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
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
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
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] = 
        {
            "H_SPE_US_Helmet_Tank_M1_OS",
            "H_SPE_US_Helmet_Tank",
            "H_SPE_US_Helmet_Tank_polar",
            "H_SPE_US_Helmet_Tank_polar_tapes"
        };
        headgearList[] = 
        {
            "H_SPE_US_Helmet_Tank_M1_OS",1,
            "H_SPE_US_Helmet_Tank",0.33,
            "H_SPE_US_Helmet_Tank_polar",0.33,
            "H_SPE_US_Helmet_Tank_polar_tapes",0.33
        };
        linkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","vn_b_item_radio_urc10"};
        respawnLinkedItems[] = {"H_SPE_US_Helmet_Tank_M1_OS","SiP_m1945_Vest_gpbag_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch","vn_b_item_radio_urc10"};
    };
    
    class SiP_US_Army_Heli_Pilot: SiP_US_Army_2lt
    {
        displayName = "Helicopter Pilot";
        identityTypes[] = {"LanguageENG_F","Head_EURO","Head_Asian"};
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        uniformClass = "SiP_heli_pilot_uniform";
        icon = "iconManPilot";
        model = "WW2\Assets_m\Characters\Americans_m\US_Army\IF_US_Pilot.p3d";
        hiddenSelections[] = {"camo","front","back","left","right"};
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\us_heli_pilot_co.paa","","","",""};
        weapons[] = {"SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag",
            "vn_m1911_mag"
        };
        allowedHeadgear[] = 
        {
            "SiP_m50_cap",
            "SiP_m50_cap_bent",
            "SiP_m50_cap_folded"
        };
        headgearList[] = 
        {
            "SiP_m50_cap",1,
            "SiP_m50_cap_bent",1,
            "SiP_m50_cap_folded",1
        };
        linkedItems[] = {"SiP_m50_cap","SiP_m1945_Vest_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_m50_cap","SiP_m1945_Vest_45","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "";
    };
    
    class SiP_USAF_Transport_Pilot: SiP_US_Army_Heli_Pilot
    {
        identityTypes[] = {"LanguageENG_F","Head_EURO","Head_Asian","Head_African"};
        displayName = "Transport Pilot";
        model = "WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_B10_glove.p3d";
        hiddenSelections[] = {"camo","camo2","insignia","badge","left","right"};
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Vliegerjas_B10_1_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_S31A_od7_co.paa","","","","",""};
        uniformClass = "SiP_USAF_Transport_pilot_uniform";
        allowedHeadgear[] = 
        {
            "hat_furfag_2",
            "H_SPE_US_Pilot_Cap",
            "H_SPE_US_Pilot_Cap_Khaki"
        };
        headgearList[] = 
        {
            "hat_furfag_2",1,
            "H_LIB_US_Pilot_Cap",1,
            "H_LIB_US_Pilot_Cap_Khaki",1
        };
        linkedItems[] = {"H_SPE_US_Pilot_Cap","V_SPE_US_LifeVest","vn_b_acc_rag_02","mapcas_addon_od7","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"H_SPE_US_Pilot_Cap","V_SPE_US_LifeVest","vn_b_acc_rag_02","mapcas_addon_od7","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        backpack = "B_SPE_US_TypeA3";
    };
    class SiP_USAF_Transport_Radio_Operator: SiP_USAF_Transport_Pilot
    {

        displayName = "Transport Radio Operator";
        model = "WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_S31A.p3d";
        hiddenSelections[] = {"camo","insignia","badge","left","right"};
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_S31A_od7_co.paa","","","","",""};
        uniformClass = "U_SPE_US_S31A";
        allowedHeadgear[] = 
        {
            "hat_furfag_3",
            "hat_furfag_4"
        };
        headgearList[] = 
        {
            "hat_furfag_3",1,
            "hat_furfag_4",1
        };
        linkedItems[] = {"hat_furfag_3","V_SPE_US_LifeVest","G_Scharf","SPE_GER_Headset","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"hat_furfag_3","V_SPE_US_LifeVest","G_Scharf","SPE_GER_Headset","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
    };
    
    class SiP_USAF_Fighter_Pilot: SiP_USAF_Transport_Pilot
    {
        displayName = "USAF Fighter Pilot";
        model = "WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_S31A_glove.p3d";
        hiddenSelections[] = {"camo","insignia","badge","left","right"};
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_S31A_od7_co.paa","","","","",""};
        uniformClass = "SiP_US_Fighter_pilot_uniform";
        allowedHeadgear[] = {"SiP_US_P1A_Flight_Helmet"};
        headgearList[] = {"SiP_US_P1A_Flight_Helmet",1};
        linkedItems[] = {"SiP_US_P1A_Flight_Helmet","V_SPE_US_LifeVest","G_SWDG_Face","SiP_USAF_Fighter_mask","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
        respawnLinkedItems[] = {"SiP_US_P1A_Flight_Helmet","V_SPE_US_LifeVest","G_SWDG_Face","SiP_USAF_Fighter_mask","vn_b_item_map","SPE_US_ItemCompass","SPE_US_ItemWatch"};
    };

    class SiP_ROKAF_Fighter_Pilot: SiP_USAF_Fighter_Pilot
    {
        faction = "SiP_ROK_Army";
        editorCategory = "SiP_ROK_Army_Editor_Category";
        displayName = "ROKAF Fighter Pilot";
        identityTypes[] = {"LanguageCHI_F","vn_o_asian_viet","Head_Asian"};
        genericNames = "rokmen";
    };
};

class CfgGroups
{
    class West
    {
        class SiP_US_Army
        {
            name = "US Army [Korea]";
            class US_Army_Vehicle_Crews
            {
                name = "Vehicle Crews";
                class US_Army_Tank_Crew
                {
                    name = "Tank Crew";
                    side = 1;
                    faction = "SiP_US_Army";
                    rarityGroup = 0.8;
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_tank_driver";
                        rank = "PRIVATE";
                        position[] = {0,5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_tank_gunner";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_tank_commander";
                        rank = "SERGEANT";
                        position[] = {5,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_tank_bow";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                };
                class US_Army_vehicle_Crew
                {
                    name = "Standard Vehicle Crew";
                    side = 1;
                    faction = "SiP_US_Army";
                    rarityGroup = 0.8;
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_driver";
                        rank = "PRIVATE";
                        position[] = {0,5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_gunner";
                        rank = "PRIVATE";
                        position[] = {3,0,0};
                    };
                };
            };
            class SiP_US_Army_Infantry_Squads
            {
                name = "Infantry Squads";
                class SiP_Rifle_Squad_1
                {
                    name = "Rifle Squad 1";
                    side = 1;
                    faction = "SiP_US_Army";
                    rarityGroup = 0.8;
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_Sergeant";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_Corporal";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_grenadier";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_Rifle_Squad_2: SiP_Rifle_Squad_1
                {
                    name = "Rifle Squad 2";
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_Sergeant_1stclass";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_Corporal";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_smg2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_sniper2";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_Rifle_Squad_3: SiP_Rifle_Squad_2
                {
                    name = "Rifle Squad 3";
                    class Unit0
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_Master_Sergeant";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_Sergeant";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_autorifleman";
                        rank = "CORPORAL";
                        position[] = {7,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_autorifleman";
                        rank = "CORPORAL";
                        position[] = {9,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_smg1";
                        rank = "PRIVATE";
                        position[] = {-3,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_m20_bazooka";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_grenadier";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Army_sniper1";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
            };
        };
    };
};
