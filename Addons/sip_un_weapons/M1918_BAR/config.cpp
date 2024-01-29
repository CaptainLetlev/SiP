class cfgPatches
{
    class SiP_Patch_M1918_BAR
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
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m1918A2_bar",
            "SiP_m1918A2_bar_bipod"
        };
    };
};

class CfgSoundShaders
{
    class SiP_bar_close_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\M1918_BAR\sounds\m1918_bar_shot2.wss",1}};
        volume = "0.25*(1-interior)";
        range = 30;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class SiP_bar_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\M1918_BAR\sounds\m1918_bar_shot2.wss",1}};
        volume = "0.25*(1-interior)";
        range = 100;
        rangecurve[] = {{0,0},{10,1},{100,0}};
    };
};

class cfgsoundsets
{
    class vn_bar_shot_soundset;

    class SiP_bar_shot_soundset: vn_bar_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_regular_shells_soundshader",
            "vn_regular_int_shells_soundshader",
            "vn_bar_closure_soundshader",
            "vn_bar_interior_shot_soundshader",
            "vn_bar_interior_distance_shot_soundshader",
            "vn_bar_interior_medium_distance_shot_soundshader",
            "SiP_bar_close_shot_soundshader",
            "SiP_bar_close_distance_shot_soundshader",
            "vn_bar_medium_distance_shot_soundshader",
            "vn_bar_far_distance_shot_soundshader",
            "vn_bar_very_far_distance_shot_soundshader"
        };
    };
};

class cfgWeapons
{
    class vn_lmg;
    class vn_m1918: vn_lmg
    {
        class FullAuto;
        class FullAutoSlow;
        class aiclose;
        class aimedium;
        class aifar;
    };
    
    class SiP_m1918A2_bar: vn_m1918
    {
        author = "Letlev";
        displayName = "M1918A2 BAR";
        magazineWell[] = {};
        class FullAuto: FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_bar_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class FullAutoSlow: FullAutoSlow
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_bar_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class aiclose: aiclose
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_bar_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class aimedium: aimedium
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_bar_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class aifar: aifar
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundsetshot[] = {"SiP_bar_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
    };
    class SiP_m1918A2_bar_bipod: SiP_m1918A2_bar
    {
        class LinkedItems
        {
            class LinkedItemsAcc
            {
                slot = "UnderBarrelSlot";
                item = "vn_bipod_m1918";
            };
        };
    };
};