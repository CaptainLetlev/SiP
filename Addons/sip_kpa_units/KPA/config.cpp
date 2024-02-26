class cfgPatches
{
    class SiP_Patch_kpa_units
    {
        Name = "Suicide Is Painless - Korean War Mod - Korean People's Army Units";
        addonRootClass = "SiP_Patch_KPA";
        requiredAddons[] = 
        {
            "characters_f_vietnam",
            "characters_f_vietnam_02",
            "characters_f_vietnam_03"
        };
        units[] = 
        {
            "SiP_KPA_rifleman1",
            "SiP_KPA_rifleman2",
            "SiP_KPA_smg1",
            "SiP_KPA_smg2",
            "SiP_KPA_machinegunner",
            "SiP_KPA_sniper",
            "SiP_KPA_NCO",
            "SiP_KPA_Officer",
            "SiP_KPA_driver",
            "SiP_KPA_gunner",
            "SiP_KPA_tank_crew",
            "SiP_KPA_tank_commander",
            "SiP_KPA_rifleman3",
            "SiP_KPA_machinegunner2"
        };
        weapons[] = {};
    };
};

class CfgVehicles
{
	class vn_o_men_nva_65_01;
	
	class SiP_KPA_rifleman1: vn_o_men_nva_65_01
	{
		displayName = "Rifleman (Mosin)";
		identityTypes[] = {"LanguageCHI_F","vn_o_asian_viet","Head_Asian"};
		scope = 2;
		side = 0;
		accuracy = 3.9;
		faction = "SiP_KPA";
		editorPreview = "";
		editorCategory = "SiP_KPA_Editor_Category";
		editorSubcategory = "SiP_Infantry_Editor_Subcategory";
		vehicleClass = "SiP_Infantry_vehicle_class";
		genericNames = "rokmen";
		role = "Rifleman";
		icon = "iconManRifleman";
		weapons[] = {"SiP_mosin_m9130","Throw","Put"};
		magazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
		respawnWeapons[] = {"SiP_mosin_m9130","Throw","Put"};
		respawnMagazines[] = {"SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag","SiP_mosin_5_mag"};
		allowedHeadgear[] = {"SiP_kpa_cap"};
		headgearList[] = {"SiP_kpa_cap",1};
		linkedItems[] = {"SiP_kpa_cap","SiP_KPA_fieldbelt","SiP_KPA_Mosin_Pouches_nvg_slot"};
		respawnLinkedItems[] = {"SiP_kpa_cap","SiP_KPA_fieldbelt","SiP_KPA_Mosin_Pouches_nvg_slot"};
		items[] = {"vn_o_item_firstaidkit"};
		respawnItems[] = {"vn_o_item_firstaidkit"};
		backpack = "SiP_KPA_backpack";
		uniformClass = "vn_o_uniform_nva_army_01_01";
	};
	class SiP_KPA_rifleman2: SiP_KPA_rifleman1
	{
		displayName = "Rifleman (SVT)";
		weapons[] = {"SiP_svt40","Throw","Put"};
		magazines[] = {"SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag"};
		respawnWeapons[] = {"SiP_svt40","Throw","Put"};
		respawnMagazines[] = {"SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag","SiP_svt_10_mag"};
		linkedItems[] = {"SiP_kpa_cap","SiP_KPA_svtbelt"};
		respawnLinkedItems[] = {"SiP_kpa_cap","SiP_KPA_svtbelt"};
		backpack = "SiP_KPA_backpack_svt";
	};
	class SiP_KPA_rifleman3: SiP_KPA_rifleman1
	{
		displayName = "Rifleman (Type 99)";
		weapons[] = {"SiP_type99","Throw","Put"};
		magazines[] = {"SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag"};
		respawnWeapons[] = {"SiP_type99","Throw","Put"};
		respawnMagazines[] = {"SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag","SiP_arisaka_5_mag"};
	};
	class SiP_KPA_smg1: SiP_KPA_rifleman1
	{
		displayName = "SMG-Soldier (PPSh)";
		cost = 115000;
		threat[] = {0.7,0.1,0.1};
		icon = "iconManSMG";
		role = "Assault";
		weapons[] = {"SiP_ppsh41","Throw","Put"};
		magazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag"};
		respawnWeapons[] = {"SiP_ppsh41","Throw","Put"};
		respawnMagazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag"};
		linkedItems[] = {"SiP_kpa_cap","SiP_KPA_fieldbelt","SiP_KPA_PPSh_Pouches_nvg_slot"};
		respawnLinkedItems[] = {"SiP_kpa_cap","SiP_KPA_fieldbelt","SiP_KPA_PPSh_Pouches_nvg_slot"};
		backpack = "SiP_KPA_backpack_ppsh";
	};
	class SiP_KPA_smg2: SiP_KPA_smg1
	{
		displayName = "SMG-Soldier (PPS)";
		weapons[] = {"SiP_pps43","Throw","Put"};
		magazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag"};
		respawnWeapons[] = {"SiP_pps43","Throw","Put"};
		respawnMagazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag"};
		backpack = "SiP_KPA_backpack_pps";
	};
	class SiP_KPA_machinegunner: SiP_KPA_smg1
	{
		displayName = "Machinegunner (DP28)";
		icon = "iconManMG";
		role = "MachineGunner";
		cost = 125000;
		threat[] = {1,0.1,0.4};
		weapons[] = {"SiP_dp28","Throw","Put"};
		magazines[] = {"vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag"};
		respawnWeapons[] = {"SiP_dp28","Throw","Put"};
		respawnMagazines[] = {"vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag","vn_dp28_mag"};
		linkedItems[] = {"SiP_kpa_cap","SiP_KPA_fieldbelt","SiP_KPA_PPSh_Pouches_nvg_slot"};
		respawnLinkedItems[] = {"SiP_kpa_cap","SiP_KPA_fieldbelt","SiP_KPA_PPSh_Pouches_nvg_slot"};
		backpack = "SiP_KPA_backpack_dp28";
	};
	class SiP_KPA_machinegunner2: SiP_KPA_machinegunner
	{
		displayName = "Machinegunner (ZB26)";
		weapons[] = {"SiP_ZB26","Throw","Put"};
		magazines[] = {"SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag"};
		respawnWeapons[] = {"SiP_ZB26","Throw","Put"};
		respawnMagazines[] = {"SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag","SiP_ZB26_20_mag"};
		linkedItems[] = {"SiP_kpa_cap","EAW_ZB_Bandolier"};
		respawnLinkedItems[] = {"SiP_kpa_cap","EAW_ZB_Bandolier"};
		backpack = "SiP_PVA_backpack_ZB26";
	};
	class SiP_KPA_sniper: SiP_KPA_rifleman1
	{
		displayName = "Sniper";
		role = "Marksman";
		cost = 350000;
		accuracy = 3.9;
		weapons[] = {"SiP_mosin_pu","Throw","Put"};
		respawnWeapons[] = {"SiP_mosin_pu","Throw","Put"};
	};
	class SiP_KPA_nco: SiP_KPA_smg2
	{
		displayName = "NCO";
		icon = "iconManLeader";
		cost = 115000;
		weapons[] = {"SiP_pps43","SiP_tt33","Throw","Put"};
		magazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
		respawnWeapons[] = {"SiP_pps43","SiP_tt33","Throw","Put"};
		respawnMagazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
	};
	class SiP_KPA_Officer: SiP_KPA_nco
	{
		displayName = "Officer";
		icon = "iconManOfficer";
		cost = 600000;
		model = "\NORTH\NF_Uniforms\Russian_Uniform\obr35_gimnasterka.p3d";
		hiddenSelections[] = {"Camo","Camo1"};
		hiddenSelectionsTextures[] = 
        {
            "\SiP\Addons\sip_kpa_gear\uniforms\data\textures\kpa_officer_uniform_top_co.paa",
            "\SiP\Addons\sip_kpa_gear\uniforms\data\textures\kpa_officer_uniform_lower_co.paa"
        };
		uniformClass = "SiP_KPA_Officer_Uniform";
		weapons[] = {"SiP_nagant_revolver","Throw","Put"};
		magazines[] = {"vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag"};
		respawnWeapons[] = {"SiP_nagant_revolver","Throw","Put"};
		respawnMagazines[] = {"vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag","vn_m1895_mag"};
		allowedHeadgear[] = {"SiP_KPA_officer_cap"};
		headgearList[] = {"SiP_KPA_officer_cap",1};
		linkedItems[] = {"SiP_KPA_officer_cap","V_NORTH_SOV_Belt_Officer"};
		respawnLinkedItems[] = {"SiP_KPA_officer_cap","V_NORTH_SOV_Belt_Officer"};
		backpack = "";
	};
	class SiP_KPA_gunner: SiP_KPA_smg1
	{
		displayName = "Gunner";
		accuracy = 3.9;
		icon = "iconMan";
		editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
		weapons[] = {"SiP_ppsh41","Throw","Put"};
		magazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
		respawnWeapons[] = {"SiP_ppsh41","Throw","Put"};
		respawnMagazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
	};
	class SiP_KPA_Driver: SiP_KPA_gunner
	{
		displayName = "Driver";
		weapons[] = {"SiP_pps43","Throw","Put"};
		magazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag"};
		respawnWeapons[] = {"SiP_pps43","Throw","Put"};
		respawnMagazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag"};
		backpack = "SiP_KPA_backpack_pps";
	};
	class SiP_KPA_tank_crew: SiP_KPA_rifleman1
	{
		displayName = "Tank Crew";
		model = "\NORTH\NF_Uniforms\Telogreika\Telogreika_obr43.p3d";
		uniformClass = "U_NORTH_SOV_Obr43_W_Telogreika_Private_2";
		hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Uniforms\data\Obr32_telogreika\obr32_w_telogreika_5_CO","\NORTH\NF_SOV_Uniforms\data\Obr43_gimnasterka\infantry\Obr43_Gimnasterka_1_CO"};
		role = "Crewman";
		icon = "iconManTankcrew";
		cost = 90000;
		camouflage = 1.6;
		editorSubcategory = "SiP_Vehicle_Crews_Editor_Subcategory";
		weapons[] = {"SiP_ppsh41","Throw","Put"};
		magazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
		respawnweapons[] = {"SiP_ppsh41","Throw","Put"};
		respawnmagazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag"};
		backpack = "";
		headgearList[] = {"H_NORTH_SOV_Tankerhelmet_dustgoggles"};
		linkedItems[] = {"H_NORTH_SOV_Tankerhelmet_dustgoggles","V_NORTH_SOV_Belt_Late_SMG_3"};
		respawnLinkedItems[] = {"H_NORTH_SOV_Tankerhelmet_dustgoggles","V_NORTH_SOV_Belt_Late_SMG_3"};
	};
	class SiP_KPA_tank_commander: SiP_KPA_tank_crew
	{
		displayName = "Tank Commander";
		model = "\NORTH\NF_Uniforms\Telogreika\Telogreika_obr43.p3d";
		uniformClass = "U_NORTH_SOV_Obr43_W_Telogreika_Staff_Sergeant";
		hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Uniforms\data\Obr32_telogreika\obr32_w_telogreika_6_CO","\NORTH\NF_SOV_Uniforms\data\Obr43_gimnasterka\infantry\Obr43_Gimnasterka_starshiy_serzhant_1_CO"};
		weapons[] = {"SiP_ppsh41","SiP_tt33","Throw","Put"};
		magazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
		respawnweapons[] = {"SiP_ppsh41","SiP_tt33","Throw","Put"};
		respawnmagazines[] = {"vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_ppsh41_35_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
		headgearList[] = {"vn_o_helmet_tsh3_01"};
		linkedItems[] = {"vn_o_helmet_tsh3_01","V_NORTH_SOV_Belt_Pistol_5"};
		respawnLinkedItems[] = {"vn_o_helmet_tsh3_01","V_NORTH_SOV_Belt_Pistol_5"};
	};
	class SiP_KPA_smg1_w: SiP_KPA_rifleman1
	{
		displayName = "SMG-Soldier (PPSh)";
		scope = 1;
		editorSubcategory = "SiP_Infantry_w_Editor_Subcategory";
		cost = 115000;
		threat[] = {0.7,0.1,0.1};
		icon = "iconManSMG";
		role = "Assault";
		model = "\NORTH\NF_Uniforms\Telogreika\Telogreika_obr43.p3d";
		hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Uniforms\data\Obr32_telogreika\obr32_w_telogreika_3_CO",""};
		weapons[] = {"SiP_ppsh41","Throw","Put"};
		magazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag"};
		respawnWeapons[] = {"SiP_ppsh41","Throw","Put"};
		respawnMagazines[] = {"vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag","vn_ppsh41_71_mag"};
		allowedHeadgear[] = {"H_NORTH_SOV_Obr40_Ushanka_SBD_4"};
		headgearList[] = {"H_NORTH_SOV_Obr40_Ushanka_SBD_4",1};
		linkedItems[] = {"H_NORTH_SOV_Obr40_Ushanka_SBD_4","V_NORTH_SOV_Belt_Late_SMG_4"};
		respawnLinkedItems[] = {"H_NORTH_SOV_Obr40_Ushanka_SBD_4","V_NORTH_SOV_Belt_Late_SMG_4"};
		backpack = "SiP_KPA_backpack_ppsh";
		uniformClass = "U_NORTH_SOV_Obr32_W_Telogreika_3";
	};
	class SiP_KPA_nco_w: SiP_KPA_smg1_w
	{
		displayName = "NCO";
		icon = "iconManLeader";
		cost = 115000;
		model = "\NORTH\NF_Uniforms\Telogreika\Telogreika_obr43.p3d";
		hiddenSelectionsTextures[] = {"\NORTH\NF_SOV_Uniforms\data\Obr32_telogreika\obr32_w_telogreika_3_CO","\NORTH\NF_SOV_Uniforms\data\Obr43_gimnasterka\infantry\Obr43_Gimnasterka_starshina_1_CO"};
		uniformClass = "U_NORTH_SOV_Obr43_W_Telogreika_Sergeant_2";
		weapons[] = {"SiP_pps43","SiP_tt33","Throw","Put"};
		magazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
		respawnWeapons[] = {"SiP_pps43","Throw","Put"};
		respawnMagazines[] = {"vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_pps_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag","vn_tt33_mag"};
		linkedItems[] = {"SiP_KPA_fieldbelt"};
		respawnLinkedItems[] = {"SiP_KPA_fieldbelt"};
		backpack = "SiP_pps_pistol_belt_backpack";
	};
};