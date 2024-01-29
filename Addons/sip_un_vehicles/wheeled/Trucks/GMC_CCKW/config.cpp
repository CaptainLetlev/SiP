class cfgPatches
{
    class SiP_Patch_un_trucks_GMC_CCKW
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
            "SiP_GMC_CCKW_transport_open",
            "SiP_GMC_CCKW_transport",
            "SiP_GMC_CCKW_ammo",
            "SiP_GMC_CCKW_fuel",
            "SiP_GMC_CCKW_repair",

            "SiP_GMC_CCKW_transport_open_marines",
            "SiP_GMC_CCKW_transport_marines",
            "SiP_GMC_CCKW_ammo_marines",
            "SiP_GMC_CCKW_fuel_marines",
            "SiP_GMC_CCKW_repair_marines",

            "SiP_GMC_CCKW_repair_uk"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class LIB_US_GMC_Base;
    class LIB_US_GMC_Open: LIB_US_GMC_Base
    {
        class UserActions;
    };
    class LIB_US_GMC_Tent: LIB_US_GMC_Open
    {
        class UserActions;
    };
    class LIB_US_GMC_Ammo: LIB_US_GMC_Base
    {
        class UserActions;
    };
    class LIB_US_GMC_Fuel: LIB_US_GMC_Base
    {
        class UserActions;
    };
    class LIB_US_GMC_Parm: LIB_US_GMC_Base
    {
        class UserActions;
    };
     
    class SiP_GMC_CCKW_transport_open: LIB_US_GMC_Open
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck (Open)";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        hiddenSelectionsTextures[] = {"\HQ_Trucks\textures\gmc\gmc_truck.paa","","\HQ_Trucks\textures\usa.paa","\HQ_Trucks\textures\info.paa"};
        textureList[] = {};
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
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
    class SiP_GMC_CCKW_transport: LIB_US_GMC_Tent
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        hiddenSelectionsTextures[] = {"\HQ_Trucks\textures\gmc\gmc_truck.paa","","\HQ_Trucks\textures\usa.paa","\HQ_Trucks\textures\info.paa"};
        textureList[] = {};
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
    class SiP_GMC_CCKW_ammo: LIB_US_GMC_Ammo
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck (Ammo)";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        icon = "\WW2\Assets_t\Vehicles\Icons_t\Icon_US_Gmc353_Gms_Closed_ca.paa";
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        hiddenSelectionsTextures[] = {"\HQ_Trucks\textures\gmc\gmc_truck.paa","","\HQ_Trucks\textures\usa.paa","\HQ_Trucks\textures\info.paa"};
        textureList[] = {};
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
            class _xx_SiP_springfield_5_mag
            {
                magazine = "SiP_springfield_5_mag";
                count = 25;
            };
            class _xx_SiP_carbine_15_mag
            {
                magazine = "SiP_carbine_15_mag";
                count = 30;
            };
            class _xx_SiP_carbine_30_mag
            {
                magazine = "SiP_carbine_30_mag";
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
                magazine = "SiP_m1_garand_mag";
                count = 100;
            };
            class _xx_vn_m1918_mag
            {
                magazine = "vn_m1918_mag";
                count = 25;
            };
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
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
            class _xx_vn_mx991_red
            {
                weapon = "vn_mx991_red";
                count = 1;
            };
            class _xx_SiP_m1911
            {
                weapon = "SiP_m1911";
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
            class _xx_SiP_m1918A2_bar_bipod
            {
                weapon = "SiP_m1918A2_bar_bipod";
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
    class SiP_GMC_CCKW_fuel: LIB_US_GMC_Fuel
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck (Fuel)";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        hiddenSelectionsTextures[] = {"\HQ_Trucks\textures\gmc\gmc_truck.paa","\HQ_Trucks\textures\gmc\gmc_fuel.paa","\HQ_Trucks\textures\usa.paa","\HQ_Trucks\textures\info.paa"};
        textureList[] = {};
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
    class SiP_GMC_CCKW_repair: LIB_US_GMC_Parm
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "GMC CCKW Truck (Repair)";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Trucks_Editor_Subcategory";
        vehicleClass = "SiP_Trucks_vehicle_class";
        crew = "SiP_US_Army_driver";
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        hiddenSelectionsTextures[] = {"\HQ_Trucks\textures\gmc\gmc_truck.paa","\HQ_Trucks\textures\gmc\gmc_fuel.paa","\HQ_Trucks\textures\usa.paa","\HQ_Trucks\textures\info.paa"};
        textureList[] = {};
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
    
    class SiP_GMC_CCKW_transport_open_marines: SiP_GMC_CCKW_transport_open
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_transport_marines: SiP_GMC_CCKW_transport
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_ammo_marines: SiP_GMC_CCKW_ammo
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_fuel_marines: SiP_GMC_CCKW_fuel
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };
    class SiP_GMC_CCKW_repair_marines: SiP_GMC_CCKW_repair
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
    };

    class SiP_GMC_CCKW_repair_uk: SiP_GMC_CCKW_repair
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
    };
};