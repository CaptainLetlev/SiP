class cfgPatches
{
    class SiP_Patch_Resupply_Boxes
    {
        addonRootClass = "SiP_Patch_un_weapons";
        requiredAddons[] = 
        {
            "WW2_SPE_Assets_c_Vehicles_SimpleObjects_c",
            "ace_medical_treatment"
        };
        units[] = 
        {
            "SiP_US_Resupply_medical",
            "SiP_US_Resupply_Grenades",
            "SiP_US_Resupply_81mm_Mortar",
            "SiP_US_Resupply_60mm_Mortar",
            "SiP_US_Resupply_Small_Arms"
        };
        weapons[] = {};
    };
};

class CfgVehicles 
{
    class ACE_medicalSupplyCrate;

    class SPE_BasicAmmunitionBox_US;
    class Land_SPE_Ammocrate_US_02;
    
    class vn_b_ammobox_full_11;
    class vn_b_ammobox_full_15;

    class SiP_US_Resupply_medical: ACE_medicalSupplyCrate
    {
        author = "Letlev";
        displayName = "Medical Supplies";
        editorCategory = "SiP_Korean_War_Items_Editor_Category";
        editorSubcategory = "SiP_UN_Resupply_Boxes_Subcategory";
        icon = "iconCrateWpns";
        armor = 400;
        maximumLoad = 2900;
        class TransportItems
        {
            class _xx_ACE_plasmaIV_250
            {
                name = "ACE_plasmaIV_250";
                count = 15;
            };
            class _xx_ACE_plasmaIV_500
            {
                name = "ACE_plasmaIV_500";
                count = 20;
            };
            class _xx_ACE_plasmaIV_1000
            {
                name = "ACE_plasmaIV";
                count = 10;
            };
            class _xx_SiP_ACE_Items_elasticBandage
            {
                name = "SiP_ACE_Items_elasticBandage";
                count = 100;
            };				
            class _xx_SiP_ACE_Items_packingBandage
            {
                name = "SiP_ACE_Items_packingBandage";
                count = 120;
            };
            class _xx_SiP_ACE_Items_fieldDressing
            {
                name = "SiP_ACE_Items_fieldDressing";
                count = 20;
            };
            class _xx_SiP_ACE_Items_tourniquet
            {
                name = "SiP_ACE_Items_tourniquet";
                count = 16;
            };
            class _xx_SiP_ACE_Items_splint
            {
                name = "SiP_ACE_Items_splint";
                count = 16;
            };						
            class _xx_SiP_ACE_Items_morphine
            {
                name = "SiP_ACE_Items_morphine";
                count = 20;
            };								
            class _xx_SiP_ACE_Items_adrenaline
            {
                name = "SiP_ACE_Items_adrenaline";
                count = 15;
            };
        };
    };

