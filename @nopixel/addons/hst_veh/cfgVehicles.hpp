class red_charger_15_p_u_custom1;
class HST_DC15_base_UC : red_charger_15_p_u_custom1
{
	terrainCoef = 1.9;
	turnCoef = 2.5;
	precision = 20;
	brakeDistance = 3;
	acceleration = 15;
	fireResistance = 5;
	thrustDelay = 0.1;
	brakeIdleSpeed = 1.78;
	maxSpeed = 450;
	fuelCapacity = 10;
	wheelCircumference = 2.277;
	antiRollbarForceCoef = 0.5;
	antiRollbarForceLimit = 0.5;
	antiRollbarSpeedMin = 20;
	antiRollbarSpeedMax = 80;
	idleRpm = 750;
	redRpm = 8000;
	class complexGearbox
	{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.462,"D2",1.50,"D3",1.1,"D4",0.80,"D5",0.60,"D6",0.45};
			TransmissionRatios[] = {"High",4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
	};
	simulation = "carx";
	dampersBumpCoef = 3;
	differentialType = "all_open";
	frontRearSplit = 0.5;
	frontBias = 1.5;
	rearBias = 1.5;
	centreBias = 1.3;
	clutchStrength = 35;
	enginePower = 520;
	maxOmega = 725;
	peakTorque = 1200;
	slowSpeedForwardCoef = 0.2;
	normalSpeedForwardCoef = 0.6;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.35;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.178,0.5},{0.25,0.6},{0.461,0.8},{0.92,1},{1,0.5}};
	changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
	switchTime = 0.25;
	latency = 1;
};
class HST_DC15_MD041 : HST_DC15_base_UC
{
	displayName = "Dodge Charger 2015 MD041";
	hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)"};
};
class HST_DC15_MD042 : HST_DC15_base_UC
{
	displayName = "Dodge Charger 2015 MD042";
	hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.961,0.961,0.784,1,CO)"};
	peakTorque = 800;
	maxSpeed = 300;
	fuelCapacity = 15;
};
class HST_DC15_MD043 : HST_DC15_base_UC
{
	displayName = "Dodge Charger 2015 MD043";
	hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,CO)"};
	peakTorque = 1000;
	fuelCapacity = 10;
};

class red_charger_15_p_sheriff;
class HST_DC15_base : red_charger_15_p_sheriff 
{
	terrainCoef = 1.9;
	turnCoef = 2.5;
	precision = 15;
	brakeDistance = 3;
	acceleration = 15;
	fireResistance = 5;
	thrustDelay = 0.2;
	brakeIdleSpeed = 1.78;
	maxSpeed = 400;
	fuelCapacity = 10;
	wheelCircumference = 2.277;
	antiRollbarForceCoef = 0.5;
	antiRollbarForceLimit = 0.5;
	antiRollbarSpeedMin = 20;
	antiRollbarSpeedMax = 80;
	idleRpm = 750;
	redRpm = 7500;
	class complexGearbox
	{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.462,"D2",1.50,"D3",1.0,"D4",0.70,"D5",0.50};
			TransmissionRatios[] = {"High",4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
	};
	simulation = "carx";
	dampersBumpCoef = 3;
	differentialType = "all_open";
	frontRearSplit = 0.5;
	frontBias = 1.5;
	rearBias = 1.5;
	centreBias = 1.3;
	clutchStrength = 35;
	enginePower = 520;
	maxOmega = 750;
	peakTorque = 1200;
	slowSpeedForwardCoef = 0.2;
	normalSpeedForwardCoef = 0.6;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.35;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.178,0.5},{0.25,0.6},{0.461,0.8},{0.92,1},{1,0.4}};
	changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
	switchTime = 0.25;
	latency = 2;
};
class HST_DC15_MD022 : HST_DC15_base
{
	displayName = "Dodge Charger 2015 MD022";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\022_Dodge_Charger_2015.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};

class HST_DC15_MD023 : HST_DC15_base
{
	displayName = "Dodge Charger 2015 MD023";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\023_Dodge_Charger_2015.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};


