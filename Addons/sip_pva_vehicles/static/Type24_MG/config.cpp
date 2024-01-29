class cfgPatches
{
	class SiP_Patch_type24_static
	{
		addonRootClass = "SiP_Patch_pva_statics";
		requiredAddons[] = 
		{
			"static_f_vietnam",
			"static_f_vietnam_c",
			"static_f_vietnam_03",
			"static_f_vietnam_03_c",
			"weapons_v_f_vietnam_03",
			"EAW_Turrets"
		};
		units[] = {"SiP_type24MG_PVA","SiP_type24MG_PVA_w"};
		weapons[] = {};
		magazines[] = {};
	};
};

class CfgSoundShaders
{
	class SiP_Type24_close_distance_shot_soundshader
	{
		samples[] = {{"fow\fow_sounds\weapons\bren\bren_fire_near.wss",1}};
		volume = "1*(1-interior)";
		range = 150;
		rangecurve[] = {{0,0.2},{50,1},{100,0}};
	};
	class SiP_Type24_closeShot_SoundShader
	{
		samples[] = {{"fow\fow_sounds\weapons\bren\bren_fire_near.wss",1}};
		volume = 1;
		range = 50;
		rangecurve = "vn_weapon_close_volumecurve";
	};
};

class cfgsoundsets
{
	class vn_m1919_shot_soundset;

	class SiP_type24_shot_soundset: vn_m1919_shot_soundset
	{
		soundshaders[] = 
		{
			"vn_chainbox_big_soundshader",
			"vn_regular_shells_soundshader",
			"SiP_Type24_closeShot_SoundShader",
			"SiP_Type24_close_distance_shot_soundshader",
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
	class SiP_type24_static_weapon: vn_m1919_v_01
	{
		displayName = "Type 24 HMG";
		magazines[] = {"SiP_200Rnd_type24"};
		magazineReloadTime = 3.6;
		class FullAuto: FullAuto
		{
			reloadTime = 0.15;
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"SiP_type24_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
			};
		};
		class AImode1: AImode1
		{
			reloadTime = 0.15;
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"SiP_type24_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
			};
		};
		class AImode2: AImode2
		{
			reloadTime = 0.15;
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"SiP_type24_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
			};
		};
		class AImode3: AImode3
		{
			reloadTime = 0.15;
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"SiP_type24_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
			};
		};
		class AImode4: AImode4
		{
			reloadTime = 0.15;
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"SiP_type24_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
			};
		};
		class AImode5: AImode5
		{
			reloadTime = 0.15;
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"SiP_type24_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
			};
		};
		class AImode6: AImode6
		{
			reloadTime = 0.15;
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"SiP_type24_shot_soundset","vn_762x39mm_lmg_tails_soundset"};
			};
		};
		class GunParticles
		{
			class Shell
			{
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
				effectName = "MachineGunCloud";
			};
			class Shell2
			{
				effectname = "EAW_8mm_Casing";
				positionname = "konec hlavne";
				directionname = "konec hlavne";
			};
		};
	};
};

class cfgMagazines
{
	class SiP_250Rnd_vickers;
	class SiP_200Rnd_type24: SiP_250Rnd_vickers
	{
		author = "Letlev";
		displayName = "200Rnd Belt 7.62x57";
		count = 250;
		ammo = "vn_792x57";
	};
};

class cfgVehicles
{
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class EAW_Type24_MG: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};

	class SiP_type24MG_base: EAW_Type24_MG
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Type 24";
		author = "Letlev";
		icon = "\NORTH\NF_Static\Maxim\data\ui\Maxim_icomap_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SiP_type24_static_weapon"};
				magazines[] = {"SiP_200Rnd_type24","SiP_200Rnd_type24","SiP_200Rnd_type24","SiP_200Rnd_type24","SiP_200Rnd_type24"};
				ejectDeadGunner = 1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class elevateGun
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class bolt
			{
				source = "reload";
				weapon = "SiP_type24_static_weapon";
			};
			class belt
			{
				source = "revolving";
				weapon = "SiP_type24_static_weapon";
			};
			class otochlaven_shake
			{
				source = "reload";
				weapon = "SiP_type24_static_weapon";
			};
			class otochlaven_shake_up
			{
				source = "reload";
				weapon = "SiP_type24_static_weapon";
			};
		};
	};

	class SiP_type24MG_PVA: SiP_type24MG_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "SiP_PVA";
		editorCategory = "SiP_PVA_Editor_Category";
		editorSubcategory = "SiP_Machineguns_Editor_Subcategory";
		crew = "SiP_PVA_gunner";
		typicalCargo[] = {"SiP_PVA_gunner"};
	};
	
	class SiP_type24MG_PVA_w: SiP_type24MG_PVA
	{
		faction = "SiP_PVA_w";
		editorCategory = "SiP_PVA_w_Editor_Category";
		crew = "SiP_PVA_gunner_w";
		typicalCargo[] = {"SiP_PVA_gunner_w"};
	};
};