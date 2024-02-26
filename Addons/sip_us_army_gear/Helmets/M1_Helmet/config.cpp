class cfgPatches
{
    class SiP_Patch_M1_helmet
    {
        addonRootClass = "SiP_Patch_US_Army_Headgear";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare",
            "WW2_Assets_c_Characters_Americans_c_US_Army_Gear"
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
            "SiP_M1_Helmet_NS_medic"
        };
    };
};

class cfgWeapons
{
    class ItemCore;
    class H_HelmetB: ItemCore
    {
        class ItemInfo;
    };

    class H_Simc_M1_base: H_HelmetB
    {
        class ItemInfo;
    };

    class H_Simc_M1_Helmet_ns: H_Simc_M1_base
    {
        class ItemInfo;
    };

    class H_Simc_M1_Helmet;
    class H_Simc_M1_Helmet_os_2;

    class SiP_M1_Helmet_NS: H_Simc_M1_Helmet_ns
    {
        scope = 1;
        scopearsenal = 1;
        displayName = "[US] M1 Helmet";
        author = "Letlev";
        allowedFacewear[] = {"",1};
        class ItemInfo;
    };
    class SiP_M1_Helmet_S: H_Simc_M1_Helmet
    {
        scope = 1;
        scopearsenal = 1;
        displayName = "[US] M1 Helmet";
        author = "Letlev";
        allowedFacewear[] = {"",1};
        class ItemInfo;
    };
    class SiP_M1_Helmet_OS: H_Simc_M1_Helmet_os_2
    {
        scope = 1;
        scopearsenal = 1;
        author = "Letlev";
        displayName = "[US] M1 Helmet";
        allowedFacewear[] = {"",1};
        class ItemInfo;
    };

    ////M1 Unstrapped////

