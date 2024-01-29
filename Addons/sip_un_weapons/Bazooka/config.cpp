class cfgPatches
{
    class SiP_Patch_M20_Bazooka
    {
        addonRootClass = "SiP_Patch_un_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "weapons_f_vietnam_04",
            "weapons_f_vietnam_04_c",
            "WW2_Assets_c_Weapons_InfantryWeapons_c",
            "FF_US_Waffens",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m20_super_bazooka",
            "SiP_m9a1_bazooka"
        };
        magazines[] = 
        {
            "SiP_M28A2_heat_rocket",
            "SiP_M30_smoke_rocket",
            "SiP_M6A3_rocket"
        };
        ammo[] = 
        {
            "SiP_M28A2_ammo",
            "SiP_M6A3_ammo"
        };
    };
};

class CfgSoundShaders
{
    class vn_rpg2_close_shot_soundshader;

    class SiP_bazooka_close_shot_soundshader: vn_rpg2_close_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Bazooka\sounds\m20_bazooka_shot1.ogg",1}};
    };

    class SiP_M9_bazooka_close_shot_soundshader: SiP_bazooka_close_shot_soundshader
    {
        samples[] = {{"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1}};
    };
};

class cfgsoundsets
{
    class vn_rpg2_shot_soundset;

    class SiP_bazooka_shot_soundset: vn_rpg2_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_rpg2_closure_soundshader",
            "vn_rpg2_interior_shot_soundshader",
            "vn_rpg2_interior_distance_shot_soundshader",
            "SiP_Bazooka_close_shot_soundshader",
            "vn_rpg2_close_distance_shot_soundshader",
            "vn_rpg2_medium_distance_shot_soundshader",
            "vn_rpg2_far_distance_shot_soundshader"
        };
    };

    class SiP_M9_bazooka_shot_soundset: vn_rpg2_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_rpg2_closure_soundshader",
            "vn_rpg2_interior_shot_soundshader",
            "vn_rpg2_interior_distance_shot_soundshader",
            "SiP_M9_bazooka_close_shot_soundshader",
            "vn_rpg2_close_distance_shot_soundshader",
            "vn_rpg2_medium_distance_shot_soundshader",
            "vn_rpg2_far_distance_shot_soundshader"
        };
    };
};

class cfgWeapons
{
    class vn_Launcher_Base_F;
    class vn_m20a1b1_01: vn_Launcher_Base_F
    {
        class single;
    };

    class LIB_M1A1_Bazooka;
    class ff_us_m9a0_bazooka: LIB_M1A1_Bazooka
    {
        class Single;
    };

    class SiP_m20_super_bazooka: vn_m20a1b1_01
    {
        author = "Letlev";
        displayName = "M20 Super Bazooka";
        picture = "\SiP\Addons\sip_un_weapons\Bazooka\m20_superbazooka_ui.paa";
        magazines[] = {"SiP_M28A2_heat_rocket","SiP_M30_smoke_rocket"};
        class single: single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_bazooka_shot_soundset","vn_launcher_rocket_tails_soundset"};
            };
        };
    };

    class SiP_m9a1_bazooka: ff_us_m9a0_bazooka
    {
        author = "Letlev";
        displayName = "M9A1 Bazooka";
        picture = "\SiP\Addons\sip_un_weapons\Bazooka\m9a1_bazooka_ui.paa";
        magazines[] = {"SiP_M6A3_rocket"};
        class single: single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_M9_bazooka_shot_soundset","vn_launcher_rocket_tails_soundset"};
            };
        };
    };
};

class cfgMagazines
{
    class vn_m20a1b1_heat_mag;
    class vn_m20a1b1_wp_mag;

    class LIB_1Rnd_60mm_M6;

    class SiP_M28A2_heat_rocket: vn_m20a1b1_heat_mag
    {
        author = "Letlev";
        displayName = "M28A2 HEAT Rocket";
        mass = 20;
        ammo = "SiP_M28A2_ammo";
    };
    class SiP_M30_smoke_rocket: vn_m20a1b1_wp_mag
    {
        author = "Letlev";
        displayName = "M30 WP Rocket";
        mass = 20;
    };
    class SiP_M6A3_rocket: LIB_1Rnd_60mm_M6
    {
        author = "Letlev";
        displayName = "M6A3 Rocket";
        picture = "\ff_us_waffens\icons\ff_us_roket_m6a3_ca.paa";
        model = "\ff_us_waffens\ff_us_m6a3.p3d";
        mass = 15;
        initSpeed = 99.77;
        ammo = "SiP_M6A3_ammo";
    };
};

class cfgAmmo
{
    class vn_m20a1b1_heat_ammo;

    class LIB_60mm_M6;

    class SiP_M28A2_ammo: vn_m20a1b1_heat_ammo
    {
        hit = 600;
    };
    
    class SiP_M6A3_ammo: LIB_60mm_M6
    {
        hit = 300;
    };
};