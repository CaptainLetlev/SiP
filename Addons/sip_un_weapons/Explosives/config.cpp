class cfgPatches
{
    class SiP_Patch_explosives
    {
        addonRootClass = "SiP_Patch_un_grenades";
        requiredAddons[] = 
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "fow_weapons_c_explosives"
        };
        units[] = 
        {
            "SiP_Explosives_compB_halfpound_place",
            "SiP_Explosives_compB_1pound_place",
            "SiP_Explosives_compB_2halfpound_place",
            "SiP_Explosives_compB_2pound_place",
            "SiP_Explosives_compB_4pound_place"
        };
        weapons[] = {};
        magazines[] = 
        {
            "SiP_Explosives_compB_halfpound_mag",
            "SiP_Explosives_compB_1pound_mag",
            "SiP_Explosives_compB_2halfpound_mag",
            "SiP_Explosives_compB_2pound_mag",
            "SiP_Explosives_compB_4pound_mag"
        };
        ammo[] = 
        {
            "SiP_Explosive_compB_halfpound_ammo",
            "SiP_Explosive_compB_1pound_ammo",
            "SiP_Explosive_compB_2halfpound_ammo",
            "SiP_Explosive_compB_2pound_ammo",
            "SiP_Explosive_compB_4pound_ammo"
        };
    };
};

class CfgVehicles
{
    class ACE_Explosives_Place_DemoCharge;
    
    class SiP_Explosives_compB_halfpound_place: ACE_Explosives_Place_DemoCharge
    {
        scope = 2;
        scopeCurator = 2;
        author = "Letlev";
        displayName = "[US] Comp. B (0.5-Pound)";
        model = "\WW2\SPE_Assets_m\Weapons\Mines_m\SPE_TNT_Half_Pound.p3d";
        ammo = "SiP_Explosive_compB_halfpound_ammo";
    };
    class SiP_Explosives_compB_1pound_place: SiP_Explosives_compB_halfpound_place
    {
        displayName = "[US] Comp. B (1-Pound)";
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_OnePound";
        ammo = "SiP_Explosive_compB_1pound_ammo";
    };
    class SiP_Explosives_compB_2halfpound_place: SiP_Explosives_compB_halfpound_place
    {
        displayName = "[US] Comp. B (2 Half-Pounds)";
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualHalfPound";
        ammo = "SiP_Explosive_compB_2halfpound_ammo";
    };
    class SiP_Explosives_compB_2pound_place: SiP_Explosives_compB_halfpound_place
    {
        displayName = "[US] Comp. B (2-Pounds)";
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualOnePound";
        ammo = "SiP_Explosive_compB_2halfpound_ammo";
    };
    class SiP_Explosives_compB_4pound_place: SiP_Explosives_compB_halfpound_place
    {
        displayName = "[US] Comp. B (4-Pounds)";
        model = "\WW2\SPE_Assets_m\Weapons\Mines_m\SPE_TNT_4pound.p3d";
        ammo = "SiP_Explosive_compB_4pound_ammo";
    };
};

class CfgWeapons
{
    class Default;
    class Put: Default
    {
        muzzles[] += 
        {
            "SiP_Explosives_compB_halfpound_PutMuzzle",
            "SiP_Explosives_compB_1pound_PutMuzzle",
            "SiP_Explosives_compB_2halfpound_PutMuzzle",
            "SiP_Explosives_compB_2pound_PutMuzzle",
            "SiP_Explosives_compB_4pound_PutMuzzle"
        };
        
        class PutMuzzle: Default{};
        class ace_explosives_muzzle: PutMuzzle{};

