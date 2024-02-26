class cfgPatches
{
    class SiP_Patch_mat49
    {
        addonRootClass = "SiP_Patch_un_weapons";
        requiredAddons[] = 
        {
            "weapons_f_vietnam",
            "weapons_f_vietnam_c",
            "weapons_f_vietnam_02",
            "weapons_f_vietnam_02_c",
            "weapons_f_vietnam_03",
            "weapons_f_vietnam_03_c",
            "vn_weapons"
        };
        units[] = {};
        weapons[] = 
        {
            "SiP_mat49"
        };
    };
};

class cfgWeapons
{
    class vn_smg;

    class vn_mat49: vn_smg
    {
        class FullAuto;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
    };
    class vn_mat49_f: vn_mat49
    {
        class FullAuto;
        class aicqb;
        class aiclose;
        class aimedium;
        class aifar;
    };

    class SiP_mat49: vn_mat49
    {
        author = "Letlev";
        displayName = "MAT-49";
        class FullAuto: FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class aicqb: aicqb
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class aiclose: aiclose
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 60;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 1;
            maxRange = 160;
            maxRangeProbably = 0.5;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aimedium
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 100;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 230;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 250;
        };
        class aifar: aifar
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 150;
            minRangeProbab = 0.5;
            midRange = 230;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbab = 0.5;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 350;
        };
    };
    
    class SiP_mat49_folded: vn_mat49_f
    {
        author = "Letlev";
        displayName = "MAT-49";
        class FullAuto: FullAuto
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class aicqb: aicqb
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
        };
        class aiclose: aiclose
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 60;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 1;
            maxRange = 160;
            maxRangeProbably = 0.5;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 100;
        };
        class aimedium: aimedium
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 100;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 1;
            maxRange = 230;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 250;
        };
        class aifar: aifar
        {
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                SoundSetShot[] = {"Rogue9_Shot_SoundSet","vn_9mm_smg_fullauto_tails_soundset"};
            };
            burst = 3;
            showToPlayer = 0;
            dispersion = 0.0126;
            minRange = 150;
            minRangeProbab = 0.5;
            midRange = 230;
            midRangeProbab = 1;
            maxRange = 250;
            maxRangeProbab = 0.5;
            aiRateOfFire = 2e-06;
            aiRateOfFireDistance = 350;
        };
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {	
        class SiP_mat49
        {
            model = "W_hssn_SiP_weapon_mat49_folding_stock";
            stock = "unfold_stock";
        };
        class SiP_mat49_folded
        {
            model = "W_hssn_SiP_weapon_mat49_folding_stock";
            stock = "fold_stock";
        };
    };
};

class XtdGearModels
{
    class CfgWeapons 
    {		
        //Folding Stock
        class W_hssn_SiP_weapon_mat49_folding_stock
        {
            label = "";
            author = "Letlev";
            options[]=
            {
                "stock"
            };
            class stock
            {
                label = "Stock";
                changeingame = 1;
                changedelay = 1;
                values[]=
                {
                    "unfold_stock",
                    "fold_stock"
                };
                class unfold_stock
                {
                    label = "Full";
                    actionLabel = "Unfold Stock";
                    icon = "\vn\weapons_f_vietnam\ui\icon_vn_mat49_ca.paa";
                };
                class fold_stock
                {
                    label = "Folded";
                    actionLabel = "Fold Stock";
                    icon = "\vn\weapons_f_vietnam\ui\icon_vn_mat49_f_ca.paa";
                    
                };
            };
        };
    };
};