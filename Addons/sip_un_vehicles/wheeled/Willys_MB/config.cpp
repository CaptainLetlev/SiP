class cfgPatches
{
    class SiP_Patch_willys_mb
    {
        addonRootClass = "SiP_Patch_un_motorized";
        requiredAddons[] = 
        {
            "WW2_Core_c_WW2_Core_c",
            "WW2_Assets_c_Vehicles_Wheeled_c",
            "Willys_HQ"
        };
        units[] = 
        {
            "SiP_Willys_MB",
            "SiP_Willys_MB_mg",
            "SiP_Willys_MB_roof",
            "SiP_Willys_MB_stretcher",
            
            "SiP_Willys_MB_marines",
            "SiP_Willys_MB_mg_marines",
            "SiP_Willys_MB_roof_marines",
            "SiP_Willys_MB_stretcher_marines",

            "SiP_Willys_MB_UK",
            "SiP_Willys_MB_mg_UK",
            "SiP_Willys_MB_roof_UK",
            "SiP_Willys_MB_stretcher_UK"
        };
        weapons[] = 
        {
            "SiP_Jeep_Horn"
        };
    };
};

class cfgVehicles
{
    class LIB_US_Willys_MB;
    class LIB_US_Willys_MB_M1919_base;
    class LIB_US_Willys_MB_Hood;
    class LIB_US_Willys_MB_Ambulance;
    class LIB_US_Willys_MB_M1919: LIB_US_Willys_MB_M1919_base
    {
        class Turrets;
    };

