class cfgPatches
{
    class SiP_Patch_KPA_Headgear
    {
        Name = " Suicide Is Painless - Korean War Mod - KPA Headgear";
        Author = "Letlev";
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
        picture = "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_cap_ui.paa";
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
    };
    class SiP_KPA_officer_cap: SiP_kpa_cap
    {
        displayName = "[KPA] Field Cap (Green)";
        picture = "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_cap_ui.paa";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_cap_green_co.paa",
            "\SiP\Addons\sip_kpa_gear\headgear\data\kpa_Cap_insignia_co.paa"
        };
    };
};