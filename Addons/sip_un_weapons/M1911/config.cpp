class cfgPatches
{
    class SiP_Patch_M1911
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
            "SiP_m1911"
        };
        magazines[] = 
        {
            "SiP_m1911_mag"
        };
    };
};

class CfgSoundShaders
{
    class SiP_m1911_close_shot_soundshader
	{
		samples[] = 
        {
            {"SiP\Addons\sip_un_weapons\M1911\sounds\m1911_shot1.wss",1},
        };
		volume = "0.5*(1-interior)";
		range = 50;
		rangecurve[] = {{0,1.0},{4,0.75},{10,0},{30,0}};
	};
};

class CfgSoundSets
{
    class vn_basic_weapon_shot_soundset;

    class SiP_m1911_shot_soundset: vn_basic_weapon_shot_soundset
	{
		soundshaders[] = 
        {
            "vn_regular_smg_shells_soundshader",
            "vn_regular_smg_int_shells_soundshader",
            "vn_m1911_closure_soundshader",
            "vn_m1911_interior_shot_soundshader",
            "vn_m1911_interior_distance_shot_soundshader",
            "vn_m1911_interior_medium_distance_shot_soundshader",
            "SiP_m1911_close_shot_soundshader",
            "vn_m1911_close_distance_shot_soundshader",
            "vn_m1911_medium_distance_shot_soundshader",
            "vn_m1911_far_distance_shot_soundshader",
            "vn_m1911_very_far_distance_shot_soundshader"
        };
	};
};

class cfgWeapons
{
    class vn_pistol;
    class vn_m1911: vn_pistol
    {
        class Single;
        class WeaponSlotsInfo;
    };
    
    class SiP_m1911: vn_m1911
    {
        author = "Letlev";
        displayName = "M1911";
        recoil = "sp_fwa_recoil_pistol_45_medium";
        magazines[] = {"SiP_m1911_mag"};
        magazineWell[] = {};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1911_shot_soundset","vn_cal45_pistol_tails_soundset","vn_m1911_pistol_trigger_reset_soundset","SPE_1911_stereoLayer_SoundSet"};
            };
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1911_shot_soundset","vn_cal45_pistol_tails_soundset","vn_m1911_pistol_trigger_reset_soundset","SPE_1911_stereoLayer_SoundSet"};
            };
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 23;
            class CowsSlot{};
            class PointerSlot{};
            class MuzzleSlot{};
        };
    };
};

class CfgMagazines
{
    class vn_m1911_mag;

    class SiP_m1911_mag: vn_m1911_mag
    {
        mass = 0.245;
    };
};