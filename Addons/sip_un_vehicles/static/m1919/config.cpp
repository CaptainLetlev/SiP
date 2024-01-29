class cfgPatches
{
    class SiP_Patch_m1919_static
    {
        addonRootClass = "SiP_Patch_un_statics";
        requiredAddons[] = 
        {
            "static_f_vietnam",
            "static_f_vietnam_c",
            "weapons_v_f_vietnam",
            "sounds_f_vietnam_c",
            "WW2_SPE_Assets_c_Vehicles_StaticWeapons_c",
            "WW2_SPE_Assets_c_Vehicles_Weapons_c"
        };
        units[] = 
        {
            "SiP_m1919a6_low",
            "SiP_m1919a6_bipod",
            
            "SiP_m1919a4_high",
            "SiP_m1919a4_tripod",
            "SiP_m1919a4_low",

            "SiP_m1919a6_low_marines",
            "SiP_m1919a4_high_marines",
            "SiP_m1919a4_low_marines"
        };
        weapons[] = 
        {
            "SiP_m1919a4_static_weapon",
            "SiP_m1919a4_static_weapon_tripod",

            "SiP_m1919a6_static_weapon",
            "SiP_m1919a6_static_weapon_bipod",

            "SiP_m1919a4_coax_weapon",
            "SiP_m1919a4_bow_weapon",

            "SiP_m1919a4_jeep_weapon"
        };
    };
};

class CfgSoundShaders
{
    class SiP_M1919_closeShot_SoundShader
    {
        samples[] = {{"\SiP\Addons\sip_un_vehicles\static\m1919\m1919_shot.wss",1}};
        volume = 0.75;
        range = 50;
        rangecurve = "vn_weapon_close_volumecurve";
    };
    class SiP_m1919_close_distance_shot_soundshader
	{
		samples[] = {{"\SiP\Addons\sip_un_vehicles\static\m1919\m1919_shot.wss",1}};
		volume = "0.75*(1-interior)";
		range = 150;
		rangecurve[] = {{0,0.2},{50,1},{100,0}};
	};
};

class CfgSoundsets
{
    class vn_m1919_shot_soundset;

    class SiP_m1919_shot_soundset: vn_m1919_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_chainbox_big_soundshader",
            "vn_regular_shells_soundshader",
            "SiP_M1919_closeShot_SoundShader",
            "SiP_m1919_close_distance_shot_soundshader",
            "vn_m1919_medium_distance_shot_soundshader",
            "vn_m1919_far_distance_shot_soundshader"
        };
    };
    class SiP_m1919_v_shot_soundset: SiP_m1919_shot_soundset
	{
		soundshaders[] = 
        {
            "vn_m1919_v_internal_shot_soundshader",
            "SiP_M1919_closeShot_SoundShader",
            "SiP_m1919_close_distance_shot_soundshader",
            "vn_m1919_medium_distance_shot_soundshader",
            "vn_m1919_far_distance_shot_soundshader"
        };
	};
};

class cfgWeapons
{
    class vn_m1919_v_int;
    class vn_m1919_v_01: vn_m1919_v_int
    {
        class FullAuto;
        class AImode1;
        class AImode2;
        class AImode3;
        class AImode4;
        class AImode5;
        class AImode6;
    };
    class vn_m1919_v_03: vn_m1919_v_01
    {
        class FullAuto;
        class AImode1;
        class AImode2;
        class AImode3;
        class AImode4;
        class AImode5;
        class AImode6;
    };
    class vn_m1919_v_06: vn_m1919_v_01
    {
        class FullAuto;
        class AImode1;
        class AImode2;
        class AImode3;
        class AImode4;
        class AImode5;
        class AImode6;
    };

