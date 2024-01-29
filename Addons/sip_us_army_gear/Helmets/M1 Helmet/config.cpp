class cfgPatches
{
	class SiP_Patch_M1_helmet
	{
		addonRootClass = "SiP_Patch_US_Army_Headgear";
		requiredAddons[] = 
		{
			"simc_uaf_44_gare",
			"WW2_Assets_c_Characters_Americans_c_US_Army_Gear"
		};
		units[] = {};
		weapons[] = {};
	};
};

class cfgWeapons
{
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};

	class H_Simc_M1_base: H_HelmetB
	{
		class ItemInfo;
	};

	class H_Simc_M1_Helmet_ns: H_Simc_M1_base
	{
		class ItemInfo;
	};

	class H_Simc_M1_fur;
	class H_Simc_M1_fur_op: H_Simc_M1_fur
	{
		class ItemInfo;
	};

	class SiP_M1_Helmet_NS: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","",""};
		allowedFacewear[] = {"",1};
	};
	class SiP_M1_Helmet_NS_corporal: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 01 (Cpl)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa"};
	};
	class SiP_M1_Helmet_NS_sergeant: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 02 (Sgt)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa"};
	};
	class SiP_M1_Helmet_NS_sgt_1stclass: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 03 (SFC)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa"};
	};
	class SiP_M1_Helmet_NS_master_sgt: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 04 (MSG)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa"};
	};
	class SiP_M1_Helmet_NS_first_sgt: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 05 (1SG)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa"};
	};
	class SiP_M1_Helmet_NS_2ndlt: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 06 (2nd Lt)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa"};
	};
	class SiP_M1_Helmet_NS_1stlt: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 07 (1st Lt)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa"};
	};
	class SiP_M1_Helmet_NS_captain: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 08 (Captain)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"};
	};
	class SiP_M1_Helmet_NS_major: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 09 (Major)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa"};
	};
	class SiP_M1_Helmet_NS_ltCol: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 10 (Lt. Col)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa"};
	};
	class SiP_M1_Helmet_NS_Col: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 11 (Col)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\simc_uaf_44\stencils\US_Helmet_Colonel_ca.paa"};
	};
	class SiP_M1_Helmet_NS_medic: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet (Medic)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_med_co.paa","","","","",""};
	};

	class SiP_M1_Helmet_pile: H_Simc_M1_fur_op
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Pile Helmet";
		hiddenSelections[] = {"shell","cover","right","rear","left","fore","ben"};
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","","\simc_uaf_51\data\hat_furfag_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"shell","cover","right","rear","left","fore","ben"};
		};
	};
	class SiP_M1_Helmet_pile_cpl: SiP_M1_Helmet_pile
	{
		displayName = "[US] 1951 M1 Pile Helmet 01 (Cpl)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_sgt: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 02 (Sgt)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_sfc: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 03 (SFC)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_msg: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 04 (MSG)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_first_sgt: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 05 (1SG)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_2lt: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 06 (2nd Lt)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_1lt: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 07 (1st Lt)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_captain: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 08 (Captain)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_major: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 09 (Major)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_ltcol: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 10 (Lt. Col)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	class SiP_M1_Helmet_pile_col: SiP_M1_Helmet_pile_cpl
	{
		displayName = "[US] 1951 M1 Pile Helmet 11 (Col)";
		hiddenSelectionsTextures[] = {"\simc_uaf_44\data\pot_co.paa","","","","","\simc_uaf_44\stencils\US_Helmet_Colonel_ca.paa","\simc_uaf_51\data\hat_furfag_co.paa"};
	};
	
	class SiP_M1_Helmet_NS_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa",""};
		};
	};
	class SiP_M1_Helmet_NS_corporal_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 01 (Cpl)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_sergeant_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 02 (Sgt)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_sgt_1stclass_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 03 (SFC)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_master_sgt_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 04 (MSG)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_first_sgt_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 05 (1SG)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_2ndlt_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 06 (2nd Lt)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_1stlt_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 07 (1st Lt)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_captain_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 08 (Captain)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_major_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 09 (Major)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_ltcol_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 10 (Lt.Col)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa"};
		};
	};
	class SiP_M1_Helmet_NS_col_7id: H_Simc_M1_Helmet_ns
	{
		author = "Letlev";
		displayName = "[US] 1951 M1 Helmet 7ID 11 (Col)";
		picture = "\simc_uaf_44_preview\icons\helmet_7ID.paa";
		hiddenSelections[] = {"cover","right","rear","left","fore"};
		hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\simc_uaf_44\stencils\US_Helmet_Colonel_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","right","rear","left","fore"};
			hiddenSelectionsTextures[] = {"","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_7id_ca.paa","\simc_uaf_44\stencils\US_Helmet_Colonel_ca.paa"};
		};
	};
};