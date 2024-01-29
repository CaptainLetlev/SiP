class cfgPatches
{
    class SiP_Patch_un_artillary
    {
        addonRootClass = "SiP_Patch_un_vehicles";
        requiredAddons[] = 
        {
            "static_f_vietnam_c"
        };
        units[] = 
        {
            "SiP_m101_105mm_howitzer",
            "SiP_m101_105mm_howitzer_marines"
        };
        weapons[] = {};
        magazines[] = {};
    };
};

class Mode_SemiAuto;
class Mode_Burst;

class cfgVehicles
{
    class vn_static_m101_base;
    class vn_static_m101_02_base: vn_static_m101_base
    {
        class Turrets;
    };

    class vn_b_army_static_m101_02: vn_static_m101_02_base
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
        class AnimationSources;
    };

    class SiP_m101_105mm_howitzer: vn_static_m101_02_base
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "M101 105mm Howitzer";
        side = 1;
        faction = "SiP_US_Army";
        editorCategory = "SiP_US_Army_Editor_Category";
        editorSubcategory = "SiP_Artillery_Editor_Subcategory";
        vehicleClass = "SiP_Artillery_vehicle_class";
        crew = "SiP_US_Army_gunner";
        typicalCargo[] = {"SiP_US_Army_gunner"};
    };

    class SiP_m101_105mm_howitzer_marines: SiP_m101_105mm_howitzer
    {
        faction = "SiP_US_Marines";
        editorCategory = "SiP_US_Marines_Editor_Category";
        crew = "SiP_US_Marines_gunner";
        typicalCargo[] = {"SiP_US_Marines_gunner"};
    };
};