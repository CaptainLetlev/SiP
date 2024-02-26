class cfgPatches
{
    class SiP_Patch_M1_helmet_7ID
    {
        addonRootClass = "SiP_Patch_US_Army_Headgear";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare",
            "SiP_Patch_M1_helmet"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_M1_Helmet_NS",
            "SiP_M1_Helmet_NS_corporal",
            "SiP_M1_Helmet_NS_sergeant",
            "SiP_M1_Helmet_NS_sgt_1stclass",
            "SiP_M1_Helmet_NS_master_sgt",
            "SiP_M1_Helmet_NS_first_sgt",
            "SiP_M1_Helmet_NS_2ndlt",
            "SiP_M1_Helmet_NS_1stlt",
            "SiP_M1_Helmet_NS_captain",
            "SiP_M1_Helmet_NS_major",
            "SiP_M1_Helmet_NS_ltCol",
            "SiP_M1_Helmet_NS_Col",
            "SiP_M1_Helmet_NS_medic",

            "SiP_M1_Helmet_pile",
            "SiP_M1_Helmet_pile_corporal",
            "SiP_M1_Helmet_pile_sergeant",
            "SiP_M1_Helmet_pile_sgt_1stclass",
            "SiP_M1_Helmet_pile_master_sgt",
            "SiP_M1_Helmet_pile_first_sgt",
            "SiP_M1_Helmet_pile_2ndlt",
            "SiP_M1_Helmet_pile_1stlt",
            "SiP_M1_Helmet_pile_captain",
            "SiP_M1_Helmet_pile_major",
            "SiP_M1_Helmet_pile_ltCol",
            "SiP_M1_Helmet_pile_col",
            "SiP_M1_Helmet_pile_medic",

            "SiP_M1_Helmet_NS_7id",
            "SiP_M1_Helmet_NS_corporal_7id",
            "SiP_M1_Helmet_NS_sergeant_7id",
            "SiP_M1_Helmet_NS_sgt_1stclass_7id",
            "SiP_M1_Helmet_NS_master_sgt_7id",
            "SiP_M1_Helmet_NS_first_sgt_7id",
            "SiP_M1_Helmet_NS_2ndlt_7id",
            "SiP_M1_Helmet_NS_1stlt_7id",
            "SiP_M1_Helmet_NS_captain_7id",
            "SiP_M1_Helmet_NS_major_7id",
            "SiP_M1_Helmet_NS_ltCol_7id",
            "SiP_M1_Helmet_NS_Col_7id",
            "SiP_M1_Helmet_NS_medic_7id"
        };
    };
};

class cfgWeapons
{
    class H_Simc_M1_Helmet_ns;
    class H_Simc_M1_Helmet;
    class H_Simc_M1_Helmet_os_2;

    class SiP_M1_Helmet_NS: H_Simc_M1_Helmet_ns
    {
        class ItemInfo;
    };
    class SiP_M1_Helmet_S: H_Simc_M1_Helmet
    {
        class ItemInfo;
    };
    class SiP_M1_Helmet_OS: H_Simc_M1_Helmet_os_2
    {
        class ItemInfo;
    };

    ////M1 Unstrapped////

