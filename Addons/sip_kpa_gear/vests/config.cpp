class cfgPatches
{
    class SiP_Patch_kpa_vests
    {
        Name = "Suicide Is Painless - Korean War Mod - KPA vests";
        Author = "Letlev";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_KPA_fieldbelt",
            "SiP_KPA_svtbelt"
        };
    };
};

class cfgWeapons
{
    class VestItem;

    class vn_o_vest_vc_01;
};
