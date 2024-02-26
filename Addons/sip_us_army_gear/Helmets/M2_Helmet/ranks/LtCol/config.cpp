class cfgPatches
{
    class SiP_Patch_M2_helmet_LtCol
    {
        addonRootClass = "SiP_Patch_US_Army_Headgear";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare",
            "SiP_Patch_M2_helmet"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{
    class H_Simc_M2_Early_Clear_Helmet_3;

    class SiP_M1C_Helmet: H_Simc_M2_Early_Clear_Helmet_3
    {
        class ItemInfo;
    };

    //1st Battalion//
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1: SiP_M1C_Helmet
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //1st Battalion Jump Strap
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_spat_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_JS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //2nd Battalion//
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //2nd Battalion Jump Strap
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_NS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_spat_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_JS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //3rd Battalion//
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn";
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //3rd Battalion Jump Strap
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_NS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_spat_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_JS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_LtCol_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "LtCol";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
};