class cfgPatches
{
    class SiP_Patch_M1_helmet_Captain
    {
        addonRootClass = "SiP_Patch_US_Army_Headgear";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare",
            "SiP_Patch_M1_helmet"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{

    class H_Simc_M1_Helmet;
    class H_Simc_M1_Helmet_ns;
    class H_Simc_M1_Helmet_os_2;
    class H_Simc_M1_fur_op;

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
    class SiP_M1_Helmet_pile_OS: H_Simc_M1_fur_op
    {
        class ItemInfo;
    };

    ////M1 Unstrapped////

    class H_hssn_SiP_M1_Helmet_Captain_NS1: SiP_M1_Helmet_NS
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[] = {"shell","cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS2: H_hssn_SiP_M1_Helmet_Captain_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS3: H_hssn_SiP_M1_Helmet_Captain_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS4: H_hssn_SiP_M1_Helmet_Captain_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS5: H_hssn_SiP_M1_Helmet_Captain_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS6: H_hssn_SiP_M1_Helmet_Captain_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS_snow: H_hssn_SiP_M1_Helmet_Captain_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_Captain_NS1_net1: H_hssn_SiP_M1_Helmet_Captain_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS1_net2: H_hssn_SiP_M1_Helmet_Captain_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS1_net3: H_hssn_SiP_M1_Helmet_Captain_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS1_net4: H_hssn_SiP_M1_Helmet_Captain_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS1_net5: H_hssn_SiP_M1_Helmet_Captain_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS1_net6: H_hssn_SiP_M1_Helmet_Captain_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };

    class H_hssn_SiP_M1_Helmet_Captain_NS2_net1: H_hssn_SiP_M1_Helmet_Captain_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS2_net2: H_hssn_SiP_M1_Helmet_Captain_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS2_net3: H_hssn_SiP_M1_Helmet_Captain_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS2_net4: H_hssn_SiP_M1_Helmet_Captain_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS2_net5: H_hssn_SiP_M1_Helmet_Captain_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS2_net6: H_hssn_SiP_M1_Helmet_Captain_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
     
    class H_hssn_SiP_M1_Helmet_Captain_NS3_net1: H_hssn_SiP_M1_Helmet_Captain_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS3_net2: H_hssn_SiP_M1_Helmet_Captain_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS3_net3: H_hssn_SiP_M1_Helmet_Captain_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS3_net4: H_hssn_SiP_M1_Helmet_Captain_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS3_net5: H_hssn_SiP_M1_Helmet_Captain_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS3_net6: H_hssn_SiP_M1_Helmet_Captain_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_NS4_net1: H_hssn_SiP_M1_Helmet_Captain_NS4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS4_net2: H_hssn_SiP_M1_Helmet_Captain_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS4_net3: H_hssn_SiP_M1_Helmet_Captain_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS4_net4: H_hssn_SiP_M1_Helmet_Captain_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS4_net5: H_hssn_SiP_M1_Helmet_Captain_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS4_net6: H_hssn_SiP_M1_Helmet_Captain_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_NS5_net1: H_hssn_SiP_M1_Helmet_Captain_NS5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS5_net2: H_hssn_SiP_M1_Helmet_Captain_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS5_net3: H_hssn_SiP_M1_Helmet_Captain_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS5_net4: H_hssn_SiP_M1_Helmet_Captain_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS5_net5: H_hssn_SiP_M1_Helmet_Captain_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS5_net6: H_hssn_SiP_M1_Helmet_Captain_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
   
    class H_hssn_SiP_M1_Helmet_Captain_NS6_net1: H_hssn_SiP_M1_Helmet_Captain_NS6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS6_net2: H_hssn_SiP_M1_Helmet_Captain_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS6_net3: H_hssn_SiP_M1_Helmet_Captain_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS6_net4: H_hssn_SiP_M1_Helmet_Captain_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS6_net5: H_hssn_SiP_M1_Helmet_Captain_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS6_net6: H_hssn_SiP_M1_Helmet_Captain_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };

    class H_hssn_SiP_M1_Helmet_Captain_NS_snow_net1: H_hssn_SiP_M1_Helmet_Captain_NS_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS_snow_net2: H_hssn_SiP_M1_Helmet_Captain_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS_snow_net3: H_hssn_SiP_M1_Helmet_Captain_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS_snow_net4: H_hssn_SiP_M1_Helmet_Captain_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS_snow_net5: H_hssn_SiP_M1_Helmet_Captain_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_NS_snow_net6: H_hssn_SiP_M1_Helmet_Captain_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };

    ////M1 Strapped////

