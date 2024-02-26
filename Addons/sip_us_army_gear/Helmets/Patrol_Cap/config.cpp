class cfgPatches
{
    class SiP_Patch_N1951_patrol_cap
    {
        addonRootClass = "SiP_Patch_US_Army_Headgear";
        requiredAddons[] = 
        {
            "simc_uaf_68_core"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_m51_cap",
            "SiP_m50_cap",
            "SiP_m50_cap_bent",
            "SiP_m50_cap_folded"
        };
    };
};

class cfgWeapons
{
    class H_Simc_Hat_Patrol_od7;
    class cap_hbt;
    class cap_hbt_2;
    class cap_hbt_3;

    class SiP_m51_cap: H_Simc_Hat_Patrol_od7
    {
        author = "Letlev";
        displayName = "[US] M1951 Field Cap";
        hiddenSelectionsTextures[] = {"\simc_uaf_69\data\hats_od7_co.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_patrol_51_col_ca.paa"};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_m1951_cap";
            rank = "empty";
        };
    };

    class SiP_m51_cap_colonel: SiP_m51_cap
    {
        hiddenSelectionsTextures[] = {"\simc_uaf_69\data\hats_od7_co.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_patrol_51_col_ca.paa"};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_m1951_cap";
            rank = "Col";
        };
    };
    class SiP_m51_cap_lt_colonel: SiP_m51_cap_colonel
    {
        scope = 1;
        displayName = "[US] M1951 Field Cap (Lt. Col)";
        hiddenSelectionsTextures[] = {"\simc_uaf_69\data\hats_od7_co.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_patrol_51_col_ca.paa"};
    };
    class SiP_m51_cap_Major: SiP_m51_cap_colonel
    {
        scope = 1;
        displayName = "[US] M1951 Field Cap (Major)";
        hiddenSelectionsTextures[] = {"\simc_uaf_69\data\hats_od7_co.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_patrol_51_major_ca.paa"};
    };

    class SiP_m50_cap: cap_hbt
    {
        author = "Letlev";
        displayName = "[US] M1950 Field Cap";
        allowedFacewear[] = {"",1};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_m1950_cap";
            style = "standard";
        };
    };
    class SiP_m50_cap_bent: cap_hbt_2
    {
        author = "Letlev";
        displayName = "[US] M1950 Field Cap";
        allowedFacewear[] = {"",1};
        class XtdGearInfo
        {
            model = "u_hssn_SiP_m1950_cap";
            style = "bent";
        };
    };
    class SiP_m50_cap_folded: cap_hbt_3
    {
        author = "Letlev";
        displayName = "[US] M1950 Field Cap";
        allowedFacewear[] = {"",1};
         class XtdGearInfo
        {
            model = "u_hssn_SiP_m1950_cap";
            style = "folded";
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        class u_hssn_SiP_m1950_cap
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "style"
            };
            class style
            {
                label = "Style";
                changeingame = 1;
                changedelay = 1;
                hiddenselection = "camo";
                values[]=
                {
                    "standard",
                    "folded",
                    "bent"
                };
                class standard
                {
                    label = "Standard";
                };
                class folded
                {
                    label = "Folded";
                };
                class bent
                {
                    label = "Bent";
                };
            };
        };

        class u_hssn_SiP_m1951_cap
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "rank"
            };
            class rank
            {
                label = "Rank";
                hiddenselection = "camo";
                values[]=
                {
                    "Empty",
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
        };
    };
};