class cfgPatches
{
    class SiP_Patch_KPA_Headgear
    {
        Name = " Suicide Is Painless - Korean War Mod - KPA Headgear";
        addonRootClass = "SiP_Patch_kpa_gear";
        requiredAddons[] = 
        {
            "EAW_Chinese_Infantry"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_kpa_cap",
            "SiP_KPA_officer_cap"
        };
    };
};
class cfgWeapons
{
    class ItemCore;

    class EAW_Chinese_Winter_Cap_1: ItemCore
	{
        class ItemInfo;
    };

    class SiP_kpa_cap: EAW_Chinese_Winter_Cap_1
    {
        displayName = "[KPA] Field Cap (Tan)";
        picture = "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_cap_ui_ca.paa";
        hiddenSelections[] = {"camo","camoB"};
		hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_Cap_Tan_co.paa",
            "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_Cap_insignia_co.paa"
        };
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"camo","camoB"};
        };
        class XtdGearInfo
        {
            model = "H_hssn_SiP_KPA_cap";
            variant = "tan";
        };
    };
    class SiP_KPA_officer_cap: SiP_kpa_cap
    {
        displayName = "[KPA] Field Cap (Green)";
        picture = "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_cap_ui_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_cap_green_co.paa",
            "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_Cap_insignia_co.paa"
        };
        class XtdGearInfo
        {
            model = "H_hssn_SiP_KPA_cap";
            variant = "green";
        };
    };
};

class XtdGearModels 
{
    class CfgWeapons 
    {
        class H_hssn_SiP_KPA_cap
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "variant"
            };
            class variant
            {
                label = "Variant";
                values[]=
                {
                    "tan",
                    "green"
                };
                class tan
                {
                    label = "Tan";
                };
                class green
                {
                    label = "Green";
                };                
            };            
        };
    };
};