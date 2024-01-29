class cfgPatches
{
    class SiP_Patch_us_army_vests
    {
        Name = "Suicide Is Painless - Korean War Mod - US Army Vests";
        Author = "Letlev";
        requiredAddons[] = 
        {
            "simc_uaf_44_gare"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_USAF_Fighter_mask"
        };
    };
};

class CfgWeapons
{
    class NVGoggles;
    
    class SiP_USAF_Fighter_mask: NVGoggles
    {
        author = "Letlev";
        displayName = "[US] Fighter facemask";
        picture = "\vn\characters_f_vietnam\ui\icon_vn_b_acc_ms22001_01_ca.paa";
        model = "\vn\characters_f_vietnam\BLUFOR\accessories\vn_b_acc_ms22001_01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\vn\characters_f_vietnam\blufor\accessories\data\vn_b_acc_ms22001_01_co.paa"};
        modelOptics = "\A3\Weapons_F\empty";
        visionMode[] = {"Normal","Normal"};
        descriptionShort = "USAF Fighter Mask";
        class ItemInfo
        {
            type = 616;
            hmdType = 0;
            uniformModel = "\vn\characters_f_vietnam\BLUFOR\accessories\vn_b_acc_ms22001_01";
            modelOff = "\vn\characters_f_vietnam\BLUFOR\accessories\vn_b_acc_ms22001_01";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\vn\characters_f_vietnam\blufor\accessories\data\vn_b_acc_ms22001_01_co.paa"};
            mass = 1;
        };
    };
};

class CfgGlasses
{
    class None;

    class m1945_suspender_facewear: None
    {
        scope = 2;
        author = "Letlev";
        displayname = "[US] M1945 Suspenders";
        picture = "\simc_uaf_44_preview\icons\zusp_ca.paa";
        model = "\simc_uaf_44\paket_m44.p3d";
        hiddenSelections[] = {"bright","paket"};
        hiddenSelectionsTextures[] = {""};
        identityTypes[] = {"Simc_UA44",1};
        mass = 2;
    };

    class m1945_cargopack_facewear: None
    {
        scope = 2;
        author = "Letlev";
        displayname = "[US] M1945 cargopack";
        picture = "\simc_uaf_67_preview\icons\pack_ass_ca.paa";
        hiddenSelections[] = {"botol"};
        hiddenSelectionsTextures[] = {""};
        model = "\simc_uaf_65\pack_ass_56.p3d";
        identityTypes[] = {"Simc_UA44",1};
        mass = 2;
    };
};