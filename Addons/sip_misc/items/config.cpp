
class cfgPatches
{
	class SiP_Patch_misc_items
	{
		Name = " Suicide Is Painless - Korean War Mod - Items";
		addonRootClass = "SiP_Patch_misc";
		requiredAddons[] = 
		{
			"ace_flashlights",
			"ace_trenches",
			"ace_explosives"
		};
		units[] = {};
		weapons[] = 
		{
			"SiP_EntrenchingTool",
			"SiP_EntrenchingTool_m43",

			"SiP_10cap_detonator",
			
			"SiP_flastlight_tl22"
		};
	};
};

class CfgWeapons
{
	class ACE_EntrenchingTool;
	class ACE_M26_Clacker;
	class ACE_Flashlight_XL50;
	
	class SiP_EntrenchingTool: ACE_EntrenchingTool
	{
		author = "Letlev";
		displayName = "[US] M51 Entrenching Tool";
		descriptionShort = "$STR_VN_M_M51_ETOOL_01_DS";
		picture = "\SiP\Addons\sip_misc\items\data\UI\etool_ui_ca.paa";
		model = "\vn\weapons_f_vietnam\melee\m51\vn_m_m51_etool_01";
	};
	class SiP_EntrenchingTool_m43: SiP_EntrenchingTool
	{
        displayName = "[US] M1943 Entrenching Tool";
        descriptionShort = "US WWII E-Tool";
        model = "simc_uaf_44\sekop_43.p3d";
        picture = "\simc_uaf_44_preview\icons\sekop_ca.paa";
        hiddenSelections[] = {"sekop"};
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\sekop_43_co.paa"};
    };

	class SiP_10cap_detonator: ACE_M26_Clacker
	{
		author = "Letlev";
		displayName = "[US] 10 Cap Blasting Machine";
		picture = "\SiP\Addons\sip_misc\items\data\UI\blasting_machine_ui_ca.paa";
		model = "\WW2\Assets_m\Weapons\Mines_m\Inv\IF_Ladung_pm_inv.p3d";
		descriptionShort = "Standard US Handheld detonator";
		ace_explosives_triggerType = "SiP_10cap_detonator_trigger";
	};

	class SiP_flastlight_tl22: ACE_Flashlight_XL50
	{
		author = "Letlev";
		displayName = "[US] TL-22 Flashlight";
		descriptionShort = "Standard US 90 degree flashlight";
		picture = "\z\ace\addons\flashlights\UI\mx_991_ca.paa";
		model = "\vn\weapons_f_vietnam\mx991\vn_mx991";
	};
};

class ACE_Triggers
{
    class Command;

    class SiP_10cap_detonator_trigger: Command
    {
        isAttachable = 1;
        displayName = "10 Cap Blasting Machine";
        picture = "\SiP\Addons\sip_misc\items\data\UI\blasting_machine_ui_ca.paa";
        requires[] = {"SiP_10cap_detonator"};
    };
};

class CfgVehicles
{
	class ACE_RepairItem_Base;

	class ACE_Wheel: ACE_RepairItem_Base
	{
		model = "\FOW\fow_structures_e\misc\fow_wheel.p3d";
	};
	class ACE_Track: ACE_RepairItem_Base
	{
		model = "\a3\Props_F_Tank\Military\TankAcc\TankTracks_01_short_F.p3d";
	};
};