        class SiP_Explosives_compB_halfpound_PutMuzzle: ace_explosives_muzzle
        {
            magazines[] = {"SiP_Explosives_compB_halfpound_mag"};
        };
        class SiP_Explosives_compB_1pound_PutMuzzle: ace_explosives_muzzle
        {
            magazines[] = {"SiP_Explosives_compB_1pound_mag"};
        };
        class SiP_Explosives_compB_2halfpound_PutMuzzle: ace_explosives_muzzle
        {
            magazines[] = {"SiP_Explosives_compB_2halfpound_mag"};
        };
        class SiP_Explosives_compB_2pound_PutMuzzle: ace_explosives_muzzle
        {
            magazines[] = {"SiP_Explosives_compB_2pound_mag"};
        };
        class SiP_Explosives_compB_4pound_PutMuzzle: ace_explosives_muzzle
        {
            magazines[] = {"SiP_Explosives_compB_4pound_mag"};
        };
    };
};

class CfgMagazines
{
    class SatchelCharge_Remote_Mag;

    class SiP_Explosives_compB_halfpound_mag: SatchelCharge_Remote_Mag
    {
        scope = 2;
        author = "Letlev";
        displayName = "[US] Comp. B (1/2-Pound)";
        descriptionShort = "Half-Pound Composition B Explosive Blocks";
        picture = "\SiP\Addons\sip_un_weapons\Explosives\data\UI\halfpound_compB_ca.paa";
        model = "\WW2\SPE_Assets_m\Weapons\Mines_m\SPE_TNT_Half_Pound.p3d";
        ammo = "SiP_Explosive_compB_halfpound_ammo";
        class Library
        {
            libTextDesc = "";
        };
        mass = 5;
        ACE_Explosives_Placeable = 1;
        useAction = 0;
        ACE_Explosives_SetupObject = "SiP_Explosives_compB_halfpound_place";
        ACE_Explosives_DelayTime = 1.5;
        allowedSlots[] = {901,701};
        class ACE_Triggers
        {
            SupportedTriggers[] = {"Timer","Command","SiP_10cap_detonator_trigger"};
            class Timer
            {
                FuseTime = 0.5;
            };
            class Command
            {
                FuseTime = 0.5;
            };
            class SiP_10cap_detonator_trigger: Command{};
        };
    };
    class SiP_Explosives_compB_1pound_mag: SiP_Explosives_compB_halfpound_mag
    {
        displayName = "[US] Comp. B (1-Pound)";
        descriptionShort = "1-Pound Composition B Explosive Blocks";
        picture = "\SiP\Addons\sip_un_weapons\Explosives\data\UI\1pound_compB_ca.paa";
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_OnePound";
        ammo = "SiP_Explosive_compB_1pound_ammo";
        ACE_Explosives_SetupObject = "SiP_Explosives_compB_1pound_place";
        mass = 10;
    };
    class SiP_Explosives_compB_2halfpound_mag: SiP_Explosives_compB_1pound_mag
    {
        displayName = "[US] Comp. B (2 1/2-Pounds)";
        descriptionShort = "2 Half-Pound Composition B Explosive Blocks";
        picture = "\SiP\Addons\sip_un_weapons\Explosives\data\UI\2halfpound_compB_ca.paa";
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualHalfPound";
        ammo = "SiP_Explosive_compB_2halfpound_ammo";
        ACE_Explosives_SetupObject = "SiP_Explosives_compB_2halfpound_place";
    };
    class SiP_Explosives_compB_2pound_mag: SiP_Explosives_compB_halfpound_mag
    {
        displayName = "[US] Comp. B (2-Pound)";
        descriptionShort = "2-Pound Composition B Explosive Blocks";
        picture = "\SiP\Addons\sip_un_weapons\Explosives\data\UI\2pound_compB_ca.paa";
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualOnePound";
        ammo = "SiP_Explosive_compB_2pound_ammo";
        ACE_Explosives_SetupObject = "SiP_Explosives_compB_1pound_place";
        mass = 15;
    };
    class SiP_Explosives_compB_4pound_mag: SiP_Explosives_compB_halfpound_mag
    {
        displayName = "[US] Comp. B (4-Pound)";
        descriptionShort = "4-Pound Composition B Explosive Blocks";
        picture = "\SiP\Addons\sip_un_weapons\Explosives\data\UI\4pound_compB_ca.paa";
        model = "\WW2\SPE_Assets_m\Weapons\Mines_m\SPE_TNT_4pound.p3d";
        ammo = "SiP_Explosive_compB_4pound_ammo";
        ACE_Explosives_SetupObject = "SiP_Explosives_compB_4pound_place";
        mass = 20;
    };
};

