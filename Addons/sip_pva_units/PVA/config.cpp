class cfgPatches
{
    class SiP_Patch_pva_units
    {
        Name = "Suicide Is Painless - Korean War Mod - People's Volunteer Army Units";
        addonRootClass = "SiP_Patch_PVA";
        requiredAddons[] = 
        {
            "characters_f_vietnam",
            "characters_f_vietnam_02",
            "characters_f_vietnam_03",
            "WW2_Assets_c_Characters_Soviets_c_SOV_RKKA"
        };
        units[] = {"SiP_PVA_rifleman1","SiP_PVA_rifleman2","SiP_PVA_rifleman3","SiP_PVA_rifleman4","SiP_PVA_rifleman5","SiP_PVA_rifleman6","SiP_PVA_rifleman7","SiP_PVA_rifleman8","SiP_PVA_rifleman9","SiP_PVA_smg1","SiP_PVA_smg2","SiP_PVA_smg3","SiP_PVA_smg4","SiP_PVA_machinegunner","SiP_PVA_machinegunner2","SiP_PVA_sniper","SiP_PVA_NCO","SiP_PVA_Officer","SiP_PVA_driver","SiP_PVA_gunner","SiP_PVA_tank_crew","SiP_PVA_tank_commander"};
        weapons[] = {};
    };
};

class CfgVehicles
{
    class LIB_SOV_Soldier_base;
    class SiP_PVA_rifleman1: LIB_SOV_Soldier_base
    {
        displayName = "Rifleman (Mosin)";
        identityTypes[] = {"LanguageCHI_F","vn_o_asian_viet","Head_Asian"};
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        editorSubcategory = "SiP_Infantry_Editor_Subcategory";
        editorPreview = "";
        portrait = "";
        scope = 2;
        side = 0;
        accuracy = 3.9;
        genericNames = "ChineseMen";
        model = "\EAW_Chinese_Infantry\EAW_Chinese_Uniform_1_Training.p3d";
        hiddenSelections[] = {"Camo1","Camo2","Badge","insignia"};
        hiddenSelectionsTextures[] = {"eaw_chinese_infantry\data\eaw_NRA_Jacket_Tan_co.paa","eaw_chinese_infantry\data\eaw_NRA_pants_Tan_co.paa",""};
        role = "Rifleman";
        icon = "iconManRifleman";
        weapons[] = {"SiP_mosin_m9130","Throw","Put"};
        magazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
        respawnWeapons[] = {"SiP_mosin_m9130","Throw","Put"};
        respawnMagazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
        allowedHeadgear[] = {"SiP_type56_cap2"};
        headgearList[] = {"SiP_type56_cap2",1};
        linkedItems[] = {"SiP_type56_cap2","EAW_Chinese_Bandolier_Rifle"};
        respawnLinkedItems[] = {"SiP_type56_cap2","EAW_Chinese_Bandolier_Rifle"};
        items[] = {"vn_o_item_firstaidkit"};
        respawnItems[] = {"vn_o_item_firstaidkit"};
        backpack = "SiP_PVA_backpack";
        uniformClass = "SiP_PVA_Uniform";
    };
    class SiP_PVA_rifleman2: SiP_PVA_rifleman1
    {
        displayName = "Rifleman (SVT)";
        weapons[] = {"SiP_svt40","Throw","Put"};
        magazines[] = {"SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag"};
        respawnWeapons[] = {"SiP_svt40","Throw","Put"};
        respawnMagazines[] = {"SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag"};
        backpack = "SiP_PVA_backpack_svt";
    };
    class SiP_PVA_rifleman3: SiP_PVA_rifleman1
    {
        displayName = "Rifleman (Type 99)";
        weapons[] = {"SiP_type99","Throw","Put"};
        magazines[] = {"SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag"};
        respawnWeapons[] = {"SiP_type99","Throw","Put"};
        respawnMagazines[] = {"SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag"};
    };
    class SiP_PVA_rifleman4: SiP_PVA_rifleman3
    {
        displayName = "Rifleman (Type 30)";
        weapons[] = {"SiP_type30","Throw","Put"};
        respawnWeapons[] = {"SiP_type30","Throw","Put"};
    };
    class SiP_PVA_rifleman5: SiP_PVA_rifleman3
    {
        displayName = "Rifleman (Type 38)";
        weapons[] = {"SiP_type38","Throw","Put"};
        respawnWeapons[] = {"SiP_type38","Throw","Put"};
    };
    class SiP_PVA_rifleman6: SiP_PVA_rifleman3
    {
        displayName = "Rifleman (Type 97)";
        weapons[] = {"SiP_type97","Throw","Put"};
        respawnWeapons[] = {"SiP_type97","Throw","Put"};
    };
    class SiP_PVA_rifleman7: SiP_PVA_rifleman1
    {
        displayName = "Rifleman (Kar98)";
        weapons[] = {"SiP_kar98k","Throw","Put"};
        magazines[] = {"vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag"};
        respawnWeapons[] = {"SiP_kar98k","Throw","Put"};
        respawnMagazines[] = {"vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag","vn_k98k_mag"};
    };
    class SiP_PVA_rifleman8: SiP_PVA_rifleman7
    {
        displayName = "Rifleman (Hanyang 88)";
        weapons[] = {"SiP_Hanyang88","Throw","Put"};
        respawnWeapons[] = {"SiP_Hanyang88","Throw","Put"};
    };
    class SiP_PVA_rifleman9: SiP_PVA_rifleman7
    {
        displayName = "Rifleman (Type 24)";
        weapons[] = {"SiP_Type24_rifle","Throw","Put"};
        respawnWeapons[] = {"SiP_Type24_rifle","Throw","Put"};
    };
    
