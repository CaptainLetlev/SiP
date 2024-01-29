class cfgPatches
{
    class SiP_Patch_m26_pershing
    {
        addonRootClass = "SiP_Patch_un_tanks";
        requiredAddons[] = 
        {
            "FA_WW2_Tanks"
        };
        units[] = 
        {
            "SiP_m26_pershing",
            "SiP_m26_pershing_marines"
        };
        weapons[] = 
        {
            "SiP_m1919a4_coax_weapon2",
            "SiP_m1919a4_bow_weapon2"
        };
        magazines[] = 
        {
            "SiP_40x_M77_AP",
            "SiP_10x_M82_APCR",
            "SiP_20x_M71_HE"
        };
    };
};

class cfgsoundsets
{
    class vn_basic_weapon_heavy_shot_soundset;

    class SiP_M3A1_90mm_shot_soundset: vn_basic_weapon_heavy_shot_soundset
    {
        soundShaders[] = 
        {
            "vn_cannon_85mm_internal_shot_soundshader",
            "SPE_int_cannon_large_shot_fp_SoundShader",
            "SPE_int_cannon_large_shot_close_SoundShader",
            "SPE_int_cannon_large_shot_mid_SoundShader",
            "SPE_int_cannon_large_shot_far_SoundShader"
        };
    };
};

class cfgWeapons
{
    class SPE_TankCannon_base;
    class SPE_KwK36_L56_base: SPE_TankCannon_base
    {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };

    class SiP_m1919a4_coax_weapon;
    class SiP_m1919a4_bow_weapon;

    class SiP_m1919a4_coax_weapon2: SiP_m1919a4_coax_weapon
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "MachineGun1";
                positionName = "usti hlavne1";
                directionName = "konec hlavne1";
            };
        };
    };
    class SiP_m1919a4_bow_weapon2: SiP_m1919a4_bow_weapon
    {
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "MachineGun1";
                positionName = "usti hlavne2";
                directionName = "konec hlavne2";
            };
        };
    };

    class SiP_M3A1_90mm_base: SPE_KwK36_L56_base
    {
        displayName = "90mm M3A1";
        magazines[] = 
        {
            "SiP_40x_M77_AP",
            "SiP_10x_M82_APCR",
            "SiP_20x_M71_HE"
        };
        magazineWell[] = {};
        class player: player
        {
            displayName = "90mm Gun M3A1";
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class close: close
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class short: short
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class medium: medium
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class far: far
        {
            sounds[] = {"standardsound"};
            class standardsound
            {
                soundSetShot[] = {"SiP_M3A1_90mm_shot_soundset","SPE_cannon_large_Tail_SoundSet","vn_cannon_shot_tails_soundset"};
            };
        };
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "CannonFired75";
                positionName = "usti hlavne";
                directionName = "konec hlavne1";
            };
        };
    };
    class SiP_M3A1_90mm_HE_AI: SiP_M3A1_90mm_base
    {
        magazines[] = {"SiP_20x_M71_HE"};
        magazineWell[] = {};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_M3A1_90mm_APCR_AI: SiP_M3A1_90mm_base
    {
        magazines[] = {"SiP_10x_M82_APCR"};
        magazineWell[] = {};
        modes[] = {"close","short","medium","far"};
    };
    class SiP_M3A1_90mm: SiP_M3A1_90mm_base
    {
        muzzles[] = {"MODE_PLAYER_ALL","MODE_AI_APCR","MODE_AI_HE"};
        class MODE_AI_HE: SiP_M3A1_90mm_HE_AI{};
        class MODE_AI_APCR: SiP_M3A1_90mm_APCR_AI{};
        class MODE_PLAYER_ALL: SiP_M3A1_90mm_base{};
    };
    
};

class cfgMagazines
{
    class vn_m41_v_4_apc_mag;
    class vn_m41_v_4_hvap_mag;
    class vn_m41_v_18_he_mag;