class CfgAmmo
{
    class DemoCharge_Remote_Ammo;

    class SiP_Explosive_compB_halfpound_ammo: DemoCharge_Remote_Ammo
    {
        ace_explosives_Explosive = "SiP_Explosive_compB_halfpound_ammo";
        ace_explosives_magazine = "SiP_Explosives_compB_halfpound_mag";
        ACE_explodeOnDefuse = 0.02;
        ace_explosives_defuseObjectPosition[] = {-1.415,0,0.12};
        ace_explosives_size = 0;
        hit = 625;
        indirectHit = 625;
        IndirecthitRange = 3;
        visibleFire = 2;
        audibleFire = 0.25;
        visibleFireTime = 5;
        model = "\WW2\SPE_Assets_m\Weapons\Mines_m\SPE_TNT_Half_Pound.p3d";
        mineModelDisabled = "\fow\fow_weapons\explosives\HLS_TNT_US_HalfPound.p3d";
        whistleDist = 15;
        explosionTime = 8;
        timeToLive = 10;
        defaultMagazine = "SiP_Explosives_compB_halfpound_mag";
        oskolki[] = {40,100,30};
    };
    class SiP_Explosive_compB_1pound_ammo: SiP_Explosive_compB_halfpound_ammo
    {
        ace_explosives_Explosive = "SiP_Explosive_compB_1pound_ammo";
        ace_explosives_magazine = "SiP_Explosives_compB_1pound_mag";
        hit = 1250;
        indirectHit = 1250;
        indirectHitRange = 4;
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_OnePound";
        mineModelDisabled = "\fow\fow_weapons\explosives\HLS_TNT_US_OnePound";
        defaultMagazine = "SiP_Explosives_compB_1pound_mag";
        whistleDist = 10;
        mineInconspicuousness = 3;
    };
    class SiP_Explosive_compB_2halfpound_ammo: SiP_Explosive_compB_1pound_ammo
    {
        ace_explosives_Explosive = "SiP_Explosive_compB_2halfpound_ammo";
        ace_explosives_magazine = "SiP_Explosives_compB_2halfpound_mag";
        hit = 1250;
        indirectHit = 1250;
        indirectHitRange = 4;
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualHalfPound";
        mineModelDisabled = "\fow\fow_weapons\explosives\HLS_TNT_US_DualHalfPound";
        defaultMagazine = "SiP_Explosives_compB_2halfpound_mag";
    };
    class SiP_Explosive_compB_2pound_ammo: SiP_Explosive_compB_1pound_ammo
    {
        ace_explosives_Explosive = "SiP_Explosive_compB_2pound_ammo";
        ace_explosives_magazine = "SiP_Explosives_compB_2pound_mag";
        hit = 2500;
        indirectHit = 2500;
        indirectHitRange = 6;
        model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualOnePound";
        mineModelDisabled = "\fow\fow_weapons\explosives\HLS_TNT_US_DualOnePound";
        defaultMagazine = "SiP_Explosives_compB_2pound_mag";
    };
    class SiP_Explosive_compB_4pound_ammo: SiP_Explosive_compB_1pound_ammo
    {
        ace_explosives_Explosive = "SiP_Explosive_compB_4pound_ammo";
        ace_explosives_magazine = "SiP_Explosives_compB_4pound_mag";
        hit = 5000;
        indirectHit = 5000;
        indirectHitRange = 8;
        model = "\WW2\Assets_m\Weapons\Mines_m\IF_TNT_4Pound.p3d";
        mineModelDisabled = "\WW2\SPE_Assets_m\Weapons\Mines_m\SPE_TNT_4pound.p3d";
        defaultMagazine = "SiP_Explosives_compB_4pound_mag";
        mineInconspicuousness = 4;
    };
};