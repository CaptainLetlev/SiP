class cfgPatches
{
	class SiP_Patch_M2_helmet
	{
		addonRootClass = "SiP_Patch_US_Army_Headgear";
		requiredAddons[] = 
		{
			"simc_uaf_44_gare"
		};
		units[] = {};
		weapons[] = {};
	};
};

class cfgWeapons
{
	class H_Simc_M1_base;
	class H_Simc_M1_Helmet: H_Simc_M1_base
	{
		class ItemInfo;
	};
	
	class H_Simc_M2_Early_Clear_Helmet: H_Simc_M1_Helmet
	{
		class ItemInfo;
	};

	class H_Simc_M2_Early_Clear_Helmet_3: H_Simc_M2_Early_Clear_Helmet
	{
		class ItemInfo;
	};

	class SiP_M1C_Helmet_1bt_187rct: H_Simc_M2_Early_Clear_Helmet_3
	{
		author = "Letlev";
		displayName = "[US] M1C Helmet 1Bn 187RCT";
		hiddenSelections[] = {"cover","scrim","right","rear","left","fore","jokes","ifak"};
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"cover","scrim","right","rear","left","fore","jokes","ifak"};
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_cpl_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 01 (Cpl)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_sgt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 02 (Sgt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_sgt_1stclass_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 03 (SFC)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_master_sgt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 04 (MSG)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_first_sgt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 05 (1SG)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_2ndlt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 06 (2nd Lt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_1stlt_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 07 (1st Lt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_captain_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 08 (Captain)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_major_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 09 (Major)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_ltcol_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 1Bn 187RCT 10 (Lt.Col)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};

	class SiP_M1C_Helmet_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_cpl_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 01 (Cpl)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_sgt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 02 (Sgt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_sgt_1stclass_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 03 (SFC)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_master_sgt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 04 (MSG)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_first_sgt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 05 (1SG)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_2ndlt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 06 (2nd Lt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_1stlt_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 07 (1st Lt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_captain_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 08 (Captain)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_major_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 09 (Major)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_ltcol_2bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 2Bn 187RCT 10 (Lt.Col)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};

	class SiP_M1C_Helmet_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_cpl_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 01 (Cpl)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_corporal_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_sgt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 02 (Sgt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sergeant_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_sgt_1stclass_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 03 (SFC)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_sgt_fc_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_master_sgt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 04 (MSG)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_master_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_first_sgt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 05 (1SG)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\SiP\Addons\sip_us_army_gear\Helmets\textures\ranks\us_helm_51_first_sgt_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_2ndlt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 06 (2nd Lt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_2ndLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_1stlt_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 07 (1st Lt)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\WW2\Assets_t\Characters\Americans_t\WW2_Badges\US_Helm_1stLieut_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_captain_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 08 (Captain)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helm_Captain_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_major_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 09 (Major)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_Major_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_ltcol_3bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		displayName = "[US] M1C Helmet 3Bn 187RCT 10 (Lt.Col)";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","\simc_uaf_44\stencils\US_Helmet_LtCol_ca.paa","\simc_uaf_44\data\pot_co.paa",""};
		};
	};

	class SiP_M1C_Helmet_NS_1bt_187rct: SiP_M1C_Helmet_1bt_187rct
	{
		scope = 1;
		displayName = "[US] M1C Helmet NS 1Bn 187RCT";
		model = "\simc_uaf_44\helmet_m2_2.p3d";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\simc_uaf_44\helmet_m2_2.p3d";
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_1bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_NS_2bt_187rct: SiP_M1C_Helmet_NS_1bt_187rct
	{
		scope = 1;
		displayName = "[US] M1C Helmet NS 2Bn 187RCT";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_2bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
	class SiP_M1C_Helmet_NS_3bt_187rct: SiP_M1C_Helmet_NS_1bt_187rct
	{
		scope = 1;
		displayName = "[US] M1C Helmet NS 3Bn 187RCT";
		hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\SiP\Addons\sip_us_army_gear\Helmets\textures\units\helmet_3bt_187rct_ca.paa","","\simc_uaf_44\data\pot_co.paa",""};
		};
	};
};
