class cfgPatches
{
    class SiP_Patch_mas49
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
            "sp_fwa_mas",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_mas49"
        };
        magazines[] = 
        {
            "SiP_m49_10_mag",
            "SiP_m49_10_t_mag"
        };
    };
};

class PointerSlot;

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class sp_fwa_mas_base;
    class sp_fwa_mas_49: sp_fwa_mas_base
    {
        class Single;
        class WeaponSlotsInfo;
    };

    class SiP_mas49: sp_fwa_mas_49
    {
        scope = 2;
        author = "Letlev";
        displayName = "MAS-49";
        baseWeapon = "SiP_mas49";
        magazines[] = {"SiP_m49_10_mag","SiP_m49_10_t_mag"};
        magazineWell[] = {};
        reloadAction = "vn_m4956_reloadmagazine";
        vn_melee_bayonet_startpos[] = {-0.03,0.3,-0.02};
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 100;
            class MuzzleSlot{};
            class CowsSlot{};
            class PointerSlot: PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"vn_b_m4956"};
                iconPosition[] = {0.35,0.5};
                iconScale = 0.25;
            };
            class UnderBarrelSlot{};
        };
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_mas49_shot_soundset","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            reloadTime = 0.1;
            dispersion = 0.0012;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.6;
        };
        class aicqb: Single
        {
            showToPlayer = 0;
            dispersion = 0.022;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            burst = 1;
            burstRangeMax = -1;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose: aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 100;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.04;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 300;
        };
        class aifar: aicqb
        {
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 500;
        };
    };
};

class cfgMagazines
{
    class vn_m4956_10_mag;

    class SiP_m49_10_mag: vn_m4956_10_mag
    {
        author = "Letlev";
        displayName = "10Rnd. MAS49 Magazine";
        modelSpecial = "sp_fwa_mas\sp_fwa_mas_20";
        modelSpecialIsProxy = 1;
        mass = 2.5;
        weight = 0;
    };
    class SiP_m49_10_t_mag: SiP_m49_10_mag
    {
        displayName = "10Rnd. MAS49 Magazine (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};

class CfgSoundShaders
{
    class SiP_mas49_interior_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\MAS_49\sounds\MAS49_shot.wss",1}};
        volume = "3*interior";
        range = 30;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class SiP_mas49_interior_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\MAS_49\sounds\MAS49_shot.wss",1}};
        volume = "3.95*interior";
        range = 80;
        rangecurve[] = {{0,0},{10,1},{100,0}};
    };
    class SiP_mas49_close_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\MAS_49\sounds\MAS49_shot.wss",1}};
        volume = "3*(1-interior)";
        range = 50;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class SiP_mas49_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\MAS_49\sounds\MAS49_shot.wss",1}};
        volume = "3*(1-interior)";
        range = 100;
        rangecurve[] = {{0,0},{10,1},{100,0}};
    };
};

class cfgsoundsets
{
    class vn_mas49_shot_soundset;

    class SiP_mas49_shot_soundset: vn_mas49_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_regular_shells_soundshader",
            "vn_regular_int_shells_soundshader",
            "vn_mas49_closure_soundshader",
            "SiP_mas49_interior_shot_soundshader",
            "SiP_mas49_interior_distance_shot_soundshader",
            "vn_mas49_interior_medium_distance_shot_soundshader",
            "SiP_mas49_close_shot_soundshader",
            "SiP_mas49_close_distance_shot_soundshader",
            "vn_mas49_medium_distance_shot_soundshader",
            "vn_mas49_far_distance_shot_soundshader",
            "vn_mas49_very_far_distance_shot_soundshader"
        };
    };
};