    class SiP_US_Resupply_Grenades: Land_SPE_Ammocrate_US_02
    {
        scope = 2;
        scopecurator = 2;
        author = "Letlev";
        displayName = "US Grenades";
        editorCategory = "SiP_Korean_War_Items_Editor_Category";
        editorSubcategory = "SiP_UN_Resupply_Boxes_Subcategory";
        icon = "iconCrateGrenades";
        simulation = "thingX";
        armor = 400;
        armorStructural = 1;
        maximumLoad = 2900;
        class TransportMagazines
        {
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 19;
            };
            class _xx_SPE_US_M18
            {
                magazine = "SPE_US_M18";
                count = 1;
            };
            class _xx_SPE_US_M18_Green
            {
                magazine = "SPE_US_M18_Green";
                count = 1;
            };
            class _xx_SPE_US_M18_Red
            {
                magazine = "SPE_US_M18_Red";
                count = 1;
            };
            class _xx_SPE_US_M18_Yellow
            {
                magazine = "SPE_US_M18_Yellow";
                count = 1;
            };
            class _xx_SPE_US_M18_Violet
            {
                magazine = "SPE_US_M18_Violet";
                count = 1;
            };
        };
    };

    class SiP_US_Resupply_81mm_Mortar: vn_b_ammobox_full_11
    {
        scope = 2;
        scopecurator = 2;
        author = "Letlev";
        displayName = "81mm Mortar Rounds";
        editorCategory = "SiP_Korean_War_Items_Editor_Category";
        editorSubcategory = "SiP_UN_Resupply_Boxes_Subcategory";
        icon = "iconCrateAmmo";
        armor = 400;
        armorStructural = 1;
        maximumLoad = 2900;
        class TransportMagazines
        {
            class _xx_ace_compat_SiP_81mm_he
            {
                magazine = "ace_compat_SiP_81mm_he";
                count = 10;
            };
            class _xx_ace_compat_SiP_81mm_smoke
            {
                magazine = "ace_compat_SiP_81mm_smoke";
                count = 2;
            };
            class _xx_ace_compat_SiP_81mm_wp
            {
                magazine = "ace_compat_SiP_81mm_wp";
                count = 2;
            };
            class _xx_ace_compat_SiP_81mm_lume
            {
                magazine = "ace_compat_SiP_81mm_lume";
                count = 2;
            };
        };
    };

    class SiP_US_Resupply_60mm_Mortar: vn_b_ammobox_full_15
    {
        scope = 2;
        scopecurator = 2;
        author = "Letlev";
        displayName = "60mm Mortar Rounds";
        editorCategory = "SiP_Korean_War_Items_Editor_Category";
        editorSubcategory = "SiP_UN_Resupply_Boxes_Subcategory";
        icon = "iconCrateAmmo";
        armor = 400;
        armorStructural = 1;
        maximumLoad = 2900;
        class TransportMagazines
        {
            class _xx_ace_compat_SiP_60mm_he
            {
                magazine = "ace_compat_SiP_60mm_he";
                count = 10;
            };
            class _xx_ace_compat_SiP_60mm_wp
            {
                magazine = "ace_compat_SiP_60mm_wp";
                count = 4;
            };
            class _xx_ace_compat_SiP_60mm_lume
            {
                magazine = "ace_compat_SiP_60mm_lume";
                count = 4;
            };
        };
    };

    class SiP_US_Resupply_Small_Arms: SPE_BasicAmmunitionBox_US
    {
        scope = 2;
        scopecurator = 2;
        author = "Letlev";
        displayName = "US Small Arms Ammo";
        editorCategory = "SiP_Korean_War_Items_Editor_Category";
        editorSubcategory = "SiP_UN_Resupply_Boxes_Subcategory";
        icon = "iconCrateAmmo";
        armor = 400;
        armorStructural = 1;
        maximumLoad = 5800;
        class TransportMagazines
        {
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
                count = 20;
            };
            class _xx_SiP_m1_garand_mag
            {
                magazine = "SiP_m1_garand_mag";
                count = 30;
            };
            class _xx_SiP_springfield_5_mag
            {
                magazine = "SiP_springfield_5_mag";
                count = 30;
            };
            class _xx_SiP_carbine_15_mag
            {
                magazine = "SiP_carbine_15_mag";
                count = 30;
            };
            class _xx_SiP_carbine_30_mag
            {
                magazine = "SiP_carbine_30_mag";
                count = 20;
            };
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 20;
            };
            class _xx_vn_m1897_buck_mag
            {
                magazine = "vn_m1897_buck_mag";
                count = 20;
            };
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 20;
            };
            class _xx_vn_22mm_m17_frag_mag
            {
                magazine = "vn_22mm_m17_frag_mag";
                count = 15;
            };
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 15;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 15;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 15;
            };
            class _xx_vn_m3a1_mag
            {
                magazine = "vn_m3a1_mag";
                count = 20;
            };
            class _xx_vn_m1918_mag
            {
                magazine = "vn_m1918_mag";
                count = 20;
            };
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 5;
            };
            class _xx_SiP_m1919_v_100_mag
            {
                magazine = "SiP_m1919_v_100_mag";
                count = 10;
            };
            class _xx_ace_compat_sip_m1919_50
            {
                magazine = "ace_compat_sip_m1919_50";
                count = 20;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 20;
            };
            class _xx_SiP_M6A3_rocket
            {
                magazine = "SiP_M6A3_rocket";
                count = 20;
            };
            class _xx_SiP_M28A2_heat_rocket
            {
                magazine = "SiP_M28A2_heat_rocket";
                count = 20;
            };
            class _xx_SPE_M2_Flamethrower_Mag
            {
                magazine = "SPE_M2_Flamethrower_Mag";
                count = 5;
            };
        };
    };
};