    class SiP_40x_M77_AP: vn_m41_v_4_apc_mag
    {
        displayName = "M77 Shell (AP)";
        displaynameshort = "M77 AP";
        count = 40;
    };

    class SiP_10x_M82_APCR: vn_m41_v_4_hvap_mag
    {
        displayName = "M304 Shell (APCR)";
        displaynameshort = "M82 (APCR)";
        count = 10;
    };

    class SiP_20x_M71_HE: vn_m41_v_18_he_mag
    {
        displayName = "M71 Shell (HE)";
        displaynameshort = "M71 (HE)";
        count = 20;
    };
};

class cfgVehicles
{
    class LandVehicle;
    class Tank: LandVehicle
    {
        class NewTurret;
    };
    class Tank_F: Tank
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    
    class FA_M26_BASE: Tank_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
        class HitPoints;
    };
    class FA_M26: FA_M26_BASE
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                };
            };
            class HullTurret;
        };
        class AnimationSources;
        class HitPoints: HitPoints
        {
            class HitHull;
            class HitFuel;
            class HitEngine;
            class HitLTrack;
            class HitRTrack;
        };
    };

    class SiP_m26_pershing: FA_M26
    {
        author = "Letlev";
        displayname = "M26 Pershing";
        scope = 2;
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Tanks_Editor_Subcategory";
        vehicleClass = "SiP_tanks_vehicle_class";
        crew = "SiP_US_Army_tank_driver";
        armor = 400;
        armorStructural = 7;
        damageResistance = 0.00547;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Army_tank_gunner";
                weapons[] = {"SiP_M3A1_90mm","SiP_m1919a4_coax_weapon2"};
                maxHorizontalRotSpeed = "((360/15)/40)";
                maxVerticalRotSpeed = "0.0125 * 24";
                magazines[] = 
                {
                    "SiP_40x_M77_AP",
                    "SiP_20x_M71_HE",
                    "SiP_10x_M82_APCR",
                    "SiP_10x_M82_APCR",

                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag"
                };
                class HitPoints
				{
					class HitTurret
					{
						armor = 10;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 10;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
                class OpticsIn
				{
					class Periscope
					{
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = 0;
						maxAngleY = 0;
						initFov = 0.25;
						minFov = 0.25;
						maxFov = 0.25;
						directionStabilized = 0;
						visionMode[] = {"Normal"};
						thermalMode[] = {0};
						gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
						gunnerOpticsEffect[] = {};
					};
                    
					class Sight2: Periscope
					{
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						gunnerOpticsModel = "vn\armor_f_vietnam_04\m48\vn_armor_m48_gunner_optic2.p3d";
					};
                    class Sight8: Sight2
					{
						initFov = 0.0313;
						minFov = 0.0313;
						maxFov = 0.0313;
						gunnerOpticsModel = "vn\armor_f_vietnam_04\m48\vn_armor_m48_gunner_optic8.p3d";
					};
				};
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_US_Army_tank_commander";
                    };
                };
            };
            class HullTurret: HullTurret
            {
                gunnerName = "Bow Gunner";
                gunnerType = "SiP_US_Army_tank_bow";
                weapons[] = {"SiP_m1919a4_bow_weapon2"};
                magazines[] = 
                {	
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag",
                    "SiP_m1919_v_250_mag"
                };
            };
        };
        soundEngineOffInt[] = {"vn\sounds_f_vietnam_04\vehicles\land\m48\engine_stop_int.ogg",1,1};
        soundEngineOffExt[] = {"vn\sounds_f_vietnam_04\vehicles\land\m48\engine_stop_ext.ogg",2,1,150};
        soundEngineOnInt[] = {"vn\sounds_f_vietnam_04\vehicles\land\m48\engine_start_int.ogg",1,1};
        soundEngineOnExt[] = {"vn\sounds_f_vietnam_04\vehicles\land\m48\engine_start_ext.ogg",2,1,150};
        class Sounds
        {
            soundSetsExt[] = {"vn_m48_engine_idle_ext_soundset","vn_m48_engine_gear_ext_soundset","vn_m48_engine_high_ext_soundset","vn_m48_engine_high_exh_soundset","vn_m48_rattle_ext_soundset","vn_m48_engine_rev_ext_soundset","vn_m48_engine_distance_soundset","vn_m48_start_exterior_soundset","vn_tank_treads_pavn_distance_soundset","vn_m48_track_left_slow_soundset","vn_m48_track_left_fast_soundset","vn_m48_track_right_slow_soundset","vn_m48_track_right_fast_soundset"};
            soundSetsInt[] = {"vn_m48_engine_idle_int_soundset","vn_m48_engine_gear_int_soundset","vn_m48_engine_high_int_soundset","vn_m48_rattle_int_soundset","vn_m48_rattle_drive_soundset","vn_m48_start_interior_soundset","vn_m48_int_track_slow_soundset","vn_m48_int_track_fast_soundset","vn_truck_rainint_soundset","tanks_material_strain_int_soundset"};
        };
        class HitPoints: HitPoints
        {
            class HitHull: HitHull
            {
                armor = 25;
                material = -1;
                name = "hull";
                visual = "hull";
                passThrough = 1;
                minimalHit = 0.15;
                explosionShielding = 0.2;
                radius = 0.25;
            };
            class HitEngine: HitEngine
            {
                class DestructionEffects
                {
                    ammoExplosionEffect = "";
                    class LIB_Engine_Smoke
                    {
                        simulation = "particles";
                        type = "SmallWreckSmoke";
                        position = "engine_fire";
                        intensity = 0.5;
                        interval = 1;
                        lifeTime = 60;
                    };
                    class LIB_Engine_Fire: LIB_Engine_Smoke
                    {
                        type = "SmallFireFPlace";
                    };
                    class LIB_Engine_Sparks: LIB_Engine_Smoke
                    {
                        type = "FireSparks";
                    };
                    class LIB_Engine_Sounds: LIB_Engine_Smoke
                    {
                        simulation = "sound";
                        type = "Fire";
                    };
                };
                armor = 0.6;
                material = -1;
                armorComponent = "engine";
                name = "engine";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.2;
                radius = 0.25;
            };
            class HitFuel: HitFuel
            {
                armor = 2;
                material = -1;
                armorComponent = "palivo";
                name = "palivo";
                visual = "-";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.2;
                radius = 0.25;
            };
            class HitLTrack: HitLTrack
            {
                armor = 5;
                material = -1;
                armorComponent = "pas_L";
                name = "pas_L";
                visual = "pas_L";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.3;
                radius = 0.25;
            };
            class HitRTrack: HitRTrack
            {
                armor = 5;
                material = -1;
                armorComponent = "pas_P";
                name = "pas_P";
                visual = "pas_P";
                passThrough = 0;
                minimalHit = 0.15;
                explosionShielding = 0.3;
                radius = 0.25;
            };
        };
        class AnimationSources: AnimationSources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "SiP_M3A1_90mm";
            };
            class muzzle_rot1
            {
                source = "ammorandom";
                weapon = "SiP_m1919a4_coax_weapon2";
            };
            class muzzle_rot2
            {
                source = "ammorandom";
                weapon = "SiP_m1919a4_bow_weapon2";
            };
            class muzzle_rot
            {
                source = "ammorandom";
                weapon = "SiP_M3A1_90mm";
            };
        };
    };

    class SiP_m26_pershing_marines: SiP_m26_pershing
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_tank_driver";
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                gunnerType = "SiP_US_Marines_tank_gunner";
                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        gunnerType = "SiP_US_Marines_tank_commander";
                    };
                };
            };
            class HullTurret: HullTurret
            {
                gunnerType = "SiP_US_Marines_tank_bow";
            };
        };
    };
};