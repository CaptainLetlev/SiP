class cfgPatches
{
    class SiP_Patch_UN_Units_ROK
    {
        addonRootClass = "SiP_Patch_un_units";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = 
        {
            "SiP_French_para_uniform_base"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class simc_hbt_47;

    class SiP_French_para_uniform_base: simc_hbt_47
    {
        uniformClass = "SiP_M1947_uniform";
        model = "\WW2\Assets_m\Characters\British_m\WW2_UK_Airborne\WW2_UK_Para_Uniform.p3d";
        hiddenSelections[] = {"camo1","camo2","badge","insignia"};
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_un_units\France\uniform\data\fr_para_smock_co.paa",
            "\SiP\Addons\sip_un_units\France\uniform\data\fr_para_smock_legs_co.paa",
            "",
            ""
        };
    };
};