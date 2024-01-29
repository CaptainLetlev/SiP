class cfgPatches
{
    class SiP_Patch_M1951_uniform
    {
        addonRootClass = "SiP_Patch_US_Uniforms";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m51_uniform",
            "SiP_m51_uniform_private",
            "SiP_m51_uniform_corporal",
            "SiP_m51_uniform_sergeant",
            "SiP_m51_uniform_sergeant_1stclass",
            "SiP_m51_uniform_master_sergeant",
            "SiP_m51_uniform_first_sergeant",
            "SiP_m51_uniform_2lt",
            "SiP_m51_uniform_1lt",
            "SiP_m51_uniform_captain",
            "SiP_m51_uniform_major",
            "SiP_m51_uniform_ltcol",
            "SiP_m51_uniform_col",

            "SiP_m51_uniform_7id",
            "SiP_m51_uniform_7id_private",
            "SiP_m51_uniform_7id_corporal",
            "SiP_m51_uniform_7id_sergeant",
            "SiP_m51_uniform_7id_sergeant_1stclass",
            "SiP_m51_uniform_7id_master_sergeant",
            "SiP_m51_uniform_7id_first_sergeant",
            "SiP_m51_uniform_7id_2lt",
            "SiP_m51_uniform_7id_1lt",
            "SiP_m51_uniform_7id_captain",
            "SiP_m51_uniform_7id_major",
            "SiP_m51_uniform_7id_ltcol",
            "SiP_m51_uniform_7id_col",

            "SiP_m51_uniform_w_scarf",
            "SiP_m51_uniform_w_scarf_pvt",
            "SiP_m51_uniform_w_scarf_cpl",
            "SiP_m51_uniform_w_scarf_sgt",
            "SiP_m51_uniform_w_scarf_sfc",
            "SiP_m51_uniform_w_scarf_msg",
            "SiP_m51_uniform_w_scarf_1sgt",
            "SiP_m51_uniform_w_scarf_2ndlt",
            "SiP_m51_uniform_w_scarf_1stlt",
            "SiP_m51_uniform_w_scarf_capt",
            "SiP_m51_uniform_w_scarf_maj",
            "SiP_m51_uniform_w_scarf_ltcol",
            "SiP_m51_uniform_w_scarf_col",

            "SiP_m51_ab_uniform",
            "SiP_m51_ab_uniform_pvt",
            "SiP_m51_ab_uniform_cpl",
            "SiP_m51_ab_uniform_sgt",
            "SiP_m51_ab_uniform_sfc",
            "SiP_m51_ab_uniform_msg",
            "SiP_m51_ab_uniform_1sgt",
            "SiP_m51_ab_uniform_2lt",
            "SiP_m51_ab_uniform_1lt",
            "SiP_m51_ab_uniform_capt",
            "SiP_m51_ab_uniform_maj",
            "SiP_m51_ab_uniform_ltcol",
            "SiP_m51_ab_uniform_col"
        };
    };
};

class cfgWeapons
{
    class Uniform_Base;
    class ItemCore;

    class U_BasicBody: Uniform_Base
    {
        class ItemInfo;
    };
    class U_Simc_BasicBody: U_BasicBody
    {
        class ItemInfo;
    };

