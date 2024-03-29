class cfgPatches
{
    class SiP_Patch_M1_helmet_pilecap
    {
        addonRootClass = "SiP_Patch_US_Army_Headgear";
        requiredAddons[] = 
        {
            "simc_uaf_51_core",
            "simc_mc_51_core",
            "SiP_Patch_M1_helmet"
        };
        units[] = {};
        weapons[] = {};
    };
};

class cfgWeapons
{

    ////M1 Pile Folded strapped////
    class H_Simc_M1_fur_green;
    class H_Simc_M1_fur_op;

    class SiP_M1_Helmet_pile_NS: H_Simc_M1_fur_green
    {
        scope = 1;
        scopearsenal = 1;
        author = "Letlev";
        displayName = "[US] M1 Helmet";
        allowedFacewear[] = {"",1};
        class ItemInfo;
    };

    class SiP_M1_Helmet_pile_OS: H_Simc_M1_fur_op
    {
        scope = 1;
        scopearsenal = 1;
        author = "Letlev";
        displayName = "[US] M1 Helmet";
        allowedFacewear[] = {"",1};
        class ItemInfo;
    };

    class H_hssn_SiP_M1_Helmet_pile_OS1: SiP_M1_Helmet_pile_OS
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
            "",
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
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade1";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS2: H_hssn_SiP_M1_Helmet_pile_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_primus_co.paa",
            "",
            "",
            "",
            "",
            "",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade2";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS3: H_hssn_SiP_M1_Helmet_pile_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_neu_co.paa",
            "",
            "",
            "",
            "",
            "",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade3";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS4: H_hssn_SiP_M1_Helmet_pile_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_co.paa",
            "",
            "",
            "",
            "",
            "",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade4";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS5: H_hssn_SiP_M1_Helmet_pile_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_dunkel_plijn_co.paa",
            "",
            "",
            "",
            "",
            "",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade5";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS6: H_hssn_SiP_M1_Helmet_pile_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_spat_co.paa",
            "",
            "",
            "",
            "",
            "",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "shade6";
            cover = "Empty";
        };
    };   

    class H_hssn_SiP_M1_Helmet_pile_OS_snow: H_hssn_SiP_M1_Helmet_pile_OS1
    {
        hiddenSelectionsTextures[] = 
        {
            "\simc_uaf_44\data\pot_snew_co.paa",
            "",
            "",
            "",
            "",
            "",
            "\simc_uaf_51\data\hat_furfag_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "snow";
            cover = "Empty";
        };
    };

    class H_hssn_SiP_M1_Helmet_pile_OS1_net1: H_hssn_SiP_M1_Helmet_pile_OS1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS1_net2: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS1_net3: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS1_net4: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS1_net5: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS1_net6: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS1_cover_canvas: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS1_cover_white: H_hssn_SiP_M1_Helmet_pile_OS1_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade1";
        };
    };
    
    class H_hssn_SiP_M1_Helmet_pile_OS2_net1: H_hssn_SiP_M1_Helmet_pile_OS2
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS2_net2: H_hssn_SiP_M1_Helmet_pile_OS2_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS2_net3: H_hssn_SiP_M1_Helmet_pile_OS2_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS2_net4: H_hssn_SiP_M1_Helmet_pile_OS2_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS2_net5: H_hssn_SiP_M1_Helmet_pile_OS2_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS2_net6: H_hssn_SiP_M1_Helmet_pile_OS2_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS2_cover_canvas: H_hssn_SiP_M1_Helmet_pile_OS2_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS2_cover_white: H_hssn_SiP_M1_Helmet_pile_OS2_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade2";
        };
    };

    class H_hssn_SiP_M1_Helmet_pile_OS3_net1: H_hssn_SiP_M1_Helmet_pile_OS3
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS3_net2: H_hssn_SiP_M1_Helmet_pile_OS3_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS3_net3: H_hssn_SiP_M1_Helmet_pile_OS3_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS3_net4: H_hssn_SiP_M1_Helmet_pile_OS3_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS3_net5: H_hssn_SiP_M1_Helmet_pile_OS3_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS3_net6: H_hssn_SiP_M1_Helmet_pile_OS3_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS3_cover_canvas: H_hssn_SiP_M1_Helmet_pile_OS3_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS3_cover_white: H_hssn_SiP_M1_Helmet_pile_OS3_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade3";
        };
    };

    class H_hssn_SiP_M1_Helmet_pile_OS4_net1: H_hssn_SiP_M1_Helmet_pile_OS4
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS4_net2: H_hssn_SiP_M1_Helmet_pile_OS4_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS4_net3: H_hssn_SiP_M1_Helmet_pile_OS4_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS4_net4: H_hssn_SiP_M1_Helmet_pile_OS4_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS4_net5: H_hssn_SiP_M1_Helmet_pile_OS4_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS4_net6: H_hssn_SiP_M1_Helmet_pile_OS4_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS4_cover_canvas: H_hssn_SiP_M1_Helmet_pile_OS4_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS4_cover_white: H_hssn_SiP_M1_Helmet_pile_OS4_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade4";
        };
    };

    class H_hssn_SiP_M1_Helmet_pile_OS5_net1: H_hssn_SiP_M1_Helmet_pile_OS5
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS5_net2: H_hssn_SiP_M1_Helmet_pile_OS5_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS5_net3: H_hssn_SiP_M1_Helmet_pile_OS5_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS5_net4: H_hssn_SiP_M1_Helmet_pile_OS5_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS5_net5: H_hssn_SiP_M1_Helmet_pile_OS5_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS5_net6: H_hssn_SiP_M1_Helmet_pile_OS5_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS5_cover_canvas: H_hssn_SiP_M1_Helmet_pile_OS5_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS5_cover_white: H_hssn_SiP_M1_Helmet_pile_OS5_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade5";
        };
    };

    class H_hssn_SiP_M1_Helmet_pile_OS6_net1: H_hssn_SiP_M1_Helmet_pile_OS6
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net1";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS6_net2: H_hssn_SiP_M1_Helmet_pile_OS6_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net2";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS6_net3: H_hssn_SiP_M1_Helmet_pile_OS6_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net3";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS6_net4: H_hssn_SiP_M1_Helmet_pile_OS6_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net4";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS6_net5: H_hssn_SiP_M1_Helmet_pile_OS6_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net5";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS6_net6: H_hssn_SiP_M1_Helmet_pile_OS6_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Net6";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS6_cover_canvas: H_hssn_SiP_M1_Helmet_pile_OS6_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "Canvas";
            shade = "shade6";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS6_cover_white: H_hssn_SiP_M1_Helmet_pile_OS6_cover_canvas
    {
        hiddenSelectionsTextures[]=
        {
            "\simc_uaf_44\data\cover_snew_weiss_co.paa"
        };
        class XtdGearInfo
        {
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            cover = "White";
            shade = "shade6";
        };
    };

    class H_hssn_SiP_M1_Helmet_pile_OS_medic: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Empty";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS_medic_net1: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net1";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS_medic_net2: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net2";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS_medic_net3: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net3";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS_medic_net4: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net4";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS_medic_net5: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net5";
        };
    };
    class H_hssn_SiP_M1_Helmet_pile_OS_medic_net6: H_hssn_SiP_M1_Helmet_pile_OS1_net1
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
            pilecap = "hat";
            sidedecals = "Empty";
            frontdecal = "Empty";
            straps = "os";
            model = "H_hssn_SiP_M1_Helmet";
            shade = "medic";
            cover = "Net6";
        };
    };
};