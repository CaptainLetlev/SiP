class cfgPatches
{
    class SiP_Patch_M3a1_greasegun
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
            "SiP_m3a1_greasegun"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgSoundShaders
{
    class SiP_Greasegun_closeShot_SoundShader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\M3A1_Greasegun\sounds\Greasegun_shot.wss",1}};
        volume = "(0.5-interior)";
        range = 50;
        rangeCurve[] = {{0,1.5},{20,1.15},{40,0.25}};
        limitation = 0;
    };
    class SiP_Greasegun_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\M3A1_Greasegun\sounds\Greasegun_shot.wss",1}};
        volume = "0.5*(1-interior)";
        range = 100;
        rangecurve[] = {{0,0},{10,1},{100,0}};
    };
};

class cfgsoundsets
{
    class vn_m3a1_shot_soundset;

    class SiP_Greasegun_shot_soundset: vn_m3a1_shot_soundset
    {
        soundShaders[] = 
        {
            "FoW_Thompson_Action",
            "SiP_Greasegun_closeShot_SoundShader",
            "SiP_Greasegun_close_distance_shot_soundshader",
            "FoW_Thompson_Mid",
            "FoW_Thompson_1P",
            "FoW_45ACP_Far",
            "FoW_SMG45_Interior_Near",
            "FoW_SMG_Interior_Attack",
            "FoW_45ACP_Interior_Far",
            "FoW_SMG_Interior_Casings"
        };
    };
};

class cfgWeapons
{
    class vn_smg;
    class vn_m3a1: vn_smg
    {
        class WeaponSlotsInfo;
    };

    class SiP_m3a1_greasegun: vn_m3a1
    {
        author = "Letlev";
        displayName = "M3A1 Greasegun";
        magazineWell[] = {};
        modes[] = {"Full","Single","Burst_AI"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot{};
        };
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.115;
            dispersion = 0.0021;
            minRange = 400;
            minRangeProbab = 0.3;
            midRange = 600;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0;
            aiRateOfFireDistance = 0;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                soundsetshot[] = {"SiP_Greasegun_shot_soundset","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
            class standardsound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_Greasegun_shot_soundset","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
        };
        class Full: Mode_FullAuto
        {
            reloadTime = 0.115;
            dispersion = 0.0021;
            minRange = 1;
            minRangeProbab = 1;
            midRange = 10;
            midRangeProbab = 1;
            maxRange = 20;
            maxRangeProbab = 1;
            aiRateOfFire = 0;
            aiRateOfFireDistance = 0;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                soundsetshot[] = {"SiP_Greasegun_shot_soundset","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
            class standardsound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_Greasegun_shot_soundset","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
        };
        class Burst_AI: Mode_Burst
        {
            reloadTime = 0.115;
            dispersion = 0.0021;
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
            aiRateOfFire = 0;
            aiRateOfFireDistance = 0;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                soundsetshot[] = {"SiP_Greasegun_shot_soundset","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
            class standardsound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_Greasegun_shot_soundset","vn_762x25mm_smg_fullauto_tails_soundset"};
            };
        };
    };
};

class cfgMagazines
{
    class vn_smgmag_base;

    class vn_m3a1_mag: vn_smgmag_base
	{
        displayName = "30Rnd .45 Grease Gun Mag";
        mass = 6.7;
    };
    class vn_m3a1_t_mag: vn_m3a1_mag
	{
        displayName = "30Rnd .45 Grease Gun Mag (Tracer)";
        mass = 6.7;
    };
};