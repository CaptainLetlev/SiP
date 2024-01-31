class cfgPatches
{
    class SiP_Patch_M1_Garand
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
            "SiP_m84_M1D_scope",

            "SiP_m1_garand",

            "SiP_m1c_garand",
            "SiP_m1c_garand_scope",

            "SiP_m1_garand_gl",
            
            "SiP_m1d_garand",
            "SiP_m1d_garand_scope"
        };
        magazines[] = 
        {
            "SiP_m1_garand_mag",
            "SiP_m1_garand_mag_t"
        };
    };
};

class CowsSlot;
class MuzzleSlot;
class PointerSlot;

class CfgSoundShaders
{
    class SPE_garand_shot_close_soundShader
    {
        volume = 3;
        range = 95;
        rangeCurve[] = {{0,0},{17,0.9},{95,0}};
    };
    class SPE_garand_shot_fp_soundShader
    {
        volume = 3;
        range = 17;
        rangeCurve[] = {{0,1},{17,0}};
    };
    class SPE_garand_shot_mid_soundShader
    {
        volume = "3 * 0.85 * (1 - interior) * (1 - (0.20 * forest))";
        range = 350;
        rangeCurve[] = {{0,0},{95,1},{350,0}};
    };
};

class cfgWeapons
{
    class SlotInfo;

    class rifle_base_f;
    class vn_rifle: rifle_base_f
    {
        class vn_m1_garand_22mm_gl_muzzle;
    };

    class vn_optic_base;

    class vn_m1_garand: vn_rifle
    {
        class Single;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
        class aiopticmode1;
        class aiopticmode2;
        class WeaponSlotsInfo;
        class EventHandlers;
    };
    class vn_m1_garand_gl: vn_m1_garand
    {
        class Single;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
        class aiopticmode1;
        class aiopticmode2;
        class WeaponSlotsInfo;
        class EventHandlers;
    };

    class vn_o_3x_m84: vn_optic_base
    {
        class ItemInfo;
    };

