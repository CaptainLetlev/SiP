class cfgPatches
{
    class SiP_Patch_bren
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
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_bren"
        };
        magazines[] = 
        {
            "SiP_bren_30_mag",
            "SiP_bren_30_t_mag"
        };
    };
};

class Mode_FullAuto;

class cfgWeapons
{
    class sp_fwa_bren_mk2;

    class SiP_bren: sp_fwa_bren_mk2
    {
        author = "Letlev";
        displayName = "Bren Mk.II";
        baseWeapon = "SiP_bren";
        class Eventhandlers
        {
            class fow_mgRoF
            {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        magazines[] = {"SiP_bren_30_mag","SiP_bren_30_t_mag"};
        magazineWell[] = {};
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.12;
            dispersion = 0.00102;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
            };
            soundContinuous = 0;
            soundBurst = 0;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            showToPlayer = 1;
        };
        class close: FullAuto
        {
            burst = 10;
            aiRateOfFire = 0.5;
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
            burst = 8;
            aiRateOfFire = 2;
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
            burst = 5;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
        };
        class far_optic1: close
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 9;
            aiRateOfFireDistance = 900;
            minRange = 350;
            minRangeProbab = 0.04;
            midRange = 550;
            midRangeProbab = 0.5;
            maxRange = 700;
            maxRangeProbab = 0.01;
        };
        class far_optic2: far_optic1
        {
            requiredOpticType = 2;
            autoFire = 0;
            burst = 1;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.5;
            maxRange = 1000;
            maxRangeProbab = 0.01;
        };
    };
};

class cfgMagazines
{
    class vn_l1a1_30_02_mag;

    class SiP_bren_30_mag: vn_l1a1_30_02_mag
    {
        author = "Letlev";
        displayName = "30Rnd. Bren Mag";
        picture = "\sp_fwa_bren\icons\mag_bren_icon_ca.paa";
        modelSpecialIsProxy = 1;
        modelSpecial = "sp_fwa_bren\sp_bren_303_30";
        ammo = "vn_77x56";
    };
    class SiP_bren_30_t_mag: SiP_bren_30_mag
    {
        displayName = "30Rnd. Bren Mag (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 30;
    };
};