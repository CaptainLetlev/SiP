class cfgPatches
{
    class SiP_Patch_pva_uniforms
    {
        Name = "Suicide Is Painless - Korean War Mod - PVA uniforms";
        Author = "Letlev";
        requiredAddons[] = {"EAW_Chinese_Infantry"};
        units[] = {};
        weapons[] = 
        {
            "SiP_PVA_Uniform",
            "SiP_PVA_Officer_Uniform",
            "SiP_PVA_Uniform_Winter"
        };
    };
};

class cfgWeapons
{
    class Uniform_Base;

    class EAW_Chinese_Uniform;
    class EAW_Chinese_Uniform_Training: EAW_Chinese_Uniform
    {
        class ItemInfo;
    };

    class SiP_PVA_Uniform: EAW_Chinese_Uniform_Training
    {
        scope = 2;
        author = "Letlev";
        displayName = "[PVA] Standard Uniform";
        picture = "\SiP\Addons\sip_pva_gear\uniforms\data\UI\pva_uniform_ui.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_PVA_rifleman1";
        };
    };
    
    class SiP_PVA_Officer_Uniform: EAW_Chinese_Uniform_Training
    {
        scope = 2;
        author = "Letlev";
        displayName = "[PVA] Officer Uniform";
        picture = "\SiP\Addons\sip_pva_gear\uniforms\data\UI\pva_uniform_ui.paa";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_PVA_Officer";
        };
    };

    class SiP_PVA_Uniform_Winter: SiP_PVA_Uniform
    {
        author = "Letlev";
        displayName = "[PVA] Quilted Uniform";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_PVA_rifleman1_w";
        };
    };
};