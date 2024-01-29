class cfgPatches
{
	class SiP_Patch_PVA
	{
		Name = "Suicide Is Painless - Korean War Mod - People's Volunteer Army";
		Author = "Letlev";
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgGroups
{
	class East
	{
		class SiP_PVA_group
		{
			name = "People's Volunteer Army";
			class PVA_Infantry_Squads
			{
				name = "Infantry Squads";
				class PVA_SMG_Squad
				{
					name = "SMG Squad";
					side = 0;
					faction = "SiP_PVA";
					rarityGroup = 0.8;
					class Unit0
					{
						side = 0;
						vehicle = "SiP_PVA_nco";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "SiP_PVA_machinegunner";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "SiP_PVA_machinegunner2";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "SiP_PVA_smg1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "SiP_PVA_smg1";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "SiP_PVA_smg1";
						rank = "PRIVATE";
						position[] = {-3,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "SiP_PVA_smg4";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "SiP_PVA_smg2";
						rank = "PRIVATE";
						position[] = {-7,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "SiP_PVA_smg2";
						rank = "PRIVATE";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "SiP_PVA_smg1";
						rank = "PRIVATE";
						position[] = {-11,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "SiP_PVA_smg3";
						rank = "PRIVATE";
						position[] = {-13,0,0};
					};
				};
				class PVA_Rifle_Squad
				{
					name = "Rifle Squad";
					side = 0;
					faction = "SiP_PVA";
					rarityGroup = 0.8;
					class Unit0
					{
						side = 0;
						vehicle = "SiP_PVA_nco";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman2";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman3";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "SiP_PVA_machinegunner2";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman1";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman6";
						rank = "PRIVATE";
						position[] = {-3,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman4";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman1";
						rank = "PRIVATE";
						position[] = {-7,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman7";
						rank = "PRIVATE";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman9";
						rank = "PRIVATE";
						position[] = {-11,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman1";
						rank = "PRIVATE";
						position[] = {-13,0,0};
					};
				};
				class PVA_Mixed_Squad
				{
					name = "Mixed Arms Squad";
					side = 0;
					faction = "SiP_PVA";
					rarityGroup = 0.8;
					class Unit0
					{
						side = 0;
						vehicle = "SiP_PVA_nco";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "SiP_PVA_machinegunner";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman9";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "SiP_PVA_smg1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "SiP_PVA_smg1";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "SiP_PVA_smg1";
						rank = "PRIVATE";
						position[] = {-3,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman7";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman1";
						rank = "PRIVATE";
						position[] = {-7,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman6";
						rank = "PRIVATE";
						position[] = {-9,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "SiP_PVA_rifleman2";
						rank = "PRIVATE";
						position[] = {-11,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "SiP_PVA_smg2";
						rank = "PRIVATE";
						position[] = {-13,0,0};
					};
				};
			};
			class PVA_Infantry_platoons
			{
				name = "Infantry Platoons";
				class PVA_Infantry_platoon
				{
					name = "Rifle Platoon";
					side = 0;
					faction = "SiP_PVA";
					rarityGroup = 0.8;
					class unit_1
					{
						side = 0;
						rank = "LIEUTENANT";
						position[] = {0,-5,0};
						vehicle = "SiP_PVA_Officer";
					};
					class unit_2
					{
						side = 0;
						rank = "SERGEANT";
						position[] = {0,-10,0};
						vehicle = "SiP_PVA_nco";
					};
					class unit_3
					{
						side = 0;
						rank = "SERGEANT";
						position[] = {0,-15,0};
						vehicle = "SiP_PVA_rifleman7";
					};
					class unit_4
					{
						side = 0;
						rank = "CORPORAL";
						position[] = {0,-20,0};
						vehicle = "SiP_PVA_smg1";
					};
					class unit_5
					{
						side = 0;
						rank = "CORPORAL";
						position[] = {0,-25,0};
						vehicle = "SiP_PVA_rifleman2";
					};
					class unit_6
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-30,0};
						vehicle = "SiP_PVA_rifleman5";
					};
					class unit_7
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-35,0};
						vehicle = "SiP_PVA_smg1";
					};
					class unit_8
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-40,0};
						vehicle = "SiP_PVA_rifleman1";
					};
					class unit_9
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-45,0};
						vehicle = "SiP_PVA_smg1";
					};
					class unit_10
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-50,0};
						vehicle = "SiP_PVA_rifleman6";
					};
					class unit_11
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-55,0};
						vehicle = "SiP_PVA_machinegunner";
					};
					class unit_12
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-60,0};
						vehicle = "SiP_PVA_sniper";
					};
					class unit_13
					{
						side = 0;
						rank = "SERGEANT";
						position[] = {0,-65,0};
						vehicle = "SiP_PVA_smg1";
					};
					class unit_14
					{
						side = 0;
						rank = "SERGEANT";
						position[] = {0,-70,0};
						vehicle = "SiP_PVA_nco";
					};
					class unit_15
					{
						side = 0;
						rank = "SERGEANT";
						position[] = {0,-75,0};
						vehicle = "SiP_PVA_rifleman2";
					};
					class unit_16
					{
						side = 0;
						rank = "CORPORAL";
						position[] = {0,-80,0};
						vehicle = "SiP_PVA_rifleman5";
					};
					class unit_17
					{
						side = 0;
						rank = "CORPORAL";
						position[] = {0,-85,0};
						vehicle = "SiP_PVA_smg2";
					};
					class unit_18
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-90,0};
						vehicle = "SiP_PVA_rifleman4";
					};
					class unit_19
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-95,0};
						vehicle = "SiP_PVA_smg1";
					};
					class unit_20
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-100,0};
						vehicle = "SiP_PVA_rifleman9";
					};
					class unit_21
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-105,0};
						vehicle = "SiP_PVA_smg2";
					};
					class unit_22
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-110,0};
						vehicle = "SiP_PVA_smg1";
					};
					class unit_23
					{
						side = 0;
						rank = "PRIVATE";
						position[] = {0,-115,0};
						vehicle = "SiP_PVA_machinegunner2";
					};
				};
			};
			class SiP_Vehicle_Crews
			{
				name = "Vehicle Crews";
				class PVA_T34_Crew
				{
					name = "T-34 Tank Crew";
					side = 0;
					faction = "SiP_PVA";
					rarityGroup = 0.8;
					class Unit0
					{
						side = 0;
						vehicle = "SiP_PVA_tank_commander";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "SiP_PVA_tank_crew";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "SiP_PVA_tank_crew";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "SiP_PVA_tank_crew";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "SiP_PVA_tank_crew";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class PVA_vehicle_Crew
				{
					name = "Standard Vehicle Crew";
					side = 0;
					faction = "SiP_PVA";
					rarityGroup = 0.8;
					class Unit0
					{
						side = 0;
						vehicle = "SiP_PVA_Driver";
						rank = "PRIVATE";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "SiP_PVA_gunner";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};
		};
	};
};