    class H_hssn_SiP_M1_Helmet_Captain_S1: SiP_M1_Helmet_S
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[] = {"shell","cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\pot.rvmat"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
            
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S2: H_hssn_SiP_M1_Helmet_Captain_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S3: H_hssn_SiP_M1_Helmet_Captain_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S4: H_hssn_SiP_M1_Helmet_Captain_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S5: H_hssn_SiP_M1_Helmet_Captain_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S6: H_hssn_SiP_M1_Helmet_Captain_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S_snow: H_hssn_SiP_M1_Helmet_Captain_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_Captain_S1_net1: H_hssn_SiP_M1_Helmet_Captain_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S1_net2: H_hssn_SiP_M1_Helmet_Captain_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S1_net3: H_hssn_SiP_M1_Helmet_Captain_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S1_net4: H_hssn_SiP_M1_Helmet_Captain_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S1_net5: H_hssn_SiP_M1_Helmet_Captain_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S1_net6: H_hssn_SiP_M1_Helmet_Captain_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_S2_net1: H_hssn_SiP_M1_Helmet_Captain_S2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S2_net2: H_hssn_SiP_M1_Helmet_Captain_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S2_net3: H_hssn_SiP_M1_Helmet_Captain_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S2_net4: H_hssn_SiP_M1_Helmet_Captain_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S2_net5: H_hssn_SiP_M1_Helmet_Captain_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S2_net6: H_hssn_SiP_M1_Helmet_Captain_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_S3_net1: H_hssn_SiP_M1_Helmet_Captain_S3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S3_net2: H_hssn_SiP_M1_Helmet_Captain_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S3_net3: H_hssn_SiP_M1_Helmet_Captain_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S3_net4: H_hssn_SiP_M1_Helmet_Captain_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S3_net5: H_hssn_SiP_M1_Helmet_Captain_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S3_net6: H_hssn_SiP_M1_Helmet_Captain_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_S4_net1: H_hssn_SiP_M1_Helmet_Captain_S4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S4_net2: H_hssn_SiP_M1_Helmet_Captain_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S4_net3: H_hssn_SiP_M1_Helmet_Captain_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S4_net4: H_hssn_SiP_M1_Helmet_Captain_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S4_net5: H_hssn_SiP_M1_Helmet_Captain_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S4_net6: H_hssn_SiP_M1_Helmet_Captain_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_S5_net1: H_hssn_SiP_M1_Helmet_Captain_S5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S5_net2: H_hssn_SiP_M1_Helmet_Captain_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S5_net3: H_hssn_SiP_M1_Helmet_Captain_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S5_net4: H_hssn_SiP_M1_Helmet_Captain_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S5_net5: H_hssn_SiP_M1_Helmet_Captain_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S5_net6: H_hssn_SiP_M1_Helmet_Captain_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_S6_net1: H_hssn_SiP_M1_Helmet_Captain_S6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S6_net2: H_hssn_SiP_M1_Helmet_Captain_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S6_net3: H_hssn_SiP_M1_Helmet_Captain_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S6_net4: H_hssn_SiP_M1_Helmet_Captain_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S6_net5: H_hssn_SiP_M1_Helmet_Captain_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S6_net6: H_hssn_SiP_M1_Helmet_Captain_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_S_snow_net1: H_hssn_SiP_M1_Helmet_Captain_S_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S_snow_net2: H_hssn_SiP_M1_Helmet_Captain_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S_snow_net3: H_hssn_SiP_M1_Helmet_Captain_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S_snow_net4: H_hssn_SiP_M1_Helmet_Captain_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S_snow_net5: H_hssn_SiP_M1_Helmet_Captain_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_S_snow_net6: H_hssn_SiP_M1_Helmet_Captain_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };

    ////M1 Strap Open////

