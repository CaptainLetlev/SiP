class cfgPatches
{
    class SiP_Patch_ppsh41
    {
        addonRootClass = "SiP_Patch_pva_weapons";
        requiredAddons[] =
        {
            "weapons_f_vietnam","weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "vn_weapons",
            "NORTH_weapons",
            "NORTH_weapons_cfg"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_ppsh41"
        };
    };
};

class Mode_FullAuto;

class cfgWeapons
{
    class vn_ppsh41;

    class SiP_ppsh41: vn_ppsh41
    {
        author = "Letlev";
        displayName = "PPSh-41";
        magazines[] = 
        {
            "vn_ppsh41_71_mag",
            "vn_ppsh41_71_t_mag",
            "vn_ppsh41_35_mag",
            "vn_ppsh41_35_t_mag"
        };
        class Eventhandlers
        {
            class fow_mgRoF
            {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.05;
            dispersion = 0.002;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"jsrs_pdw2000_shot_soundset","vn_762x25mm_smg_fullauto_tails_soundset"};
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