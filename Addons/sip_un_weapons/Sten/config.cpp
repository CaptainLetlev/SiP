class cfgPatches
{
    class SiP_Patch_sten
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
            "WW2_SPE_Assets_c_Weapons_InfantryWeapons_c",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_sten_mkii",
            "SiP_sten_mkv"
        };
    };
};

class CfgSoundShaders
{
    class SiP_sten_interior_shot_soundshader
    {
        samples[] = {{"SiP\Addons\sip_un_weapons\Sten\data\sounds\sten_shot.wss",1}};
        volume = "1*interior";
        range = 30;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class SiP_sten_close_shot_soundshader
    {
        samples[] = {{"SiP\Addons\sip_un_weapons\Sten\data\sounds\sten_shot.wss",1}};
        volume = "1*(1-interior)";
        range = 150;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
};

class cfgsoundsets
{
    class vn_sten_shot_soundset;

    class SiP_sten_shot_soundset: vn_sten_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_regular_smg_shells_soundshader",
            "vn_regular_smg_int_shells_soundshader",
            "vn_sten_closure_soundshader",
            "SiP_sten_interior_shot_soundshader",
            "vn_sten_interior_distance_shot_soundshader",
            "vn_sten_interior_medium_distance_shot_soundshader",
            "SiP_sten_close_shot_soundshader",
            "vn_sten_close_distance_shot_soundshader",
            "vn_sten_medium_distance_shot_soundshader",
            "vn_sten_far_distance_shot_soundshader",
            "vn_sten_very_far_distance_shot_soundshader"
        };
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons
{
    class SPE_Sten_Mk2;

    class SiP_sten_mkii: SPE_Sten_Mk2
    {
        author = "Letlev";
        displayName = "Sten Mk.II";
        recoil = "recoil_mp40_1";
        modes[] = {"Full","Single","Burst_AI"};
        magazines[] = {"vn_sten_mag","vn_sten_t_mag"};
        magazineWell[] = {};
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.1;
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
                soundsetshot[] = {"SiP_sten_shot_soundset","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class Full: Mode_FullAuto
        {
            reloadTime = 0.1;
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
                soundsetshot[] = {"SiP_sten_shot_soundset","vn_9mm_smg_fullauto_tails_soundset"};
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
                soundsetshot[] = {"SiP_sten_shot_soundset","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
    };

    class SiP_sten_mkv: SiP_sten_mkii
    {
        author = "Letlev";
        displayName = "Sten Mk.V";
        model = "\WW2\Assets_m\Weapons\MachineGun_Sub_m\WW2_Sten_Mk5.p3d";
        picture = "\WW2\Assets_t\Weapons\Equipment_t\Weapons\MachineGun_Sub\Gear_Sten_Mk5_X_ca.paa";
        hiddenSelectionsTextures[] = {"ww2\assets_t\weapons\machinegun_sub_t\ww2_sten\sten_mk5_co.paa"};
        handAnim[] = {"OFP2_ManSkeleton","\WW2\Core_a\IF_Animations_a\Weapons\Sten\Sten_mk5_handanim.rtm"};
        reloadAction = "LIB_GestureReload_Sten";
    };
};