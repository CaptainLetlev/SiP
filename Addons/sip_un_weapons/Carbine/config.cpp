class cfgPatches
{
    class SiP_Patch_Carbine
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
            "SiP_m1_carbine",
            "SiP_m2_carbine",
            "SiP_m1a1_carbine"
        };
        magazines[] = 
        {
            "SiP_carbine_30_mag",
            "SiP_carbine_30_t_mag",
            "SiP_carbine_15_mag",
            "SiP_carbine_15_t_mag"
        };
    };
};

class CfgSoundShaders
{
    class SiP_carbine_shot_fp_soundShader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Carbine\sounds\carbine_shot.wss",1}};
        volume = 1.5;
        range = 17;
        rangeCurve[] = {{0,1},{17,0}};
    };
    class SiP_carbine_close_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Carbine\sounds\carbine_shot.wss",1}};
        volume = 1.5;
        range = 95;
        rangeCurve[] = {{0,0},{17,0.9},{95,0}};
    };
};

class cfgsoundsets
{
    class vn_m1carbine_shot_soundset;

    class SiP_carbine_shot_soundset: vn_m1carbine_shot_soundset
    {
        soundShaders[] = 
        {
            "SiP_carbine_shot_fp_soundShader",
            "SiP_carbine_close_shot_soundshader",
            "SPE_m1car_shot_mid_SoundShader",
            "SPE_m1car_shot_midFurther_SoundShader",
            "SPE_m1car_shot_far_SoundShader",
            "SPE_m1car_Interior_closeMono_SoundShader",
            "SPE_m1car_Interior_far_SoundShader"
        };
    };
};

class Mode_FullAuto;

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class vn_rifle762;

    class vn_m1carbine: vn_rifle762
    {
        class Single;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
        class aiopticmode1;
        class aiopticmode2;
        class WeaponSlotsInfo;
    };

    class vn_m2carbine: vn_m1carbine
    {
        class FullAuto;
        class Single;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
        class aiopticmode1;
        class aiopticmode2;
        class WeaponSlotsInfo;
    };

    class LIB_M1_Carbine;
    class LIB_M1A1_Carbine: LIB_M1_Carbine
    {
        class Single;
    };

    class SiP_m1_carbine: vn_m1carbine
    {
        author = "Letlev";
        displayName = "M1 Carbine";
        recoil = "sp_fwa_recoil_assaultrifle_556_medium";
        recoilProne = "sp_fwa_recoil_assaultrifle_556_medium";
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_t_mag","SiP_carbine_30_mag","SiP_carbine_30_t_mag"};
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot{};
        };
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
        };
        class aicqb: aicqb
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose: aiclose
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
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
        class aimedium: aimedium
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
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
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
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

    class SiP_m2_carbine: vn_m2carbine
    {
        author = "Letlev";
        displayName = "M2 Carbine";
        recoil = "sp_fwa_recoil_assaultrifle_556_medium";
        recoilProne = "sp_fwa_recoil_assaultrifle_556_medium";
        magazines[] = {"SiP_carbine_30_mag","SiP_carbine_30_t_mag","SiP_carbine_15_mag","SiP_carbine_15_t_mag"};
        magazineWell[] = {};
        modes[] = {"FullAuto","Single","close","short","medium"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot{};
        };
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.081;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 10;
            midRangeProbab = 1;
            maxRange = 20;
            maxRangeProbab = 1;
            aiRateOfFire = 0;
            aiRateOfFireDistance = 600;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
        };
        class close: FullAuto
        {
            burst = 20;
            aiRateOfFire = 0.01;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close
        {
            burst = 15;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class medium: close
        {
            burst = 15;
            aiRateOfFire = 0.25;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
    };

    class SiP_m1a1_carbine: LIB_M1A1_Carbine
    {
        author = "Letlev";
        displayName = "M1A1 Carbine";
        recoil = "sp_fwa_recoil_assaultrifle_556_medium";
        recoilProne = "sp_fwa_recoil_assaultrifle_556_medium";
        magazines[] = {"SiP_carbine_15_mag","SiP_carbine_15_t_mag","SiP_carbine_30_mag","SiP_carbine_30_t_mag"};
        magazineWell[] = {};
        magazineReloadSwitchPhase = 0.5625;
        magazineReloadTime = 4;
        reloadAction = "vn_m1Carbine_reloadmagazine";
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        class EventHandlers
        {
            class vn_empty
            {
                fired = "[_this#0, 'vn_m1carbine_emptynote'] call vn_fnc_empty_click";
            };
        };
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
            reloadTime = 0.1;
            dispersion = 0.0008;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.4;
        };
        class aicqb: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            showToPlayer = 0;
        };
        class aiclose: aicqb
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
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
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
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
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"SiP_carbine_shot_soundset","SPE_rifle_med_ob_Tail_SoundSet","SPE_m1car_stereoLayer_SoundSet"};
            };
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
    class vn_carbine_15_mag;
    class vn_carbine_30_mag;

    class SiP_carbine_15_mag: vn_carbine_15_mag
    {
        displayName = "15Rnd. Carbine Mag";
        mass = 2.5;
    };
    class SiP_carbine_15_t_mag: SiP_carbine_15_mag
    {
        displayName = "15Rnd. Carbine Mag (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 15;
    };
    class SiP_carbine_30_mag: vn_carbine_30_mag
    {
        displayName = "30Rnd. Carbine Mag";
        mass = 5.58;
    };
    class SiP_carbine_30_t_mag: SiP_carbine_30_mag
    {
        displayName = "30Rnd. Carbine Mag (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 15;
        mass = 5.58;
    };
};