class red_charger_12_p_custom1;
class HST_DC12_base : red_charger_12_p_custom1
{
	terrainCoef = 1.9;
	turnCoef = 2.5;
	precision = 15;
	brakeDistance = 3;
	acceleration = 15;
	fireResistance = 5;
	thrustDelay = 0.2;
	brakeIdleSpeed = 1.78;
	maxSpeed = 400;
	fuelCapacity = 15;
	wheelCircumference = 2.277;
	antiRollbarForceCoef = 0.5;
	antiRollbarForceLimit = 0.5;
	antiRollbarSpeedMin = 20;
	antiRollbarSpeedMax = 80;
	idleRpm = 750;
	redRpm = 7500;
	class complexGearbox
	{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.0,"D2",1.30,"D3",1.0,"D4",0.70,"D5",0.50};
			TransmissionRatios[] = {"High",4.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
	};
	simulation = "carx";
	dampersBumpCoef = 3;
	differentialType = "all_open";
	frontRearSplit = 0.5;
	frontBias = 1.5;
	rearBias = 1.5;
	centreBias = 1.3;
	clutchStrength = 35;
	enginePower = 475;
	maxOmega = 750;
	peakTorque = 1000;
	slowSpeedForwardCoef = 0.2;
	normalSpeedForwardCoef = 0.6;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.35;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.178,0.5},{0.25,0.6},{0.461,0.8},{0.92,1},{1,0.4}};
	changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
	switchTime = 0.35;
	latency = 2;
};
class HST_DC12_MD020 : HST_DC12_base
{
	displayName = "Dodge Charger 2012 MD020";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\020_Dodge_Charger_2012.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_DC12_MD021 : HST_DC12_base
{
	displayName = "Dodge Charger 2012 MD021";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\021_Dodge_Charger_2012.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};


class red_cvpi_06_p_custom1;
class HST_CVPI_base : red_cvpi_06_p_custom1
{
	terrainCoef = 1.7;
	turnCoef = 2.0;
	precision = 12;
	brakeDistance = 4;
	acceleration = 12;
	fireResistance = 4;
	thrustDelay = 0.3;
	brakeIdleSpeed = 1.98;
	maxSpeed = 300;
	fuelCapacity = 20;
	wheelCircumference = 2.277;
	antiRollbarForceCoef = 0.5;
	antiRollbarForceLimit = 0.5;
	antiRollbarSpeedMin = 20;
	antiRollbarSpeedMax = 80;
	idleRpm = 750;
	redRpm = 7000;
	class complexGearbox
	{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.2,"D2",1.40,"D3",1.0,"D4",0.50};
			TransmissionRatios[] = {"High",4.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
	};
	simulation = "carx";
	dampersBumpCoef = 3;
	differentialType = "rear_open";
	frontRearSplit = 0.5;
	frontBias = 1.5;
	rearBias = 1.5;
	centreBias = 1.3;
	clutchStrength = 35;
	enginePower = 300;
	maxOmega = 680;
	peakTorque = 800;
	slowSpeedForwardCoef = 0.2;
	normalSpeedForwardCoef = 0.6;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.35;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.178,0.5},{0.25,0.6},{0.461,0.8},{0.92,1},{1,0.4}};
	changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
	switchTime = 0.35;
	latency = 2;
};
class HST_CVPI_MD001 : HST_CVPI_base
{
	displayName = "Crown Victoria 2006 MD001";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\001_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_CVPI_MD002 : HST_CVPI_base
{
	displayName = "Crown Victoria 2006 MD002";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\002_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_CVPI_MD003 : HST_CVPI_base
{
	displayName = "Crown Victoria 2006 MD003";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\003_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_CVPI_MD004 : HST_CVPI_base
{
	displayName = "Crown Victoria 2006 MD004";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\004_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_CVPI_MD005 : HST_CVPI_base
{
	displayName = "Crown Victoria 2006 MD005";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\005_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_CVPI_MD006 : HST_CVPI_base
{
	displayName = "Crown Victoria 2006 MD006";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\006_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_CVPI_MD007 : HST_CVPI_base
{
	displayName = "Crown Victoria 2006 MD007";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\007_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};



class red_taurus_10_p_sheriff;
class HST_FPI_base : red_taurus_10_p_sheriff
{
	terrainCoef = 1.7;
	turnCoef = 2.0;
	precision = 15;
	brakeDistance = 4;
	acceleration = 12;
	fireResistance = 4;
	thrustDelay = 0.3;
	brakeIdleSpeed = 1.98;
	maxSpeed = 300;
	fuelCapacity = 25;
	wheelCircumference = 2.277;
	antiRollbarForceCoef = 0.5;
	antiRollbarForceLimit = 0.5;
	antiRollbarSpeedMin = 20;
	antiRollbarSpeedMax = 80;
	idleRpm = 750;
	redRpm = 7000;
	class complexGearbox
	{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.662,"D2",1.90,"D3",1.6,"D4",1.3,"D5",1.0,"D6",0.70};
			TransmissionRatios[] = {"High",4.1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
	};
	simulation = "carx";
	dampersBumpCoef = 3;
	differentialType = "front_open";
	frontRearSplit = 0.5;
	frontBias = 1.5;
	rearBias = 1.5;
	centreBias = 1.3;
	clutchStrength = 35;
	enginePower = 300;
	maxOmega = 680;
	peakTorque = 850;
	slowSpeedForwardCoef = 0.2;
	normalSpeedForwardCoef = 0.6;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.35;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.178,0.5},{0.25,0.6},{0.5,0.8},{0.8,1},{1,0.4}};
	changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
	switchTime = 0.35;
	latency = 2;
	
};
class HST_FPI_MD008 : HST_FPI_base
{
	displayName = "Ford Interceptor 2013 MD008";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\008_Ford_Taurus.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_FPI_MD009 : HST_FPI_base
{
	displayName = "Ford Interceptor 2013 MD009";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\009_Ford_Taurus.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_FPI_MD010 : HST_FPI_base
{
	displayName = "Ford Interceptor 2013 MD010";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\010_Ford_Taurus.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class HST_FPI_MD011 : HST_FPI_base
{
	displayName = "Ford Interceptor 2013 MD011";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\011_Ford_Taurus.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};


class kmc_MustangSO_200;
class HST_Mustang_base : kmc_MustangSO_200
{
	maxSpeed = 400;
};
class HST_Mustang_MD051 : HST_Mustang_base
{
	displayName = "Ford Mustang SAM MD051";
	hiddenSelectionsTextures[] = {"\HST_VEH\textures\051_Ford_Mustang.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};

class red_suburban_15_p_f_ia;
class HST_Suburban_base : red_suburban_15_p_f_ia
{
	maxSpeed = 240;
};
class HST_Suburban_AIAD901 : HST_Suburban_base
{
	displayName = "Suburban AIAD 901";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\901_Chevrolet_Suburban_AIAD.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};

class sl_282;
class HST_FPI_UC : sl_282
{
	thrustDelay = 0.3;
	brakeIdleSpeed = 1.98;
	maxSpeed = 300;
	fuelCapacity = 25;
	idleRpm = 750;
	redRpm = 7000;
	class complexGearbox
	{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.662,"D2",1.90,"D3",1.6,"D4",1.3,"D5",1.0,"D6",0.70};
			TransmissionRatios[] = {"High",4.1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
	};
	enginePower = 300;
	maxOmega = 680;
	peakTorque = 850;
	slowSpeedForwardCoef = 0.2;
	normalSpeedForwardCoef = 0.6;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.35;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.178,0.5},{0.25,0.6},{0.5,0.8},{0.8,1},{1,0.4}};
	changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
	switchTime = 0.35;
	latency = 2;
};
class HST_FPI_MD046 : HST_FPI_UC
{
	displayName = "Ford Interceptor 2013 MD046";
	hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0.706,0,1,CO)"};
};