    class SiP_m51_uniform: U_Simc_BasicBody
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] M-1951";
        descriptionShort = "jacket, Field, M1951";
        model = "\simc_uaf_44\suitpack_m43.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_base";
        };
    };

    class SiP_m51_uniform_private: SiP_m51_uniform
    {
        displayName = "[US] M-1951 01 (Pvt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_private_base";
        };
    };
    class SiP_m51_uniform_corporal: SiP_m51_uniform
    {
        displayName = "[US] M-1951 02 (Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_corporal_base";
        };
    };
    class SiP_m51_uniform_sergeant: SiP_m51_uniform
    {
        displayName = "[US] M-1951 03 (Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sergeant_base";
        };
    };
    class SiP_m51_uniform_sergeant_1stclass: SiP_m51_uniform
    {
        displayName = "[US] M-1951 04 (SFC)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_sergeant_1stclass_base";
        };
    };
    class SiP_m51_uniform_master_sergeant: SiP_m51_uniform
    {
        displayName = "[US] M-1951 05 (MSG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_master_sergeant_base";
        };
    };
    class SiP_m51_uniform_first_sergeant: SiP_m51_uniform
    {
        displayName = "[US] M-1951 06 (1SG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_first_sergeant_base";
        };
    };
    class SiP_m51_uniform_2lt: SiP_m51_uniform
    {
        displayName = "[US] M-1951 07 (2nd Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_2lt_base";
        };
    };
    class SiP_m51_uniform_1lt: SiP_m51_uniform
    {
        displayName = "[US] M-1951 08 (1st Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_1lt_base";
        };
    };
    class SiP_m51_uniform_captain: SiP_m51_uniform
    {
        displayName = "[US] M-1951 09 (Captain)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_captain_base";
        };
    };
    class SiP_m51_uniform_major: SiP_m51_uniform
    {
        displayName = "[US] M-1951 10 (Major)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_major_base";
        };
    };
    class SiP_m51_uniform_ltcol: SiP_m51_uniform
    {
        displayName = "[US] M-1951 11 (Lt. Col)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_ltcol_base";
        };
    };
    class SiP_m51_uniform_col: SiP_m51_uniform
    {
        displayName = "[US] M-1951 12 (Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_col_base";
        };
    };

    class SiP_m51_uniform_7id: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_base";
        };
    };
    class SiP_m51_uniform_7id_private: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 01 (Pvt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_private_base";
        };
    };
    class SiP_m51_uniform_7id_corporal: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 02 (Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_corporal_base";
        };
    };
    class SiP_m51_uniform_7id_sergeant: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 03 (Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_sergeant_base";
        };
    };
    class SiP_m51_uniform_7id_sergeant_1stclass: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 04 (SFC)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_sergeant_1stclass_base";
        };
    };
    class SiP_m51_uniform_7id_master_sergeant: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 05 (MSG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_master_sergeant_base";
        };
    };
    class SiP_m51_uniform_7id_first_sergeant: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 06 (1SG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_first_sergeant_base";
        };
    };
    class SiP_m51_uniform_7id_2lt: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 07 (2nd Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_2lt_base";
        };
    };
    class SiP_m51_uniform_7id_1lt: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 08 (1st Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_1lt_base";
        };
    };
    class SiP_m51_uniform_7id_captain: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 09 (Captain)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_captain_base";
        };
    };
    class SiP_m51_uniform_7id_major: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 10 (Major)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_major_base";
        };
    };
    class SiP_m51_uniform_7id_ltcol: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 11 (Lt. Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_ltcol_base";
        };
    };
    class SiP_m51_uniform_7id_col: SiP_m51_uniform
    {
        displayName = "[US] M-1951 7ID 12 (Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_7id_col_base";
        };
    };

    class SiP_m51_uniform_w_scarf: U_Simc_BasicBody
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] M-1951 Scarf";
        descriptionShort = "jacket, Field, M1951";
        model = "\simc_uaf_44\suitpack_m43.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa"};
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_base";
        };
    };
    class SiP_m51_uniform_w_scarf_pvt: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 01 (Pvt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_pvt_base";
        };
    };
    class SiP_m51_uniform_w_scarf_cpl: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 02 (Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_cpl_base";
        };
    };
    class SiP_m51_uniform_w_scarf_sgt: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 03 (Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_sgt_base";
        };
    };
    class SiP_m51_uniform_w_scarf_sfc: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 04 (SFC)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_sfc_base";
        };
    };
    class SiP_m51_uniform_w_scarf_msg: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 05 (MSG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_msg_base";
        };
    };
    class SiP_m51_uniform_w_scarf_1sgt: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 06 (1SG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_1sgt_base";
        };
    };
    class SiP_m51_uniform_w_scarf_2ndlt: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 07 (2nd Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_2ndlt_base";
        };
    };
    class SiP_m51_uniform_w_scarf_1stlt: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 08 (1st Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_1stlt_base";
        };
    };
    class SiP_m51_uniform_w_scarf_capt: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 09 (Captain)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_capt_base";
        };
    };
    class SiP_m51_uniform_w_scarf_maj: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 10 (Major)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_maj_base";
        };
    };
    class SiP_m51_uniform_w_scarf_ltcol: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 11 (Lt. Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_ltcol_base";
        };
    };
    class SiP_m51_uniform_w_scarf_col: SiP_m51_uniform_w_scarf
    {
        displayName = "[US] M-1951 Scarf 12 (Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_uniform_w_scarf_col_base";
        };
    };

    class SiP_m51_ab_uniform: SiP_m51_uniform
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] M-1951 AB 187th RCT";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_base";
        };
    };
    class SiP_m51_ab_uniform_pvt: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 01 (Pvt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_pvt_base";
        };
    };
    class SiP_m51_ab_uniform_cpl: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 02 (Cpl)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_cpl_base";
        };
    };
    class SiP_m51_ab_uniform_sgt: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 03 (Sgt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_sgt_base";
        };
    };
    class SiP_m51_ab_uniform_sfc: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 04 (SFC)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_sfc_base";
        };
    };
    class SiP_m51_ab_uniform_msg: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 05 (MSG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_msg_base";
        };
    };
    class SiP_m51_ab_uniform_1sgt: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 06 (1SG)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_1sgt_base";
        };
    };
    class SiP_m51_ab_uniform_2lt: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 07 (2nd Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_2lt_base";
        };
    };
    class SiP_m51_ab_uniform_1lt: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 08 (1st Lt)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_1lt_base";
        };
    };
    class SiP_m51_ab_uniform_capt: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 09 (Captain)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_capt_base";
        };
    };
    class SiP_m51_ab_uniform_maj: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 10 (Major)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_maj_base";
        };
    };
    class SiP_m51_ab_uniform_ltcol: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 11 (Lt. Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_ltcol_base";
        };
    };
    class SiP_m51_ab_uniform_col: SiP_m51_ab_uniform
    {
        displayName = "[US] M-1951 AB 187th RCT 12 (Colonel)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "SiP_m51_ab_uniform_col_base";
        };
    };
};

