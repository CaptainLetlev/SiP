class cfgPatches
{
    class SiP_Patch_un_trucks_studebaker_us6
    {
        addonRootClass = "SiP_Patch_un_motorized";
        requiredAddons[] = 
        {
            "WW2_Core_c_WW2_Core_c",
            "WW2_Assets_c_Vehicles_Wheeled_c",
            "HQ_Trucks"
        };
        units[] = 
        {
            "SiP_us6_transport_open",
            "SiP_us6_transport",
            "SiP_us6_ammo",

            "SiP_us6_transport_uk",
            "SiP_us6_ammo_uk",
        };
        weapons[] = {};
    };
};
class cfgVehicles
{
    class LIB_US6_Open;
    class LIB_US6_Tent;
    class LIB_US6_Ammo;
    class UNI_Stud_Open_G: LIB_US6_Open
    {
        class UserActions;
    };
    class UNI_Stud_Tent_G: LIB_US6_Tent
    {
        class UserActions;
    };
    class UNI_Stud_Ammo_G: LIB_US6_Ammo
    {
        class UserActions;
    };
    
    class SiP_us6_transport_open: UNI_Stud_Open_G
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Studebaker US6 (Open)";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Medium_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class UserActions: UserActions
        {
            class music_player
            {
                displayName = "$STR_VN_VEHICLE_RADIO_DN";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 0;
                radius = 2;
                priority = -99;
                condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }";
                statement = "['open'] call vn_fnc_music";
            };
        };
    };
    class SiP_us6_transport: UNI_Stud_Tent_G
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Studebaker US6";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Medium_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class UserActions: UserActions
        {
            class music_player
            {
                displayName = "$STR_VN_VEHICLE_RADIO_DN";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 0;
                radius = 2;
                priority = -99;
                condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }";
                statement = "['open'] call vn_fnc_music";
            };
        };
    };

    class SiP_us6_ammo: UNI_Stud_Ammo_G
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Studebaker US6 (Ammo)";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        weapons[] = {"SiP_Medium_Horn_weapon"}; 
        magazines[] = {"vn_ship_horn_mag"};
        class UserActions: UserActions
        {
            class music_player
            {
                displayName = "$STR_VN_VEHICLE_RADIO_DN";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 0;
                radius = 2;
                priority = -99;
                condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }";
                statement = "['open'] call vn_fnc_music";
            };
        };
        class TransportMagazines
        {
            class _xx_vn_m1903_mag
            {
                magazine = "vn_m1903_mag";
                count = 25;
            };
            class _xx_vn_carbine_15_mag
            {
                magazine = "vn_carbine_15_mag";
                count = 30;
            };
            class _xx_vn_carbine_30_mag
            {
                magazine = "vn_carbine_30_mag";
                count = 25;
            };
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 25;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
                count = 25;
            };
            class _xx_SiP_m1_garand_mag
            {
                magazine = "vn_m1_garand_mag";
                count = 100;
            };
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 25;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 10;
            };
            class _xx_SiP_M6A3_rocket
            {
                magazine = "SiP_M6A3_rocket";
                count = 20;
            };
            class _xx_SiP_M28A2_heat_rocket
            {
                magazine = "SiP_M28A2_heat_rocket";
                count = 20;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 10;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 10;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 10;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 10;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 10;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_m_wrench_01
            {
                weapon = "vn_m_wrench_01";
                count = 1;
            };
            class _xx_vn_m_shovel_01
            {
                weapon = "vn_m_shovel_01";
                count = 1;
            };
            class _xx_vn_m_axe_01
            {
                weapon = "vn_m_axe_01";
                count = 1;
            };
            class _xx_vn_m_machete_02
            {
                weapon = "vn_m_machete_02";
                count = 1;
            };
            class _xx_vn_mx991_m1911
            {
                weapon = "vn_mx991_m1911";
                count = 1;
            };
            class _xx_vn_mx991_red
            {
                weapon = "vn_mx991_red";
                count = 1;
            };
            class _xx_vn_m1911
            {
                weapon = "vn_m1911";
                count = 5;
            };
            class _xx_SiP_m1_garand
            {
                weapon = "SiP_m1_garand";
                count = 5;
            };
            class _xx_SiP_m1_carbine
            {
                weapon = "SiP_m1_carbine";
                count = 5;
            };
            class _xx_SiP_m2_carbine
            {
                weapon = "SiP_m2_carbine";
                count = 5;
            };
            class _xx_SiP_m1a1_thompson
            {
                weapon = "SiP_m1a1_thompson";
                count = 2;
            };
            class _xx_SiP_m1928a1_thompson
            {
                weapon = "SiP_m1928a1_thompson";
                count = 2;
            };
            class _xx_SiP_m1918A2_bar
            {
                weapon = "SiP_m1918A2_bar";
                count = 5;
            };
            class _xx_SiP_m1919a6
            {
                weapon = "SiP_m1919a6";
                count = 2;
            };
            class _xx_SiP_m3a1_greasegun
            {
                weapon = "SiP_m3a1_greasegun";
                count = 5;
            };
            class _xx_SiP_m1903a4_Springfield_scope
            {
                weapon = "SiP_m1903a4_Springfield_scope";
                count = 2;
            };
            class _xx_SiP_m1c_garand_scope
            {
                weapon = "SiP_m1c_garand_scope";
                count = 2;
            };
            class _xx_SiP_m1_garand_gl
            {
                weapon = "SiP_m1_garand_gl";
                count = 3;
            };
            class _xx_SiP_m1897_trenchgun
            {
                weapon = "SiP_m1897_trenchgun";
                count = 1;
            };
            class _xx_SiP_m1912_shotgun
            {
                weapon = "SiP_m1912_shotgun";
                count = 1;
            };
            class _xx_SiP_ithaca37_shotgun
            {
                weapon = "SiP_ithaca37_shotgun";
                count = 1;
            };
            class _xx_SiP_m9a1_bazooka
            {
                weapon = "SiP_m9a1_bazooka";
                count = 2;
            };
            class _xx_SiP_m20_super_bazooka
            {
                weapon = "SiP_m20_super_bazooka";
                count = 2;
            };
        };
    };
    class SiP_us6_transport_uk: SiP_us6_transport
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
    };
    class SiP_us6_ammo_uk: SiP_us6_ammo
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        class TransportMagazines
        {
            class _xx_SiP_m1_garand_mag
            {
                magazine = "vn_m1_garand_mag";
                count = 25;
            };
            class _xx_vn_carbine_15_mag
            {
                magazine = "vn_carbine_15_mag";
                count = 30;
            };
            class _xx_vn_carbine_30_mag
            {
                magazine = "vn_carbine_30_mag";
                count = 25;
            };
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 25;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 50;
            };
            class _xx_SiP_sterling_34_mag
            {
                magazine = "SiP_sterling_34_mag";
                count = 15;
            };
            class _xx_SiP_enfield_10_mag
            {
                magazine = "SiP_enfield_10_mag";
                count = 150;
            };
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 25;
            };
            class _xx_SiP_webley_6_mag
            {
                magazine = "SiP_webley_6_mag";
                count = 10;
            };
            class _xx_SiP_hp_mag
            {
                magazine = "SiP_hp_mag";
                count = 10;
            };
            class _xx_SiP_M6A3_rocket
            {
                magazine = "SiP_M6A3_rocket";
                count = 20;
            };
            class _xx_SiP_M28A2_heat_rocket
            {
                magazine = "SiP_M28A2_heat_rocket";
                count = 20;
            };
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 10;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 10;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 10;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 10;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 10;
            };
        };
        class TransportWeapons
        {
            class _xx_vn_m_wrench_01
            {
                weapon = "vn_m_wrench_01";
                count = 1;
            };
            class _xx_vn_m_shovel_01
            {
                weapon = "vn_m_shovel_01";
                count = 1;
            };
            class _xx_vn_m_axe_01
            {
                weapon = "vn_m_bolo_01";
                count = 1;
            };
            class _xx_vn_mx991_red
            {
                weapon = "vn_mx991_red";
                count = 1;
            };
            class _xx_SiP_m1_garand
            {
                weapon = "SiP_m1_garand";
                count = 5;
            };
            class _xx_SiP_m1_carbine
            {
                weapon = "SiP_m1_carbine";
                count = 5;
            };
            class _xx_SiP_sten_mkv
            {
                weapon = "SiP_sten_mkv";
                count = 5;
            };
            class _xx_SiP_m1a1_thompson
            {
                weapon = "SiP_m1a1_thompson";
                count = 2;
            };
            class _xx_SiP_bren
            {
                weapon = "SiP_bren";
                count = 5;
            };
            class _xx_SiP_m1928a1_thompson
            {
                weapon = "SiP_m1928a1_thompson";
                count = 5;
            };
            class _xx_SiP_lee_enfield_no4_mkI_sniper_scope
            {
                weapon = "SiP_lee_enfield_no4_mkI_sniper_scope";
                count = 2;
            };
            class _xx_SiP_m1c_garand_scope
            {
                weapon = "SiP_m1c_garand_scope";
                count = 2;
            };
            class _xx_SiP_m1897_trenchgun
            {
                weapon = "SiP_m1897_trenchgun";
                count = 1;
            };
            class _xx_SiP_m1912_shotgun
            {
                weapon = "SiP_m1912_shotgun";
                count = 1;
            };
            class _xx_SiP_ithaca37_shotgun
            {
                weapon = "SiP_ithaca37_shotgun";
                count = 1;
            };
            class _xx_SiP_m9a1_bazooka
            {
                weapon = "SiP_m9a1_bazooka";
                count = 2;
            };
            class _xx_SiP_m20_super_bazooka
            {
                weapon = "SiP_m20_super_bazooka";
                count = 2;
            };
            class _xx_SiP_Browning_HiPower
            {
                weapon = "SiP_Browning_HiPower";
                count = 4;
            };
            class _xx_SiP_webley_mkvi
            {
                weapon = "SiP_webley_mkvi";
                count = 4;
            };
        };
    };
};
