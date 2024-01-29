class cfgPatches
{
    class SiP_Patch_nagant_revolver
    {
        addonRootClass = "SiP_Patch_pva_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = {"SiP_nagant_revolver"};
    };
};

class cfgWeapons
{
    class vn_mk22;
    class vn_m1895: vn_mk22
    {
        class Single;
    };

    class SiP_nagant_revolver: vn_m1895
    {
        author = "Letlev";
        displayName = "Nagant M1895 Revolver";
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class standardsound
            {
                soundsetshot[] = {"FoW_Webley_Firing","vn_9mm_pistol_tails_soundset","vn_revolver_trigger_reset_soundset"};
            };
        };
    };
};