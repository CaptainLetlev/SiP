class cfgPatches
{
    class SiP_Patch_High_Power
    {
        addonRootClass = "SiP_Patch_un_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "vn_weapons",
            "fow_sounds"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_Browning_HiPower"
        };
        magazines[] = 
        {
            "SiP_hp_mag"
        };
    };

};
class cfgWeapons
{
    class vn_m1911;
    class vn_hp: vn_m1911
    {
        class Single;
    };

    class SiP_Browning_HiPower: vn_hp
    {
        author = "Letlev";
        displayName = "Browning Hi-Power";
        picture = "\sp_fwa_hipower\icons\hipower_wood_icon_ca.paa";
        model = "sp_fwa_hipower\hipower\sp_hipower";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sp_fwa_hipower\hipower\textures\sp_hipower_wood_co.paa"};
        hiddenSelectionsMaterials[] = {"sp_fwa_hipower\hipower\textures\sp_hipower_wood.rvmat"};
        selectionFireAnim = "muzzleFlash";
        magazines[] = {"SiP_hp_mag"};
        class Single: Single
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                soundSetShot[] = {"FoW_M1911_Firing","FoW_SMG_EFX","FoW_Interior_Reverb_45ACP"};
            };
        };
    };
};

class CfgMagazines
{
    class vn_hp_mag;

    class SiP_hp_mag: vn_hp_mag
    {
        author = "Letlev";
        modelSpecial = "sp_fwa_hipower\magazines\sp_hipower_13";
        modelSpecialIsProxy = 1;
    };
};