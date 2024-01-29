class cfgPatches
{
	class SiP_Patch_un_statics_antitank_un
	{
		addonRootClass = "SiP_Patch_un_statics";
		requiredAddons[] = 
		{
			"static_f_vietnam_02",
			"static_f_vietnam_02_c",
			"weapons_v_f_vietnam"
		};
		units[] = {"SiP_m20_recoilless","SiP_qf17_atgun_uk"};
		weapons[] = {"SiP_qf17_cannon"};
		magazines[] = {};
	};
};
class cfgWeapons
{
	class CannonCore;
	class fow_w_57mm_6Pdr: CannonCore
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};

	class SiP_qf17_cannon: fow_w_57mm_6Pdr
	{
		displayName = "QF 17Pdr";
		magazines[] = {"SiP_30Rnd_17pdr_AP","SiP_30Rnd_17pdr_HE"};
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
};

class cfgVehicles
{
	class StaticWeapon;
	class StaticCannon;
	class vn_static_type56rr_base: StaticCannon
	{
		class Turrets;
	};
	class vn_o_nva_static_type56rr: vn_static_type56rr_base
	{
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class fow_w_6Pounder: StaticWeapon
	{
		class Turrets;
	};
	class fow_w_6Pounder_usa: fow_w_6Pounder
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};

	class SiP_m20_recoilless: vn_o_nva_static_type56rr
	{
		displayName = "M20 Recoilless Rifle";
		faction = "SiP_US_Army";
		editorCategory = "SiP_US_Army_Editor_Category";
		editorSubcategory = "SiP_Antitank_Editor_Subcategory";
		vehicleClass = "SiP_Antitank_vehicle_class";
		crew = "SiP_US_Army_gunner";
		typicalCargo[] = {"SiP_US_Army_gunner"};
		side = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"vn_type56_v_12_heat_mag","vn_type56_v_12_heat_mag","vn_type56_v_12_heat_mag","vn_type56_v_12_heat_mag","vn_type56_v_12_he_mag","vn_type56_v_12_he_mag","vn_type56_v_12_he_mag"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class mg1_reload
			{
				weapon = "vn_type56_v_01";
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
	
	class SiP_m20_recoilless_marines: SiP_m20_recoilless
	{
		faction = "SiP_US_Marines";
		editorCategory = "SiP_US_Marines_Editor_Category";
		crew = "SiP_US_Marines_gunner";
		typicalCargo[] = {"SiP_US_Marines_gunner"};
	};
	
	class SiP_qf17_atgun_base: fow_w_6Pounder_usa
	{
		scope = 1;
		author = "Letlev";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SiP_qf17_cannon"};
				magazines[] = {"SiP_30Rnd_17pdr_AP","SiP_30Rnd_17pdr_AP","SiP_30Rnd_17pdr_AP","SiP_30Rnd_17pdr_HE"};
				gunnerOpticsModel = "\WW2\Assets_m\Vehicles\Optics_m\CSA_Cromwell_75mm_Reticle.p3d";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -5;
					maxAngleX = 37;
					initAngleY = 0;
					minAngleY = -27;
					maxAngleY = 27;
					initFov = 0.3;
					minFov = 0.3;
					maxFov = 0.3;
				};
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
		};
		class AnimationSources
		{
			class gun_1_recoil_cannon
			{
				source = "reload";
				weapon = "SiP_qf17_cannon";
			};
		};
	};
	class SiP_qf17_atgun_uk: SiP_qf17_atgun_base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "QF-17 Pdr";
		faction = "SiP_BCFK";
		editorCategory = "SiP_BCFK_Editor_Category";
		editorSubcategory = "SiP_Antitank_Editor_Subcategory";
		vehicleClass = "SiP_Antitank_vehicle_class";
		crew = "SiP_BCFK_gunner";
		typicalCargo[] = {"SiP_BCFK_gunner","SiP_BCFK_gunner"};
		side = 1;
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
