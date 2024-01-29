class cfgPatches
{
    class SiP_Patch_mas36
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
            "SiP_mas36"
        };
        magazines[] = 
        {
            "SiP_mas36_5_mag",
            "SiP_mas36_5_t_mag"
        };
    };
};

class MuzzleSlot;

class cfgWeapons
{
    class vn_rifle762;
    class vn_m36: vn_rifle762
    {
        class Single;
    };

    class SiP_mas36: vn_m36
    {
        author = "Letlev";
        displayName = "MAS-36";
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class standardsound
            {
                soundsetshot[] = {"SiP_mas49_shot_soundset","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            reloadTime = 1.5;
            dispersion = 0.00035;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.4;
        };
        class aicqb: Single
        {
            showToPlayer = 0;
            dispersion = 0.0021;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
        };
        class aiclose: aicqb
        {
            dispersion = 0.00105;
            minRange = 50;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbably = 0.5;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            dispersion = 0.000525;
            minRange = 250;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 1;
            maxRange = 450;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2.5;
            aiRateOfFireDistance = 250;
            requiredOpticType = 0;
        };
        class aifar: aicqb
        {
            dispersion = 0.00085;
            minRange = 350;
            minRangeProbab = 0.5;
            midRange = 500;
            midRangeProbab = 1;
            maxRange = 600;
            maxRangeProbab = 0.5;
            aiRateOfFire = 3.5;
            aiRateOfFireDistance = 450;
            requiredOpticType = 0;
        };
    };
};