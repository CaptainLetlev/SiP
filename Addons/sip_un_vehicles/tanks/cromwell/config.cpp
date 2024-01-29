class cfgPatches
{
	class SiP_Patch_cromwell
	{
		addonRootClass = "SiP_Patch_un_tanks";
		requiredAddons[] = {"WW2_Assets_c_Vehicles_Tanks_c_Cromwell","WW2_Assets_c_Vehicles_Tanks_c_M4_Sherman"};
		units[] = {"SiP_mkviii_cromwell"};
		weapons[] = {};
		magazines[] = {};
	};
};
class cfgMagazines
{
	class LIB_225Rnd_Besa;
	class SiP_besa_225_mag_t: LIB_225Rnd_Besa
	{
		author = "Letlev";
		displayName = "225Rnd. Besa Mag";
		ammo = "vn_77x56";
		tracersEvery = 1;
		lastRoundsTracer = 225;
	};
};
class cfgWeapons
{
	class LIB_TankMGun_base;
	class LIB_Besa_coax: LIB_TankMGun_base
	{
		class manual;
		class close;
		class short;
		class medium;
		class far;
	};
	class SiP_Besa_coax: LIB_Besa_coax
	{
		magazines[] = {"SiP_besa_225_mag_t"};
		class manual: manual
		{
			reloadTime = 0.075;
			sounds[] = {"StandardSound"};
			class standardsound
			{
				soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
			};
		};
		class close: close
		{
			reloadTime = 0.075;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
			};
		};
		class short: short
		{
			reloadTime = 0.075;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
			};
		};
		class medium: medium
		{
			reloadTime = 0.075;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
			};
		};
		class far: far
		{
			reloadTime = 0.075;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"vn_m63a_shot_soundset","vn_556x45mm_rifle_tails_soundset","vn_m16_rifle_trigger_reset_soundset"};
			};
		};
	};
	class SiP_Besa_bow: SiP_Besa_coax
	{
		class GunParticles
		{
			class FirstEffect
			{
				positionName = "kulas_kursMG";
				directionName = "kulas_kursMG";
			};
		};
	};
};
class cfgVehicles
{
	class Tank;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class LIB_Tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
	};
	class LIB_Cromwell_Base: LIB_Tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
					class Loader_place;
				};
			};
			class kurs_MG_turret;
		};
		class AnimationSources;
	};
	class SiP_mkviii_cromwell: LIB_Cromwell_Base
	{
		author = "Letlev";
		displayname = "Mk.VIII Cromwell";
		armor = 800;
		armorStructural = 250;
		scope = 2;
		side = 1;
		faction = "SiP_BCFK";
		editorCategory = "SiP_BCFK_Editor_Category";
		editorSubcategory = "SiP_Tanks_Editor_Subcategory";
		vehicleClass = "SiP_tanks_vehicle_class";
		crew = "SiP_BCFK_tank_driver";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"LIB_OQF_75","SiP_Besa_coax"};
				magazines[] = {"LIB_30x_M61_M1_AP","LIB_14x_T45_M1_APCR","LIB_60x_M42A1_M1_HE","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t"};
				gunnerType = "SiP_BCFK_tank_gunner";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType = "SiP_BCFK_tank_commander";
					};
					class Loader_place: Loader_place
					{
						gunnerType = "SiP_BCFK_tank_gunner";
					};
				};
			};
			class kurs_MG_turret: kurs_MG_turret
			{
				gunnerName = "Bow Gunner";
				gunnerType = "SiP_BCFK_tank_bow";
				weapons[] = {"SiP_Besa_bow"};
				magazines[] = {"SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t","SiP_besa_225_mag_t"};
				proxyIndex = 2;
			};
		};
	};
};
