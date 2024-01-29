class cfgPatches
{
    class SiP_Patch_uk_backpacks
    {
        Name = "Suicide Is Painless - Korean War Mod - BCFK Backpacks";
        Author = "Letlev";
        requiredAddons[] = {"WW2_Assets_c_Characters_British_c_UK_Army_Gear","SiP_Patch_us_backpacks"};
        units[] = 
        {
            "SiP_bcfk_37_backpack",
            "SiP_bcfk_37_backpack_tommy",
            "SiP_bcfk_37_backpack_sten",
            "SiP_bcfk_37_backpack_sten2",
            "SiP_bcfk_37_backpack_bren",
            "SiP_bcfk_37_backpack_rto",
            "SiP_bcfk_37_backpack_medic"
        };
        weapons[] = {};
    };
};

class cfgVehicles
{
    class fow_b_uk_p37_blanco;
    class fow_b_uk_p37_radio;
    class SiP_m1945_packboard_m9bazooka;

    class SiP_bcfk_37_backpack: fow_b_uk_p37_blanco
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[BCFK] Pattern '37 Pack";
        hiddenSelectionsTextures[] = 
		{
			"SiP\Addons\sip_uk_army_gear\Backpacks\data\textures\backpack_blanco.paa"
		};
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
        };
    };
    class SiP_bcfk_37_backpack_tommy: SiP_bcfk_37_backpack
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_m1a1_30_mag
            {
                magazine = "vn_m1a1_30_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_37_backpack_sten: SiP_bcfk_37_backpack_tommy
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_37_backpack_grease: SiP_bcfk_37_backpack_sten
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_m3a1_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_37_backpack_sten2: SiP_bcfk_37_backpack_sten
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 10;
            };
        };
    };
    class SiP_bcfk_37_backpack_bren: SiP_bcfk_37_backpack_tommy
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 2;
            };
            class _xx_SiP_bren_30_mag
            {
                magazine = "SiP_bren_30_mag";
                count = 5;
            };
        };
    };
    class SiP_bcfk_m1945_packboard_piat: SiP_m1945_packboard_m9bazooka
    {
        scopeArsenal = 0;
        class TransportMagazines
        {
            class _xx_LIB_1Rnd_89m_PIAT
            {
                magazine = "LIB_1Rnd_89m_PIAT";
                count = 4;
            };
            class _xx_vn_sten_mag
            {
                magazine = "vn_sten_mag";
                count = 2;
            };
        };
    };
    
    class SiP_bcfk_37_backpack_rto: fow_b_uk_p37_radio
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[BCFK] No.48 Radio Pack";
        hiddenSelectionsTextures[] = 
        {
            "SiP\Addons\sip_uk_army_gear\Backpacks\data\textures\backpack_blanco.paa",
            "fow\fow_characters\uk\data\headphones_co.paa",
            "fow\fow_characters\uk\data\lodu_brit_radio_co.paa"
        };
        maximumLoad = 100;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        tf_encryptionCode = "tf_west_radio_code";
        tf_range = 20000;
        tf_dialog = "vn_radiodialog_prc77";
        tf_subtype = "digital_lr";
        class TransportMagazines
        {
            class _xx_fow_e_no36mk1
            {
                magazine = "fow_e_no36mk1";
                count = 4;
            };
        };
    };
    class SiP_bcfk_37_backpack_medic: SiP_bcfk_37_backpack_tommy
    {
        class TransportItems
        {
            class _xx_ACE_morphine
            {
                magazine = "ACE_morphine";
                count = 20;
            };
            class _xx_ACE_splint
            {
                magazine = "ACE_splint";
                count = 20;
            };
            class _xx_ACE_surgicalKit
            {
                magazine = "ACE_surgicalKit";
                count = 1;
            };
        };
    };
};