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

class CfgSoundShaders
{
    class vn_pps43_close_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_pva_weapons\PPS43\data\sounds\PPS_shot.wss",1}};
        volume = "0.5*(1-interior)";
        range = 30;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class vn_pps43_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_pva_weapons\PPS43\data\sounds\PPS_shot.wss",1}};
        volume = "0.5*(1-interior)";
        range = 100;
        rangecurve[] = {{0,0},{10,1},{100,0}};
    };
};

class CfgSoundSets
{
    class vn_basic_weapon_shot_soundset;

    class SiP_pps43_shot_soundset: vn_basic_weapon_shot_soundset
	{
		soundshaders[] = 
        {
            "vn_regular_smg_shells_soundshader",
            "vn_regular_smg_int_shells_soundshader",
            "vn_pps52_closure_soundshader",
            "vn_pps52_interior_shot_soundshader",
            "vn_pps52_interior_distance_shot_soundshader",
            "vn_pps52_interior_medium_distance_shot_soundshader",
            "vn_pps43_close_shot_soundshader",
            "vn_pps43_close_distance_shot_soundshader",
            "vn_pps52_medium_distance_shot_soundshader",
            "vn_pps52_far_distance_shot_soundshader",
            "vn_pps52_very_far_distance_shot_soundshader"
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
        modes[] = {"FullAuto","close","short","medium","far_optic1"};
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.08;
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
                SoundSetShot[] = {"SiP_pps43_shot_soundset","vn_762x25mm_smg_fullauto_tails_soundset"};
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
    };
};