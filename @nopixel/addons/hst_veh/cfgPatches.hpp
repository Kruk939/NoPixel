class CfgPatches
{
	class Test_car_F
	{
		// List of units defined in this "PBO"
		units[]= 
		{
			"C_Test_Car_01_F",
			"C_Test_Car_01_Black_F",
			"C_test_Car_01_anotherVariant_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		// because we are using references to this addon, our test car should not be loaded if A3_Soft_F is not present
		requiredAddons[]	= {"A3_Soft_F"};
	};
};