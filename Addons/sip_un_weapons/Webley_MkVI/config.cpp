class cfgPatches
{
	class SiP_Patch_webley
	{
		addonRootClass = "SiP_Patch_un_weapons";
		requiredAddons[] = 
		{
			"WW2_Assets_c_Weapons_InfantryWeapons_c",
			"weapons_f_vietnam","weapons_f_vietnam_c",
			"weapons_f_vietnam_02","weapons_f_vietnam_02_c",
			"weapons_f_vietnam_03","weapons_f_vietnam_03_c",
			"vn_weapons",
			"fow_sounds"
		};
		units[] = {};
		weapons[] = 
		{
			"SiP_webley_mkvi"
		};
		magazines[] = 
		{
			"SiP_webley_6_mag",
			"SiP_webley_6_mag_t_mag"
		};
	};
};

class cfgWeapons
{
	class LIB_PISTOL;
	class LIB_Webley_mk6: LIB_PISTOL
	{
		class Single;
	};
	
	class SiP_webley_mkvi: LIB_Webley_mk6
	{
		author = "Letlev";
		displayName = "Webley Mk.VI";
		picture = "\fow\fow_weapons\webley\data\ui\w_webley_ca.paa";
        model = "fow\fow_weapons\webley\webley";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\webley\data\webley_co.paa"};
        handanim[] = {"OFP2_ManSkeleton","\NORTH\NF_weapons\ru\m1895\anim\m1895_handanim.rtm"};
		magazines[] = {"SiP_webley_6_mag","SiP_webley_6_mag_t_mag"};
		class Single: Single
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_revolver_shot_soundset","jsrs_ww2_pistol_reverb_soundset"};
			};
		};
	};
};

class cfgMagazines
{
	class LIB_6Rnd_455;

	class SiP_webley_6_mag: LIB_6Rnd_455
	{
		author = "Letlev";
		displayName = "6Rnd .455 Webley Cylinder";
		ammo = "vn_1143x23";
	};
	class SiP_webley_6_mag_t_mag: SiP_webley_6_mag
	{
		displayName = "6Rnd .455 Webley Cylinder (Tracer)";
		tracersEvery = 1;
		lastRoundsTracer = 6;
		mass = 0.245;
	};
};