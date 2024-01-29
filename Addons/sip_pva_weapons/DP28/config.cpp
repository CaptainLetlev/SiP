class cfgPatches
{
    class SiP_Patch_dp28
    {
        addonRootClass = "SiP_Patch_pva_weapons";
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
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_dp28"
        };
    };
};

class cfgWeapons
{
    class vn_lmg;
    class vn_dp28: vn_lmg
    {
        class FullAuto;
        class Single;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
    };
    
    class SiP_dp28: vn_dp28
    {
        author = "Letlev";
        displayName = "DP-28";
        class FullAuto: FullAuto
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class Single: Single
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class aicqb: aicqb
        {
            aiRateOfFire = 1e-06;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class aiclose: aiclose
        {
            aiRateOfFire = 1e-06;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class aimedium: aimedium
        {
            aiRateOfFire = 1e-06;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
        class aifar: aifar
        {
            aiRateOfFire = 1e-06;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_DP27_Shot_soundSet","jsrs_ww2_mg_reverb_soundset"};
            };
        };
    };
};