class cfgPatches
{
    class SiP_Patch_M2_helmet
    {
        addonRootClass = "SiP_Patch_US_Army_Headgear";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{
    class H_Simc_M1_base;
    class H_Simc_M1_Helmet: H_Simc_M1_base
    {
        class ItemInfo;
    };
    
    class H_Simc_M2_Early_Clear_Helmet: H_Simc_M1_Helmet
    {
        class ItemInfo;
    };

    class H_Simc_M2_Early_Clear_Helmet_3: H_Simc_M2_Early_Clear_Helmet
    {
        class ItemInfo;
    };

    class SiP_M1C_Helmet: H_Simc_M2_Early_Clear_Helmet_3
    {
        scope = 1;
        scopearsenal = 1;
        author = "Letlev";
        displayName = "[US] M1C Helmet";
        allowedFacewear[] = {"",1};
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        class ItemInfo: ItemInfo
		{
            hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        };
    };

    //1st Battalion//
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1: SiP_M1C_Helmet
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //1st Battalion Jump Strap
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_spat_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_JS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net2: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net3: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net4: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net5: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net6: H_hssn_SiP_M1C_Helmet_1bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_1bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //2nd Battalion//
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //2nd Battalion Jump Strap
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_NS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_spat_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_JS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net1: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net2: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net3: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net4: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net5: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net6: H_hssn_SiP_M1C_Helmet_2bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_2bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //3rd Battalion//
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1: H_hssn_SiP_M1C_Helmet_1bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    //3rd Battalion Jump Strap
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_NS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_spat_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
             "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            ""
        };
        class XtdGearInfo
        {	
            fak = "empty";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_JS1
    {
        hiddenSelections[] = {"shell","cover","right","left","fore","jokes","ifak"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net1: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net2: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net3: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net4: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net5: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net6: H_hssn_SiP_M1C_Helmet_3bn_187RCT_fak_JS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa",
            "",
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_ca.paa"
        };
        class XtdGearInfo
        {	
            fak = "attached";
            sidedecals = "187RCT_3bn"; 
            frontdecal = "Empty";
            straps = "js";
            model = "H_hssn_SiP_M1C_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };

    // class SiP_M1C_Helmet_1bt_187rct: H_Simc_M2_Early_Clear_Helmet_3
    // {
    //     author = "Letlev";
    //     displayName = "[US] M1C Helmet 1Bn 187RCT";
    //     hiddenSelections[] = {"cover","scrim","right","rear","left","fore","jokes","ifak"};
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelections[] = {"cover","scrim","right","rear","left","fore","jokes","ifak"};
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_cpl_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 01 (Cpl)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_sgt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 02 (Sgt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_sgt_1stclass_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 03 (SFC)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_master_sgt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 04 (MSG)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_first_sgt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 05 (1SG)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_2ndlt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 06 (2nd Lt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_1stlt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 07 (1st Lt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_captain_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 08 (Captain)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_major_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 09 (Major)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_ltcol_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 1Bn 187RCT 10 (Lt.Col)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };

    // class SiP_M1C_Helmet_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_cpl_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 01 (Cpl)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_sgt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 02 (Sgt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_sgt_1stclass_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 03 (SFC)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_master_sgt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 04 (MSG)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_first_sgt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 05 (1SG)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_2ndlt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 06 (2nd Lt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_1stlt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 07 (1st Lt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_captain_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 08 (Captain)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_major_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 09 (Major)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_ltcol_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 2Bn 187RCT 10 (Lt.Col)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };

    // class SiP_M1C_Helmet_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_cpl_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 01 (Cpl)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_sgt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 02 (Sgt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_sgt_1stclass_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 03 (SFC)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_master_sgt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 04 (MSG)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_first_sgt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 05 (1SG)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_2ndlt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 06 (2nd Lt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_1stlt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 07 (1st Lt)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_captain_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 08 (Captain)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_major_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 09 (Major)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_ltcol_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     displayName = "[US] M1C Helmet 3Bn 187RCT 10 (Lt.Col)";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };

    // class SiP_M1C_Helmet_NS_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
    // {
    //     scope = 1;
    //     displayName = "[US] M1C Helmet NS 1Bn 187RCT";
    //     model = "\simc_uaf_44\helmet_m2_2.p3d";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         uniformModel = "\simc_uaf_44\helmet_m2_2.p3d";
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_NS_2bt_187rct: SiP_M1C_Helmet_NS_1bt_187rct
    // {
    //     scope = 1;
    //     displayName = "[US] M1C Helmet NS 2Bn 187RCT";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
    // class SiP_M1C_Helmet_NS_3bt_187rct: SiP_M1C_Helmet_NS_1bt_187rct
    // {
    //     scope = 1;
    //     displayName = "[US] M1C Helmet NS 3Bn 187RCT";
    //     hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     class ItemInfo: ItemInfo
    //     {
    //         hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
    //     };
    // };
};

class XtdGearModels 
{
    class CfgWeapons 
    {
        class H_hssn_SiP_M1C_Helmet
        {
            label = "1950-53 Variant";
            author = "Letlev";
            options[]=
            {
                "shade",
                "straps",
                "sidedecals",
                "frontdecal",
                "cover",
                "fak"
            };
            class shade
            {
                label = "Paint";
                hiddenselection = "shell";
                values[]=
                {
                    "shade1",
                    "shade2",
                    "shade3"
                };
                class shade1
                {
                    label = "1";
                };
                class shade2
                {
                    label = "2";
                };
                class shade3
                {
                    label = "3";
                };
            };
            class straps
            {
                label = "Straps";
                changeingame = 1;
                changedelay = 1;
                values[]=
                {
                    "ns",
                    "js"
                };
                class ns
                {
                    label = "Folded";
                    actionlabel = "Unbutton Jump Strap";
                };
                class js
                {
                    label = "Jump";
                    actionlabel = "Button Jump Strap";
                };
            };
            class cover
            {
                label = "Cover";
                hiddenselection = "cover";
                values[]=
                {
                    "Empty",
                    "Net1",
                    "Net2",
                    "Net3",
                    "Net4",
                    "Net5",
                    "Net6",
                    "Canvas",
                    "White"
                };
                class Empty
                {
                    label = "No Cover";
                };
                class Net1
                {
                    label = "Standard";
                };
                class Net2
                {
                    label = "Small";
                };
                class Net3
                {
                    label = "Large";
                };
                class Net4
                {
                    label = "Shrimp";
                };
                class Net5
                {
                    label = "Ripped Small";
                };
                class Net6
                {
                    label = "Ripped Shrimp";
                };
            };
            class frontdecal
            {
                label = "Front Decal";
                hiddenselection = "fore";
                values[]=
                {
                    "Empty",
                    "pfc",
                    "cpl",
                    "sgt",
                    "sfc",
                    "msgt",
                    "first_sgt",
                    "second_Lt",
                    "first_Lt",
                    "Captain",
                    "Major",
                    "LtCol",
                    "Col"
                };
                class Empty
                {
                    label = "Empty";
                };
                class pfc
                {
                    label = "Pfc";
                };
                class cpl
                {
                    label = "Cpl";
                };
                class sgt
                {
                    label = "Sgt";
                };
                class sfc
                {
                    label = "Sfc";
                };
                class msgt
                {
                    label = "M/Sgt";
                };
                class first_sgt
                {
                    label = "1st Sgt";
                };
                class second_Lt
                {
                    label = "2nd Lt";
                };
                class first_Lt
                {
                    label = "1st Lt";
                };
                class Captain
                {
                    label = "Captain";
                };
                class Major
                {
                    label = "Major";
                };
                class LtCol
                {
                    label = "Lt.Col";
                };
                class Col
                {
                    label = "Col";
                };
            };
            class sidedecals
            {
                label = "Unit Decals";
                hiddenselection = "right";
                values[]=
                {
                    "Empty",
                    "187RCT_1bn",
                    "187RCT_2bn",
                    "187RCT_3bn"
                };
                class Empty
                {
                    label = "Empty";
                };
                class 187RCT_1bn
                {
                    label = "1Bn/187th";
                };
                class 187RCT_2bn
                {
                    label = "2Bn/187th";
                };
                class 187RCT_3bn
                {
                    label = "3Bn/187th";
                };
            };
            class fak
            {
                label = "First Aid Kit";
                hiddenselection = "ifak";
                values[]=
                {
                    "empty",
                    "attached"
                };
                changeingame = 1;
                changedelay = 1;
                class empty
                {
                    label = "Empty";
                    actionlabel = "Remove First Aid Kit";
                };
                class attached
                {
                    label = "Attached";
                    actionlabel = "Attach First Aid Kit";
                };
            };
        };
    };
};