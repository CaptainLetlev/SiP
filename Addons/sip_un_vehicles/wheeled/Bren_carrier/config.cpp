class cfgPatches
{
    class SiP_Patch_bren_carrier
    {
        addonRootClass = "SiP_Patch_un_motorized";
        requiredAddons[] = 
        {
            "WW2_Core_c_WW2_Core_c",
            "WW2_Assets_c_Vehicles_Tanks_c_UniversalCarrier"
        };
        units[] = 
        {
            "SiP_bren_carrier"
        };
        weapons[] = 
        {
            "SiP_bren_carrier_weapon"
        };
    };
};

class cfgWeapons
{
	class LIB_TankMGun_base;
	class LIB_Bren_Mk2_coax: LIB_TankMGun_base
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};

	class SiP_bren_carrier_weapon: LIB_Bren_Mk2_coax
	{
		scope = 1;
		displayName = "Bren Mk.IV";
		magazines[] = {"SiP_bren_30_t_mag"};
		magazineReloadTime = 3;
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
		};
		class close: close
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
		};
		class short: short
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
		};
		class medium: medium
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
		};
		class far: far
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				positionName = "usti hlavne";
				directionName = "usti hlavne";
			};
		};
	};
};

class cfgVehicles
{
	class LIB_Tank_base;
	class LIB_UniversalCarrier_base: LIB_Tank_base
	{
		class Turrets;
	};
	class LIB_UniversalCarrier: LIB_UniversalCarrier_base
	{
		class Turrets: Turrets
		{
			class Turret_Main;
		};
		class AnimationSources;
		class UserActions;
	};

	class SiP_bren_carrier: LIB_UniversalCarrier
	{
		author = "Letlev";
		displayname = "Bren Carrier Mk.II";
		scope = 2;
		side = 1;
		faction = "SiP_BCFK";
		editorCategory = "SiP_BCFK_Editor_Category";
		crew = "SiP_BCFK_driver";
		typicalCargo[] = {"SiP_BCFK_driver","SiP_BCFK_gunner"};
		hiddenSelectionsTextures[] = {"\WW2\Assets_t\Vehicles\Tanks_t\I44_UniversalCarrier\carrier_star_co.paa"};
		class Turrets: Turrets
		{
			class Turret_Main: Turret_Main
			{
				gunnerType = "SiP_BCFK_gunner";
				weapons[] = {"SiP_bren_carrier_weapon"};
				magazines[] = {"SiP_bren_30_t_mag","SiP_bren_30_t_mag","SiP_bren_30_t_mag","SiP_bren_30_t_mag","SiP_bren_30_t_mag","SiP_bren_30_t_mag","SiP_bren_30_t_mag","SiP_bren_30_t_mag","SiP_bren_30_t_mag","SiP_bren_30_t_mag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SiP_bren_carrier_weapon";
			};
		};
		class UserActions: UserActions
        {
            class music_player
            {
                displayName = "$STR_VN_VEHICLE_RADIO_DN";
                position = "zamerny";
                showWindow = 0;
                onlyForPlayer = 0;
                radius = 2;
                priority = -99;
                condition = "alive this && { local this && { missionnamespace getvariable ['vn_jukebox_enable', true] && { driver this isEqualTo player } } }";
                statement = "['open'] call vn_fnc_music";
            };
        };
	};
};