    class H_hssn_SiP_M1_Helmet_7ID_NS1: SiP_M1_Helmet_NS
    {
        scope = 2;
        scopearsenal = 2;
        picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
        hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS2: H_hssn_SiP_M1_Helmet_7ID_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS3: H_hssn_SiP_M1_Helmet_7ID_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS4: H_hssn_SiP_M1_Helmet_7ID_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS5: H_hssn_SiP_M1_Helmet_7ID_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS6: H_hssn_SiP_M1_Helmet_7ID_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS_snow: H_hssn_SiP_M1_Helmet_7ID_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_7ID_NS1_net1: H_hssn_SiP_M1_Helmet_7ID_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS1_net2: H_hssn_SiP_M1_Helmet_7ID_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS1_net3: H_hssn_SiP_M1_Helmet_7ID_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS1_net4: H_hssn_SiP_M1_Helmet_7ID_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS1_net5: H_hssn_SiP_M1_Helmet_7ID_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS1_net6: H_hssn_SiP_M1_Helmet_7ID_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_NS2_net1: H_hssn_SiP_M1_Helmet_7ID_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS2_net2: H_hssn_SiP_M1_Helmet_7ID_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS2_net3: H_hssn_SiP_M1_Helmet_7ID_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS2_net4: H_hssn_SiP_M1_Helmet_7ID_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS2_net5: H_hssn_SiP_M1_Helmet_7ID_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS2_net6: H_hssn_SiP_M1_Helmet_7ID_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_NS3_net1: H_hssn_SiP_M1_Helmet_7ID_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS3_net2: H_hssn_SiP_M1_Helmet_7ID_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS3_net3: H_hssn_SiP_M1_Helmet_7ID_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS3_net4: H_hssn_SiP_M1_Helmet_7ID_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS3_net5: H_hssn_SiP_M1_Helmet_7ID_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS3_net6: H_hssn_SiP_M1_Helmet_7ID_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_NS4_net1: H_hssn_SiP_M1_Helmet_7ID_NS4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS4_net2: H_hssn_SiP_M1_Helmet_7ID_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS4_net3: H_hssn_SiP_M1_Helmet_7ID_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS4_net4: H_hssn_SiP_M1_Helmet_7ID_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS4_net5: H_hssn_SiP_M1_Helmet_7ID_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS4_net6: H_hssn_SiP_M1_Helmet_7ID_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_NS5_net1: H_hssn_SiP_M1_Helmet_7ID_NS5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS5_net2: H_hssn_SiP_M1_Helmet_7ID_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS5_net3: H_hssn_SiP_M1_Helmet_7ID_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS5_net4: H_hssn_SiP_M1_Helmet_7ID_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS5_net5: H_hssn_SiP_M1_Helmet_7ID_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS5_net6: H_hssn_SiP_M1_Helmet_7ID_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_NS6_net1: H_hssn_SiP_M1_Helmet_7ID_NS6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS6_net2: H_hssn_SiP_M1_Helmet_7ID_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS6_net3: H_hssn_SiP_M1_Helmet_7ID_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS6_net4: H_hssn_SiP_M1_Helmet_7ID_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS6_net5: H_hssn_SiP_M1_Helmet_7ID_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS6_net6: H_hssn_SiP_M1_Helmet_7ID_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_NS_snow_net1: H_hssn_SiP_M1_Helmet_7ID_NS_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS_snow_net2: H_hssn_SiP_M1_Helmet_7ID_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS_snow_net3: H_hssn_SiP_M1_Helmet_7ID_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS_snow_net4: H_hssn_SiP_M1_Helmet_7ID_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS_snow_net5: H_hssn_SiP_M1_Helmet_7ID_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_NS_snow_net6: H_hssn_SiP_M1_Helmet_7ID_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };

    ////M1 Strapped////

    class H_hssn_SiP_M1_Helmet_7ID_S1: SiP_M1_Helmet_S
    {
        scope = 2;
        scopearsenal = 2;
        picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
        hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S2: H_hssn_SiP_M1_Helmet_7ID_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S3: H_hssn_SiP_M1_Helmet_7ID_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S4: H_hssn_SiP_M1_Helmet_7ID_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S5: H_hssn_SiP_M1_Helmet_7ID_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S6: H_hssn_SiP_M1_Helmet_7ID_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S_snow: H_hssn_SiP_M1_Helmet_7ID_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_7ID_S1_net1: H_hssn_SiP_M1_Helmet_7ID_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S1_net2: H_hssn_SiP_M1_Helmet_7ID_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S1_net3: H_hssn_SiP_M1_Helmet_7ID_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S1_net4: H_hssn_SiP_M1_Helmet_7ID_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S1_net5: H_hssn_SiP_M1_Helmet_7ID_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S1_net6: H_hssn_SiP_M1_Helmet_7ID_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_S2_net1: H_hssn_SiP_M1_Helmet_7ID_S2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S2_net2: H_hssn_SiP_M1_Helmet_7ID_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S2_net3: H_hssn_SiP_M1_Helmet_7ID_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S2_net4: H_hssn_SiP_M1_Helmet_7ID_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S2_net5: H_hssn_SiP_M1_Helmet_7ID_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S2_net6: H_hssn_SiP_M1_Helmet_7ID_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_S3_net1: H_hssn_SiP_M1_Helmet_7ID_S3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S3_net2: H_hssn_SiP_M1_Helmet_7ID_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S3_net3: H_hssn_SiP_M1_Helmet_7ID_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S3_net4: H_hssn_SiP_M1_Helmet_7ID_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S3_net5: H_hssn_SiP_M1_Helmet_7ID_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S3_net6: H_hssn_SiP_M1_Helmet_7ID_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_S4_net1: H_hssn_SiP_M1_Helmet_7ID_S4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S4_net2: H_hssn_SiP_M1_Helmet_7ID_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S4_net3: H_hssn_SiP_M1_Helmet_7ID_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S4_net4: H_hssn_SiP_M1_Helmet_7ID_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S4_net5: H_hssn_SiP_M1_Helmet_7ID_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S4_net6: H_hssn_SiP_M1_Helmet_7ID_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_S5_net1: H_hssn_SiP_M1_Helmet_7ID_S5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S5_net2: H_hssn_SiP_M1_Helmet_7ID_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S5_net3: H_hssn_SiP_M1_Helmet_7ID_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S5_net4: H_hssn_SiP_M1_Helmet_7ID_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S5_net5: H_hssn_SiP_M1_Helmet_7ID_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S5_net6: H_hssn_SiP_M1_Helmet_7ID_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_S6_net1: H_hssn_SiP_M1_Helmet_7ID_S6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S6_net2: H_hssn_SiP_M1_Helmet_7ID_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S6_net3: H_hssn_SiP_M1_Helmet_7ID_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S6_net4: H_hssn_SiP_M1_Helmet_7ID_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S6_net5: H_hssn_SiP_M1_Helmet_7ID_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S6_net6: H_hssn_SiP_M1_Helmet_7ID_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_S_snow_net1: H_hssn_SiP_M1_Helmet_7ID_S_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S_snow_net2: H_hssn_SiP_M1_Helmet_7ID_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S_snow_net3: H_hssn_SiP_M1_Helmet_7ID_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S_snow_net4: H_hssn_SiP_M1_Helmet_7ID_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S_snow_net5: H_hssn_SiP_M1_Helmet_7ID_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_S_snow_net6: H_hssn_SiP_M1_Helmet_7ID_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };
    
