class cfgPatches
{
    class SiP_Patch_M1903A4_Springfield
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
            "SiP_Springefield_scope",

            "SiP_m1903a4_Springfield",
            "SiP_m1903a4_Springfield_scope",

            "SiP_m1903a3_Springfield"
        };
        magazines[] = 
        {
            "SiP_springfield_5_mag",
            "SiP_springfield_5_t_mag"
        };
    };
};

class CowsSlot;
class PointerSlot;

class cfgWeapons
{
    class vn_rifle762;
    class vn_m1903: vn_rifle762
    {
        class Single;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
        class aiopticmode1;
        class aiopticmode2;
        class WeaponSlotsInfo;
        class EventHandlers;
    };

    class vn_optic_base;
    class vn_o_8x_m1903: vn_optic_base
    {
        class ItemInfo;
    };

    class SiP_Springefield_scope: vn_o_8x_m1903
    {
        class ItemInfo: ItemInfo
        {
            modeloptics = "\fow\fow_weapons\m1903\fine_reticle";
        };
    };

    class SiP_m1903a4_Springfield: vn_m1903
    {
        author = "Letlev";
        displayName = "M1903A4 Springfield";
        magazines[] = {"SiP_springfield_5_mag","SiP_springfield_5_t_mag"};
        magazineWell[] = {};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1903_shot_soundset","vn_bolt_rifle_tails_soundset","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aicqb: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1903_shot_soundset","vn_bolt_rifle_tails_soundset","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aiclose: aiclose
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1903_shot_soundset","vn_bolt_rifle_tails_soundset","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aimedium: aimedium
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1903_shot_soundset","vn_bolt_rifle_tails_soundset","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aifar: aifar
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1903_shot_soundset","vn_bolt_rifle_tails_soundset","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aiopticmode1: aiopticmode1
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1903_shot_soundset","vn_bolt_rifle_tails_soundset","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class aiopticmode2: aiopticmode2
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1903_shot_soundset","vn_bolt_rifle_tails_soundset","vn_boltaction_trigger_reset_soundset"};
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot{};
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = {"SiP_Springefield_scope"};
                iconPosition[] = {0.45,0.38};
                iconScale = 0.2;
            };
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {"vn_b_m1903"};
                iconPosition[] = {0.35,0.5};
                iconScale = 0.25;
            };
            class UnderBarrelSlot{};
        };
    };
    class SiP_m1903a4_Springfield_scope: SiP_m1903a4_Springfield
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "SiP_Springefield_scope";
            };
        };
    };

    class SiP_m1903a3_Springfield: SiP_m1903a4_Springfield
    {
        displayName = "M1903A3 Springfield";
        reloadAction = "vn_k98k_reloadmagazine";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot{};
        };
    };
};

class cfgMagazines
{
    class vn_m1903_mag;

    class SiP_springfield_5_mag: vn_m1903_mag
    {
        author = "Letlev";
        displayName = "5Rnd .30-06 Clip";
        picture = "\fow\fow_weapons\m1903\data\ui\m_m1903_ca.paa";
        model = "\fow\fow_weapons\m1903\m1903_clip.p3d";
    };
    class SiP_springfield_5_t_mag: SiP_springfield_5_mag
    {
        displayName = "5Rnd .30-06 Clip (Tracers)";
        tracersEvery = 1;
        lastRoundsTracer = 5;
    };
};

class CfgSoundShaders
{
    class SiP_m1903_interior_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\M1903_Springfield\data\sounds\springfield_shot.wss",1}};
        volume = "1.5*interior";
        range = 30;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class SiP_m1903_close_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\M1903_Springfield\data\sounds\springfield_shot.wss",1}};
        volume = "1.5*(1-interior)";
        range = 50;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
};

class cfgsoundsets
{
    class vn_m1903_shot_soundset;

    class SiP_m1903_shot_soundset: vn_m1903_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_m1903_closure_soundshader",
            "SiP_m1903_interior_shot_soundshader",
            "vn_boltaction_shared_interior_distance_shot_soundshader",
            "vn_boltaction_shared_interior_medium_distance_shot_soundshader",
            "SiP_m1903_close_shot_soundshader",
            "vn_boltaction_shared_close_distance_shot_soundshader",
            "vn_boltaction_shared_medium_distance_shot_soundshader",
            "vn_boltaction_shared_far_distance_shot_soundshader",
            "vn_boltaction_shared_very_far_distance_shot_soundshader"
        };
    };
};