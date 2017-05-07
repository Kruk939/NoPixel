class Reflectors
{
	class LightCarHeadL01
	{
		color[]={89,157,246};
		ambient[]={5,5,5};
		position="LightCarHeadL01";
		direction="LightCarHeadL01_end";
		hitpoint="Light_L";
		selection="Light_L";
		size=1;
		innerAngle=100;
		outerAngle=179;
		coneFadeCoef=10;
		intensity=35;
		useFlare="true";
		dayLight="false";
		flareSize=1;
		class Attenuation
		{
			start=1;
			constant=0;
			linear=0;
		    quadratic=0.25;
			hardLimitStart=30;
			hardLimitEnd=60;
		};
	};
	class LightCarHeadR01: LightCarHeadL01
	{
		position="LightCarHeadR01";
		direction="LightCarHeadR01_end";
		hitpoint="Light_R";
		selection="Light_R";
	};
};
aggregateReflectors[]=
{
	
	{
		"LightCarHeadL01"
	},
	
	{
		"LightCarHeadR01"
	},
	
	{
		"LightCarHeadS01"
	},
	
	{
		"LightCarHeadS02"
	}
};