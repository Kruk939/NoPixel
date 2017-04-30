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
	class LightCarHeadS01
	{
		color[]={1900,1800,2000};
		ambient[]={5,5,5};
		position="LightCarHeadS01";
		direction="LightCarHeadS01_end";
		hitpoint="Light_S";
		selection="Light_S";
		size=1;
		innerAngle=50;
		outerAngle=80;
		coneFadeCoef=10;
		intensity=100;
		useFlare="true";
		dayLight="false";
		flareSize=3;
	};
	class LightCarHeadS02: LightCarHeadS01
	{
		position="LightCarHeadS02";
		direction="LightCarHeadS02_end";
		hitpoint="Light_S2";
		selection="Light_S2";
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