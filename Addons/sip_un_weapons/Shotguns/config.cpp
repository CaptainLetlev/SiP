class cfgPatches
{
    class SiP_Patch_Shotguns
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
            "SiP_m1897_trenchgun",

            "SiP_m1912_shotgun",
            
            "SiP_ithaca37_shotgun"
        };
    };
};

class PointerSlot;

class cfgWeapons
{
    class Pistol_Base_F;
    class vn_melee_base: Pistol_Base_F{};
    class vn_hand_melee_base: vn_melee_base{};

    class vn_shotgun;
    class fow_shotgun_base;

    class vn_m1897: vn_shotgun
    {
        class FullAuto;
        class AIClose;
        class AIMedium;
        class EventHandlers;
    };

    class fow_w_M1912: fow_shotgun_base
    {
        class Single;
    };
    
    class fow_w_ithaca37: fow_shotgun_base
    {
        class Single;
        class EventHandlers;
    };

    class SiP_m1897_trenchgun: vn_m1897
    {
        author = "Letlev";
        displayName = "Winchester M1897 Trenchgun";
        magazineWell[] = {};
        class FullAuto: FullAuto
        {
            sounds[] = {"standardsound"};
            class basesoundmodetype;
            class standardsound: basesoundmodetype
            {
                soundsetshot[] = {"SiP_m1897_shot_soundset","vn_shotgun_tails_soundset","vn_pumpgun_trigger_reset_soundset"};
            };
        };
        class AIClose: AIClose
        {
            sounds[] = {"standardsound"};
            class basesoundmodetype;
            class standardsound: basesoundmodetype
            {
                soundsetshot[] = {"SiP_m1897_shot_soundset","vn_shotgun_tails_soundset","vn_pumpgun_trigger_reset_soundset"};
            };
        };
        class AIMedium: AIMedium
        {
            sounds[] = {"standardsound"};
            class basesoundmodetype;
            class standardsound: basesoundmodetype
            {
                soundsetshot[] = {"SiP_m1897_shot_soundset","vn_shotgun_tails_soundset","vn_pumpgun_trigger_reset_soundset"};
            };
        };
        class EventHandlers: EventHandlers
        {
            class vn
            {
                fired = "[_this, 'vn_m1897_gesturereloadpump', 'vn_m1897_pumpingsound',false] spawn vn_fnc_bolt_fired";
            };
        };
    };

    class SiP_m1912_shotgun: fow_w_M1912
    {
        author = "Letlev";
        displayName = "Winchester M1912 Shotgun";
        magazines[] = {"vn_m1897_fl_mag","vn_m1897_buck_mag"};
        magazineWell[] = {};
        recoil = "vn_recoil_shotgun_m1897";
		recoilProne = "vn_recoil_shotgun_m1897";
        class Eventhandlers
        {
            class vn
            {
                fired = "[_this, 'vn_m1897_gesturereloadpump', 'vn_m1897_pumpingsound',false] spawn vn_fnc_bolt_fired";
            };
            class fow_BoltAction
            {
                fired = "_this spawn fow_main_fnc_boltAction;";
            };
        };
        muzzles[] = {"this","vn_melee_muzzle"};
        weaponInfoType = "vn_melee_zeroing_overwrite";
        class vn_melee_muzzle: vn_melee_base{};
        class Single: Single
        {
            sounds[] = {"standardsound"};
            class basesoundmodetype;
            class standardsound: basesoundmodetype
            {
                soundsetshot[] = {"SiP_m1897_shot_soundset","vn_shotgun_tails_soundset","vn_pumpgun_trigger_reset_soundset"};
            };
        };
    };

    class SiP_ithaca37_shotgun: fow_w_ithaca37
    {
        author = "Letlev";
        displayName = "Ithaca Model 37 Shotgun";
        magazines[] = {"vn_m1897_fl_mag","vn_m1897_buck_mag"};
        magazineWell[] = {};
        class Single: Single
        {
            sounds[] = {"standardsound"};
            class basesoundmodetype;
            class standardsound: basesoundmodetype
            {
                soundsetshot[] = {"Msbs65_01_Shotgun_Shot_SoundSet","vn_shotgun_tails_soundset","vn_pumpgun_trigger_reset_soundset"};
            };
        };
        class EventHandlers: EventHandlers
        {
            class vn
            {
                fired = "[_this, 'vn_m1897_gesturereloadpump', 'vn_m1897_pumpingsound',false] spawn vn_fnc_bolt_fired";
            };
            class fow_BoltAction
            {
                fired = "_this spawn fow_main_fnc_boltAction;";
            };
        };
    };
};

class CfgSoundShaders
{
    class SiP_m1897_interior_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Shotguns\data\sounds\trenchgun_shot.wss",1}};
        volume = "5.5*interior";
        range = 30;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class SiP_m1897_interior_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Shotguns\data\sounds\trenchgun_shot.wss",1}};
        volume = "5.95*interior";
        range = 100;
        rangecurve[] = {{0,0},{10,1},{100,0}};
    };
    class SiP_m1897_close_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Shotguns\data\sounds\trenchgun_shot.wss",1}};
        volume = "5.5*(1-interior)";
        range = 50;
        rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
    };
    class SiP_m1897_close_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Shotguns\data\sounds\trenchgun_shot.wss",1}};
        volume = "5*(1-interior)";
        range = 100;
        rangecurve[] = {{0,0},{10,1},{100,0}};
    };
    class SiP_m1897_medium_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Shotguns\data\sounds\trenchgun_shot.wss",1}};
        volume = "5*(1-interior)";
        range = 200;
        rangecurve[] = {{0,0},{10,0},{75,1},{200,0}};
    };
    class SiP_m1897_interior_medium_distance_shot_soundshader
    {
        samples[] = {{"\SiP\Addons\sip_un_weapons\Shotguns\data\sounds\trenchgun_shot.wss",1}};
        volume = "5*interior";
        range = 200;
        rangecurve[] = {{0,0},{10,0},{75,1},{200,0}};
    };
};

class cfgsoundsets
{
    class vn_m1897_shot_soundset;

    class SiP_m1897_shot_soundset: vn_m1897_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_m1897_closure_soundshader",
            "SiP_m1897_interior_shot_soundshader",
            "SiP_m1897_interior_distance_shot_soundshader",
            "SiP_m1897_interior_medium_distance_shot_soundshader",
            "SiP_m1897_close_shot_soundshader",
            "SiP_m1897_close_distance_shot_soundshader",
            "SiP_m1897_medium_distance_shot_soundshader",
            "vn_m1897_far_distance_shot_soundshader",
            "vn_m1897_very_far_distance_shot_soundshader"
        };
    };
};