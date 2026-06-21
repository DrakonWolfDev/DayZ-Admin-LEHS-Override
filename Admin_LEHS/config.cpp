class CfgPatches
{
	class Admin_LEHS
	{
		units[] =
		{
			"Admin_LEHS",
			"Admin_LEHS_Helmet",
			"Admin_LEHS_Battery",
			"Admin_LEHS_O2Tank"
		};
		weapons[] = {};
		requiredVersion = 0.1;

		// Ensures Namalsk LEHS gear is loaded before this addon
		requiredAddons[] = {"DZ_Data","DZ_Characters","ns_dayz_gear_lehs"};

		author = "DrakonWolf";
		version = "1.0";
	};
};

class CfgVehicles
{
	//========================================================
	// Admin LEHS Battery
	// High-capacity, highly durable battery for admin use.
	// Prevents early depletion during testing or events.
	//========================================================

	class dzn_lehs_battery;
	class Admin_LEHS_Battery: dzn_lehs_battery
	{
		scope = 2;
		displayName = "Admin LEHS Battery";
		descriptionShort = "High-capacity administrative LEHS battery.";

		weight = 1;
		stackedUnit = "percentage";
		quantityBar = 1;

		// Near-infinite charge values
		varQuantityInit = 9999.0;
		varQuantityMin = 0.0;
		varQuantityMax = 9999.0;

		// Prevents destruction when fully depleted
		varQuantityDestroyOnMin = 0;

		// Increased durability to prevent accidental ruin
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4999;
				};
			};
		};
	};

	//========================================================
	// Admin LEHS O2 Tank
	// Provides effectively unlimited oxygen for admin use.
	//========================================================

	class dzn_lehs_o2tank;
	class Admin_LEHS_O2Tank: dzn_lehs_o2tank
	{
		scope = 2;
		displayName = "Admin LEHS O2 Tank";
		descriptionShort = "Administrative LEHS O2 tank with extended capacity.";

		itemSize[] = {1,2};
		weight = 1;

		stackedUnit = "percentage";
		quantityBar = 1;

		// Near-infinite oxygen supply
		varQuantityInit = 9999.0;
		varQuantityMin = 0.0;
		varQuantityMax = 9999.0;

		varQuantityDestroyOnMin = 0;

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4999;
				};
			};
		};
	};

	//========================================================
	// Admin LEHS Suit
	// Enhanced admin variant of Namalsk LEHS suit.
	// Provides maximum insulation and water resistance.
	//========================================================

	class dzn_lehs;
	class Admin_LEHS: dzn_lehs
	{
		scope = 2;
		displayName = "Admin LEHS Suit";
		descriptionShort = "Administrative LEHS suit with maximum environmental protection.";

		attachments[] =
		{
			"LEHS_Firearm",
			"Shoulder",
			"Melee",
			"LEHS_Battery",
			"LEHS_O2Tank",
			"WalkieTalkie",
			"Back"
		};

		itemSize[] = {1,1};
		itemsCargoSize[] = {10,100};

		quickBarBonus = 10;
		weight = 1;

		// Environmental protections
		absorbency = 0;   // Prevents soaking
		heatIsolation = 1; // Maximum warmth

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4999;
				};
			};
		};
	};

	//========================================================
	// Admin LEHS Helmet
	// Increased durability variant for admin use.
	//========================================================

	class dzn_lehs_helmet;
	class Admin_LEHS_Helmet: dzn_lehs_helmet
	{
		scope = 2;
		displayName = "Admin LEHS Helmet";
		descriptionShort = "Administrative LEHS helmet.";

		itemSize[] = {1,1};
		weight = 1;

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 4999;
				};
			};
		};
	};
};