    ////M1 Strap Open////

    class H_hssn_SiP_M1_Helmet_7ID_OS1: SiP_M1_Helmet_OS
    {
        scope = 2;
        scopearsenal = 2;
        picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
        hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS2: H_hssn_SiP_M1_Helmet_7ID_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS3: H_hssn_SiP_M1_Helmet_7ID_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS4: H_hssn_SiP_M1_Helmet_7ID_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS5: H_hssn_SiP_M1_Helmet_7ID_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS6: H_hssn_SiP_M1_Helmet_7ID_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS_snow: H_hssn_SiP_M1_Helmet_7ID_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_OS1_net1: H_hssn_SiP_M1_Helmet_7ID_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS1_net2: H_hssn_SiP_M1_Helmet_7ID_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS1_net3: H_hssn_SiP_M1_Helmet_7ID_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS1_net4: H_hssn_SiP_M1_Helmet_7ID_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS1_net5: H_hssn_SiP_M1_Helmet_7ID_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS1_net6: H_hssn_SiP_M1_Helmet_7ID_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_OS2_net1: H_hssn_SiP_M1_Helmet_7ID_OS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS2_net2: H_hssn_SiP_M1_Helmet_7ID_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS2_net3: H_hssn_SiP_M1_Helmet_7ID_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS2_net4: H_hssn_SiP_M1_Helmet_7ID_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS2_net5: H_hssn_SiP_M1_Helmet_7ID_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS2_net6: H_hssn_SiP_M1_Helmet_7ID_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_OS3_net1: H_hssn_SiP_M1_Helmet_7ID_OS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS3_net2: H_hssn_SiP_M1_Helmet_7ID_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS3_net3: H_hssn_SiP_M1_Helmet_7ID_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS3_net4: H_hssn_SiP_M1_Helmet_7ID_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS3_net5: H_hssn_SiP_M1_Helmet_7ID_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS3_net6: H_hssn_SiP_M1_Helmet_7ID_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_7ID_OS4_net1: H_hssn_SiP_M1_Helmet_7ID_OS4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS4_net2: H_hssn_SiP_M1_Helmet_7ID_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS4_net3: H_hssn_SiP_M1_Helmet_7ID_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS4_net4: H_hssn_SiP_M1_Helmet_7ID_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS4_net5: H_hssn_SiP_M1_Helmet_7ID_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS4_net6: H_hssn_SiP_M1_Helmet_7ID_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };

    class H_hssn_SiP_M1_Helmet_7ID_OS5_net1: H_hssn_SiP_M1_Helmet_7ID_OS5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS5_net2: H_hssn_SiP_M1_Helmet_7ID_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS5_net3: H_hssn_SiP_M1_Helmet_7ID_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS5_net4: H_hssn_SiP_M1_Helmet_7ID_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS5_net5: H_hssn_SiP_M1_Helmet_7ID_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS5_net6: H_hssn_SiP_M1_Helmet_7ID_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
   
    class H_hssn_SiP_M1_Helmet_7ID_OS6_net1: H_hssn_SiP_M1_Helmet_7ID_OS6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS6_net2: H_hssn_SiP_M1_Helmet_7ID_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS6_net3: H_hssn_SiP_M1_Helmet_7ID_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS6_net4: H_hssn_SiP_M1_Helmet_7ID_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS6_net5: H_hssn_SiP_M1_Helmet_7ID_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS6_net6: H_hssn_SiP_M1_Helmet_7ID_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
   
    class H_hssn_SiP_M1_Helmet_7ID_OS_snow_net1: H_hssn_SiP_M1_Helmet_7ID_OS_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS_snow_net2: H_hssn_SiP_M1_Helmet_7ID_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS_snow_net3: H_hssn_SiP_M1_Helmet_7ID_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS_snow_net4: H_hssn_SiP_M1_Helmet_7ID_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS_snow_net5: H_hssn_SiP_M1_Helmet_7ID_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_7ID_OS_snow_net6: H_hssn_SiP_M1_Helmet_7ID_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "7thID";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };
};