    class H_hssn_SiP_M1_Helmet_NS1: SiP_M1_Helmet_NS
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "",
            "",
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
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS2: H_hssn_SiP_M1_Helmet_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS3: H_hssn_SiP_M1_Helmet_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS4: H_hssn_SiP_M1_Helmet_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS5: H_hssn_SiP_M1_Helmet_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS6: H_hssn_SiP_M1_Helmet_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_snow: H_hssn_SiP_M1_Helmet_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_NS1_net1: H_hssn_SiP_M1_Helmet_NS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS1_net2: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS1_net3: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS1_net4: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS1_net5: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS1_net6: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS1_cover_canvas: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS1_cover_white: H_hssn_SiP_M1_Helmet_NS1_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_NS_medic: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_medic_net1: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net1";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_medic_net2: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net2";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_medic_net3: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net3";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_medic_net4: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net4";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_medic_net5: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net5";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_medic_net6: H_hssn_SiP_M1_Helmet_NS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net6";
        };
    };

    class H_hssn_SiP_M1_Helmet_NS2_net1: H_hssn_SiP_M1_Helmet_NS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS2_net2: H_hssn_SiP_M1_Helmet_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS2_net3: H_hssn_SiP_M1_Helmet_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS2_net4: H_hssn_SiP_M1_Helmet_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS2_net5: H_hssn_SiP_M1_Helmet_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS2_net6: H_hssn_SiP_M1_Helmet_NS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS2_cover_canvas: H_hssn_SiP_M1_Helmet_NS2_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS2_cover_white: H_hssn_SiP_M1_Helmet_NS2_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_NS3_net1: H_hssn_SiP_M1_Helmet_NS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS3_net2: H_hssn_SiP_M1_Helmet_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS3_net3: H_hssn_SiP_M1_Helmet_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS3_net4: H_hssn_SiP_M1_Helmet_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS3_net5: H_hssn_SiP_M1_Helmet_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS3_net6: H_hssn_SiP_M1_Helmet_NS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS3_cover_canvas: H_hssn_SiP_M1_Helmet_NS3_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS3_cover_white: H_hssn_SiP_M1_Helmet_NS3_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1_Helmet_NS4_net1: H_hssn_SiP_M1_Helmet_NS4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS4_net2: H_hssn_SiP_M1_Helmet_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS4_net3: H_hssn_SiP_M1_Helmet_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS4_net4: H_hssn_SiP_M1_Helmet_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS4_net5: H_hssn_SiP_M1_Helmet_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS4_net6: H_hssn_SiP_M1_Helmet_NS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS4_cover_canvas: H_hssn_SiP_M1_Helmet_NS4_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS4_cover_white: H_hssn_SiP_M1_Helmet_NS4_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade4";
        };
    };

    class H_hssn_SiP_M1_Helmet_NS5_net1: H_hssn_SiP_M1_Helmet_NS5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS5_net2: H_hssn_SiP_M1_Helmet_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS5_net3: H_hssn_SiP_M1_Helmet_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS5_net4: H_hssn_SiP_M1_Helmet_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS5_net5: H_hssn_SiP_M1_Helmet_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS5_net6: H_hssn_SiP_M1_Helmet_NS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS5_cover_canvas: H_hssn_SiP_M1_Helmet_NS5_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS5_cover_white: H_hssn_SiP_M1_Helmet_NS5_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade5";
        };
    };

    class H_hssn_SiP_M1_Helmet_NS6_net1: H_hssn_SiP_M1_Helmet_NS6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS6_net2: H_hssn_SiP_M1_Helmet_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS6_net3: H_hssn_SiP_M1_Helmet_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS6_net4: H_hssn_SiP_M1_Helmet_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS6_net5: H_hssn_SiP_M1_Helmet_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS6_net6: H_hssn_SiP_M1_Helmet_NS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS6_cover_canvas: H_hssn_SiP_M1_Helmet_NS6_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS6_cover_white: H_hssn_SiP_M1_Helmet_NS6_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade6";
        };
    };

    class H_hssn_SiP_M1_Helmet_NS_snow_net1: H_hssn_SiP_M1_Helmet_NS_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_snow_net2: H_hssn_SiP_M1_Helmet_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_snow_net3: H_hssn_SiP_M1_Helmet_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_snow_net4: H_hssn_SiP_M1_Helmet_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_snow_net5: H_hssn_SiP_M1_Helmet_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_NS_snow_net6: H_hssn_SiP_M1_Helmet_NS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "ns";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };

    ////M1 Strapped////

    class H_hssn_SiP_M1_Helmet_S1: SiP_M1_Helmet_S
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "",
            "",
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
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_S2: H_hssn_SiP_M1_Helmet_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_S3: H_hssn_SiP_M1_Helmet_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_S4: H_hssn_SiP_M1_Helmet_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_S5: H_hssn_SiP_M1_Helmet_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_S6: H_hssn_SiP_M1_Helmet_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_snow: H_hssn_SiP_M1_Helmet_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_S1_net1: H_hssn_SiP_M1_Helmet_S1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_S1_net2: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_S1_net3: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_S1_net4: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_S1_net5: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_S1_net6: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_S1_cover_canvas: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_S1_cover_white: H_hssn_SiP_M1_Helmet_S1_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_S_medic: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_medic_net1: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net1";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_medic_net2: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net2";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_medic_net3: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net3";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_medic_net4: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net4";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_medic_net5: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net5";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_medic_net6: H_hssn_SiP_M1_Helmet_S1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net6";
        };
    };

    class H_hssn_SiP_M1_Helmet_S2_net1: H_hssn_SiP_M1_Helmet_S2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_S2_net2: H_hssn_SiP_M1_Helmet_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_S2_net3: H_hssn_SiP_M1_Helmet_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_S2_net4: H_hssn_SiP_M1_Helmet_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_S2_net5: H_hssn_SiP_M1_Helmet_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_S2_net6: H_hssn_SiP_M1_Helmet_S2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_S2_cover_canvas: H_hssn_SiP_M1_Helmet_S2_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_S2_cover_white: H_hssn_SiP_M1_Helmet_S2_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade2";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_S3_net1: H_hssn_SiP_M1_Helmet_S3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_S3_net2: H_hssn_SiP_M1_Helmet_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_S3_net3: H_hssn_SiP_M1_Helmet_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_S3_net4: H_hssn_SiP_M1_Helmet_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_S3_net5: H_hssn_SiP_M1_Helmet_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_S3_net6: H_hssn_SiP_M1_Helmet_S3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_S3_cover_canvas: H_hssn_SiP_M1_Helmet_S3_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_S3_cover_white: H_hssn_SiP_M1_Helmet_S3_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1_Helmet_S4_net1: H_hssn_SiP_M1_Helmet_S4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_S4_net2: H_hssn_SiP_M1_Helmet_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_S4_net3: H_hssn_SiP_M1_Helmet_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_S4_net4: H_hssn_SiP_M1_Helmet_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_S4_net5: H_hssn_SiP_M1_Helmet_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_S4_net6: H_hssn_SiP_M1_Helmet_S4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_S4_cover_canvas: H_hssn_SiP_M1_Helmet_S4_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_S4_cover_white: H_hssn_SiP_M1_Helmet_S4_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade4";
        };
    };

    class H_hssn_SiP_M1_Helmet_S5_net1: H_hssn_SiP_M1_Helmet_S5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_S5_net2: H_hssn_SiP_M1_Helmet_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_S5_net3: H_hssn_SiP_M1_Helmet_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_S5_net4: H_hssn_SiP_M1_Helmet_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_S5_net5: H_hssn_SiP_M1_Helmet_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_S5_net6: H_hssn_SiP_M1_Helmet_S5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_S5_cover_canvas: H_hssn_SiP_M1_Helmet_S5_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_S5_cover_white: H_hssn_SiP_M1_Helmet_S5_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade5";
        };
    };

    class H_hssn_SiP_M1_Helmet_S6_net1: H_hssn_SiP_M1_Helmet_S6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_S6_net2: H_hssn_SiP_M1_Helmet_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_S6_net3: H_hssn_SiP_M1_Helmet_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_S6_net4: H_hssn_SiP_M1_Helmet_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_S6_net5: H_hssn_SiP_M1_Helmet_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_S6_net6: H_hssn_SiP_M1_Helmet_S6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_S6_cover_canvas: H_hssn_SiP_M1_Helmet_S6_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_S6_cover_white: H_hssn_SiP_M1_Helmet_S6_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade6";
        };
    };

    class H_hssn_SiP_M1_Helmet_S_snow_net1: H_hssn_SiP_M1_Helmet_S_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_snow_net2: H_hssn_SiP_M1_Helmet_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_snow_net3: H_hssn_SiP_M1_Helmet_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_snow_net4: H_hssn_SiP_M1_Helmet_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_snow_net5: H_hssn_SiP_M1_Helmet_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_S_snow_net6: H_hssn_SiP_M1_Helmet_S_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "rs";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };
    
    ////M1 Strap Open////

    class H_hssn_SiP_M1_Helmet_OS1: SiP_M1_Helmet_OS
    {
        scope = 2;
        scopearsenal = 2;
        hiddenSelections[] = {"shell","cover","right","left","fore","rear"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "",
            "",
            "",
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
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS2: H_hssn_SiP_M1_Helmet_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS3: H_hssn_SiP_M1_Helmet_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS4: H_hssn_SiP_M1_Helmet_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS5: H_hssn_SiP_M1_Helmet_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS6: H_hssn_SiP_M1_Helmet_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_snow: H_hssn_SiP_M1_Helmet_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_OS1_net1: H_hssn_SiP_M1_Helmet_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS1_net2: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS1_net3: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS1_net4: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS1_net5: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS1_net6: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS1_cover_canvas: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS1_cover_white: H_hssn_SiP_M1_Helmet_OS1_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_OS_medic: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_medic_net1: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net1";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_medic_net2: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Net2";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_medic_net3: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net3";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_medic_net4: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net4";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_medic_net5: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net5";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_medic_net6: H_hssn_SiP_M1_Helmet_OS1_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_med_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net6";
        };
    };

    class H_hssn_SiP_M1_Helmet_OS2_net1: H_hssn_SiP_M1_Helmet_OS2
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS2_net2: H_hssn_SiP_M1_Helmet_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS2_net3: H_hssn_SiP_M1_Helmet_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS2_net4: H_hssn_SiP_M1_Helmet_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS2_net5: H_hssn_SiP_M1_Helmet_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS2_net6: H_hssn_SiP_M1_Helmet_OS2_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS2_cover_canvas: H_hssn_SiP_M1_Helmet_OS2_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS2_cover_white: H_hssn_SiP_M1_Helmet_OS2_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade2";
        };
    };

    class H_hssn_SiP_M1_Helmet_OS3_net1: H_hssn_SiP_M1_Helmet_OS3
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS3_net2: H_hssn_SiP_M1_Helmet_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS3_net3: H_hssn_SiP_M1_Helmet_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS3_net4: H_hssn_SiP_M1_Helmet_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS3_net5: H_hssn_SiP_M1_Helmet_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS3_net6: H_hssn_SiP_M1_Helmet_OS3_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS3_cover_canvas: H_hssn_SiP_M1_Helmet_OS3_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS3_cover_white: H_hssn_SiP_M1_Helmet_OS3_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1_Helmet_OS4_net1: H_hssn_SiP_M1_Helmet_OS4
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS4_net2: H_hssn_SiP_M1_Helmet_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS4_net3: H_hssn_SiP_M1_Helmet_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS4_net4: H_hssn_SiP_M1_Helmet_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS4_net5: H_hssn_SiP_M1_Helmet_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS4_net6: H_hssn_SiP_M1_Helmet_OS4_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS4_cover_canvas: H_hssn_SiP_M1_Helmet_OS4_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS4_cover_white: H_hssn_SiP_M1_Helmet_OS4_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade4";
        };
    };

    class H_hssn_SiP_M1_Helmet_OS5_net1: H_hssn_SiP_M1_Helmet_OS5
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS5_net2: H_hssn_SiP_M1_Helmet_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS5_net3: H_hssn_SiP_M1_Helmet_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS5_net4: H_hssn_SiP_M1_Helmet_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS5_net5: H_hssn_SiP_M1_Helmet_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS5_net6: H_hssn_SiP_M1_Helmet_OS5_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS5_cover_canvas: H_hssn_SiP_M1_Helmet_OS5_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS5_cover_white: H_hssn_SiP_M1_Helmet_OS5_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade5";
        };
    };

    class H_hssn_SiP_M1_Helmet_OS6_net1: H_hssn_SiP_M1_Helmet_OS6
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS6_net2: H_hssn_SiP_M1_Helmet_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS6_net3: H_hssn_SiP_M1_Helmet_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS6_net4: H_hssn_SiP_M1_Helmet_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS6_net5: H_hssn_SiP_M1_Helmet_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS6_net6: H_hssn_SiP_M1_Helmet_OS6_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS6_cover_canvas: H_hssn_SiP_M1_Helmet_OS6_net1
    {
        hiddenSelections[] = {"cover","right","rear","left","fore"};
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\cover_kentang_co.paa"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\simc_uaf_44\data\cover_alt.rvmat"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"cover","right","rear","left","fore"};
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS6_cover_white: H_hssn_SiP_M1_Helmet_OS6_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade6";
        };
    };

    class H_hssn_SiP_M1_Helmet_OS_snow_net1: H_hssn_SiP_M1_Helmet_OS_snow
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_snow_net2: H_hssn_SiP_M1_Helmet_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_bruin_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_snow_net3: H_hssn_SiP_M1_Helmet_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_7id_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_snow_net4: H_hssn_SiP_M1_Helmet_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_snow_net5: H_hssn_SiP_M1_Helmet_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_netz4_grun_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "snow";
        };
    };
    class H_hssn_SiP_M1_Helmet_OS_snow_net6: H_hssn_SiP_M1_Helmet_OS_snow_net1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "\simc_uaf_44\data\cover_brojk_laat_co.paa",
            "",
            "",
            "",
            ""
        };
        class XtdGearInfo
        {
            pilecap = "nohat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "snow";
        };
    };
};