    class H_hssn_SiP_M1_Helmet_Captain_OS1: SiP_M1_Helmet_OS
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[] = {"shell","cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS2: H_hssn_SiP_M1_Helmet_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS3: H_hssn_SiP_M1_Helmet_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS4: H_hssn_SiP_M1_Helmet_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS5: H_hssn_SiP_M1_Helmet_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS6: H_hssn_SiP_M1_Helmet_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS_snow: H_hssn_SiP_M1_Helmet_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_Captain_OS1_net1: H_hssn_SiP_M1_Helmet_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS1_net2: H_hssn_SiP_M1_Helmet_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS1_net3: H_hssn_SiP_M1_Helmet_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS1_net4: H_hssn_SiP_M1_Helmet_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS1_net5: H_hssn_SiP_M1_Helmet_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS1_net6: H_hssn_SiP_M1_Helmet_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_OS2_net1: H_hssn_SiP_M1_Helmet_Captain_OS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS2_net2: H_hssn_SiP_M1_Helmet_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS2_net3: H_hssn_SiP_M1_Helmet_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS2_net4: H_hssn_SiP_M1_Helmet_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS2_net5: H_hssn_SiP_M1_Helmet_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS2_net6: H_hssn_SiP_M1_Helmet_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_OS3_net1: H_hssn_SiP_M1_Helmet_Captain_OS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS3_net2: H_hssn_SiP_M1_Helmet_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS3_net3: H_hssn_SiP_M1_Helmet_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS3_net4: H_hssn_SiP_M1_Helmet_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS3_net5: H_hssn_SiP_M1_Helmet_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS3_net6: H_hssn_SiP_M1_Helmet_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_OS4_net1: H_hssn_SiP_M1_Helmet_Captain_OS4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS4_net2: H_hssn_SiP_M1_Helmet_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS4_net3: H_hssn_SiP_M1_Helmet_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS4_net4: H_hssn_SiP_M1_Helmet_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS4_net5: H_hssn_SiP_M1_Helmet_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS4_net6: H_hssn_SiP_M1_Helmet_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_OS5_net1: H_hssn_SiP_M1_Helmet_Captain_OS5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS5_net2: H_hssn_SiP_M1_Helmet_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS5_net3: H_hssn_SiP_M1_Helmet_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS5_net4: H_hssn_SiP_M1_Helmet_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS5_net5: H_hssn_SiP_M1_Helmet_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS5_net6: H_hssn_SiP_M1_Helmet_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_OS6_net1: H_hssn_SiP_M1_Helmet_Captain_OS6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS6_net2: H_hssn_SiP_M1_Helmet_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS6_net3: H_hssn_SiP_M1_Helmet_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS6_net4: H_hssn_SiP_M1_Helmet_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS6_net5: H_hssn_SiP_M1_Helmet_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS6_net6: H_hssn_SiP_M1_Helmet_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_Captain_OS_snow_net1: H_hssn_SiP_M1_Helmet_Captain_OS_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS_snow_net2: H_hssn_SiP_M1_Helmet_Captain_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS_snow_net3: H_hssn_SiP_M1_Helmet_Captain_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS_snow_net4: H_hssn_SiP_M1_Helmet_Captain_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS_snow_net5: H_hssn_SiP_M1_Helmet_Captain_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_Captain_OS_snow_net6: H_hssn_SiP_M1_Helmet_Captain_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };

    ////M1 Strap Open////

    class H_hssn_SiP_M1_Helmet_pile_Captain_OS1: SiP_M1_Helmet_pile_OS
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[] = {"shell","cover","right","rear","left","fore","ben"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"shell","cover","right","rear","left","fore","ben"};
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS2: H_hssn_SiP_M1_Helmet_pile_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS3: H_hssn_SiP_M1_Helmet_pile_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS4: H_hssn_SiP_M1_Helmet_pile_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS5: H_hssn_SiP_M1_Helmet_pile_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS6: H_hssn_SiP_M1_Helmet_pile_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };   

    class H_hssn_SiP_M1_Helmet_pile_Captain_OS_snow: H_hssn_SiP_M1_Helmet_pile_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net1: H_hssn_SiP_M1_Helmet_pile_Captain_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net2: H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net3: H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net4: H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net5: H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net6: H_hssn_SiP_M1_Helmet_pile_Captain_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net1: H_hssn_SiP_M1_Helmet_pile_Captain_OS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net2: H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net3: H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net4: H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net5: H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net6: H_hssn_SiP_M1_Helmet_pile_Captain_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
   
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net1: H_hssn_SiP_M1_Helmet_pile_Captain_OS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net2: H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net3: H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net4: H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net5: H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net6: H_hssn_SiP_M1_Helmet_pile_Captain_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
   
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net1: H_hssn_SiP_M1_Helmet_pile_Captain_OS4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net2: H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net3: H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net4: H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net5: H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net6: H_hssn_SiP_M1_Helmet_pile_Captain_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
   
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net1: H_hssn_SiP_M1_Helmet_pile_Captain_OS5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net2: H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net3: H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net4: H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net5: H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net6: H_hssn_SiP_M1_Helmet_pile_Captain_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
   
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net1: H_hssn_SiP_M1_Helmet_pile_Captain_OS6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net2: H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net3: H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net4: H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net5: H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net6: H_hssn_SiP_M1_Helmet_pile_Captain_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            "\simc_uaf_44\stencils\US_Helm_Captain_ca.paa",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Captain";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
};