    class SPE_TankMGun_base;
    class SPE_M1919A4_coax: SPE_TankMGun_base
	{
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class LIB_MLMG_base;
    class LIB_M1919A4_tripod: LIB_MLMG_base
    {
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class SPE_MLMG_base;
    class SPE_M1919A4_tripod: SPE_MLMG_base
	{
        class manual;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_m1919a4_static_weapon: vn_m1919_v_01
    {
        magazines[] = 
        {
            "SiP_m1919_v_250_mag",
            "SiP_m1919_v_100_mag",
            "SiP_m1919_v_50_mag"
        };
        magazineReloadTime = 3.6;
        class FullAuto: FullAuto
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode1: AImode1
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode2: AImode2
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode3: AImode3
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode4: AImode4
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode5: AImode5
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode6: AImode6
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
    };
    class SiP_m1919a4_static_weapon_tripod: SPE_M1919A4_tripod
    {
        magazines[] = 
        {
            "SiP_m1919_v_250_mag",
            "SiP_m1919_v_100_mag",
            "SiP_m1919_v_50_mag"
        };
        magazineReloadTime = 3.6;
        class manual: manual
        {
            recoil = "recoil_auto_machinegun_5outof10";
            recoilProne = "recoil_auto_machinegun_prone_3outof10";
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class close: close
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class short: short
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class medium: medium
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class far: far
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class GunParticles
		{
			class FireEffect
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "SPE_30_06_Cartridge";
			};
			class AmmoBeltEject
			{
				effectName = "MachineGunEject1";
				positionName = "Nabojnicestart2";
				directionName = "Nabojniceend2";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "SPE_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "SPE_RifleSmokeTrail";
			};
		};
    };
    
    class SiP_m1919a6_static_weapon: vn_m1919_v_06
    {
        magazines[] = 
        {
            "SiP_m1919_v_250_mag",
            "SiP_m1919_v_100_mag",
            "SiP_m1919_v_50_mag"
        };
        magazineReloadTime = 3.6;
        class FullAuto: FullAuto
        {
            recoil = "recoil_auto_machinegun_5outof10";
            recoilProne = "recoil_auto_machinegun_prone_3outof10";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode1: AImode1
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode2: AImode2
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode3: AImode3
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode4: AImode4
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode5: AImode5
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class AImode6: AImode6
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
    };
    class SiP_m1919a6_static_weapon_bipod: SiP_m1919a6_static_weapon
    {
        class GunParticles
		{
			class FireEffect
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
			class EjectEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "SPE_30_06_Cartridge";
			};
			class AmmoBeltEject
			{
				effectName = "MachineGunEject1";
				positionName = "Nabojnicestart2";
				directionName = "Nabojniceend2";
			};
			class RifleAmmoCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "SPE_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "SPE_RifleSmokeTrail";
			};
		};
    };
    
    class SiP_m1919a4_coax_weapon: SPE_M1919A4_coax
    {
        scope = 1;
        displayName = "Browning M1919A4 Coax";
        magazines[] = 
        {
            "SiP_m1919_v_250_mag",
            "SiP_m1919_v_100_mag",
            "SiP_m1919_v_50_mag"
        };
        magazineReloadTime = 3.6;
        class manual: manual
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_v_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class close: close
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_v_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class short: short
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_v_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class medium: medium
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_v_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class far: far
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_v_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
    };
    class SiP_m1919a4_bow_weapon: SiP_m1919a4_coax_weapon
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "RifleAssaultCloud";
                positionName = "kulas_kursMG";
                directionName = "kulas_kursMG";
            };
        };
    };

    class SiP_m1919a4_jeep_weapon: LIB_M1919A4_tripod
    {
        scope = 1;
        displayName = "Browning M1919A4";
        magazines[] = 
        {
            "SiP_m1919_v_250_mag",
            "SiP_m1919_v_100_mag",
            "SiP_m1919_v_50_mag"
        };
        magazineReloadTime = 3.6;
        class manual: manual
        {
            recoil = "recoil_auto_machinegun_5outof10";
            recoilProne = "recoil_auto_machinegun_prone_3outof10";
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class close: close
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class short: short
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class medium: medium
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
        class far: far
        {
            reloadTime = 0.109;
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundsetshot[] = {"SiP_m1919_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
            };
        };
    };
};

