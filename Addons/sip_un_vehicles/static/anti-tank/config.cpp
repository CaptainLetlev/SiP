class cfgPatches
{
    class SiP_Patch_un_statics_antitank_un
    {
        addonRootClass = "SiP_Patch_un_statics";
        requiredAddons[] = 
        {
            "static_f_vietnam_02",
            "static_f_vietnam_02_c",
            "weapons_v_f_vietnam",
            "WW2_SPE_Assets_c_Vehicles_Weapons_c",
            "WW2_SPE_Assets_c_Vehicles_StaticWeapons_c_57mm_M1"
        };
        units[] = 
        {
            "SiP_m20_recoilless_base",

            "SiP_m20_recoilless_US_Army",
            "SiP_m20_recoilless_marines",

            "SiP_qf17_atgun_base",

            "SiP_qf17_atgun_uk"
        };
        weapons[] = 
        {
            "SiP_qf17_cannon",
            "SiP_M20_Recoilless_weapon"
        };
        magazines[] = 
        {
            "SiP_30Rnd_17pdr_AP",
            "SiP_30Rnd_17pdr_HE"
        };
    };
};

class cfgsoundsets
{
    class vn_type56_rr_static_shot_soundset;

    class SiP_M20_Recoilless_shot_soundset: vn_type56_rr_static_shot_soundset
    {
        soundshaders[] = 
        {
            "vn_type56_rr_static_closure_shot_soundshader",
            "NORTH_panzerschreck_closeShot1_soundShader",
            "NORTH_panzerschreck_closeShot2_soundShader",
            "vn_type56_rr_close_distance_shot_soundshader",
            "vn_type56_rr_medium_distance_shot_soundshader",
            "vn_type56_rr_far_distance_shot_soundshader"
        };
    };
};

class cfgWeapons
{
    class SPE_TankCannon_base;

    class SPE_StaticGunCannon_base: SPE_TankCannon_base
	{
        class player;
        class close;
        class short;
        class medium;
        class far;
    };

    class vn_type56_v_01;

    class SiP_qf17_cannon_Base: SPE_StaticGunCannon_base
	{
        author = "Letlev";
        displayName = "QF 17Pdr";
        magazines[] = {"SiP_30Rnd_17pdr_AP","SiP_30Rnd_17pdr_HE"};
        magazineWell[] = {};
        class player: player
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_howitzer_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class close: close
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_howitzer_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class short: short
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_howitzer_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class medium: medium
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_howitzer_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
        class far: far
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundsetshot[] = {"vn_howitzer_85mm_shot_soundset","vn_cannon_shot_tails_soundset"};
            };
        };
    };

    class SiP_qf17_cannon_HE_AI: SiP_qf17_cannon_Base
	{
		magazines[] = {"SiP_30Rnd_17pdr_HE"};
		magazineWell[] = {};
		modes[] = {"close","short","medium","far"};
	};
	class SiP_qf17_cannon_AP_AI: SiP_qf17_cannon_Base
	{
		magazines[] = {"SiP_30Rnd_17pdr_AP"};
		magazineWell[] = {};
		modes[] = {"close","short","medium","far"};
	};
    class SiP_qf17_cannon: SiP_qf17_cannon_Base
	{
        scope = 1;
		muzzles[] = {"MODE_PLAYER_ALL","MODE_AI_AP","MODE_AI_HE"};
		class MODE_AI_HE: SiP_qf17_cannon_HE_AI{};
		class MODE_AI_AP: SiP_qf17_cannon_AP_AI{};
		class MODE_PLAYER_ALL: SiP_qf17_cannon_Base{};
	};

    class SiP_M20_Recoilless_weapon: vn_type56_v_01
    {
        author = "Letlev";
        displayName = "M20 Recoilless";
        sounds[] = {"StandardSound"};
        class StandardSound
        {
            soundSetShot[] = {"SiP_M20_Recoilless_shot_soundset"};
            begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",1.41254,1,1100};
            soundBegin[] = {"begin1",1};
        };
        reloadMagazineSound[] = {"\vn\sounds_f_vietnam\weapons\launcher\type56_rr\reload.ogg",2.25,1,50};
    };
};

class cfgMagazines
{
    class fow_20Rnd_57mm_AP;

    class SiP_30Rnd_17pdr_AP: fow_20Rnd_57mm_AP
    {
        author = "Letlev";
        displayName = "AP Mk.III";
        count = 30;
        initSpeed = 884;
        ammo = "LIB_S_76L55_APMk3";
        muzzleImpulseFactor[] = {2.5,0};
    };
    class SiP_30Rnd_17pdr_HE: SiP_30Rnd_17pdr_AP
    {
        author = "Letlev";
        displayName = "HE Mk.I";
        count = 30;
        initSpeed = 876;
        ammo = "LIB_S_76L55_HEMk1";
    };
};

class cfgVehicles
{
    class StaticWeapon;
    class StaticCannon;

    class vn_static_type56rr_base: StaticCannon
    {
        class Turrets;
    };
    class vn_o_nva_navy_static_type56rr: vn_static_type56rr_base
    {
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };

    class SPE_StaticCannon_base: StaticCannon
	{
        class Turrets;
    };

    class SPE_57mm_M1_base: SPE_StaticCannon_base
	{
        class Turrets: Turrets
        {
            class MainTurret;
            class CommanderOptics;
			class CargoTurret_01;
			class CargoTurret_02;
			class CargoTurret_03;
        };
        class AnimationSources;
    };