    class SiP_m84_M1D_scope: vn_o_3x_m84
    {
        displayName = "M84 2.2x Scope";
        model = "sp_fwa_garand\sp_fwa_m84_garand";
        class ItemInfo: ItemInfo
        {
            class OpticsModes
            {
                class scope
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsZoomInit = 0.25;
                    opticsZoomMin = 0.083;
                    opticsZoomMax = 0.083;
                    distanceZoomMin = 400;
                    distanceZoomMax = 120;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    opticsDisablePeripherialVision = 1;
                    opticsFlare = 1;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal"};
                    cameraDir = "";
                    weaponInfoType = "RscWeaponZeroing";
                    discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
                    discreteDistanceInitIndex = 1;
                };
                class Ironsights: scope
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.25;
                    opticsZoomMax = 1.1;
                    opticsZoomInit = 0.5;
                    memoryPointCamera = "eye";
                    opticsPPEffects[] = {};
                    visionMode[] = {};
                    weaponInfoType = "RscWeaponZeroing";
                    discreteDistance[] = {100};
                    discreteDistanceInitIndex = 0;
                };
            };
        };
    };

    class SiP_m1_garand: vn_m1_garand
    {
        author = "Letlev";
        displayName = "M1 Garand";
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag_t"};
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 100;
            class CowsSlot{};
            class PointerSlot: PointerSlot
            {
                compatibleItems[] = {"vn_b_m1_garand"};
                iconPosition[] = {0.35,0.5};
                iconScale = 0.25;
            };
            class UnderBarrelSlot{};
        };
        class EventHandlers: EventHandlers
        {
            class vn_empty
            {
                fired = "[(_this select 0),(_this select 2),""fow_cartridge_m1_clip"",{},0.065,- 0.18,0.1] call fow_main_fnc_ping;";
            };
        };
        modes[] = {"Single","AICQB","AIClose","AIMedium","AIFar"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
        };
        class aicqb: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose: aiclose
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aimedium
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 100;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.04;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 300;
        };
        class aifar: aifar
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 500;
        };
    };

    class SiP_m1c_garand: vn_m1_garand
    {
        author = "Letlev";
        displayName = "M1C Garand";
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag_t"};
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot{};
            class UnderBarrelSlot{};
        };
        class EventHandlers: EventHandlers
        {
            class vn_empty
            {
                fired = "[(_this select 0),(_this select 2),""fow_cartridge_m1_clip"",{},0.065,- 0.18,0.1] call fow_main_fnc_ping;";
            };
        };
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
        };
        class aicqb: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose: aiclose
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aimedium
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 100;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.04;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 300;
        };
        class aifar: aifar
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 500;
        };
        class aiopticmode1: aiopticmode1
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
        };
        class aiopticmode2: aiopticmode2
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
        };
    };
    class SiP_m1c_garand_scope: SiP_m1c_garand
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "vn_o_3x_m84";
            };
        };
    };

    class SiP_m1_garand_gl: vn_m1_garand_gl
    {
        author = "Letlev";
        displayName = "M1 Garand (Rifle Grenade)";
        magazines[] = {"SiP_m1_garand_mag","SiP_m1_garand_mag_t"};
        magazineWell[] = {};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot{};
            class PointerSlot{};
            class UnderBarrelSlot{};
        };
        class EventHandlers: EventHandlers
        {
            class vn_empty
            {
                fired = "[(_this select 0),(_this select 2),""fow_cartridge_m1_clip"",{},0.065,- 0.18,0.1] call fow_main_fnc_ping;";
            };
        };
        muzzles[] = {"this","SiP_m1_garand_m7_gl_muzzle"};
        class SiP_m1_garand_m7_gl_muzzle: vn_m1_garand_22mm_gl_muzzle
        {
            displayName = "M7 Rifle Grenade";
            magazines[] = {"vn_22mm_m1a2_frag_mag","vn_22mm_m17_frag_mag","vn_22mm_m9_heat_mag","vn_22mm_m22_smoke_mag"};
            magazineWell[] = {};
        };
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
        };
        class aicqb: aicqb
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aiclose: aiclose
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            minRange = 0;
            minRangeProbab = 1;
            midRange = 50;
            midRangeProbab = 1;
            maxRange = 100;
            maxRangeProbab = 0.5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aimedium
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 100;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.04;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 300;
        };
        class aifar: aifar
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
            burst = 1;
            burstRangeMax = -1;
            dispersion = 0.01;
            minRange = 300;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            aiRateOfFire = 10;
            aiRateOfFireDistance = 500;
        };
        class aiopticmode1: aiopticmode1
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
        };
        class aiopticmode2: aiopticmode2
        {
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"SPE_garand_Shot_SoundSet","vn_762x39mm_rifle_tails_soundset","vn_sks_rifle_trigger_reset_soundset"};
            };
        };
    };

    class SiP_m1d_garand: SiP_m1c_garand
    {
        displayName = "M1D Garand";
        model = "sp_fwa_garand\sp_fwa_m1_garand";
        selectionFireAnim = "muzzleFlash";
        muzzles[] = {"this"};
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] = {"SiP_m84_M1D_scope"};
            };
            class MuzzleSlot: MuzzleSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = 
                {
                    "sp_fwa_muzzle_garand_flash_hider",
                    "fow_w_acc_m1_bayo"
                };
            };
            class PointerSlot{};
        };
        class GunParticles
		{
			class Particle1
			{
				effectName = "sp_fwa_ComplexEffect_fire_gas_smallarms";
				positionName = "usti hlavne";
				directionName = "konec hlavne";
			};
			class Particle2
			{
				effectName = "sp_fwa_ComplexEffect_fire_haze_smallarms";
				positionName = "usti hlavne";
				directionName = "konec hlavne";
			};
			class Particle3
			{
				effectName = "sp_fwa_ComplexEffect_fire_gas_smallarms_subtle";
				positionName = "Nabojniceend";
				directionName = "Nabojnicestart";
			};
			class Particle4
			{
				effectName = "sp_fwa_ComplexEffect_fire_gas_smallarms_subtle";
				positionName = "gasBlockEffect_left";
				directionName = "gasBlockEffect_start";
			};
			class Particle5
			{
				effectName = "sp_fwa_ComplexEffect_fire_gas_smallarms_subtle";
				positionName = "gasBlockEffect_right";
				directionName = "gasBlockEffect_start";
			};
		};
    };
    class SiP_m1d_garand_scope: SiP_m1d_garand
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "SiP_m84_M1D_scope";
            };
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "sp_fwa_muzzle_garand_flash_hider";
            };
        };
    };
};

class cfgMagazines
{
    class vn_m1_garand_mag;

    class SiP_m1_garand_mag: vn_m1_garand_mag
    {
        author = "Letlev";
        displayName = "8Rnd. Garand EnBloc Clip";
        mass = 2.5;
    };
    class SiP_m1_garand_mag_t: SiP_m1_garand_mag
    {
        displayName = "8Rnd. Garand EnBloc Clip (Tracer)";
        tracersEvery = 1;
        lastRoundsTracer = 8;
    };
};