class cfgVehicles
{
    class StaticMGWeapon;
    class SPE_StaticMGWeapon_base: StaticMGWeapon
	{
        class Turrets;
        class ACE_Actions;
    };
    class SPE_M1919_M2: SPE_StaticMGWeapon_base
	{
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class Eventhandlers;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class ACE_CSW;
    };
    
    class SPE_M1919_M2_Trench_Deployed: SPE_M1919_M2
	{
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class ACE_CSW;
    };

    class SPE_MG_Bipod_base: SPE_StaticMGWeapon_base
	{
        class Turrets;
        class ACE_Actions;
    };
    class SPE_M1919A6_Bipod: SPE_MG_Bipod_base
	{
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class ACE_CSW;
    };

    class vn_static_m2_high_base;
    class vn_static_m2_low_base: vn_static_m2_high_base
    {
        class Turrets;
        class ACE_Actions;
    };

    class vn_static_m1919a6_base: vn_static_m2_low_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class ACE_CSW;
        class assembleInfo;
    };
    class vn_static_m1919a4_high_base: vn_static_m1919a6_base
	{
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions;
        };
        class ACE_CSW;
        class assembleInfo;
    };

    class SiP_m1919a6_low_base: vn_static_m1919a6_base
    {
        author = "Letlev";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m1919a6_static_weapon"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                source = "reload";
                weapon = "SiP_m1919a6_static_weapon";
            };
            class mg1_reloadmagazine: mg1_reload
            {
                source = "reloadmagazine";
            };
            class mg1_revolving: mg1_reload
            {
                source = "revolving";
            };
            class mg1_muzzleflash_rot: mg1_reload
            {
                source = "ammorandom";
            };
        };
        class UserActions
        {
            class Turn_left
            {
                displayName = "$STR_DIR_LEFT";
                priority = 4;
                radius = 2.5;
                position = "osaveze";
                showWindow = 0;
                onlyForPlayer = 1;
                shortcut = "";
                condition = "(alive this) && (((isNull gunner this) || (call ww2_fnc_findPlayer) == gunner this)) && (this getVariable ['Enable_Dir',true])";
                statement = "this setDir (getDir this - 45);";
            };
            class Turn_right: Turn_left
            {
                displayName = "$STR_DIR_RIGHT";
                statement = "this setDir (getDir this + 45);";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_m1919a6_static_weapon";
            magazineLocation = "_target selectionPosition 'mg1_magazine' vectorAdd [-0.3, 0, 0]";
            disassembleWeapon = "";
            disassembleTurret = "";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 250;
        };
        class assembleInfo: assembleInfo
        {
            dissasembleTo[] = {};
        };
    };
    class SiP_m1919a6_bipod_base: SPE_M1919A6_Bipod
    {
        author = "Letlev";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        SPE_TrenchLegIK[] = {-1.73168,-1.23628};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m1919a6_static_weapon_bipod"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
            };
        };
        class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SiP_m1919a6_static_weapon_bipod";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SiP_m1919a6_static_weapon_bipod";
			};
			class ammo
			{
				source = "ammo";
				weapon = "SiP_m1919a6_static_weapon_bipod";
			};
			class ammoRandom
			{
				source = "ammoRandom";
				weapon = "SiP_m1919a6_static_weapon_bipod";
			};
            class noCrew
			{
				source = "user";
				animperiod = 1;
			};
			class Feet_LandContact
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "osaveze";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_m1919a4_static_weapon";
            magazineLocation = "_target selectionPosition 'bullet001_move_axis'";
            disassembleWeapon = "";
            disassembleTurret = "";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 250;
        };
    };

    class SiP_m1919a4_tripod_base: SPE_M1919_M2_Trench_Deployed
    {
        author = "Letlev";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m1919a4_static_weapon_tripod"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
            };
        };
        class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SiP_m1919a4_static_weapon_tripod";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SiP_m1919a4_static_weapon_tripod";
			};
			class ammo
			{
				source = "ammo";
				weapon = "SiP_m1919a4_static_weapon_tripod";
			};
			class ammoRandom
			{
				source = "ammoRandom";
				weapon = "SiP_m1919a4_static_weapon_tripod";
			};
		};
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "osaveze";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_m1919a4_static_weapon";
            magazineLocation = "_target selectionPosition 'bullet001_move_axis'";
            disassembleWeapon = "";
            disassembleTurret = "";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 250;
        };
    };
    class SiP_m1919a4_high_base: vn_static_m1919a4_high_base
    {
        author = "Letlev";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m1919a4_static_weapon"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                source = "reload";
                weapon = "SiP_m1919a4_static_weapon";
            };
            class mg1_muzzleflash_rot: mg1_reload
            {
                source = "ammorandom";
            };
            class mg1_reloadmagazine: mg1_reload
            {
                source = "reloadmagazine";
            };
            class mg1_revolving: mg1_reload
            {
                source = "revolving";
            };
        };
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "mg1_otochlaven_recoil";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_m1919a4_static_weapon";
            magazineLocation = "_target selectionPosition 'mg1_magazine'";
            disassembleWeapon = "";
            disassembleTurret = "";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 250;
        };
        class assembleInfo: assembleInfo
        {
            dissasembleTo[] = {};
        };
    }; 
    class SiP_m1919a4_low_base: SPE_M1919_M2
    {
        author = "Letlev";
        editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
        vehicleClass = "SiP_Machineguns_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_m1919a4_static_weapon_tripod"};
                magazines[] = {"SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag","SiP_m1919_v_250_mag"};
            };
        };
        class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SPE_M1919A4_tripod";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SPE_M1919A4_tripod";
			};
			class ammo
			{
				source = "ammo";
				weapon = "SPE_M1919A4_tripod";
			};
			class ammoRandom
			{
				source = "ammoRandom";
				weapon = "SPE_M1919A4_tripod";
			};
		};
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "";
                selection = "osaveze";
            };
        };
        class ACE_CSW: ACE_CSW
        {
            enabled = 1;
            proxyWeapon = "SiP_m1919a4_static_weapon_tripod";
            magazineLocation = "_target selectionPosition 'bullet001_rot_axis'";
            disassembleWeapon = "SiP_m1919a4_carry";
            disassembleTurret = "SiP_m2_tripod";
            ammoLoadTime = 1;
            ammoUnloadTime = 1;
            desiredAmmo = 250;
        };
        class UserActions
        {
            class Turn_left
            {
                displayName = "$STR_DIR_LEFT";
                priority = 4;
                radius = 2.5;
                position = "osaveze";
                showWindow = 0;
                onlyForPlayer = 1;
                shortcut = "";
                condition = "(alive this) && (((isNull gunner this) || (call ww2_fnc_findPlayer) == gunner this)) && (this getVariable ['Enable_Dir',true])";
                statement = "this setDir (getDir this - 45);";
            };
            class Turn_right: Turn_left
            {
                displayName = "$STR_DIR_RIGHT";
                statement = "this setDir (getDir this + 45);";
            };
        };
    };
    
    class SiP_m1919a6_low: SiP_m1919a6_low_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        displayName = "M1919A6 (Low)";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        side = 1;
    };
    class SiP_m1919a6_bipod: SiP_m1919a6_bipod_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "M1919A6 (Bipod)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        side = 1;
    };

    class SiP_m1919a4_high: SiP_m1919a4_high_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "M1919A4 (High)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        side = 1;
    };
    class SiP_m1919a4_tripod: SiP_m1919a4_tripod_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "M1919A4 (Tripod)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        side = 1;
    };
    class SiP_m1919a4_low: SiP_m1919a4_low_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "M1919A4 (low)";
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
        side = 1;
    };

    class SiP_m1919a6_low_marines: SiP_m1919a6_low
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    class SiP_m1919a4_high_marines: SiP_m1919a4_high
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    class SiP_m1919a4_low_marines: SiP_m1919a4_low
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
};