    class SiP_m20_recoilless_base: vn_o_nva_navy_static_type56rr
    {
        scope = 1;
        scopecurator = 1;
        author = "Letlev";
        displayName = "M20 Recoilless Rifle";
        editorSubcategory = "SiP_Antitank_Editor_Subcategory";
        vehicleClass = "SiP_Antitank_vehicle_class";
        side = 1;
        hiddenSelectionsTextures[] = {"SiP\Addons\sip_un_vehicles\static\anti-tank\data\textures\m20_recoilless_co.paa"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_M20_Recoilless_weapon"};
                magazines[] = 
                {
                    "vn_type56_v_12_heat_mag",
                    "vn_type56_v_12_heat_mag",
                    "vn_type56_v_12_heat_mag",
                    "vn_type56_v_12_heat_mag",
                    "vn_type56_v_12_he_mag",
                    "vn_type56_v_12_he_mag",
                    "vn_type56_v_12_he_mag"
                };
            };
        };
        class AnimationSources: AnimationSources
        {
            class mg1_reload
            {
                weapon = "SiP_M20_Recoilless_weapon";
                source = "reload";
            };
            class mg1_muzzleflash_rot: mg1_reload
            {
                source = "ammoRandom";
            };
            class hide_bushes1
            {
                displayName = "$STR_VN_STATIC_TYPE56RR_BUSHES1_HIDE_DN";
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
            };
            class hide_bushes2
            {
                displayName = "$STR_VN_STATIC_TYPE56RR_BUSHES2_HIDE_DN";
                source = "user";
                animPeriod = 0.001;
                initPhase = 1;
            };
            class hide_shells
            {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class mag_heat_hide
            {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class mag_he_hide
            {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
        };
    };

    class SiP_m20_recoilless_US_Army: SiP_m20_recoilless_base
    {
        scope = 2;
        scopecurator = 2;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
    };
    class SiP_m20_recoilless_marines: SiP_m20_recoilless_US_Army
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
    

    class SiP_M1_57mm_atgun_base: SPE_57mm_M1_base
    {
        scope = 1;
        scopeCurator = 1;
        author = "Letlev";
        displayName = "M1 57mm";
        side = 1;
        editorSubcategory = "SiP_Antitank_Editor_Subcategory";
        vehicleClass = "SiP_Antitank_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                magazines[] = {"SPE_20x_57mm_M86_APCBC","SPE_21x_57mm_T18_HE","SPE_21x_57mm_T18_HE","SPE_21x_57mm_T18_HE"};
            };
            class CommanderOptics: CommanderOptics
			{
				gunnerType = "SiP_BCFK_gunner";
			};
        };
    };

    class SiP_qf17_atgun_base: SPE_57mm_M1_base
    {
        scope = 1;
        scopeCurator = 1;
        author = "Letlev";
        displayName = "QF-17 Pdr";
        side = 1;
        editorSubcategory = "SiP_Antitank_Editor_Subcategory";
        vehicleClass = "SiP_Antitank_vehicle_class";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_qf17_cannon"};
                magazines[] = {"SiP_30Rnd_17pdr_AP","SiP_30Rnd_17pdr_AP","SiP_30Rnd_17pdr_AP","SiP_30Rnd_17pdr_HE"};
                class OpticsIn
                {
                    class Wide
                    {
                        initAngleX = 0;
                        minAngleX = -30;
                        maxAngleX = 30;
                        initAngleY = 0;
                        minAngleY = -100;
                        maxAngleY = 100;
                        initFov = 0.155;
                        minFov = 0.155;
                        maxFov = 0.155;
                        gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_Cromwell_75mm_Reticle.p3d";
                        visionMode[] = {"Normal"};
                        thermalMode[] = {0,1};
                        gunnerOpticsEffect[] = {};
                    };
                    class Narrow: Wide
                    {
                        gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_Cromwell_75mm_Reticle.p3d";
                        initFov = 0.047;
                        minFov = 0.047;
                        maxFov = 0.047;
                    };
                };
            };
            class CommanderOptics: CommanderOptics
			{
				body = "";
				gun = "";
				ejectDeadGunner = 1;
				gunnerType = "SiP_BCFK_gunner";
				gunnerAction = "SPE_M1_57mm_Commander";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerAction = "SPE_M1_57mm_Loader";
			};
			class CargoTurret_02: CargoTurret_02
			{
				gunnerAction = "SPE_M1_57mm_Cogunner";
			};
			class CargoTurret_03: CargoTurret_03
			{
				gunnerAction = "SPE_M1_57mm_Ammo";
			};
        };
        class AnimationSources: AnimationSources
		{
            class wheel_1_1
			{
				source = "user";
				animPeriod = 60;
			};
			class wheel_2_1: wheel_1_1{};
			class SPE_M1_57mm_reload_weapon_state
			{
				source = "user";
				animPeriod = 6;
				initPhase = 0;
			};
			class SPE_M1_57mm_reload_magazine_state: SPE_M1_57mm_reload_weapon_state
			{
				source = "reloadmagazine";
				weapon = "SiP_qf17_cannon";
			};
			class SPE_M1_57mm_count_magazine_state: SPE_M1_57mm_reload_weapon_state
			{
				source = "revolving";
				weapon = "SiP_qf17_cannon";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "SiP_qf17_cannon";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "SiP_qf17_cannon";
			};
			class tow_rotation_y
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class tow_rotation_x
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class tow_rotation_z
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class muzzle_6pdr_hide
			{
				source = "user";
				animPeriod = 1e-05;
				initPhase = 0;
			};
			class hook_rotate
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
    };
    class SiP_qf17_atgun_uk: SiP_qf17_atgun_base
    {
        scope = 2;
        scopeCurator = 2;
        faction = "SiP_BCFK";
        editorCategory = "SiP_BCFK_Editor_Category";
        crew = "SiP_BCFK_gunner";
        typicalCargo[] = {"SiP_BCFK_gunner","SiP_BCFK_gunner","SiP_BCFK_gunner"};
    };
};