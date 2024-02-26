class cfgPatches
{
    class SiP_Patch_us_backpacks
    {
        Name = "Suicide Is Painless - Korean War Mod - US Backpacks";
        addonRootClass = "SiP_Patch_us_army_gear";
        requiredAddons[] = 
        {
            "simc_uaf_44_assets",
            "simc_uaf_44_gare",
            "simc_mc_67_assets"
        };
        units[] = 
        {
            "SiP_m1945_backpack_roll",
            "SiP_m1945_backpack_roll_etool",

            "SiP_m1945_backpack_roll_etool_gren",
            "SiP_m1945_backpack_roll_etool_bar",
            "SiP_m1945_backpack_roll_etool_mg",
            "SiP_m1945_backpack_roll_etool_sniper",
            "SiP_m1945_backpack_roll_etool_shotgun_pistol",
            "SiP_m1945_backpack_roll_etool_shotgun",

            "SiP_m1945_packboard_mortars",

            "SiP_m1945_packboard_m20bazooka",
            "SiP_m1945_packboard_m9bazooka",

            "SiP_m1945_packboard_prc10_radio",

            "SiP_m1945_gpbag",
            "SiP_m1945_gpbag_od",
            "SiP_m1945_gpbag_left",
            "SiP_m1945_gpbag_left_od",

            "SiP_m1945_gpbag_left_od_45",
            "SiP_m1945_gpbag_gren",
            "SiP_m1945_gpbag_bar",
            "SiP_m1945_gpbag_mg",
            "SiP_m1945_gpbag_45",
            "SiP_m1945_gpbag_45_od",
            "SiP_m1945_gpbag_shotgun",
            "SiP_m1945_gpbag_shotgun_pistol",
            "SiP_m1945_gpbag_od_shotgun_pistol",

            "SiP_m1941_marine_backpack_bar",
            "SiP_m1941_marine_backpack_mg",
            "SiP_m1941_marine_backpack_shotgun",
            "SiP_m1941_marine_backpack_grenadier",
            "SiP_m1941_marine_backpack_smg_pistol",
            "SiP_m1941_marine_backpack_pistol",

            "SiP_SCR300_radio_pack"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class ACE_NonSteerableParachute;

    class vn_b_pack_t10_01;

    class B_simc_US_m1945;
    
    class B_simc_packboard_flak_mortar_1;

    class B_simc_packboard_roket_2;
    class B_simc_packboard_flak_roket_2;

    class B_simc_MC_packboard_rajio_3;
    class B_simc_MC_packboard_flak_rajio_3;

    class B_simc_packboard_flak_MG_1;

    class B_simc_US_GP_left;
    class B_simc_USMC51_M41_flat_roll;
    class B_simc_USMC51_M41_M43_roll;
    class B_simc_USMC51_M41_flat_M43_roll;

    class B_simc_pack_med_m3;

    class B_SPE_US_Radio;
    class B_SPE_US_Radio_packboard_light;
    class B_SPE_US_packboard_ammo;
    class B_SPE_US_packboard_mortar;
    class B_SPE_US_packboard_eng;


    class SiP_m1945_backpack: B_simc_US_m1945
    {
        scope = 2;
        scopeArsenal = 2;
        author = "Letlev";
        displayName = "[US] M1945 Backpack";
        class TransportMagazines
        {
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
        maximumLoad = 120;
    };
    class SiP_m1945_backpack_bando: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - Bandolier";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
        maximumLoad = 130;
    };
    class SiP_m1945_backpack_etool: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - E-Tool";
        model = "\simc_uaf_44\paket_m44_m43.p3d";
        hiddenSelections[] = {"bright"};
        hiddenSelectionsTextures[] = {""};
    };
    class SiP_m1945_backpack_etool_bando: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - E-Tool/Bandolier";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
    };
    class SiP_m1945_backpack_roll: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - Roll";
        model = "\simc_uaf_44\paket_m44_roll.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
    };
    class SiP_m1945_backpack_roll_etool: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Backpack - Roll/E-Tool";
        model = "\simc_uaf_44\paket_m44_m43_roll.p3d";
        hiddenSelections[] = {""};
        hiddenSelectionsTextures[] = {""};
    };
    class SiP_m1945_suspenders: SiP_m1945_backpack
    {
        displayName = "[US] M1945 Suspenders";
        picture = "\simc_uaf_44_preview\icons\zusp_ca.paa";
        hiddenSelections[] = {"bright","paket"};
        hiddenSelectionsTextures[] = {""};
    };
    class SiP_m1945_suspenders_bando: SiP_m1945_suspenders
    {
        displayName = "[US] M1945 Suspenders - Bandolier";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\bandolier_co.paa",""};
        maximumLoad = 130;
    };

    class SiP_m1945_backpack_roll_etool_gren: SiP_m1945_backpack_roll_etool
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_22mm_m17_frag_mag
            {
                magazine = "vn_22mm_m17_frag_mag";
                count = 2;
            };
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 3;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 1;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 1;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_bar: SiP_m1945_backpack_roll_etool
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 4;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_mg: SiP_m1945_backpack_roll_etool_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 4;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_sniper: SiP_m1945_backpack_roll_etool_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_shotgun_pistol: SiP_m1945_backpack_roll_etool_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 4;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
    };
    class SiP_m1945_backpack_roll_etool_shotgun: SiP_m1945_backpack_roll_etool_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
    };
    
    class SiP_m1945_packboard_mortars: B_SPE_US_packboard_mortar
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - Mortar";
        maximumLoad = 160;
    };
    class SiP_m1945_packboard_mortars_flak: B_simc_packboard_flak_mortar_1
    {
        author = "Letlev";
        displayName = "[US] M1945 Flak Packboard - Mortar";
        maximumLoad = 160;
    };

    class SiP_m1945_packboard_ammo: B_SPE_US_packboard_ammo
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - Ammo";
        maximumLoad = 150;
    };
    class SiP_m1945_packboard_ammo_flak: B_simc_packboard_flak_MG_1
    {
        author = "Letlev";
        displayName = "[US] M1945 Flak Packboard - Ammo";
        maximumLoad = 150;
    };

    class SiP_m1945_packboard_engi: B_SPE_US_packboard_eng
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - Engineer";
        maximumLoad = 140;
    };
    
    class SiP_m1945_packboard_SCR300_radio: B_SPE_US_Radio_packboard_light
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - SCR300";
        maximumLoad = 130;
        mass = 21.2;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
        class TransportMagazines
        {
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
    };
    
    class SiP_m1945_packboard_m20bazooka: B_simc_packboard_roket_2
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - Bazooka";
        maximumLoad = 130;
        class TransportMagazines
        {
            class _xx_SiP_M28A2_heat_rocket
            {
                magazine = "SiP_M28A2_heat_rocket";
                count = 5;
            };
        };
    };
    class SiP_m1945_packboard_m20bazooka_flak: B_simc_packboard_flak_roket_2
    {
        author = "Letlev";
        displayName = "[US] M1945 Flak Packboard - Bazooka";
        maximumLoad = 130;
    };
    
    class SiP_m1945_packboard_m9bazooka: SiP_m1945_packboard_m20bazooka
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_SiP_M6A3_rocket
            {
                magazine = "SiP_M6A3_rocket";
                count = 6;
            };
        };
    };
    
    class SiP_m1945_packboard_prc10_radio: B_simc_MC_packboard_rajio_3
    {
        author = "Letlev";
        displayName = "[US] M1945 Packboard - PRC10";
        maximumLoad = 120;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "vn_radiodialog_prc77";
        class TransportMagazines
        {
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
    };
    class SiP_m1945_packboard_prc10_radio_flak: B_simc_MC_packboard_flak_rajio_3
    {
        author = "Letlev";
        displayName = "[US] M1945 Flak Packboard - PRC10";
        maximumLoad = 120;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "vn_radiodialog_prc77";
    };
    
    //GP Bag
    class SiP_m1945_gpbag: B_simc_US_GP_left
    {
        author = "Letlev";
        displayName = "[US] M1 Ammo Bag - Khaki";
        model = "\simc_uaf_44\garp.p3d";
        hiddenSelections[] = {"garp_left","garp_regt"};
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_co.paa",""};
        class TransportMagazines
        {
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
        maximumLoad = 120;
    };
    class SiP_m1945_gpbag_od: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag - OD";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_od7_co.paa",""};
    };
    class SiP_m1945_gpbag_front: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Front - Khaki";
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_co.paa"};
    };
    class SiP_m1945_gpbag_od_front: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Front - OD";
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_od7_co.paa"};
    };
    class SiP_m1945_gpbag_double: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Double - Khaki";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_co.paa","simc_uaf_44\data\gear_pouche_co.paa"};
        maximumLoad = 150;
    };
    class SiP_m1945_gpbag_od_double: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Double - OD";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_od7_co.paa","simc_uaf_44\data\gear_pouche_od7_co.paa"};
        maximumLoad = 150;
    };
    class SiP_m1945_gpbag_left: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag Alt - Khaki";
        model = "\simc_uaf_44\garp_2.p3d";
        hiddenSelections[] = {"garp_top","garp_low"};
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_co.paa"};
    };
    class SiP_m1945_gpbag_left_od: SiP_m1945_gpbag_left
    {
        displayName = "[US] M1 Ammo Bag Alt - OD";
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_od7_co.paa"};
    };

    class SiP_m1945_gpbag_left_od_45: SiP_m1945_gpbag_left_od
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_gpbag_gren: SiP_m1945_gpbag_left_od
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_22mm_m17_frag_mag
            {
                magazine = "vn_22mm_m17_frag_mag";
                count = 2;
            };
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 3;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 1;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 1;
            };
        };
    };
    class SiP_m1945_gpbag_bar: SiP_m1945_gpbag
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 4;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
        maximumLoad = 120;
    };
    class SiP_m1945_gpbag_mg: SiP_m1945_gpbag
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 4;
            };
        };
    };
    class SiP_m1945_gpbag_45: SiP_m1945_gpbag
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_gpbag_45_od: SiP_m1945_gpbag_od
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_gpbag_shotgun: SiP_m1945_gpbag_left_od
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
    };
    class SiP_m1945_gpbag_shotgun_pistol: SiP_m1945_gpbag
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 4;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
    };
    class SiP_m1945_gpbag_od_shotgun_pistol: SiP_m1945_gpbag_od
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 4;
            };
            class _xx_SiP_mk2_grenade_mag
            {
                magazine = "SiP_mk2_grenade_mag";
                count = 4;
            };
        };
    };
    
    class SiP_m1941_marine_backpack_bar: B_simc_USMC51_M41_flat_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1918_t_mag
            {
                magazine = "vn_m1918_t_mag";
                count = 8;
            };
        };
    };
    class SiP_m1941_marine_backpack_mg: B_simc_USMC51_M41_M43_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_ace_compat_sip_m1919_250
            {
                magazine = "ace_compat_sip_m1919_250";
                count = 8;
            };
        };
    };
    class SiP_m1941_marine_backpack_shotgun: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1897_fl_mag
            {
                magazine = "vn_m1897_fl_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_grenadier: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_22mm_m1a2_frag_mag
            {
                magazine = "vn_22mm_m1a2_frag_mag";
                count = 5;
            };
            class _xx_vn_22mm_m22_smoke_mag
            {
                magazine = "vn_22mm_m22_smoke_mag";
                count = 5;
            };
            class _xx_vn_22mm_m9_heat_mag
            {
                magazine = "vn_22mm_m9_heat_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_smg_pistol: SiP_m1941_marine_backpack_bar
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 10;
            };
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1941_marine_backpack_pistol: B_simc_USMC51_M41_flat_M43_roll
    {
        scope = 1;
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_vn_m1911_mag
            {
                magazine = "vn_m1911_mag";
                count = 5;
            };
        };
    };
    
    class SiP_SCR300_radio_pack: B_SPE_US_Radio
    {
        author = "Letlev";
        displayName = "[US] SCR-300 Radiopack";
        maximumLoad = 120;
        mass = 21.2;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
    };

    class ACE_ReserveParachute: ACE_NonSteerableParachute
    {
        model = "\WW2\SPE_Assets_m\Characters\Americans_m\US_Airforce\SPE_US_QAC_Parachute.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\WW2\SPE_Assets_t\Characters\Americans_t\US_Airforce\SPE_US_B3_harness_co.paa"};
        ParachuteClass = "SPE_NonSteerable_Parachute";
    };

    class SiP_T7_Parachute: vn_b_pack_t10_01
    {
        author = "Letlev";
        displayName = "[US] T-7 Parachute";
        ParachuteClass = "SPE_NonSteerable_Parachute";
    };
    
    class SiP_m1945_m3_medicbag: B_simc_pack_med_m3
    {
        author = "Letlev";
        displayName = "[US] M3 Aid Bag - Front";
        maximumLoad = 150;
        class TransportItems
        {
            class _xx_SiP_ACE_Items_surgicalKit
            {
                name = "SiP_ACE_Items_surgicalKit";
                count = 1;
            };
            class _xx_SiP_ACE_Items_packingBandage
            {
                name = "SiP_ACE_Items_packingBandage";
                count = 10;
            };
        };
    };
    class SiP_m1945_m3_medicbag_back: SiP_m1945_m3_medicbag
    {
        displayName = "[US] M3 Aid Bag - Rear";
        model =  "\simc_uaf_67\belt_56_med.p3d";
        hiddenSelections[] = {"camo","camo2","ass","zusp"};
        hiddenSelectionsTextures[] = 
        {
            "",
            "",
            "",
            ""
        };
    };
};

