class cfgPatches
{
    class SiP_Patch_type100
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
            "vn_weapons",
            "EAW_WeaponConfig"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_type100"
        };
        magazines[] = 
        {
            "SiP_type100_30_mag",
            "SiP_type100_30_t_mag"
        };
    };
};

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class fow_rifle_base;
    class fow_w_type100: fow_rifle_base
    {
        class Full;
    };

    class SiP_type100: fow_w_type100
    {
        author = "Letlev";
        displayName = "Type 100";
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        magazines[] = {"SiP_type100_30_mag","SiP_type100_30_t_mag"};
        modes[] = {"Full","AICQB","AIClose","AIMedium","AIFar"};
        reloadAction = "vn_sten_reloadmagazine";
        class Full: Full
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"ACPC2_Shot_SoundSet","ACPC2_Tail_SoundSet","ACPC2_InteriorTail_SoundSet"};
            };
            ffCount = 1;
            recoil = "recoil_auto_primary_5outof10";
            recoilProne = "recoil_auto_primary_prone_4outof10";
            dispersion = 0.002;
            aiDispersionCoefY = 1.7;
            aiDispersionCoefX = 1.4;
        };
        class aicqb: Full
        {
            burst = 6;
            showToPlayer = 0;
            dispersion = 0.015;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
            aiRateOfFireDistance = 50;
        };
        class aiclose: aicqb
        {
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 60;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 1;
            maxRange = 160;
            maxRangeProbably = 0.5;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aicqb
        {
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 100;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 230;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 250;
        };
        class aifar: aicqb
        {
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 150;
            minRangeProbab = 0.5;
            midRange = 230;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbab = 0.5;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 350;
        };
    };
};

class cfgMagazines
{
    class fow_32Rnd_8x22;

    class SiP_type100_30_mag: fow_32Rnd_8x22
    {
        author = "Letlev";
        displayName = "30Rnd. Type 100 Mag";
        ammo = "EAW_Pistol_Ball";
        count = 30;
    };
    class SiP_type100_30_t_mag: SiP_type100_30_mag
    {
        displayName = "30Rnd. Type 100 Mag (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 10;
    };
};
