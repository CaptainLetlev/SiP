class cfgPatches
{
    class SiP_Patch_us_backpacks
    {
        Name = "Suicide Is Painless - Korean War Mod - US Backpacks";
        Author = "Letlev";
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

            "SiP_m1945_packboard_prc10",

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
    class B_simc_US_m1945_roll;
    class B_simc_packboard_mortar_1;
    class B_simc_packboard_roket_2;
    class B_simc_MC_packboard_rajio_3;
    class B_simc_US_GP_left;
    class B_simc_USMC51_M41_flat_roll;
    class B_simc_USMC51_M41_M43_roll;
    class B_simc_USMC51_M41_flat_M43_roll;
    class B_SPE_US_Radio;
    class B_SPE_US_Radio_packboard_light;

    class SiP_m1945_backpack_roll: B_simc_US_m1945_roll
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[US] M-1945 Pack (Roll)";
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
    class SiP_m1945_backpack_roll_etool: SiP_m1945_backpack_roll
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[US] M-1945 Pack (Roll/E-tool)";
        model = "\simc_uaf_44\paket_m44_m43_roll.p3d";
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
            class _xx_vn_m1918_mag
            {
                magazine = "vn_m1918_mag";
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
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
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
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
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
    
    class SiP_m1945_packboard_mortars: B_simc_packboard_mortar_1
    {
        displayName = "[US] M-1945 Packboard (Mortars)";
        maximumLoad = 150;
    };

    class SiP_m1945_packboard_m20bazooka: B_simc_packboard_roket_2
    {
        displayName = "[US] M-1945 Packboard (Bazooka)";
        maximumLoad = 120;
        class TransportMagazines
        {
            class _xx_SiP_M28A2_heat_rocket
            {
                magazine = "SiP_M28A2_heat_rocket";
                count = 5;
            };
        };
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
    
    class SiP_m1945_packboard_prc10: B_simc_MC_packboard_rajio_3
    {
        displayName = "[US] M-1945 Packboard (PRC10)";
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
    
    class SiP_m1945_gpbag: B_simc_US_GP_left
    {
        displayName = "[US] M1 Ammo Bag";
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
        displayName = "[US] M1 Ammo Bag OD";
        hiddenSelectionsTextures[] = {"simc_uaf_44\data\gear_pouche_od7_co.paa",""};
    };
    class SiP_m1945_gpbag_left: SiP_m1945_gpbag
    {
        displayName = "[US] M1 Ammo Bag (Alt)";
        model = "\simc_uaf_44\garp_2.p3d";
        hiddenSelections[] = {"garp_top","garp_low"};
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_co.paa"};
    };
    class SiP_m1945_gpbag_left_od: SiP_m1945_gpbag_left
    {
        displayName = "[US] M1 Ammo Bag OD (Alt)";
        hiddenSelectionsTextures[] = {"","simc_uaf_44\data\gear_pouche_od7_co.paa"};
    };

    class SiP_m1945_gpbag_left_od_45: SiP_m1945_gpbag_left_od
    {
        scope = 1;
		scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
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
            class _xx_vn_m1918_mag
            {
                magazine = "vn_m1918_mag";
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
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
                count = 5;
            };
        };
    };
    class SiP_m1945_gpbag_45_od: SiP_m1945_gpbag_od
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
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
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
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
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
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
            class _xx_vn_m1918_mag
            {
                magazine = "vn_m1918_mag";
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
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
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
            class _xx_SiP_m1911_mag
            {
                magazine = "SiP_m1911_mag";
                count = 5;
            };
        };
    };
    
    class SiP_SCR300_radio_pack: B_SPE_US_Radio
    {
        displayName = "[US] SCR-300 Radiopack";
        maximumLoad = 120;
        mass = 21.2;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
    };
    class SiP_SCR300_radio_packboard: B_SPE_US_Radio_packboard_light
    {
        displayName = "[US] SCR-300 Radio Packboard";
        maximumLoad = 120;
        mass = 21.2;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_range = 20000;
        tf_subtype = "digital_lr";
        tf_encryptionCode = "tf_west_radio_code";
    };
};