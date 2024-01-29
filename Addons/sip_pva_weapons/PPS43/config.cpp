class cfgPatches
{
    class SiP_Patch_pps43
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
            "SiP_pps43"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
    class vn_pps43;
    class SiP_pps43: vn_pps43
    {
        author = "Letlev";
        displayName = "PPS-43";
        modes[] = {"Full","Single","Burst_AI"};
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.11;
            dispersion = 0.00131;
            minRange = 400;
            minRangeProbab = 0.3;
            midRange = 600;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 500;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"NORTH_ppsh41_Shot_soundSet","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
        };
        class Full: Mode_FullAuto
        {
            reloadTime = 0.11;
            dispersion = 0.00131;
            minRange = 1;
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
                SoundSetShot[] = {"NORTH_ppsh41_Shot_soundSet","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
        };
        class Burst_AI: Mode_Burst
        {
            reloadTime = 0.1;
            dispersion = 0.00131;
            showToPlayer = 0;
            soundBurst = 0;
            textureType = "dual";
            burst = 5;
            burstRangeMax = 10;
            aiBurstTerminable = 1;
            minRange = 20;
            minRangeProbab = 1.5;
            midRange = 200;
            midRangeProbab = 1;
            maxRange = 400;
            maxRangeProbab = 1;
            aiRateOfFire = 1.0;
            aiRateOfFireDistance = 100;
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"NORTH_ppsh41_Shot_soundSet","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
        };
    };
};