    class SiP_PVA_smg1: SiP_PVA_rifleman1
    {
        displayName = "SMG-Soldier (PPSh)";
        cost = 115000;
        threat[] = {0.7,0.1,0.1};
        icon = "iconManSMG";
        role = "Assault";
        weapons[] = {"SiP_ppsh41","Throw","Put"};
        magazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag"};
        respawnWeapons[] = {"SiP_ppsh41","Throw","Put"};
        respawnMagazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag"};
        linkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_ppsh_belt_nvg_slot"};
        respawnLinkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_ppsh_belt_nvg_slot"};
        backpack = "SiP_PVA_backpack_PPSh";
    };
    class SiP_PVA_smg2: SiP_PVA_smg1
    {
        displayName = "SMG-Soldier (PPS)";
        weapons[] = {"SiP_pps43","Throw","Put"};
        magazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag"};
        respawnWeapons[] = {"SiP_pps43","Throw","Put"};
        respawnMagazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag"};
        linkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_pps_belt_nvg_slot"};
        respawnLinkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_pps_belt_nvg_slot"};
    };
    class SiP_PVA_smg3: SiP_PVA_smg2
    {
        displayName = "SMG-Soldier (Type 100)";
        weapons[] = {"SiP_type100","Throw","Put"};
        magazines[] = {"SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag"};
        respawnWeapons[] = {"SiP_type100","Throw","Put"};
        respawnMagazines[] = {"SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag","SiP_type100_30_mag"};
    };
    class SiP_PVA_smg4: SiP_PVA_smg3
    {
        displayName = "SMG-Soldier (Thompson)";
        weapons[] = {"SiP_m1_thompson","Throw","Put"};
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag"};
        respawnWeapons[] = {"SiP_m1_thompson","Throw","Put"};
        respawnMagazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag","vn_m1a1_30_mag"};
    };
    
    class SiP_PVA_machinegunner: SiP_PVA_smg1
    {
        displayName = "Machinegunner (DP28)";
        icon = "iconManMG";
        role = "MachineGunner";
        cost = 125000;
        threat[] = {1,0.1,0.4};
        weapons[] = {"SiP_dp28","Throw","Put"};
        magazines[] = {"vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag"};
        respawnWeapons[] = {"SiP_dp28","Throw","Put"};
        respawnMagazines[] = {"vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag"};
        linkedItems[] = {"SiP_type56_cap2","EAW_Chinese_Bandolier_Rifle_Grey_Alt"};
        respawnLinkedItems[] = {"SiP_type56_cap2","EAW_Chinese_Bandolier_Rifle_Grey_Alt"};
        backpack = "SiP_PVA_backpack_dp28";
    };
    class SiP_PVA_machinegunner2: SiP_PVA_machinegunner
    {
        displayName = "Machinegunner (ZB26)";
        weapons[] = {"SiP_ZB26","Throw","Put"};
        magazines[] = {"SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag"};
        respawnWeapons[] = {"SiP_ZB26","Throw","Put"};
        respawnMagazines[] = {"SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag"};
        linkedItems[] = {"SiP_type56_cap2","EAW_ZB_Bandolier"};
        respawnLinkedItems[] = {"SiP_type56_cap2","EAW_ZB_Bandolier"};
        backpack = "SiP_PVA_backpack_ZB26";
    };
    
    class SiP_PVA_sniper: SiP_PVA_rifleman1
    {
        displayName = "Sniper";
        role = "Marksman";
        cost = 350000;
        accuracy = 3.9;
        weapons[] = {"SiP_mosin_pu","Throw","Put"};
        respawnWeapons[] = {"SiP_mosin_pu","Throw","Put"};
        backpack = "SiP_PVA_backpack";
    };
    
