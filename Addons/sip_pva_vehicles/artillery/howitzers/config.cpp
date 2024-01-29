class cfgPatches
{
    class SiP_Patch_PVA_Howitzers
    {
        addonRootClass = "SiP_Patch_pva_artillary";
        requiredAddons[] = 
        {
            "static_f_vietnam_c",
            "weapons_v_f_vietnam_c",
            "NORTH_StaticWeapons_cfg"
        };
        units[] = 
        {
            "SiP_ML20_152mm_PVA",
            "SiP_ML20_152mm_KPA",
            "SiP_ML20_152mm_PVA_w"
        };
        weapons[] = 
        {
            "SiP_ML20_152mm_weapon"
        };
        magazines[] = 
        {
            "SiP_30x_152mm_HE",
            "SiP_30x_152mm_SMK"
        };
    };
};

class Mode_SemiAuto;

class cfgWeapons
{
    class mortar_155mm_AMOS;
    class NORTH_wep_152mm_howitzer: mortar_155mm_AMOS
    {
        class Single1;
        class Burst1;
    };

    class SiP_ML20_152mm_weapon: NORTH_wep_152mm_howitzer
    {
        displayName = "ML-20 152mm Howizter";
        magazines[] = 
        {
            "SiP_30x_152mm_HE",
            "SiP_30x_152mm_SMK"
        };
        class GunParticles
        {
            class effect1
            {
                positionName = "usti hlavne";
                directionName = "usti hlavne";
                effectName = "CannonFired";
            };
        };
        reloadTime = 7;
        magazineReloadTime = 7;
        autoReload = 1;
        modes[] = {"Single1","Single2","Single3","Single4","Single5"};
        class Single1: Mode_SemiAuto
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single10";
            sounds[] = {"StandardSound"};
            class BaseSoundModeType;
            class StandardSound: BaseSoundModeType
            {
                soundSetShot[] = {"WW2_cannon_huge_Shot_SoundSet","WW2_cannon_large_Tail_SoundSet"};
            };
            reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
            reloadTime = 7;
            artilleryDispersion = 5.2;
            artilleryCharge = 0.19;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 500;
            midRangeProbab = 0.5;
            maxRange = 930;
            maxRangeProbab = 1;
        };
        class Single2: Single1
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single20";
            artilleryCharge = 0.3;
            artilleryDispersion = 6.2;
            minRange = 800;
            minRangeProbab = 0.2;
            midRange = 1500;
            midRangeProbab = 0.5;
            maxRange = 2300;
            maxRangeProbab = 1;
        };
        class Single3: Single1
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single30";
            artilleryCharge = 0.48;
            artilleryDispersion = 7.2;
            minRange = 2000;
            minRangeProbab = 0.2;
            midRange = 4000;
            midRangeProbab = 0.5;
            maxRange = 6000;
            maxRangeProbab = 1;
        };
        class Single4: Single1
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single40";
            artilleryCharge = 0.8;
            artilleryDispersion = 9;
            minRange = 5000;
            minRangeProbab = 0.2;
            midRange = 10000;
            midRangeProbab = 0.5;
            maxRange = 16500;
            maxRangeProbab = 1;
        };
        class Single5: Single1
        {
            displayName = "$STR_A3_mortar_120mm_AMOS_Single50";
            artilleryCharge = 1;
        };
    };
};

class cfgMagazines
{
    class NORTH_10Shell_152mmHE_152h38_Inf;

    class SiP_30x_152mm_HE: NORTH_10Shell_152mmHE_152h38_Inf
	{
        count = 30;
        ammo = "SPE_S_105L28_Gr38";
    };
    class SiP_30x_152mm_SMK: SiP_30x_152mm_HE
	{
        count = 30;
        ammo = "SPE_S_105L28_Gr38_NB";
    };
};

class cfgVehicles
{
    class vn_howitzer_base;
    class vn_static_m101_base: vn_howitzer_base
    {
        class Turrets;
    };