class cfgVehicles
{
    class Simc_US_M43_Soldier_base;
    class Simc_US_M43_HBT_Base;
    class simc_hbt_47;

    class SiP_m51_uniform_base: Simc_US_M43_Soldier_base
    {
        uniformClass = "SiP_m51_uniform";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","rank2"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
    };
    class SiP_m51_uniform_private_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa"
        };
    };
    class SiP_m51_uniform_corporal_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_corporal";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Corporal_co.paa"
        };
    };
    class SiP_m51_uniform_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_sergeant_1stclass_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_sergeant_1stclass";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_master_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_master_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_first_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_first_sergeant";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa"
        };
    };
    class SiP_m51_uniform_2lt_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_2lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_2lt_ca.paa"
        };
    };
    class SiP_m51_uniform_1lt_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_1lt";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_1lt_ca.paa"
        };
    };
    class SiP_m51_uniform_captain_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_captain";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_cpt_ca.paa"
        };
    };
    class SiP_m51_uniform_major_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_major";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_major_ca.paa"
        };
    };
    class SiP_m51_uniform_ltcol_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_ltcol";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"
        };
    };
    class SiP_m51_uniform_col_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_col";
        hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\patches\US_Shld_col_ca.paa"
        };
    };

    class SiP_m51_uniform_7id_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
    };
    class SiP_m51_uniform_7id_private_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_private";
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\data\m43_1_co.paa",
            "\simc_uaf_44\patches\US_Shld_1stclass_ca.paa",
            "",
            "",
            "\simc_uaf_67\patches\7id_ca.paa",
            ""
        };
    };
    class SiP_m51_uniform_7id_corporal_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_corporal";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Corporal_co.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_sergeant";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_sergeant_1stclass_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_sergeant_1stclass";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_master_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_master_sergeant";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_first_sergeant_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7idfirst_sergeant";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa","","","\simc_uaf_67\patches\7id_ca.paa",""};
    };
    class SiP_m51_uniform_7id_2lt_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_2lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_2lt_ca.paa"};
    };
    class SiP_m51_uniform_7id_1lt_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_1lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa"};
    };
    class SiP_m51_uniform_7id_captain_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_captain";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_cpt_ca.paa"};
    };
    class SiP_m51_uniform_7id_major_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_major";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_major_ca.paa"};
    };
    class SiP_m51_uniform_7id_ltcol_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_ltcol";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"};
    };
    class SiP_m51_uniform_7id_col_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_uniform_7id_col";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\simc_uaf_67\patches\7id_ca.paa","\simc_uaf_44\patches\US_Shld_col_ca.paa"};
    };

    class SiP_m51_ab_uniform_base: SiP_m51_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform";
        model = "\simc_uaf_44\m43_para_2.p3d";
        picture = "\simc_uaf_44_preview\icons\m43_ab_ca.paa";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
    };
    class SiP_m51_ab_uniform_pvt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_pvt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_1stclass_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
    };
    class SiP_m51_ab_uniform_cpl_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_cpl";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Corporal_co.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
    };
    class SiP_m51_ab_uniform_sgt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
    };
    class SiP_m51_ab_uniform_sfc_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_sfc";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
    };
    class SiP_m51_ab_uniform_msg_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_msg";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
    };
    class SiP_m51_ab_uniform_1sgt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_1sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa",""};
    };
    class SiP_m51_ab_uniform_2lt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_2lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_2ndlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_2lt_ca.paa"};
    };
    class SiP_m51_ab_uniform_1lt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_1lt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_1stlt_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa"};
    };
    class SiP_m51_ab_uniform_capt_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_capt";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_cap_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_cpt_ca.paa"};
    };
    class SiP_m51_ab_uniform_maj_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_maj";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_maj_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_major_ca.paa"};
    };
    class SiP_m51_ab_uniform_ltcol_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_ltcol";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_ltcol_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_ltcol_ca.paa"};
    };
    class SiP_m51_ab_uniform_col_base: SiP_m51_ab_uniform_base
    {
        uniformClass = "SiP_m51_ab_uniform_col";
        hiddenSelectionsTextures[] = {"\SiP\Addons\sip_us_army_gear\Uniforms\textures\uniform\m51_1_col_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","\SiP\Addons\sip_us_units\Army\data\patches\187RCT_ca.paa","\simc_uaf_44\patches\US_Shld_col_ca.paa"};
    };

    class SiP_m51_uniform_w_scarf_base: Simc_US_M43_Soldier_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf";
        model = "simc_uaf_44\m43_HBT_laat.p3d";
        hiddenSelections[] = {"camo","camo2","rank","falg","falg_left","insignia","bots"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\m43_1_co.paa","","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_pvt_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_pvt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_1stclass_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_cpl_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_cpl";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_Corporal_co.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_sgt_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_Staff_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_sfc_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_sfc";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_Tech_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_msg_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_msg";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_Master_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_1sgt_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_1sgt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_1st_Sergeant_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_2ndlt_base: SiP_m51_uniform_w_scarf_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_2ndlt";
        hiddenSelections[] = {"camo","camo2","rank2","falg","falg_left","insignia","bots"};
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_2lt_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_1stlt_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_1stlt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_1lt_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_capt_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_capt";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_cpt_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_maj_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_maj";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_major_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_ltcol_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_ltcol";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_ltcol_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
    class SiP_m51_uniform_w_scarf_col_base: SiP_m51_uniform_w_scarf_2ndlt_base
    {
        uniformClass = "SiP_m51_uniform_w_scarf_col";
        hiddenSelectionsTextures[] = {"\simc_uaf_44\data\m43_1_co.paa","\simc_uaf_44\data\HBT_co.paa","\simc_uaf_44\patches\US_Shld_col_ca.paa","","","","\simc_uaf_44\data\3ds_bot_od7_co.paa"};
    };
};