    class SiP_PVA_nco: SiP_PVA_smg2
    {
        displayName = "NCO";
        icon = "iconManLeader";
        cost = 115000;
        weapons[] = {"SiP_pps43","SiP_tt33","Throw","Put"};
        magazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        respawnWeapons[] = {"SiP_pps43","Throw","Put"};
        respawnMagazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        linkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_pps_pistol_belt_nvg_slot"};
        respawnLinkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_pps_pistol_belt_nvg_slot"};
        backpack = "SiP_PVA_backpack_PPS_pistol";
    };
    class SiP_PVA_Officer: SiP_PVA_nco
    {
        displayName = "Officer";
        icon = "iconManOfficer";
        cost = 600000;
        model = "\EAW_Chinese_Infantry\EAW_Chinese_Uniform_1_Officer.p3d";
        hiddenSelections[] = {"Camo1","Camo2","Badge","insignia"};
        hiddenSelectionsTextures[] = {"eaw_chinese_infantry\data\eaw_NRA_Jacket_Tan_co.paa","eaw_chinese_infantry\data\eaw_NRA_pants_Tan_co.paa",""};
        weapons[] = {"SiP_tt33","Throw","Put"};
        magazines[] = {"vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        respawnWeapons[] = {"SiP_tt33","Throw","Put"};
        respawnMagazines[] = {"vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        linkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_pistol_nvg_slot"};
        respawnLinkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_pistol_nvg_slot"};
        backpack = "EAW_Bedroll_2_Brown";
        uniformClass = "SiP_PVA_Officer_Uniform";
    };
    class SiP_PVA_gunner: SiP_PVA_smg1
    {
        displayName = "Gunner";
        accuracy = 3.9;
        icon = "iconMan";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        weapons[] = {"SiP_ppsh41","Throw","Put"};
        magazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
        respawnWeapons[] = {"SiP_ppsh41","Throw","Put"};
        respawnMagazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
        linkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_pps_belt_nvg_slot"};
        respawnLinkedItems[] = {"SiP_type56_cap2","SiP_PVA_fieldbelt","SiP_PVA_pps_belt_nvg_slot"};
        backpack = "SiP_PVA_backpack_PPSh";
    };
    class SiP_PVA_Driver: SiP_PVA_rifleman1
    {
        displayName = "Driver";
        icon = "iconMan";
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        weapons[] = {"SiP_mosin_m38","Throw","Put"};
        magazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
        respawnWeapons[] = {"SiP_mosin_m38","Throw","Put"};
        respawnMagazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
        linkedItems[] = {"SiP_type56_cap2","EAW_Chinese_Bandolier_Rifle"};
        respawnLinkedItems[] = {"SiP_type56_cap2","EAW_Chinese_Bandolier_Rifle"};
        backpack = "SiP_PVA_backpack";
    };
    
    class SiP_PVA_tank_crew: SiP_PVA_rifleman1
    {
        displayName = "Tank Crew";
        uniformClass = "SiP_PVA_Uniform_Winter";
        model = "\NORTH\NF_Uniforms\Telogreika\Telogreika_obr43.p3d";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_pva_gear\uniforms\data\textures\telogreika2.paa","\NORTH\NF_SOV_Uniforms\data\Obr43_gimnasterka\infantry\Obr43_Gimnasterka_1_CO"};
        role = "Crewman";
        icon = "iconManTankcrew";
        cost = 90000;
        camouflage = 1.6;
        editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
        weapons[] = {"SiP_ppsh41","Throw","Put"};
        magazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
        respawnweapons[] = {"SiP_ppsh41","Throw","Put"};
        respawnmagazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
        backpack = "";
        headgearList[] = {"H_NORTH_SOV_Tankerhelmet_dustgoggles"};
        linkedItems[] = {"H_NORTH_SOV_Tankerhelmet_dustgoggles","V_NORTH_SOV_Belt_Late_SMG_3"};
        respawnLinkedItems[] = {"H_NORTH_SOV_Tankerhelmet_dustgoggles","V_NORTH_SOV_Belt_Late_SMG_3"};
    };
    class SiP_PVA_tank_commander: SiP_PVA_tank_crew
    {
        displayName = "Tank Commander";
        model = "\NORTH\NF_Uniforms\Telogreika\Telogreika_obr43.p3d";
        uniformClass = "U_NORTH_SOV_Obr43_W_Telogreika_Staff_Sergeant";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_pva_gear\uniforms\data\textures\telogreika2.paa","\NORTH\NF_SOV_Uniforms\data\Obr43_gimnasterka\infantry\Obr43_Gimnasterka_starshiy_serzhant_1_CO"};
        weapons[] = {"SiP_ppsh41","SiP_tt33","Throw","Put"};
        magazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        respawnweapons[] = {"SiP_ppsh41","SiP_tt33","Throw","Put"};
        respawnmagazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
        headgearList[] = {"vn_o_helmet_tsh3_01"};
        linkedItems[] = {"vn_o_helmet_tsh3_01","V_NORTH_SOV_Belt_Pistol_5"};
        respawnLinkedItems[] = {"vn_o_helmet_tsh3_01","V_NORTH_SOV_Belt_Pistol_5"};
    };
};