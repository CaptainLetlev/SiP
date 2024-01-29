class cfgPatches
{
	class SiP_Patch_us_units
	{
		Name = "Suicide Is Painless - Korean War Mod - US Units";
		Author = "Letlev";
		requiredAddons[] = 
		{
			"A3_Characters_F_BLUFOR"
		};
		units[] = {};
		weapons[] = {};
		worlds[] = {};
	};
};

class CfgUnitInsignia
{
	class SiP_Patch_187RCT
	{
		author = "Letlev";
		displayName = "187th Regimental Combat Team";
		texture = "SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa";
	};
	class SiP_Patch_Batallon_Colombia
	{
		author = "Letlev";
		displayName = "Batallón Colombia";
		texture = "SiP\Addons\sip_us_units\Army\data\patches\Batallón_Colombia_ca.paa";
	};
	class SiP_Patch_Kagnew_battalion
	{
		author = "Letlev";
		displayName = "Kagnew Battalion";
		texture = "SiP\Addons\sip_us_units\Army\data\patches\kagnew_battalion_ca.paa";
	};
};

class CfgWorlds
{
	class GenericNames
	{
		class colpotter
		{
			class FirstNames
			{
				Sherman = "Sherman";
			};
			class LastNames
			{
				Potter = "Potter";
			};
		};
		class HawkeyePierce
		{
			class FirstNames
			{
				Sherman = "Benjamin Franklin";
			};
			class LastNames
			{
				Potter = "Pierce";
			};
		};
		class TrapperMcIntyre
		{
			class FirstNames
			{
				Sherman = "John";
			};
			class LastNames
			{
				Potter = "McIntyre";
			};
		};
		class BeejHunicut
		{
			class FirstNames
			{
				Sherman = "B.J.";
			};
			class LastNames
			{
				Potter = "Hunnicut";
			};
		};
		class MaxKlinger
		{
			class FirstNames
			{
				Sherman = "Max";
			};
			class LastNames
			{
				Potter = "Klinger";
			};
		};
		class RadarORiley
		{
			class FirstNames
			{
				Sherman = "Walter";
			};
			class LastNames
			{
				Potter = "O'Riley";
			};
		};
		class HenryBlake
		{
			class FirstNames
			{
				Sherman = "Henry";
			};
			class LastNames
			{
				Potter = "Blake";
			};
		};
		class FrankBurns
		{
			class FirstNames
			{
				Sherman = "Frank";
			};
			class LastNames
			{
				Potter = "Burns";
			};
		};
	};
};

class CfgIdentities
{
	class SiP_Potter
	{
		face = "GreekHead_A3_04";
		glasses = "G_LIB_Dienst_Brille";
		name = "Sherman";
		nameSound = "Adams";
		pitch = 1.0;
		speaker = "Male01ENG";
	};
	class SiP_Hawkeye
	{
		face = "WhiteHead_11";
		glasses = "None";
		name = "Hawkeye";
		nameSound = "Adams";
		pitch = 1.0;
		speaker = "Male01ENG";
	};
	class SiP_BJ
	{
		face = "WhiteHead_14";
		glasses = "None";
		name = "B.J.";
		nameSound = "Adams";
		pitch = 1.0;
		speaker = "Male01ENG";
	};
	class SiP_Trapper
	{
		face = "WhiteHead_04";
		glasses = "None";
		name = "Trapper";
		nameSound = "Adams";
		pitch = 1.0;
		speaker = "Male01ENG";
	};
	class SiP_Klinger
	{
		face = "PersianHead_A3_01";
		glasses = "None";
		name = "Max";
		nameSound = "Adams";
		pitch = 1.0;
		speaker = "Male01ENG";
	};
};

class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man_A3: Default
	{
		class Default;
		class GreekHead_A3_04;
		class WhiteHead_04;
		class WhiteHead_07;
		class WhiteHead_11;
		class vn_m_ghostrider_face;
		class WhiteHead_16;
		class PersianHead_A3_01;
		class vn_m_tilt_face;
		class vn_m_elcid_face;
		class kevin;

		class SiP_Potter_face: GreekHead_A3_04
		{
			scope = 1;
			displayName = "";
			identityTypes[] = {"SiP_Potter"};
		};
		class SiP_Hawkeye_face: WhiteHead_11
		{
			scope = 1;
			displayName = "";
			identityTypes[] = {"SiP_Hawkeye"};
		};
		class SiP_BJ_face: vn_m_ghostrider_face
		{
			scope = 1;
			displayName = "";
			identityTypes[] = {"SiP_BJ"};
		};
		class SiP_Klinger_face: PersianHead_A3_01
		{
			scope = 1;
			displayName = "Klinger";
			identityTypes[] = {"SiP_Klinger"};
		};
		class SiP_Blake_face: WhiteHead_07
		{
			scope = 1;
			displayName = "";
			identityTypes[] = {"SiP_Blake"};
		};
		class SiP_Radar_face: vn_m_tilt_face
		{
			scope = 1;
			displayName = "";
			identityTypes[] = {"SiP_Radar"};
		};
		class SiP_Trapper_face: WhiteHead_04
		{
			scope = 1;
			displayName = "";
			identityTypes[] = {"SiP_Trapper"};
		};
		class SiP_Burns_face: vn_m_elcid_face
		{
			scope = 1;
			displayName = "";
			identityTypes[] = {"SiP_Burns"};
		};
	};
};