class XtdGearInfos
{
    class CfgVehicles
    {
        class SiP_m1945_backpack
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "SiP_m1945_backpack";
        };
        class SiP_m1945_backpack_bando
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "SiP_m1945_backpack_bando";
        };
        class SiP_m1945_backpack_etool
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "SiP_m1945_backpack_etool";
        };
        class SiP_m1945_backpack_etool_bando
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "SiP_m1945_backpack_etool_bando";
        };
        class SiP_m1945_backpack_roll
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "SiP_m1945_backpack_roll";
        };
        class SiP_m1945_backpack_roll_etool
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "SiP_m1945_backpack_roll_etool";
        };
        class SiP_m1945_suspenders
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "SiP_m1945_suspenders";
        };
        class SiP_m1945_suspenders_bando
        {
            model = "B_hssn_SiP_m1945_backpack";
            variant = "SiP_m1945_suspenders_bando";
        };

        //GP Bag
        class SiP_m1945_gpbag
        {
            model = "B_hssn_SiP_m1945_gpbag";
            variant = "SiP_m1945_gpbag";
        };
        class SiP_m1945_gpbag_od
        {
            model = "B_hssn_SiP_m1945_gpbag";
            variant = "SiP_m1945_gpbag_od";
        };
        class SiP_m1945_gpbag_left
        {
            model = "B_hssn_SiP_m1945_gpbag";
            variant = "SiP_m1945_gpbag_left";
        };
        class SiP_m1945_gpbag_left_od
        {
            model = "B_hssn_SiP_m1945_gpbag";
            variant = "SiP_m1945_gpbag_left_od";
        };
        class SiP_m1945_gpbag_front
        {
            model = "B_hssn_SiP_m1945_gpbag";
            variant = "SiP_m1945_gpbag_front";
        };
        class SiP_m1945_gpbag_od_front
        {
            model = "B_hssn_SiP_m1945_gpbag";
            variant = "SiP_m1945_gpbag_od_front";
        };
        class SiP_m1945_gpbag_double
        {
            model = "B_hssn_SiP_m1945_gpbag";
            variant = "SiP_m1945_gpbag_double";
        };
        class SiP_m1945_gpbag_od_double
        {
            model = "B_hssn_SiP_m1945_gpbag";
            variant = "SiP_m1945_gpbag_od_double";
        };

        //Packboard
        class SiP_m1945_packboard_mortars
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_mortars";
            adjustment = "none";
        };
        class SiP_m1945_packboard_mortars_flak
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_mortars";
            adjustment = "flak";
        };

        class SiP_m1945_packboard_ammo
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_ammo";
            adjustment = "none";
        };
        class SiP_m1945_packboard_ammo_flak
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_ammo";
            adjustment = "flak";
        };

        class SiP_m1945_packboard_engi
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_engi";
            adjustment = "none";
        };
        
        class SiP_m1945_packboard_SCR300_radio
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_SCR300_radio";
            adjustment = "none";
        };

        class SiP_m1945_packboard_m20bazooka
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_m20bazooka";
            adjustment = "none";
        };
        class SiP_m1945_packboard_m20bazooka_flak
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_m20bazooka";
            adjustment = "none";
        };

        class SiP_m1945_packboard_prc10_radio
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_prc10_radio";
            adjustment = "none";
        };
        class SiP_m1945_packboard_prc10_radio_flak
        {
            model = "B_hssn_SiP_m1945_packboard";
            variant = "SiP_m1945_packboard_prc10_radio";
            adjustment = "flak";
        };

        class SiP_m1945_m3_medicbag
        {
            model = "B_hssn_SiP_m3_medicbag";
            adjustment = "SiP_m1945_m3_medicbag";
        };
        class SiP_m1945_m3_medicbag_back
        {
            model = "B_hssn_SiP_m3_medicbag";
            adjustment = "SiP_m1945_m3_medicbag_back";
        };
    };
};	