class XtdGearModels 
{
    class CfgWeapons 
    {
        class H_hssn_SiP_M1_Helmet
        {
            label = "1950-53 Variant";
            author = "Letlev";
            options[]=
            {
                "shade",
                "straps",
                "cover",
                "pilecap",
                "frontdecal",
                "sidedecals"
            };
            class shade
            {
                label = "Paint";
                hiddenselection = "shell";
                values[]=
                {
                    "shade1",
                    "shade2",
                    "shade3",
                    "shade4",
                    "shade5",
                    "shade6",
                    "snow",
                    "medic"
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
                class shade4
                {
                    label = "4";
                };
                class shade5
                {
                    label = "5";
                };
                class shade6
                {
                    label = "6";
                };
                class snow
                {
                    label = "Snow";
                };
                class medic
                {
                    label = "Medic";
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
                    "rs",
                    "os"
                };
                class ns
                {
                    label = "Folded";
                    actionlabel = "Fold Strap";
                    icon = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_CO_Net_ca.paa";
                };
                class os
                {
                    label = "Unbuttoned";
                    actionlabel = "Unbutton Strap";
                    icon = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_os_ca.paa";
                };
                class rs
                {
                    label = "Buttoned";
                    actionlabel = "Button Strap";
                    icon = "\WW2\SPE_Assets_t\Characters\Pictures_t\Clothing\Headgear\H_US_Helmet_Net_ca.paa";
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
                    label = "Empty";
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
                class Canvas
                {
                    label = "Burlap";
                };
                class White
                {
                    label = "Winter";
                };
            };
            class pilecap 
            {
                label = "Pile Cap";
                changeingame = 1;
                changedelay = 1;
                values[]=
                {
                    "nohat",
                    "hat"
                };
                class nohat
                {
                    label = "No Hat";
                    actionlabel = "Take off Cap";
                };
                class hat
                {
                    label = "Pyle Cap";
                    actionlabel = "Put on Cap";
                    icon = "\simc_uaf_51_preview\icons\furfag_1_ca.paa";
                };
            };
            class frontdecal
            {
                label = "Front Decal";
                hiddenselection = "fore";
                values[]=
                {
                    "Empty",
                    "medic",
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
                class medic
                {
                    label = "Medic";
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
                label = "Side Decals";
                hiddenselection = "right";
                values[]=
                {
                    "Empty",
                    "7thID"
                };
                class Empty
                {
                    label = "Empty";
                };
                class 7thID
                {
                    label = "7ID";
                };
            };               
        };
    };
};