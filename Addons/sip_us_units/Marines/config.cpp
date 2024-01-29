class cfgPatches
{
    class SiP_Patch_us_Marine_units
    {
        Name = "Suicide Is Painless - Korean War Mod - US Marine Units";
        addonRootClass = "SiP_Patch_us_units";
        requiredAddons[] = 
        {
            "A3_Data_F",
            "A3_Characters_F",
            "WW2_Assets_c_Characters_Americans_c_US_Army",
            "simc_ua_inf_44",
            "SiP_Patch_us_army_units"
        };
        units[] = 
        {
            "SiP_US_Marines_rifleman1",
            "SiP_US_Marines_rifleman2",
            "SiP_US_Marines_smg1",
            "SiP_US_Marines_smg2",
            "SiP_US_Marines_flamer",
            "SiP_US_Marines_autorifleman",
            "SiP_US_Marines_machinegunner",
            "SiP_US_Marines_sniper1",
            "SiP_US_Marines_sniper2",
            "SiP_US_Marines_m9_bazooka",
            "SiP_US_Marines_m20_bazooka",
            "SiP_US_Marines_shotgunner1",
            "SiP_US_Marines_shotgunner2",
            "SiP_US_Marines_grenadier",
            "SiP_US_Marines_rto",
            "SiP_US_Marines_NCO1",
            "SiP_US_Marines_NCO2",
            "SiP_US_Marines_officer",
            "SiP_US_Marines_staff_officer",
            "SiP_US_Marines_driver",
            "SiP_US_Marines_gunner",
            "SiP_US_Marines_tank_driver",
            "SiP_US_Marines_tank_bow",
            "SiP_US_Marines_tank_gunner",
            "SiP_US_Marines_tank_commander",
            "SiP_USN_Fighter_Pilot"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
    class SiP_US_Army_rifleman1;
    class SiP_US_Army_tank_driver;
    class SiP_USAF_Fighter_Pilot;

    class SiP_US_Marines_rifleman1: SiP_US_Army_rifleman1
    {
        displayName = "Marine (Garand)";
        identityTypes[] = {"LanguageENG_F","Head_EURO","Head_African","Head_Asian","LIB_Glasses"};
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        model = "\simc_mc_44\p41_wool.p3d";
        hiddenSelections[] = {"camo","camo2","rank","d_pocket_r"};
        hiddenSelectionsTextures[] = {"\simc_mc_44\data\mc_p41_tops_1_co.paa","\simc_mc_44\data\mc_p41_lows_1_co.paa","",""};
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
        allowedHeadgear[] = {"H_Simc_M1_tan_cl_2",1,"H_Simc_M1_muggen_3",1};
        headgearList[] = {"H_Simc_M1_tan_cl_2",0.5,"H_Simc_M1_muggen_3",0.5};
        LIB_RandomizeHeadgear = 0;
        linkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_USMC_Vest_Cartridge_nife","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_simc_US_Bandoleer_left"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_USMC_Vest_Cartridge_nife","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_simc_US_Bandoleer_left"};
        items[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1_garand","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "B_simc_USMC51_M41_flat_M43_roll";
        uniformClass = "U_Simc_P44";
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
    class SiP_US_Marines_rifleman2: SiP_US_Marines_rifleman1
    {
        displayName = "Marine (Carbine)";
        weapons[] = {"SiP_m1_carbine","Throw","Put"};
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
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag"
        };
        respawnWeapons[] = {"SiP_m1_carbine","Throw","Put"};
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
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_mag"
        };
        linkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_61","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_simc_US_Bandoleer_left"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_61","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_simc_US_Bandoleer_left"};
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
    };
    class SiP_US_Marines_smg1: SiP_US_Marines_rifleman1
    {
        displayName = "SMG-Marine (Thompson)";
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
        linkedItems[] = {"H_Simc_M1_tan_cl_2","SiP_m1945_Vest_smg","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_sekop_43_OD7"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","SiP_m1945_Vest_smg","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_sekop_43_OD7"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "B_simc_USMC51_M41_flat_roll";
    };
    class SiP_US_Marines_smg2: SiP_US_Marines_smg1
    {
        displayName = "SMG-Marine (Grease Gun)";
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
    };
    class SiP_US_Marines_flamer: SiP_US_Marines_smg2
    {
        displayName = "Flamethrower Marine";
        weapons[] = {"SiP_M2_Flamethrower","Throw","Put"};
        magazines[] = {};
        respawnWeapons[] = {"SiP_M2_Flamethrower","Throw","Put"};
        respawnMagazines[] = {};
        linkedItems[] = {"H_Simc_M1_tan_cl_2","SiP_m1945_Vest_shotgun","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_sekop_43_OD7"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","SiP_m1945_Vest_shotgun","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_sekop_43_OD7"};
        backpack = "B_LIB_US_M2Flamethrower";
    };
    class SiP_US_Marines_autorifleman: SiP_US_Marines_smg1
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
            "vn_m1918_mag"
        };
        linkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_USMC_Vest_bar_OD7","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_sekop_43_OD7"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_USMC_Vest_bar_OD7","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_sekop_43_OD7"};
        backpack = "SiP_m1941_marine_backpack_bar";
    };
    class SiP_US_Marines_machinegunner: SiP_US_Marines_smg1
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
        linkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_61_60_2","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_sekop_43_OD7"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_61_60_2","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_sekop_43_OD7"};
        backpack = "SiP_m1941_marine_backpack_mg";
    };
    class SiP_US_Marines_sniper1: SiP_US_Marines_rifleman1
    {
        displayName = "Sniper (Springfield)";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = {"SiP_m1903a4_Springfield_scope","SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1903a4_Springfield_scope","SiP_m1911","Throw","Put"};
        respawnMagazines[] =
        {
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_springfield_5_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        linkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_USMC_Vest_Cartridge_GP","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_simc_US_Bandoleer_left"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","V_Simc_USMC_Vest_Cartridge_GP","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","G_simc_US_Bandoleer_left"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "B_simc_USMC51_M41_M43_roll";
    };
    class SiP_US_Marines_sniper2: SiP_US_Marines_sniper1
    {
        displayName = "Sniper (Garand)";
        weapons[] = {"SiP_m1c_garand_scope","SiP_m1911","Throw","Put"};
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
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1c_garand_scope","SiP_m1911","Throw","Put"};
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
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
    };
    class SiP_US_Marines_m9_bazooka: SiP_US_Marines_rifleman2
    {
        displayName = "Bazooka Soldier (M9)";
        icon = "iconManAT";
        role = "MissileSpecialist";
        cost = 190000;
        threat[] = {0.7,0.7,0.1};
        weapons[] = {"SiP_m1_carbine","SiP_m9a1_bazooka","Throw","Put"};
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
            "SiP_M6A3_rocket"
        };
        respawnWeapons[] = {"SiP_m1_carbine","SiP_m9a1_bazooka","Throw","Put"};
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
            "SiP_M6A3_rocket"
        };
        linkedItems[] = {"SiP_M1_Helmet_NS","SiP_m1945_Vest_rifleman2","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"SiP_M1_Helmet_NS","SiP_m1945_Vest_rifleman2","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1945_packboard_m9bazooka";
    };
    class SiP_US_Marines_m20_bazooka: SiP_US_Marines_m9_bazooka
    {
        displayName = "Bazooka Soldier (M20)";
        weapons[] = {"SiP_m2_carbine","SiP_m20_super_bazooka","Throw","Put"};
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
            "SiP_M28A2_heat_rocket"
        };
        respawnWeapons[] = {"SiP_m2_carbine","SiP_m20_super_bazooka","Throw","Put"};
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
            "SiP_M28A2_heat_rocket"
        };
        backpack = "SiP_m1945_packboard_m20bazooka";
    };
    class SiP_US_Marines_shotgunner1: SiP_US_Marines_rifleman1
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
        linkedItems[] = {"H_Simc_M1_tan_cl_2","SiP_m1945_Vest_shotgun","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","SiP_m1945_Vest_shotgun","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_m1897","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "SiP_m1941_marine_backpack_shotgun";
    };
    class SiP_US_Marines_shotgunner2: SiP_US_Marines_shotgunner1
    {
        displayName = "Shotgunner (M1912)";
        weapons[] = {"SiP_m1912_shotgun","Throw","Put"};
        respawnWeapons[] = {"SiP_m1912_shotgun","Throw","Put"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
    };
    class SiP_US_Marines_grenadier: SiP_US_Marines_rifleman1
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
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m1a2_frag_mag",
            "vn_22mm_m1a2_frag_mag",
            "vn_22mm_m1a2_frag_mag",
            "vn_22mm_m1a2_frag_mag",
            "vn_22mm_m1a2_frag_mag"
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
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m17_frag_mag",
            "vn_22mm_m1a2_frag_mag",
            "vn_22mm_m1a2_frag_mag",
            "vn_22mm_m1a2_frag_mag",
            "vn_22mm_m1a2_frag_mag",
            "vn_22mm_m1a2_frag_mag"
        };
        backpack = "SiP_m1941_marine_backpack_grenadier";
    };
    class SiP_US_Marines_rto: SiP_US_Marines_smg2
    {
        displayName = "Radio Operator";
        icon = "iconManRTO";
        cost = 400000;
        backpack = "SiP_m1945_packboard_prc10";
    };
    class SiP_US_Marines_NCO1: SiP_US_Marines_rifleman1
    {
        displayName = "NCO (Thompson)";
        icon = "iconManLeader";
        cost = 200000;
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
            "SiP_m1911_mag"
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
            "SiP_m1911_mag"
        };
        linkedItems[] = {"H_Simc_M1_muggen_3","V_Simc_USMC_Vest_SMG_OD7_sekop","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"H_Simc_M1_muggen_3","V_Simc_USMC_Vest_SMG_OD7_sekop","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1941_marine_backpack_smg_pistol";
    };
    class SiP_US_Marines_NCO2: SiP_US_Marines_NCO1
    {
        displayName = "NCO (Carbine)";
        weapons[] = {"SiP_m2_carbine","Throw","Put"};
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
            "SiP_mk2_grenade_mag",
            "SiP_mk2_grenade_mag"
        };
        respawnWeapons[] = {"SiP_m2_carbine","Throw","Put"};
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
            "SiP_mk2_grenade_mag",
            "SiP_mk2_grenade_mag"
        };
        linkedItems[] = {"H_Simc_M1_muggen_3","V_Simc_USMC_Vest_SMG_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"H_Simc_M1_muggen_3","V_Simc_USMC_Vest_SMG_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1941_marine_backpack_pistol";
    };
    class SiP_US_Marines_officer: SiP_US_Marines_NCO1
    {
        displayName = "Officer";
        icon = "iconManOfficer";
        cost = 450000;
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
        linkedItems[] = {"H_Simc_M1_muggen_3","SiP_m1945_Vest_rifleman2_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"H_Simc_M1_muggen_3","SiP_m1945_Vest_rifleman2_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        backpack = "SiP_m1941_marine_backpack_pistol";
    };
    class SiP_US_Marines_staff_officer: SiP_US_Marines_officer
    {
        displayName = "Staff Officer";
        cost = 650000;
        model = "\simc_uaf_51\suitpack_hbt_47.p3d";
        hiddenSelections[] = {"camo","rank","insignia","nom"};
        hiddenSelectionsTextures[] = {"\simc_uaf_51\data\hbt_47_co.paa",""};
        weapons[] = {"SiP_m1911","Throw","Put"};
        magazines[] = 
        {
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        respawnWeapons[] = {"SiP_m1911","Throw","Put"};
        respawnMagazines[] = 
        {
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
        headgearList[] = {"cap_hbt"};
        linkedItems[] = {"cap_hbt","SiP_m1945_Vest_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"cap_hbt","SiP_m1945_Vest_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        uniformClass = "SiP_M1947_uniform";
        backpack = "";
    };
    class SiP_US_Marines_driver: SiP_US_Marines_rifleman1
    {
        displayName = "Driver";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        weapons[] = {"SiP_m1_carbine","Throw","Put"};
        allowedHeadgear[] = {"cap_hbt"};
        headgearList[] = {"cap_hbt",1};
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
        respawnWeapons[] = {"SiP_m1_carbine","Throw","Put"};
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
        linkedItems[] = 
        {
            "cap_hbt",
            "V_Simc_61",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        respawnLinkedItems[] =
        {
            "cap_hbt",
            "V_Simc_61",
            "vn_b_item_map",
            "vn_b_item_compass",
            "vn_b_item_watch"
        };
        items[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_carbine","vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "";
    };
    class SiP_US_Marines_gunner: SiP_US_Marines_smg2
    {
        displayName = "Gunner";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        linkedItems[] = {"H_Simc_M1_tan_cl_2","SiP_m1945_Vest_smg","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        respawnLinkedItems[] = {"H_Simc_M1_tan_cl_2","SiP_m1945_Vest_smg","vn_b_item_map","vn_b_item_compass","vn_b_item_watch"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        backpack = "";
    };
    class SiP_US_Marines_tank_driver: SiP_US_Army_tank_driver
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        weapons[] = {"SiP_m3a1_greasegun","Throw","Put"};
        respawnWeapons[] = {"SiP_m3a1_greasegun","Throw","Put"};
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
        headgearList[] = {"H_LIB_US_Helmet_Tank"};
        linkedItems[] = {"H_LIB_US_Helmet_Tank","SiP_m1945_Vest_smg","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","vn_b_item_radio_urc10"};
        respawnLinkedItems[] = {"H_LIB_US_Helmet_Tank","SiP_m1945_Vest_smg","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","vn_b_item_radio_urc10"};
        items[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        respawnItems[] = {"vn_b_item_firstaidkit","vn_b_item_firstaidkit","vn_b_item_firstaidkit"};
        uniformClass = "U_Simc_P44_trop";
        backpack = "B_simc_US_GP_left_OD7";
    };
    class SiP_US_Marines_tank_bow: SiP_US_Marines_tank_driver
    {
        displayName = "Tank Bow Gunner";
        weapons[] = {"SiP_m1_carbine","Throw","Put"};
        respawnWeapons[] = {"SiP_m1_carbine","Throw","Put"};
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
            "SiP_carbine_15_mag"
        };
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
            "SiP_carbine_15_mag"
        };
        linkedItems[] = {"H_LIB_US_Helmet_Tank","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","vn_b_item_radio_urc10"};
        respawnLinkedItems[] = {"H_LIB_US_Helmet_Tank","SiP_m1944_Vest_carbine","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","vn_b_item_radio_urc10"};
    };
    class SiP_US_Marines_tank_gunner: SiP_US_Marines_tank_bow
    {
        displayName = "Tank Gunner";
    };
    class SiP_US_Marines_tank_commander: SiP_US_Marines_tank_bow
    {
        displayName = "Tank Commander";
        headgearList[] = {"cap_hbt"};
        linkedItems[] = {"cap_hbt","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","vn_b_item_radio_urc10"};
        respawnLinkedItems[] = {"cap_hbt","SiP_m1945_Vest_gpbag_45","vn_b_item_map","vn_b_item_compass","vn_b_item_watch","vn_b_item_radio_urc10"};
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
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
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
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag",
            "SiP_m1911_mag"
        };
    };

    class SiP_USN_Fighter_Pilot: SiP_USAF_Fighter_Pilot
    {
        displayName = "USN Fighter Pilot";
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        model = "WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_6552_glove.p3d";
		hiddenSelections[] = {"camo","camo2","insignia","badge","left","right"};
		hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_Vliegerjas_6552_co.paa","\WW2\SPE_Assets_t\Characters\Americans_t\US_Army\US_S31A_od7_co.paa","","","","",""};
        uniformClass = "SiP_USN_Fighter_pilot_uniform";
    };
};

class CfgGroups
{
    class West
    {
        class SiP_US_Marines
        {
            name = "US Marines [Korea]";
            class SiP_1MD_Infantry_Squads
            {
                name = "1st Marine Division Squads";
                class SiP_1MD_Rifle_Squad_1
                {
                    name = "Rifle Squad 1";
                    side = 1;
                    faction = "SiP_US_Marines";
                    rarityGroup = 0.8;
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_NCO1";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_grenadier";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_smg2";
                        rank = "CORPORAL";
                        position[] = {-3,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman2";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit9
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                    class Unit10
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_NCO2";
                        rank = "CORPORAL";
                        position[] = {-3,0,0};
                    };
                    class Unit11
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_sniper2";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit12
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_m9_bazooka";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit13
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_1MD_Rifle_Squad_2
                {
                    name = "Rifle Squad 2";
                    side = 1;
                    faction = "SiP_US_Marines";
                    rarityGroup = 0.8;
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_NCO2";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_grenadier";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_NCO2";
                        rank = "CORPORAL";
                        position[] = {-3,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit9
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                    class Unit10
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_grenadier";
                        rank = "CORPORAL";
                        position[] = {-3,0,0};
                    };
                    class Unit11
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_shotgunner1";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit12
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit13
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
                class SiP_1MD_Rifle_Squad_3
                {
                    name = "Rifle Squad 3";
                    side = 1;
                    faction = "SiP_US_Marines";
                    rarityGroup = 0.8;
                    class Unit1
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_shotgunner1";
                        rank = "SERGEANT";
                        position[] = {0,5,0};
                    };
                    class Unit2
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_grenadier";
                        rank = "CORPORAL";
                        position[] = {3,0,0};
                    };
                    class Unit3
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_smg1";
                        rank = "PRIVATE";
                        position[] = {5,0,0};
                    };
                    class Unit4
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {7,0,0};
                    };
                    class Unit5
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {9,0,0};
                    };
                    class Unit6
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_smg2";
                        rank = "CORPORAL";
                        position[] = {-3,0,0};
                    };
                    class Unit7
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit8
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_m20_bazooka";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit9
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                    class Unit10
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_smg2";
                        rank = "CORPORAL";
                        position[] = {-3,0,0};
                    };
                    class Unit11
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {-5,0,0};
                    };
                    class Unit12
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_rifleman1";
                        rank = "PRIVATE";
                        position[] = {-7,0,0};
                    };
                    class Unit13
                    {
                        side = 1;
                        vehicle = "SiP_US_Marines_autorifleman";
                        rank = "PRIVATE";
                        position[] = {-9,0,0};
                    };
                };
            };
        };
    };
};