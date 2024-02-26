class cfgPatches
{
    class SiP_Patch_Thompson
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
            "vn_weapons",
            "fow_weapons",
            "fow_weapons_c"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m1a1_thompson",
            "SiP_m1a1_thompson_nostock",
            "SiP_m1928a1_thompson",
            "SiP_m1_thompson"
        };
    };
};

class Mode_SemiAuto;
class Mode_FullAuto;

class cfgWeapons
{
    class vn_m1a1_tommy;
    class vn_m1a1_tommy_so;
    class vn_m1928a1_tommy;

    class SiP_m1a1_thompson: vn_m1a1_tommy
    {
        author = "Letlev";
        displayName = "M1A1 Thompson";
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_t_mag","vn_m1a1_20_mag","vn_m1a1_20_t_mag"};
        magazinewell[] = {};
        recoil = "vn_recoil_smg_m1928_tommy";
        recoilProne = "vn_recoil_smg_m1928_tommy";
        modes[] = {"FullAuto","Single","close","short","medium","far_optic1"};
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.08;
            dispersion = 0.0021;
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
                soundSetShot[] = {"SiP_Thompson_shot_soundset","vn_cal45_pistol_tails_soundset"};
            };
        };
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
                soundSetShot[] = {"SiP_Thompson_shot_soundset","vn_cal45_pistol_tails_soundset"};
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
    class SiP_m1a1_thompson_nostock: vn_m1a1_tommy_so
    {
        author = "Letlev";
        displayName = "M1A1 Thompson (No Stock)";
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_t_mag","vn_m1a1_20_mag","vn_m1a1_20_t_mag"};
        magazinewell[] = {};
        modes[] = {"FullAuto","Single","close","short","medium","far_optic1"};
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.08;
            dispersion = 0.0021;
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
                soundSetShot[] = {"SiP_Thompson_shot_soundset","vn_cal45_pistol_tails_soundset"};
            };
        };
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
                soundSetShot[] = {"SiP_Thompson_shot_soundset","vn_cal45_pistol_tails_soundset"};
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

    class SiP_m1928a1_thompson: vn_m1928a1_tommy
    {
        author = "Letlev";
        displayName = "M1928A1 Thompson";
        magazines[] = {"vn_m1a1_30_mag","vn_m1a1_30_t_mag","vn_m1a1_20_mag","vn_m1a1_20_t_mag"};
        magazineWell[] = {};
        modes[] = {"FullAuto","Single","close","short","medium","far_optic1"};
        class Single: Mode_SemiAuto
        {
            reloadTime = 0.07;
            dispersion = 0.0021;
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
                soundSetShot[] = {"SiP_Thompson_shot_soundset","vn_cal45_pistol_tails_soundset"};
            };
        };
        class FullAuto: Mode_FullAuto
        {
            reloadTime = 0.07;
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
                soundSetShot[] = {"SiP_Thompson_shot_soundset","vn_cal45_pistol_tails_soundset"};
            };
        };
        class close: FullAuto
        {
            burst = 20;
            aiRateOfFire = 0;
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
            aiRateOfFire = 0;
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
            aiRateOfFire = 0;
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

    class SiP_m1_thompson: SiP_m1a1_thompson
    {
        author = "Letlev";
        displayName = "M1 Thompson";
        model = "fow\fow_weapons\m1a1\wx_thompson_m1";
        handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_thompson_hands.rtm"};
        reloadAction = "vn_m1a1_reloadmagazine";
        selectionFireAnim = "muzzleFlash";
        magazineReloadTime = 5;
    };
};

class CfgSoundShaders
{
    class SiP_Thompson_closeShot_SoundShader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Thompson\data\sounds\thompson_shot.wss",1}};
        volume = "(1-interior)";
        range = 50;
        rangeCurve[] = {{0,1.5},{20,1.15},{40,0.25}};
        limitation = 0;
    };
    class SiP_Thompson_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Thompson\data\sounds\thompson_shot.wss",1}};
        volume = "(1-interior)";
        range = 450;
        rangeCurve[] = {{0,0},{15,0},{30,1.05},{100,1},{200,0.65},{400,0.25}};
        limitation = 0;
    };
};

class CfgSoundSets
{
    class vn_tommy_shot_soundset;

    class SiP_Thompson_shot_soundset: vn_tommy_shot_soundset
    {
        soundShaders[] = 
        {
			"vn_regular_smg_shells_soundshader",
			"vn_regular_smg_int_shells_soundshader",
			"vn_tommy_closure_soundshader",
			"vn_tommy_interior_shot_soundshader",
			"vn_tommy_interior_distance_shot_soundshader",
			"vn_tommy_interior_medium_distance_shot_soundshader",
			"SiP_Thompson_closeShot_SoundShader",
			"SiP_Thompson_close_distance_shot_soundshader",
			"vn_tommy_medium_distance_shot_soundshader",
			"vn_tommy_far_distance_shot_soundshader",
			"vn_tommy_very_far_distance_shot_soundshader"
		};
    };
};

class cfgMagazines
{
    class vn_smgmag_base;

    class vn_m1a1_20_mag: vn_smgmag_base
    {
        displayName = "20Rnd .45 Thompson Mag";
        mass = 4.0;
    };
    class vn_m1a1_20_t_mag: vn_m1a1_20_mag
    {
        displayName = "20Rnd .45 Thompson Mag (Tracer)";
        mass = 4.0;
    };

    class vn_m1a1_30_mag: vn_m1a1_20_mag
    {
        displayName = "30Rnd .45 Thompson Mag";
        mass = 4.5;
    };
    class vn_m1a1_30_t_mag: vn_m1a1_30_mag
    {
        displayName = "30Rnd .45 Thompson Mag (Tracer)";
        mass = 4.5;
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {	
        ////Sterling////
        class SiP_m1a1_thompson
        {
            model = "W_hssn_SiP_weapon_thompson_removable_stock";
            stock = "attach_stock";
        };
        class SiP_m1a1_thompson_nostock
        {
            model = "W_hssn_SiP_weapon_thompson_removable_stock";
            stock = "remove_stock";
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {
        //Removable Stock
        class W_hssn_SiP_weapon_thompson_removable_stock
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "stock"
            };
            class stock
            {
                label = "Stock";
                changeingame = 1;
                changedelay = 4;
                values[]=
                {
                    "attach_stock",
                    "remove_stock"
                };
                class attach_stock
                {
                    label = "Full";
                    actionLabel = "Attach Stock";
                    icon = "\vn\weapons_f_vietnam_02\ui\icon_vn_m1a1_tommy_ca.paa";
                };
                class remove_stock
                {
                    label = "Removed";
                    actionLabel = "Remove Stock";
                    icon = "\vn\weapons_f_vietnam_02\ui\icon_vn_m1a1_tommy_so_ca.paa";
                };
            };
        };
    };
};