class XtdGearModels
{
    class CfgVehicles 
    {		
        class B_hssn_SiP_m1945_backpack
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "variant"
            };
            class variant
            {
                label = "Variant";
                values[]=
                {
                    "SiP_m1945_backpack",
                    "SiP_m1945_backpack_bando",
                    "SiP_m1945_backpack_etool",
                    "SiP_m1945_backpack_etool_bando",
                    "SiP_m1945_backpack_roll",
                    "SiP_m1945_backpack_roll_etool",
                    "SiP_m1945_suspenders",
                    "SiP_m1945_suspenders_bando"					
                };
                class SiP_m1945_backpack
                {
                    label = "Standard";
                };
                class SiP_m1945_backpack_bando
                {
                    label = "Bandolier";
                };
                class SiP_m1945_backpack_etool
                {
                    label = "E-Tool";
                };
                class SiP_m1945_backpack_etool_bando
                {
                    label = "E-Tool/Bando";
                };
                class SiP_m1945_backpack_roll
                {
                    label = "Roll";
                };
                class SiP_m1945_backpack_roll_etool
                {
                    label = "Roll/E-tool";
                };
                class SiP_m1945_suspenders
                {
                    label = "Suspenders";
                };
                class SiP_m1945_suspenders_bando
                {
                    label = "Sus/Bando";
                };
            };
        };
        class B_hssn_SiP_m1945_gpbag
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "variant"
            };
            class variant
            {
                label = "Variant";
                values[]=
                {
                    "SiP_m1945_gpbag",
                    "SiP_m1945_gpbag_od",
                    "SiP_m1945_gpbag_front",
                    "SiP_m1945_gpbag_od_front",
                    "SiP_m1945_gpbag_left",
                    "SiP_m1945_gpbag_left_od",
                    "SiP_m1945_gpbag_double",
                    "SiP_m1945_gpbag_od_double"
                };
                class SiP_m1945_gpbag
                {
                    label = "Khaki";
                };
                class SiP_m1945_gpbag_od
                {
                    label = "OD";
                };
                class SiP_m1945_gpbag_front
                {
                    label = "Front - Khaki";
                };
                class SiP_m1945_gpbag_od_front
                {
                    label = "Front - OD";
                };
                class SiP_m1945_gpbag_left
                {
                    label = "Alt - Khaki";
                };
                class SiP_m1945_gpbag_left_od
                {
                    label = "Alt - OD";
                };
                class SiP_m1945_gpbag_double
                {
                    label = "Double - Khaki";
                };
                class SiP_m1945_gpbag_od_double
                {
                    label = "Double - OD";
                };
            };
        };
        class B_hssn_SiP_m1945_packboard
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "variant",
                "adjustment"
            };
            class variant
            {
                label = "Variant";
                values[]=
                {
                    "SiP_m1945_packboard_engi",
                    "SiP_m1945_packboard_ammo",
                    "SiP_m1945_packboard_mortars",
                    "SiP_m1945_packboard_m20bazooka",
                    "SiP_m1945_packboard_prc10_radio",
                    "SiP_m1945_packboard_SCR300_radio"
                };
                class SiP_m1945_packboard_engi
                {
                    label = "Engineer";
                };
                class SiP_m1945_packboard_ammo
                {
                    label = "Ammo";
                };
                class SiP_m1945_packboard_mortars
                {
                    label = "Mortars";
                };
                class SiP_m1945_packboard_m20bazooka
                {
                    label = "Bazooka";
                };
                class SiP_m1945_packboard_prc10_radio
                {
                    label = "PRC10 Radio";
                };
                class SiP_m1945_packboard_SCR300_radio
                {
                    label = "SCR300 Radio";
                };
            };	
            class adjustment
            {
                label= "Strap adjustment";
                values[]=
                {
                    "none",
                    "flak"
                };
                class none
                {
                    label = "None";
                    actionLabel = "No adjustment";
                };
                class flak
                {
                    label = "Flak Vest";
                    actionLabel = "Adjust pack for vest";
                };
            };
        };
        class B_hssn_SiP_m3_medicbag
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "adjustment"
            };
            class adjustment
            {
                label= "Adjustment";
                changeingame = 1;
                changedelay = 1;
                values[]=
                {
                    "SiP_m1945_m3_medicbag",
                    "SiP_m1945_m3_medicbag_back"
                };
                class SiP_m1945_m3_medicbag
                {
                    label = "Front";
                    actionLabel = "Adjust to the Front";
                };
                class SiP_m1945_m3_medicbag_back
                {
                    label = "Back";
                    actionLabel = "Adjust to the Back";
                };
            };
        };
    };
};