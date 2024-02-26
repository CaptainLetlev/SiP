class cfgPatches
{
    class SiP_Patch_misc_medical
    {
        Name = " Suicide Is Painless - Korean War Mod - Medical";
        addonRootClass = "SiP_Patch_misc";
        requiredAddons[] = 
        {
            "ace_medical_treatment"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_ACE_Items_packingBandage",
            "SiP_ACE_Items_elasticBandage",

            "SiP_ACE_Items_tourniquet",

            "SiP_ACE_Items_splint",

            "SiP_ACE_Items_morphine",

            "SiP_ACE_Items_surgicalKit",

            "SiP_ACE_Items_personalAidKit"
        };
    };
};

class ace_medical_treatment_actions
{
    class BasicBandage;
    
    class FieldDressing: BasicBandage
    {
        items[] = {"ACE_fieldDressing","SiP_ACE_Items_fieldDressing"};
    };
    class PackingBandage: BasicBandage
    {
        items[] = {"ACE_packingBandage","SiP_ACE_Items_packingBandage"};
    };
    class ElasticBandage: BasicBandage
    {
        items[] = {"ACE_elasticBandage","SiP_ACE_Items_elasticBandage"};
    };
    class ApplyTourniquet: BasicBandage
    {
        items[] = {"ACE_tourniquet","SiP_ACE_Items_tourniquet"};
    };
    class Splint: BasicBandage
    {
        items[] = {"ACE_splint","SiP_ACE_Items_splint"};
    };
    class Morphine: FieldDressing
    {
        items[] = {"ACE_morphine","SiP_ACE_Items_morphine"};
    };
    class Epinephrine: Morphine
    {
        displayName = "Inject Adrenaline";
        displayNameProgress = "Injecting Adrenaline...";
        items[] = {"ACE_epinephrine","SiP_ACE_Items_adrenaline"};
    };
    class Adenosine: Morphine
    {
        displayName = "Apply Sulfa";
        displayNameProgress = "Applying Sulfa...";
        items[] = {"ACE_adenosine","SiP_ACE_Items_sulfa"};
    };
    class SurgicalKit: FieldDressing
    {
        items[] = {"ACE_surgicalKit","SiP_ACE_Items_surgicalKit"};
    };
    class PersonalAidKit: BasicBandage
    {
        items[] = {"ACE_personalAidKit","SiP_ACE_Items_personalAidKit","SiP_ACE_Items_personalAidKit_PAVN"};
    };
};

class CfgWeapons
{
    class ACE_fieldDressing;
    class ACE_packingBandage;
    class ACE_elasticBandage;
    class ACE_tourniquet;
    class ACE_splint;
    class ACE_morphine;
    class ACE_epinephrine;
    class ACE_adenosine;
    class ACE_personalAidKit;
    class ACE_surgicalKit;
    class ACE_bodyBag;

    class SiP_ACE_Items_packingBandage: ACE_packingBandage
    {
        author = "Letlev";
        displayName = "[US] Bandage (Gauze)";
        picture = "\SiP\Addons\sip_misc\medical\data\bandage_ui_ca.paa";
        model = "\A3\Characters_F_Orange\Headgear\H_HeadBandage_F.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Orange\Headgear\Data\H_HeadBandage_clean_CO.paa"};
    };
    class SiP_ACE_Items_elasticBandage: ACE_elasticBandage
    {
        author = "Letlev";
        displayName = "[US] Bandage (Elastic)";
        picture = "\vn\weapons_f_vietnam\ui\icon_vn_b_item_bandage_01_ca.paa";
        model = "vn\characters_f_vietnam\BLUFOR\headgear\items\vn_b_item_bandage_01.p3d";
    };
    
    class SiP_ACE_Items_tourniquet: ACE_tourniquet
    {
        author = "Letlev";
        displayName = "[US] Tourniquet";
        picture = "\SiP\Addons\sip_misc\medical\data\tourniquet_ui_ca.paa";
        model = "\a3\Characters_F_Enoch\Facewear\G_Blindfold_01_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Enoch\Facewear\data\G_Blindfold_01_White_CO"};
    };
    
    class SiP_ACE_Items_splint: ACE_splint
    {
        author = "Letlev";
        displayName = "[US] Splint";
        picture = "\SiP\Addons\sip_misc\medical\data\splint_ui_ca.paa";
    };

    class SiP_ACE_Items_morphine: ACE_morphine
    {
        author = "Letlev";
        displayName = "[US] Morphine Syrette";
        picture = "\SiP\Addons\sip_misc\medical\data\morphine_ui_ca.paa";
    };

    class SiP_ACE_Items_adrenaline: ACE_epinephrine
    {
        author = "Letlev";
        displayName = "[US] Adrenaline Syrette";
        picture = "\SiP\Addons\sip_misc\medical\data\adrenaline_ui_ca.paa";
    };

    class SiP_ACE_Items_sulfa: ACE_adenosine 
    {
        author = "Letlev";
        displayName = "[US] Sulfa Bottle";
        picture = "\vn\weapons_f_vietnam\ui\icon_vn_prop_med_antibiotics_ca.paa";
        model = "\vn\objects_f_vietnam\meds\vn_med_01.p3d";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\vn\objects_f_vietnam\meds\data\vn_med_antibiotics_co.paa"};
    };

    class SiP_ACE_Items_surgicalKit: ACE_surgicalKit
    {
        author = "Letlev";
        displayName = "[US] Surgical Kit";
        picture = "\vn\weapons_f_vietnam\ui\icon_vn_b_item_medikit_01_ca.paa";
		model = "\vn\weapons_f_vietnam\items\medikit\vn_b_medikit_mag.p3d";
    };

    class SiP_ACE_Items_personalAidKit: ACE_personalAidKit
    {
        author = "Letlev";
        displayName = "[US] Personal Aid Kit";
        picture = "\vn\weapons_f_vietnam\ui\icon_vn_b_item_firstaidkit_ca.paa";
		model = "\vn\weapons_f_vietnam\items\firstaidkit\vn_b_firstaidkit_mag.p3d";
    };
};