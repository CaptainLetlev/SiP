
class cfgPatches
{
    class SiP_Patch_l2a1_sterling
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
            "WW2_Assets_c_Weapons_InfantryWeapons_c",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_L2A1_Sterling",
            "SiP_L2A1_Sterling_f"
        };
        magazines[] = 
        {
            "SiP_sterling_34_mag",
            "SiP_sterling_34_t_mag"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
    class vn_l2a3;
    class vn_l2a3_f;

    class SiP_L2A1_Sterling: vn_l2a3
    {
        author = "Letlev";
        displayName = "L2A1 Sterling";
        magazines[] = {"SiP_sterling_34_mag","SiP_sterling_34_t_mag"};
        modes[] = {"Full","Single","Burst_AI"};
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.109;
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
                soundsetshot[] = {"WW2_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class Full: Mode_FullAuto
        {
            reloadTime = 0.109;
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
                soundsetshot[] = {"WW2_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class Burst_AI: Mode_Burst
        {
            reloadTime = 0.109;
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
                soundsetshot[] = {"WW2_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
    };

    class SiP_L2A1_Sterling_f: vn_l2a3_f
    {
        author = "Letlev";
        displayName = "L2A1 Sterling (Folded)";
        magazines[] = {"SiP_sterling_34_mag","SiP_sterling_34_t_mag"};
        modes[] = {"Full","Single","Burst_AI"};
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.109;
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
                soundsetshot[] = {"WW2_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class Full: Mode_FullAuto
        {
            reloadTime = 0.109;
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
                soundsetshot[] = {"WW2_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class Burst_AI: Mode_Burst
        {
            reloadTime = 0.109;
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
                soundsetshot[] = {"WW2_Sten_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
    };
};

class cfgMagazines
{
    class vn_f1_smg_mag;

    class SiP_sterling_34_mag: vn_f1_smg_mag
    {
        author = "Letlev";
        displayName = "34Rnd. Sterling Magazine";
        mass = 8;
    };
    class SiP_sterling_34_t_mag: SiP_sterling_34_mag
    {
        displayName = "34Rnd. Sterling Magazine (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};
