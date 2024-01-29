class cfgPatches
{
    class SiP_Patch_tt33
    {
        addonRootClass = "SiP_Patch_pva_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam","weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "vn_weapons",
            "NORTH_weapons",
            "NORTH_weapons_cfg"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_tt33"
        };
    };
};

class cfgWeapons
{
    class vn_pm;
    class vn_tt33: vn_pm
    {
        class Single;
    };
    class SiP_tt33: vn_tt33
    {
        author = "Letlev";
        displayName = "TT-33";
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"NORTH_TT33_Shot_soundSet","NORTH_TT33_Tail_soundSet","Makarov_InteriorTail_SoundSet"};
            };
        };
    };
};