    class vn_static_m101_02_base: vn_static_m101_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
        class HitPoints;
    };

    class SiP_ML20_152mm_base: vn_static_m101_02_base
    {
        author = "Letlev";
        displayname = "ML-20 Howitzer";
        descriptionShort = "$STR_NORTH_descShortWep152h38";
        icon = "\WW2\Assets_t\Vehicles\Icons_t\Icon_LeFH18_ca.paa";
        model = "\NORTH\NF_Static\152h38\152h38.p3d";
        mapSize = 2;
        scope = 1;
        scopeCurator = 1;
        artilleryScanner = 1;
        availableforsupporttypes[] = {"Artillery"};
        transportSoldier = 0;
        getInRadius = 5;
        hideWeaponsGunner = 1;
        hideWeaponsCargo = 1;
        memoryPointsGetInCargo = "pos_cargo";
        memoryPointsGetInGunner = "pos_gunner";
        ace_dragging_canDrag = 1;
        ace_dragging_canCarry = 0;
        class Damage
        {
            tex[] = {};
            mat[] = {"NORTH\NF_Static\152h38\data\152h38.rvmat","NORTH\NF_Static\152h38\data\152h38_damage.rvmat","NORTH\NF_Static\152h38\data\152h38_destruct.rvmat"};
        };
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"SiP_ML20_152mm_weapon"};
                magazines[] = 
                {
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_HE",
                    "SiP_30x_152mm_SMK"
                };
                memoryPointsGetInGunner = "pos_gunner";
                getInRadius = 5;
                elevationMode = 3;
                minElev = 30;
                maxelev = 90;
                initelev = 45;
                minturn = -180;
                maxturn = 180;
                turretInfoType = "RscWeaponZeroing";
                discreteDistance[] = {100,150,200,250,300,350,400,450,500,550,600,700,800,900,1000,1200,1400,1600,1800,2000};
                discreteDistanceInitIndex = 1;
                gunnerAction = "NORTH_76k02_Gunner";
                selectionFireAnim = "usti hlavne";
                gunnerOpticsModel = "NORTH\NF_vehicles\fin\t26\simple_optics.p3d";
                class ViewOptics
                {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -100;
                    maxAngleY = 100;
                    initFov = 0.174;
                    minFov = 0.0077778;
                    maxFov = 0.14;
                    visionMode[] = {"Normal"};
                    turretInfoType = "RscWeaponRangeArtillery";
                };
                class ViewGunner
                {
                    initAngleX = 0;
                    minAngleX = -30;
                    maxAngleX = 30;
                    initAngleY = 0;
                    minAngleY = -120;
                    maxAngleY = 120;
                    initFov = 0.7;
                    minFov = 0.25;
                    maxFov = 1.1;
                    turretInfoType = "RscWeaponRangeArtillery";
                };
            };
        };
        class AnimationSources: AnimationSources
        {
            class muzzle_source
            {
                source = "reload";
                weapon = "SiP_ML20_152mm_weapon";
            };
            class ReloadAnim
            {
                source = "reload";
                weapon = "SiP_ML20_152mm_weapon";
            };
            class ReloadMagazine
            {
                source = "reloadmagazine";
                weapon = "SiP_ML20_152mm_weapon";
            };
        };
        class HitPoints: HitPoints
        {
            class HitHull
            {
                armor = 1;
                radius = 0.1;
                material = -1;
                name = "firegeo_hull";
                visual = "camo";
                passThrough = 1;
                minimalHit = 0.02;
            };
        };
    };

    class SiP_ML20_152mm_PVA: SiP_ML20_152mm_base
    {
        scope = 2;
        scopeCurator = 2;
        side = 0;
        faction = "SiP_PVA";
        editorCategory = "SiP_PVA_Editor_Category";
        editorSubcategory = "SiP_Artillery_Editor_Subcategory";
        vehicleClass = "SiP_Artillery_vehicle_class";
        crew = "SiP_PVA_gunner";
        typicalCargo[] = {"SiP_PVA_gunner"};
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"NORTH\NF_Static\152H38\data\152H38_CO.paa"};
        editorPreview = "\NORTH\north_editorPreviewsSTC\data\NORTH_SOV_41_152mm1938.jpg";
    };

    class SiP_ML20_152mm_KPA: SiP_ML20_152mm_PVA
    {
        faction = "SiP_KPA";
        editorCategory = "SiP_KPA_Editor_Category";
        editorSubcategory = "SiP_Artillery_Editor_Subcategory";
        vehicleClass = "SiP_Artillery_vehicle_class";
        crew = "SiP_KPA_gunner";
        typicalCargo[] = {"SiP_KPA_gunner"};
    };

    class SiP_ML20_152mm_PVA_w: SiP_ML20_152mm_PVA
    {
        faction = "SiP_PVA_w";
        editorCategory = "SiP_PVA_w_Editor_Category";
        crew = "SiP_PVA_gunner_w";
        typicalCargo[] = {"SiP_PVA_gunner_w"};
        hiddenSelectionsTextures[] = {"NORTH\NF_Static\152H38\data\152H38_winter_2_CO.paa"};
        editorPreview = "\NORTH\north_editorPreviewsSTC\data\NORTH_SOV_W_152mm1938.jpg";
    };
};