    class UNI_US_Willys_MB_M1919_G: LIB_US_Willys_MB_M1919
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class UserActions;
        class EventHandlers;
    };
    class UNI_US_Willys_MB_G: LIB_US_Willys_MB
    {
        class UserActions;
        class EventHandlers;
    };
    class UNI_US_Willys_MB_Hood_G: LIB_US_Willys_MB_Hood
    {
        class UserActions;
        class EventHandlers;
    };
    class UNI_US_Willys_MB_Ambulance_G: LIB_US_Willys_MB_Ambulance
    {
        class UserActions;
        class EventHandlers;
    };

    class SiP_Willys_MB_mg: UNI_US_Willys_MB_M1919_G
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB (MG)";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        crew = "SiP_US_Army_driver";
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
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
        class textureSources
        {
            class Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
                factions[] = {"SiP_US_Army","SiP_US_Marines"};
            };
            class Willys_DarkHood_ISH_ISR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_ISH_SR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_ISH_SR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_SH_ISR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_SH_ISR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_SH_SR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_SH_SR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_LightHood_ISH_ISR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_ISR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_SR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_SR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_ISR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_ISR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_SR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_SR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };

            class Willys_DarkHood_ISH_ISR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Olive Drab Invasion Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
                factions[] = {"SiP_US_Marines"};
            };
            class Willys_DarkHood_ISH_ISR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_ISH_SR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_ISH_SR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_SH_ISR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_SH_ISR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_SH_SR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_SH_SR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_LightHood_ISH_ISR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_ISR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_SR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_SR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_ISR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_ISR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_SR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_SR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };

            class UK_Willys_DarkHood_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered OD";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
                factions[] = 
                {
                    "SiP_US_Marines",
                    "SiP_BCFK"
                };
            };
            class UK_Willys_LightHood_G: UK_Willys_DarkHood_G
            {
                displayName = "Green Covered Tan";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };


            class UK_Willys_DarkHood_ISH_ISR_ISB_G: UK_Willys_DarkHood_G
            {
                displayName = "Green Covered OD 1";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
            };
            class UK_Willys_DarkHood_ISH_ISR_SB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered OD 2";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
            };
            class UK_Willys_DarkHood_ISH_SR_ISB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered OD 3";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
            };
            class UK_Willys_DarkHood_ISH_SR_SB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered OD 4";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
            };
            
            class UK_Willys_LightHood_ISH_ISR_ISB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered Tan 1";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };
            class UK_Willys_LightHood_ISH_ISR_SB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered Tan 2";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };
            class UK_Willys_LightHood_ISH_SR_ISB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered Tan 3";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };
            class UK_Willys_LightHood_ISH_SR_SB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered Tan 4";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };
        };
        textureList[] = 
        {
            "Willys_DarkHood_ISH_ISR_ISB_G",1,
            "Willys_DarkHood_ISH_ISR_SB_G",1,
            "Willys_DarkHood_ISH_SR_ISB_G",1,
            "Willys_DarkHood_ISH_SR_SB_G",1,
            "Willys_DarkHood_SH_ISR_ISB_G",1,
            "Willys_DarkHood_SH_ISR_SB_G",1,
            "Willys_DarkHood_SH_SR_ISB_G",1,
            "Willys_DarkHood_SH_SR_SB_G",1,

            "Willys_LightHood_ISH_ISR_ISB_G",1,
            "Willys_LightHood_ISH_ISR_SB_G",1,
            "Willys_LightHood_ISH_SR_ISB_G",1,
            "Willys_LightHood_ISH_SR_SB_G",1,
            "Willys_LightHood_SH_ISR_ISB_G",1,
            "Willys_LightHood_SH_ISR_SB_G",1,
            "Willys_LightHood_SH_SR_ISB_G",1,
            "Willys_LightHood_SH_SR_SB_G",1,

            "Willys_DarkHood_ISH_ISR_ISB_OD",1,
            "Willys_DarkHood_ISH_ISR_SB_OD",1,
            "Willys_DarkHood_ISH_SR_ISB_OD",1,
            "Willys_DarkHood_ISH_SR_SB_OD",1,
            "Willys_DarkHood_SH_ISR_ISB_OD",1,
            "Willys_DarkHood_SH_ISR_SB_OD",1,
            "Willys_DarkHood_SH_SR_ISB_OD",1,
            "Willys_DarkHood_SH_SR_SB_OD",1
        };
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        soundEngineOffExt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Stop.wss","db+10",1,200};
        soundEngineOffInt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Stop.wss","db+10",1};
        soundEngineOnExt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Start.wss","db+10",1,200};
        soundEngineOnInt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Start.wss","db+10",1};
        soundGetIn[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_GetInOut.wss","db+15",1,9};
        soundGetOut[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_GetInOut.wss","db+15",1,25};
        class Sounds
        {
            soundsetsint[] = 
            {
                "WW2_willysmb_int_idle_soundSet",
                "WW2_willysmb_int_low_soundSet",
                "vn_m151_mutt_engine_mid_int_soundset",
                "vn_m151_mutt_engine_high_int_soundset",
                "vn_m151_mutt_engine_low_off_int_soundset",
                "vn_m151_mutt_engine_mid_off_int_soundset",
                "vn_m151_mutt_engine_high_off_int_soundset",
                "vn_m151_mutt_exhaust_low_int_soundset",
                "vn_m151_mutt_exhaust_mid_int_soundset",
                "vn_m151_mutt_exhaust_high_int_soundset",
                "vn_m151_mutt_rattle_int_soundset",
                "vn_m151_mutt_engine_rev_int_soundset",
                "vn_m151_mutt_start_interior_soundset",
                "vn_wheeled_car_rattling_int_soundset",
                "vn_wheeled_car_stress_int_soundset",
                "vn_truck_rainint_soundset",
                "vn_wheeled_car_tires_rock_fast_int_soundset",
                "vn_wheeled_car_tires_grass_fast_int_soundset",
                "vn_wheeled_car_tires_sand_fast_int_soundset",
                "vn_wheeled_car_tires_gravel_fast_int_soundset",
                "vn_wheeled_car_tires_mud_fast_int_soundset",
                "vn_wheeled_car_tires_asphalt_fast_int_soundset",
                "vn_wheeled_car_tires_water_fast_int_soundset",
                "vn_wheeled_car_tires_rock_slow_int_soundset",
                "vn_wheeled_car_tires_grass_slow_int_soundset",
                "vn_wheeled_car_tires_sand_slow_int_soundset",
                "vn_wheeled_car_tires_gravel_slow_int_soundset",
                "vn_wheeled_car_tires_mud_slow_int_soundset",
                "vn_wheeled_car_tires_asphalt_slow_int_soundset",
                "vn_wheeled_car_tires_water_slow_int_soundset",
                "vn_wheeled_car_tires_turn_hard_int_soundset",
                "vn_wheeled_car_tires_turn_soft_int_soundset",
                "vn_m151_mutt_tires_brake_hard_int_soundset",
                "vn_m151_mutt_tires_brake_soft_int_soundset"
            };
            soundsetsext[] = 
            {
                "WW2_willysmb_ext_idle_soundSet",
                "WW2_willysmb_ext_low_soundSet",
                "vn_m151_mutt_engine_mid_ext_soundset",
                "vn_m151_mutt_engine_high_ext_soundset",
                "vn_m151_mutt_engine_low_off_ext_soundset",
                "vn_m151_mutt_engine_mid_off_ext_soundset",
                "vn_m151_mutt_engine_high_off_ext_soundset",
                "vn_m151_mutt_exhaust_low_ext_soundset",
                "vn_m151_mutt_exhaust_mid_ext_soundset",
                "vn_m151_mutt_exhaust_high_ext_soundset",
                "vn_m151_mutt_rattle_ext_soundset",
                "vn_m151_mutt_engine_rev_ext_soundset",
                "vn_m151_mutt_engine_distance_soundset",
                "vn_wheeled_car_rattling_ext_soundset",
                "vn_wheeled_car_stress_ext_soundset",
                "vn_m151_mutt_start_exterior_soundset",
                "vn_wheeled_car_tires_rock_fast_ext_soundset",
                "vn_truck_rainext_soundset",
                "vn_wheeled_car_tires_grass_fast_ext_soundset",
                "vn_wheeled_car_tires_sand_fast_ext_soundset",
                "vn_wheeled_car_tires_gravel_fast_ext_soundset",
                "vn_wheeled_car_tires_mud_fast_ext_soundset",
                "vn_wheeled_car_tires_asphalt_fast_ext_soundset",
                "vn_wheeled_car_tires_water_fast_ext_soundset",
                "vn_wheeled_car_tires_rock_slow_ext_soundset",
                "vn_wheeled_car_tires_grass_slow_ext_soundset",
                "vn_wheeled_car_tires_sand_slow_ext_soundset",
                "vn_wheeled_car_tires_gravel_slow_ext_soundset",
                "vn_wheeled_car_tires_mud_slow_ext_soundset",
                "vn_wheeled_car_tires_asphalt_slow_ext_soundset",
                "vn_wheeled_car_tires_water_slow_ext_soundset",
                "vn_wheeled_car_tires_turn_hard_ext_soundset",
                "vn_wheeled_car_tires_turn_soft_ext_soundset",
                "vn_m151_mutt_tires_brake_hard_ext_soundset",
                "vn_m151_mutt_tires_brake_soft_ext_soundset"
            };
        };
        class Turrets: Turrets
        {
            class M1919_Turret: MainTurret
            {
                gunnerType = "SiP_US_Army_gunner";
                weapons[] = {"SiP_m1919a4_jeep_weapon"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
                minTurn = -45;
                maxTurn = 45;
            };
        };
        class AnimationSources: AnimationSources
        {
            class ReloadAnim
            {
                source = "reload";
                weapon = "SiP_m1919a4_jeep_weapon";
            };
            class ammo_belt_rotation
            {
                source = "reload";
                weapon = "SiP_m1919a4_jeep_weapon";
            };
            class ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_m1919a4_jeep_weapon";
            };
            class IsEmptyNoReload
            {
                source = "IsEmptyNoReload";
                weapon = "SiP_m1919a4_jeep_weapon";
            };
        };
    };
    class SiP_Willys_MB: UNI_US_Willys_MB_G
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB";
        faction = "SiP_US_Army";
        side = 1;
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        crew = "SiP_US_Army_driver";
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
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
        weapons[] = {"SiP_Jeep_Horn"};
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        soundEngineOffExt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Stop.wss","db+10",1,200};
        soundEngineOffInt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Stop.wss","db+10",1};
        soundEngineOnExt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Start.wss","db+10",1,200};
        soundEngineOnInt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Start.wss","db+10",1};
        soundGetIn[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_GetInOut.wss","db+15",1,9};
        soundGetOut[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_GetInOut.wss","db+15",1,25};
        class Sounds
        {
            soundsetsint[] = 
            {
                "WW2_willysmb_int_idle_soundSet",
                "WW2_willysmb_int_low_soundSet",
                "vn_m151_mutt_engine_mid_int_soundset",
                "vn_m151_mutt_engine_high_int_soundset",
                "vn_m151_mutt_engine_low_off_int_soundset",
                "vn_m151_mutt_engine_mid_off_int_soundset",
                "vn_m151_mutt_engine_high_off_int_soundset",
                "vn_m151_mutt_exhaust_low_int_soundset",
                "vn_m151_mutt_exhaust_mid_int_soundset",
                "vn_m151_mutt_exhaust_high_int_soundset",
                "vn_m151_mutt_rattle_int_soundset",
                "vn_m151_mutt_engine_rev_int_soundset",
                "vn_m151_mutt_start_interior_soundset",
                "vn_wheeled_car_rattling_int_soundset",
                "vn_wheeled_car_stress_int_soundset",
                "vn_truck_rainint_soundset",
                "vn_wheeled_car_tires_rock_fast_int_soundset",
                "vn_wheeled_car_tires_grass_fast_int_soundset",
                "vn_wheeled_car_tires_sand_fast_int_soundset",
                "vn_wheeled_car_tires_gravel_fast_int_soundset",
                "vn_wheeled_car_tires_mud_fast_int_soundset",
                "vn_wheeled_car_tires_asphalt_fast_int_soundset",
                "vn_wheeled_car_tires_water_fast_int_soundset",
                "vn_wheeled_car_tires_rock_slow_int_soundset",
                "vn_wheeled_car_tires_grass_slow_int_soundset",
                "vn_wheeled_car_tires_sand_slow_int_soundset",
                "vn_wheeled_car_tires_gravel_slow_int_soundset",
                "vn_wheeled_car_tires_mud_slow_int_soundset",
                "vn_wheeled_car_tires_asphalt_slow_int_soundset",
                "vn_wheeled_car_tires_water_slow_int_soundset",
                "vn_wheeled_car_tires_turn_hard_int_soundset",
                "vn_wheeled_car_tires_turn_soft_int_soundset",
                "vn_m151_mutt_tires_brake_hard_int_soundset",
                "vn_m151_mutt_tires_brake_soft_int_soundset"
            };
            soundsetsext[] = 
            {
                "WW2_willysmb_ext_idle_soundSet",
                "WW2_willysmb_ext_low_soundSet",
                "vn_m151_mutt_engine_mid_ext_soundset",
                "vn_m151_mutt_engine_high_ext_soundset",
                "vn_m151_mutt_engine_low_off_ext_soundset",
                "vn_m151_mutt_engine_mid_off_ext_soundset",
                "vn_m151_mutt_engine_high_off_ext_soundset",
                "vn_m151_mutt_exhaust_low_ext_soundset",
                "vn_m151_mutt_exhaust_mid_ext_soundset",
                "vn_m151_mutt_exhaust_high_ext_soundset",
                "vn_m151_mutt_rattle_ext_soundset",
                "vn_m151_mutt_engine_rev_ext_soundset",
                "vn_m151_mutt_engine_distance_soundset",
                "vn_wheeled_car_rattling_ext_soundset",
                "vn_wheeled_car_stress_ext_soundset",
                "vn_m151_mutt_start_exterior_soundset",
                "vn_wheeled_car_tires_rock_fast_ext_soundset",
                "vn_truck_rainext_soundset",
                "vn_wheeled_car_tires_grass_fast_ext_soundset",
                "vn_wheeled_car_tires_sand_fast_ext_soundset",
                "vn_wheeled_car_tires_gravel_fast_ext_soundset",
                "vn_wheeled_car_tires_mud_fast_ext_soundset",
                "vn_wheeled_car_tires_asphalt_fast_ext_soundset",
                "vn_wheeled_car_tires_water_fast_ext_soundset",
                "vn_wheeled_car_tires_rock_slow_ext_soundset",
                "vn_wheeled_car_tires_grass_slow_ext_soundset",
                "vn_wheeled_car_tires_sand_slow_ext_soundset",
                "vn_wheeled_car_tires_gravel_slow_ext_soundset",
                "vn_wheeled_car_tires_mud_slow_ext_soundset",
                "vn_wheeled_car_tires_asphalt_slow_ext_soundset",
                "vn_wheeled_car_tires_water_slow_ext_soundset",
                "vn_wheeled_car_tires_turn_hard_ext_soundset",
                "vn_wheeled_car_tires_turn_soft_ext_soundset",
                "vn_m151_mutt_tires_brake_hard_ext_soundset",
                "vn_m151_mutt_tires_brake_soft_ext_soundset"
            };
        };
        class textureSources
        {
            class Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star";
                author = "Unitatoe24";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa"};
                factions[] = {"SiP_US_Army_Editor_Category","SiP_US_Marines"};
            };
            class Willys_ISH_ISR_SB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa"};
            };
            class Willys_ISH_SR_ISB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa"};
            };
            class Willys_ISH_SR_SB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa"};
            };
            class Willys_SH_ISR_ISB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_G.paa"};
            };
            class Willys_SH_ISR_SB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_G.paa"};
            };
            class Willys_SH_SR_ISB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_G.paa"};
            };
            class Willys_SH_SR_SB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_G.paa"};
            };
            class Willys_BiA: Willys_ISH_ISR_ISB_G
            {
                displayName = "Those We Lost";
                textures[] = {"\HQ_Jeep\textures\generic\BiA.paa"};
            };
            
            class Willys_ISH_ISR_ISB_OD: Willys_ISH_ISR_ISB_G
            {
                displayName = "Olive Drab Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_od.paa"};
            };
            class Willys_ISH_ISR_SB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_od.paa"};
            };
            class Willys_ISH_SR_ISB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_od.paa"};
            };
            class Willys_ISH_SR_SB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_od.paa"};
            };
            class Willys_SH_ISR_ISB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_od.paa"};
            };
            class Willys_SH_ISR_SB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_od.paa"};
            };
            class Willys_SH_SR_ISB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_od.paa"};
            };
            class Willys_SH_SR_SB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_od.paa"};
            };

            class UK_Willys_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_G.paa"};
                factions[] = 
                {
                    "SiP_US_Marines",
                    "SiP_BCFK"
                };
            };
            
            class UK_Willys_ISH_ISR_ISB_G: UK_Willys_G
            {
                displayName = "Green 1";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa"};
            };
            class UK_Willys_ISH_ISR_SB_G: UK_Willys_ISH_ISR_ISB_G
            {
                displayName = "Green 2";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa"};
            };
            class UK_Willys_ISH_SR_ISB_G: UK_Willys_ISH_ISR_ISB_G
            {
                displayName = "Green 3";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa"};
            };
            class UK_Willys_ISH_SR_SB_G: UK_Willys_ISH_ISR_ISB_G
            {
                displayName = "Green 4";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa"};
            };
        };
        textureList[] = 
        {
            "Willys_ISH_ISR_ISB_G",1,
            "Willys_ISH_ISR_SB_G",1,
            "Willys_ISH_SR_ISB_G",1,
            "Willys_ISH_SR_SB_G",1,
            "Willys_SH_ISR_ISB_G",1,
            "Willys_SH_ISR_SB_G",1,
            "Willys_SH_SR_ISB_G",1,
            "Willys_SH_SR_SB_G",1,
            "Willys_ISH_ISR_ISB_OD",1,
            "Willys_ISH_ISR_SB_OD",1,
            "Willys_ISH_SR_ISB_OD",1,
            "Willys_ISH_SR_SB_OD",1,
            "Willys_SH_ISR_ISB_OD",1,
            "Willys_SH_ISR_SB_OD",1,
            "Willys_SH_SR_ISB_OD",1,
            "Willys_SH_SR_SB_OD",1
        };
    };
    class SiP_Willys_MB_roof: UNI_US_Willys_MB_Hood_G
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB (Roof)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        side = 1;
        crew = "SiP_US_Army_driver";
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        soundEngineOffExt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Stop.wss","db+10",1,200};
        soundEngineOffInt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Stop.wss","db+10",1};
        soundEngineOnExt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Start.wss","db+10",1,200};
        soundEngineOnInt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Start.wss","db+10",1};
        soundGetIn[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_GetInOut.wss","db+15",1,9};
        soundGetOut[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_GetInOut.wss","db+15",1,25};
        class Sounds
        {
            soundsetsint[] = 
            {
                "WW2_willysmb_int_idle_soundSet",
                "WW2_willysmb_int_low_soundSet",
                "vn_m151_mutt_engine_mid_int_soundset",
                "vn_m151_mutt_engine_high_int_soundset",
                "vn_m151_mutt_engine_low_off_int_soundset",
                "vn_m151_mutt_engine_mid_off_int_soundset",
                "vn_m151_mutt_engine_high_off_int_soundset",
                "vn_m151_mutt_exhaust_low_int_soundset",
                "vn_m151_mutt_exhaust_mid_int_soundset",
                "vn_m151_mutt_exhaust_high_int_soundset",
                "vn_m151_mutt_rattle_int_soundset",
                "vn_m151_mutt_engine_rev_int_soundset",
                "vn_m151_mutt_start_interior_soundset",
                "vn_wheeled_car_rattling_int_soundset",
                "vn_wheeled_car_stress_int_soundset",
                "vn_truck_rainint_soundset",
                "vn_wheeled_car_tires_rock_fast_int_soundset",
                "vn_wheeled_car_tires_grass_fast_int_soundset",
                "vn_wheeled_car_tires_sand_fast_int_soundset",
                "vn_wheeled_car_tires_gravel_fast_int_soundset",
                "vn_wheeled_car_tires_mud_fast_int_soundset",
                "vn_wheeled_car_tires_asphalt_fast_int_soundset",
                "vn_wheeled_car_tires_water_fast_int_soundset",
                "vn_wheeled_car_tires_rock_slow_int_soundset",
                "vn_wheeled_car_tires_grass_slow_int_soundset",
                "vn_wheeled_car_tires_sand_slow_int_soundset",
                "vn_wheeled_car_tires_gravel_slow_int_soundset",
                "vn_wheeled_car_tires_mud_slow_int_soundset",
                "vn_wheeled_car_tires_asphalt_slow_int_soundset",
                "vn_wheeled_car_tires_water_slow_int_soundset",
                "vn_wheeled_car_tires_turn_hard_int_soundset",
                "vn_wheeled_car_tires_turn_soft_int_soundset",
                "vn_m151_mutt_tires_brake_hard_int_soundset",
                "vn_m151_mutt_tires_brake_soft_int_soundset"
            };
            soundsetsext[] = 
            {
                "WW2_willysmb_ext_idle_soundSet",
                "WW2_willysmb_ext_low_soundSet",
                "vn_m151_mutt_engine_mid_ext_soundset",
                "vn_m151_mutt_engine_high_ext_soundset",
                "vn_m151_mutt_engine_low_off_ext_soundset",
                "vn_m151_mutt_engine_mid_off_ext_soundset",
                "vn_m151_mutt_engine_high_off_ext_soundset",
                "vn_m151_mutt_exhaust_low_ext_soundset",
                "vn_m151_mutt_exhaust_mid_ext_soundset",
                "vn_m151_mutt_exhaust_high_ext_soundset",
                "vn_m151_mutt_rattle_ext_soundset",
                "vn_m151_mutt_engine_rev_ext_soundset",
                "vn_m151_mutt_engine_distance_soundset",
                "vn_wheeled_car_rattling_ext_soundset",
                "vn_wheeled_car_stress_ext_soundset",
                "vn_m151_mutt_start_exterior_soundset",
                "vn_wheeled_car_tires_rock_fast_ext_soundset",
                "vn_truck_rainext_soundset",
                "vn_wheeled_car_tires_grass_fast_ext_soundset",
                "vn_wheeled_car_tires_sand_fast_ext_soundset",
                "vn_wheeled_car_tires_gravel_fast_ext_soundset",
                "vn_wheeled_car_tires_mud_fast_ext_soundset",
                "vn_wheeled_car_tires_asphalt_fast_ext_soundset",
                "vn_wheeled_car_tires_water_fast_ext_soundset",
                "vn_wheeled_car_tires_rock_slow_ext_soundset",
                "vn_wheeled_car_tires_grass_slow_ext_soundset",
                "vn_wheeled_car_tires_sand_slow_ext_soundset",
                "vn_wheeled_car_tires_gravel_slow_ext_soundset",
                "vn_wheeled_car_tires_mud_slow_ext_soundset",
                "vn_wheeled_car_tires_asphalt_slow_ext_soundset",
                "vn_wheeled_car_tires_water_slow_ext_soundset",
                "vn_wheeled_car_tires_turn_hard_ext_soundset",
                "vn_wheeled_car_tires_turn_soft_ext_soundset",
                "vn_m151_mutt_tires_brake_hard_ext_soundset",
                "vn_m151_mutt_tires_brake_soft_ext_soundset"
            };
        };
        class textureSources
        {
            class Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
                factions[] = {"SiP_US_Army","SiP_US_Marines"};
            };
            class Willys_DarkHood_ISH_ISR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_ISH_SR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_ISH_SR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_SH_ISR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_SH_ISR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_SH_SR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_DarkHood_SH_SR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered OD";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_G.paa","\HQ_Jeep\textures\extras\additions_G.paa"};
            };
            class Willys_LightHood_ISH_ISR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_ISR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_SR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_SR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_ISR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_ISR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_SR_ISB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_SR_SB_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Star Covered Tan";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_G.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };

            class Willys_DarkHood_ISH_ISR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Olive Drab Invasion Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
                factions[] = {"SiP_US_Marines"};
            };
            class Willys_DarkHood_ISH_ISR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_ISH_SR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_ISH_SR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_SH_ISR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_SH_ISR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_SH_SR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_DarkHood_SH_SR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered OD";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_od.paa","\HQ_Jeep\textures\extras\additions_OD.paa"};
            };
            class Willys_LightHood_ISH_ISR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_ISR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_SR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_ISH_SR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_ISR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_ISR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_SR_ISB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };
            class Willys_LightHood_SH_SR_SB_OD: Willys_DarkHood_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star Covered Tan";
                textures[]= {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_od.paa","\HQ_Jeep\textures\extras\additions_light.paa"};
            };

            class UK_Willys_DarkHood_G: Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered OD";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
                factions[] = 
                {
                    "SiP_US_Marines",
                    "SiP_BCFK"
                };
            };
            class UK_Willys_LightHood_G: UK_Willys_DarkHood_G
            {
                displayName = "Green Covered Tan";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };

            class UK_Willys_DarkHood_ISH_ISR_ISB_G: UK_Willys_DarkHood_G
            {
                displayName = "Green Covered OD 1";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
            };
            class UK_Willys_DarkHood_ISH_ISR_SB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered OD 2";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
            };
            class UK_Willys_DarkHood_ISH_SR_ISB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered OD 3";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
            };
            class UK_Willys_DarkHood_ISH_SR_SB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered OD 4";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_CW_Jeep\textures\extras\additions_G.paa"};
            };
            
            class UK_Willys_LightHood_ISH_ISR_ISB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered Tan 1";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };
            class UK_Willys_LightHood_ISH_ISR_SB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered Tan 2";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };
            class UK_Willys_LightHood_ISH_SR_ISB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered Tan 3";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };
            class UK_Willys_LightHood_ISH_SR_SB_G: UK_Willys_DarkHood_ISH_ISR_ISB_G
            {
                displayName = "Green Covered Tan 4";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_CW_Jeep\textures\extras\additions_light.paa"};
            };
        };
        textureList[] = 
        {
            "Willys_LightHood_ISH_ISR_ISB_G",1,
            "Willys_LightHood_ISH_ISR_SB_G",1,
            "Willys_LightHood_ISH_SR_ISB_G",1,
            "Willys_LightHood_ISH_SR_SB_G",1,
            "Willys_LightHood_SH_ISR_ISB_G",1,
            "Willys_LightHood_SH_ISR_SB_G",1,
            "Willys_LightHood_SH_SR_ISB_G",1,
            "Willys_LightHood_SH_SR_SB_G",1,

            "Willys_DarkHood_ISH_ISR_ISB_G",1,
            "Willys_DarkHood_ISH_ISR_SB_G",1,
            "Willys_DarkHood_ISH_SR_ISB_G",1,
            "Willys_DarkHood_ISH_SR_SB_G",1,
            "Willys_DarkHood_SH_ISR_ISB_G",1,
            "Willys_DarkHood_SH_ISR_SB_G",1,
            "Willys_DarkHood_SH_SR_ISB_G",1,
            "Willys_DarkHood_SH_SR_SB_G",1
        };
    };
    class SiP_Willys_MB_stretcher: UNI_US_Willys_MB_Ambulance_G
    {
        author = "Letlev";
        scope = 2;
        scopecurator = 2;
        displayName = "Willys MB (Stretchers)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Jeeps_Editor_Subcategory";
        vehicleClass = "SiP_Jeeps_vehicle_class";
        side = 1;
        crew = "SiP_US_Army_driver";
        class EventHandlers: EventHandlers
        {
            postInit = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
        };
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
        attenuationEffectType = "vn_openvehicle_attenuation";
        obstructSoundsWhenIn = 0;
        occludeSoundsWhenIn = 0;
        outsideSoundFilter = 0;
        soundEngineOffExt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Stop.wss","db+10",1,200};
        soundEngineOffInt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Stop.wss","db+10",1};
        soundEngineOnExt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Start.wss","db+10",1,200};
        soundEngineOnInt[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_Ext_Start.wss","db+10",1};
        soundGetIn[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_GetInOut.wss","db+15",1,9};
        soundGetOut[] = {"\WW2\Assets_s\Vehicles\Cars_s\Willys_MB_US\Willys_MB_US_GetInOut.wss","db+15",1,25};
        class Sounds
        {
            soundsetsint[] = 
            {
                "WW2_willysmb_int_idle_soundSet",
                "WW2_willysmb_int_low_soundSet",
                "vn_m151_mutt_engine_mid_int_soundset",
                "vn_m151_mutt_engine_high_int_soundset",
                "vn_m151_mutt_engine_low_off_int_soundset",
                "vn_m151_mutt_engine_mid_off_int_soundset",
                "vn_m151_mutt_engine_high_off_int_soundset",
                "vn_m151_mutt_exhaust_low_int_soundset",
                "vn_m151_mutt_exhaust_mid_int_soundset",
                "vn_m151_mutt_exhaust_high_int_soundset",
                "vn_m151_mutt_rattle_int_soundset",
                "vn_m151_mutt_engine_rev_int_soundset",
                "vn_m151_mutt_start_interior_soundset",
                "vn_wheeled_car_rattling_int_soundset",
                "vn_wheeled_car_stress_int_soundset",
                "vn_truck_rainint_soundset",
                "vn_wheeled_car_tires_rock_fast_int_soundset",
                "vn_wheeled_car_tires_grass_fast_int_soundset",
                "vn_wheeled_car_tires_sand_fast_int_soundset",
                "vn_wheeled_car_tires_gravel_fast_int_soundset",
                "vn_wheeled_car_tires_mud_fast_int_soundset",
                "vn_wheeled_car_tires_asphalt_fast_int_soundset",
                "vn_wheeled_car_tires_water_fast_int_soundset",
                "vn_wheeled_car_tires_rock_slow_int_soundset",
                "vn_wheeled_car_tires_grass_slow_int_soundset",
                "vn_wheeled_car_tires_sand_slow_int_soundset",
                "vn_wheeled_car_tires_gravel_slow_int_soundset",
                "vn_wheeled_car_tires_mud_slow_int_soundset",
                "vn_wheeled_car_tires_asphalt_slow_int_soundset",
                "vn_wheeled_car_tires_water_slow_int_soundset",
                "vn_wheeled_car_tires_turn_hard_int_soundset",
                "vn_wheeled_car_tires_turn_soft_int_soundset",
                "vn_m151_mutt_tires_brake_hard_int_soundset",
                "vn_m151_mutt_tires_brake_soft_int_soundset"
            };
            soundsetsext[] = 
            {
                "WW2_willysmb_ext_idle_soundSet",
                "WW2_willysmb_ext_low_soundSet",
                "vn_m151_mutt_engine_mid_ext_soundset",
                "vn_m151_mutt_engine_high_ext_soundset",
                "vn_m151_mutt_engine_low_off_ext_soundset",
                "vn_m151_mutt_engine_mid_off_ext_soundset",
                "vn_m151_mutt_engine_high_off_ext_soundset",
                "vn_m151_mutt_exhaust_low_ext_soundset",
                "vn_m151_mutt_exhaust_mid_ext_soundset",
                "vn_m151_mutt_exhaust_high_ext_soundset",
                "vn_m151_mutt_rattle_ext_soundset",
                "vn_m151_mutt_engine_rev_ext_soundset",
                "vn_m151_mutt_engine_distance_soundset",
                "vn_wheeled_car_rattling_ext_soundset",
                "vn_wheeled_car_stress_ext_soundset",
                "vn_m151_mutt_start_exterior_soundset",
                "vn_wheeled_car_tires_rock_fast_ext_soundset",
                "vn_truck_rainext_soundset",
                "vn_wheeled_car_tires_grass_fast_ext_soundset",
                "vn_wheeled_car_tires_sand_fast_ext_soundset",
                "vn_wheeled_car_tires_gravel_fast_ext_soundset",
                "vn_wheeled_car_tires_mud_fast_ext_soundset",
                "vn_wheeled_car_tires_asphalt_fast_ext_soundset",
                "vn_wheeled_car_tires_water_fast_ext_soundset",
                "vn_wheeled_car_tires_rock_slow_ext_soundset",
                "vn_wheeled_car_tires_grass_slow_ext_soundset",
                "vn_wheeled_car_tires_sand_slow_ext_soundset",
                "vn_wheeled_car_tires_gravel_slow_ext_soundset",
                "vn_wheeled_car_tires_mud_slow_ext_soundset",
                "vn_wheeled_car_tires_asphalt_slow_ext_soundset",
                "vn_wheeled_car_tires_water_slow_ext_soundset",
                "vn_wheeled_car_tires_turn_hard_ext_soundset",
                "vn_wheeled_car_tires_turn_soft_ext_soundset",
                "vn_m151_mutt_tires_brake_hard_ext_soundset",
                "vn_m151_mutt_tires_brake_soft_ext_soundset"
            };
        };
        class textureSources
        {
            class Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star";
                author = "Unitatoe24";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
                factions[] = {"SiP_US_Army","SiP_US_Marines"};
            };
            class Willys_ISH_ISR_SB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class Willys_ISH_SR_ISB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class Willys_ISH_SR_SB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class Willys_SH_ISR_ISB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class Willys_SH_ISR_SB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class Willys_SH_SR_ISB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class Willys_SH_SR_SB_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            
            class Willys_ISH_ISR_ISB_OD: Willys_ISH_ISR_ISB_G
            {
                displayName = "Olive Drab Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_ISH_ISR_SB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_ISH_SR_ISB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_ISH_SR_SB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Invasion Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_ISH_SR_SB_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_SH_ISR_ISB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_ISB_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_SH_ISR_SB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_ISR_SB_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_SH_SR_ISB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_ISB_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_SH_SR_SB_OD: Willys_ISH_ISR_ISB_OD
            {
                displayName = "Olive Drab Star";
                textures[] = {"\HQ_Jeep\textures\generic\Willys_SH_SR_SB_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
           
            class Willys_Ambulance_C_G_Green: Willys_ISH_ISR_ISB_G
            {
                displayName = "Medical Round Hood Cross (Green)";
                textures[] = {"\HQ_Jeep\textures\medical\med_c_f_g.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_Ambulance_S_G_Green: Willys_ISH_ISR_ISB_G
            {
                displayName = "Medical Square Hood Cross (Green)";
                textures[] = {"\HQ_Jeep\textures\medical\med_s_f_g.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_Ambulance_C_Green: Willys_ISH_ISR_ISB_G
            {
                displayName = "Medical Round Hood Cross (Green)";
                textures[] = {"\HQ_Jeep\textures\medical\med_c_g.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_Ambulance_S_Green: Willys_ISH_ISR_ISB_G
            {
                displayName = "Medical Square Hood Cross (Green)";
                textures[] = {"\HQ_Jeep\textures\medical\med_s_g.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            
            class Willys_Ambulance_C_G_OD: Willys_Ambulance_S_G_Green
            {
                displayName = "Medical Round Hood Cross (Olive Drab)";
                textures[] = {"\HQ_Jeep\textures\medical\med_c_f_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_Ambulance_S_G_OD: Willys_Ambulance_C_G_OD
            {
                displayName = "Medical Square Hood Cross (Olive Drab)";
                textures[] = {"\HQ_Jeep\textures\medical\med_s_f_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_Ambulance_C_OD: Willys_Ambulance_C_G_OD
            {
                displayName = "Medical Round Hood Cross (Olive Drab)";
                textures[] = {"\HQ_Jeep\textures\medical\med_c_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };
            class Willys_Ambulance_S_OD: Willys_Ambulance_C_G_OD
            {
                displayName = "Medical Square Hood Cross (Olive Drab)";
                textures[] = {"\HQ_Jeep\textures\medical\med_s_od.paa","\HQ_Jeep\textures\extras\medstruc_light.paa"};
            };

            class UK_Willys_G: Willys_ISH_ISR_ISB_G
            {
                displayName = "Green";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
                factions[] = 
                {
                    "SiP_US_Marines",
                    "SiP_BCFK"
                };
            };
            
            class UK_Willys_ISH_ISR_ISB_G: UK_Willys_G
            {
                displayName = "Green 1";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_ISB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class UK_Willys_ISH_ISR_SB_G: UK_Willys_ISH_ISR_ISB_G
            {
                displayName = "Green 2";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_ISR_SB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class UK_Willys_ISH_SR_ISB_G: UK_Willys_ISH_ISR_ISB_G
            {
                displayName = "Green 3";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_ISB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
            class UK_Willys_ISH_SR_SB_G: UK_Willys_ISH_ISR_ISB_G
            {
                displayName = "Green 4";
                textures[] = {"\HQ_CW_Jeep\textures\generic\Willys_ISH_SR_SB_G.paa","\HQ_Jeep\textures\extras\medstruc.paa"};
            };
        };
        textureList[] = 
        {
            "Willys_ISH_ISR_ISB_G",1,
            "Willys_ISH_ISR_SB_G",1,
            "Willys_ISH_SR_ISB_G",1,
            "Willys_ISH_SR_SB_G",1,
            "Willys_SH_ISR_ISB_G",1,
            "Willys_SH_ISR_SB_G",1,
            "Willys_SH_SR_ISB_G",1,
            "Willys_SH_SR_SB_G",1,
            
            "Willys_Ambulance_C_G_Green",1,
            "Willys_Ambulance_S_G_Green",1,
            "Willys_Ambulance_C_Green",1,
            "Willys_Ambulance_S_Green",1
        };
    };

    class SiP_Willys_MB_marines: SiP_Willys_MB
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        
    };
    class SiP_Willys_MB_mg_marines: SiP_Willys_MB_mg
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        textureList[] = 
        {
            "Willys_ISH_ISR_ISB_OD",1,
            "Willys_ISH_ISR_SB_OD",1,
            "Willys_ISH_SR_ISB_OD",1,
            "Willys_ISH_SR_SB_OD",1,
            "Willys_SH_ISR_ISB_OD",1,
            "Willys_SH_ISR_SB_OD",1,
            "Willys_SH_SR_ISB_OD",1,
            "Willys_SH_SR_SB_OD",1,
            "UK_Willys_G",1,
            "UK_Willys_ISH_ISR_ISB_G",1,
            "UK_Willys_ISH_ISR_SB_G",1,
            "UK_Willys_ISH_SR_ISB_G",1,
            "UK_Willys_ISH_SR_SB_G",1
        };
        class Turrets: Turrets
        {
            class M1919_Turret: M1919_Turret
            {
                gunnerType = "SiP_US_Marines_gunner";
            };
        };
    }; 
    class SiP_Willys_MB_roof_marines: SiP_Willys_MB_roof
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        textureList[] = 
        {
            "Willys_DarkHood_ISH_ISR_ISB_G",1,
            "Willys_DarkHood_ISH_ISR_SB_G",1,
            "Willys_DarkHood_ISH_SR_ISB_G",1,
            "Willys_DarkHood_ISH_SR_SB_G",1,
            "Willys_DarkHood_SH_ISR_ISB_G",1,
            "Willys_DarkHood_SH_ISR_SB_G",1,
            "Willys_DarkHood_SH_SR_ISB_G",1,
            "Willys_DarkHood_SH_SR_SB_G",1,

            "Willys_LightHood_ISH_ISR_ISB_G",1,
            "Willys_LightHood_ISH_ISR_SB_G",1,
            "Willys_LightHood_ISH_SR_ISB_G",1,
            "Willys_LightHood_ISH_SR_SB_G",1,
            "Willys_LightHood_SH_ISR_ISB_G",1,
            "Willys_LightHood_SH_ISR_SB_G",1,
            "Willys_LightHood_SH_SR_ISB_G",1,
            "Willys_LightHood_SH_SR_SB_G",1,

            "Willys_DarkHood_ISH_ISR_ISB_OD",1,
            "Willys_DarkHood_ISH_ISR_SB_OD",1,
            "Willys_DarkHood_ISH_SR_ISB_OD",1,
            "Willys_DarkHood_ISH_SR_SB_OD",1,
            "Willys_DarkHood_SH_ISR_ISB_OD",1,
            "Willys_DarkHood_SH_ISR_SB_OD",1,
            "Willys_DarkHood_SH_SR_ISB_OD",1,
            "Willys_DarkHood_SH_SR_SB_OD",1
        };
    };
    class SiP_Willys_MB_stretcher_marines: SiP_Willys_MB_stretcher
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_driver";
        textureList[] = 
        {
            "Willys_ISH_ISR_ISB_OD",1,
            "Willys_ISH_ISR_SB_OD",1,
            "Willys_ISH_SR_ISB_OD",1,
            "Willys_ISH_SR_SB_OD",1,
            "Willys_SH_ISR_ISB_OD",1,
            "Willys_SH_ISR_SB_OD",1,
            "Willys_SH_SR_ISB_OD",1,
            "Willys_SH_SR_SB_OD",1,
            
            "Willys_Ambulance_C_G_OD",1,
            "Willys_Ambulance_S_G_OD",1,
            "Willys_Ambulance_C_OD",1,
            "Willys_Ambulance_S_OD",1,

            "UK_Willys_G",1,

            "UK_Willys_ISH_ISR_ISB_G",1,
            "UK_Willys_ISH_ISR_SB_G",1,
            "UK_Willys_ISH_SR_ISB_G",1,
            "UK_Willys_ISH_SR_SB_G",1,
        };
    };

    class SiP_Willys_MB_UK: SiP_Willys_MB
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        textureList[] = 
        {
            "UK_Willys_G",1,
            "UK_Willys_ISH_ISR_ISB_G",1,
            "UK_Willys_ISH_ISR_SB_G",1,
            "UK_Willys_ISH_SR_ISB_G",1,
            "UK_Willys_ISH_SR_SB_G",1
        };
    };
    class SiP_Willys_MB_mg_UK: SiP_Willys_MB_mg
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        class Turrets: Turrets
        {
            class M1919_Turret: M1919_Turret
            {
                gunnerType = "SiP_BCFK_gunner";
            };
        };
        textureList[] = 
        {
            "UK_Willys_DarkHood_G",1,
            "UK_Willys_LightHood_G",1,

            "UK_Willys_DarkHood_ISH_ISR_ISB_G",1,
            "UK_Willys_DarkHood_ISH_ISR_SB_G",1,
            "UK_Willys_DarkHood_ISH_SR_ISB_G",1,
            "UK_Willys_DarkHood_ISH_SR_SB_G",1,

            "UK_Willys_LightHood_ISH_ISR_ISB_G",1,
            "UK_Willys_LightHood_ISH_ISR_SB_G",1,
            "UK_Willys_LightHood_ISH_SR_ISB_G",1,
            "UK_Willys_LightHood_ISH_SR_SB_G",1
        };
    };
    class SiP_Willys_MB_roof_UK: SiP_Willys_MB_roof
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        textureList[] = 
        {
            "UK_Willys_DarkHood_G",1,
            "UK_Willys_LightHood_G",1,

            "UK_Willys_DarkHood_ISH_ISR_ISB_G",1,
            "UK_Willys_DarkHood_ISH_ISR_SB_G",1,
            "UK_Willys_DarkHood_ISH_SR_ISB_G",1,
            "UK_Willys_DarkHood_ISH_SR_SB_G",1,

            "UK_Willys_LightHood_ISH_ISR_ISB_G",1,
            "UK_Willys_LightHood_ISH_ISR_SB_G",1,
            "UK_Willys_LightHood_ISH_SR_ISB_G",1,
            "UK_Willys_LightHood_ISH_SR_SB_G",1
        };
    };
    class SiP_Willys_MB_stretcher_UK: SiP_Willys_MB_stretcher
    {
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_driver";
        textureList[] = 
        {           
            "UK_Willys_G",1,
            "UK_Willys_ISH_ISR_ISB_G",1,
            "UK_Willys_ISH_ISR_SB_G",1,
            "UK_Willys_ISH_SR_ISB_G",1,
            "UK_Willys_ISH_SR_SB_G",1,
        };
    };
};

class CfgWeapons
{
    class CarHorn;

    class SiP_Jeep_Horn: CarHorn
    {
        drySound[] = {"SiP\Addons\sip_un_vehicles\wheeled\Willys_MB\data\JeepHorn.wss",+7db,1,200};
    };
};