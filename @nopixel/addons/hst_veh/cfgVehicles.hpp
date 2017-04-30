class red_charger_15_p_sheriff;
class hst_dc15_base : red_charger_15_p_sheriff 
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
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.462,"D2",1.50,"D3",1.0,"D4",0.70,"D5",0.55};
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
class hst_dc15_md022 : hst_dc15_base
{
	displayName = "Dodge Charger 2015 MD022";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\022_Dodge_Charger_2015.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};

class hst_dc15_md023 : hst_dc15_base
{
	displayName = "Dodge Charger 2015 MD023";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\023_Dodge_Charger_2015.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};


class red_charger_12_p;
class hst_dc12_base : red_charger_12_p 
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
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.0,"D2",1.30,"D3",1.0,"D4",0.70,"D5",0.55};
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
	maxOmega = 700;
	peakTorque = 1000;
	slowSpeedForwardCoef = 0.2;
	normalSpeedForwardCoef = 0.6;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.35;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.178,0.5},{0.25,6},{0.461,1},{0.75,0.9},{1,0.3}};
	changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
	switchTime = 0.35;
	latency = 2;
};
class hst_dc12_md020 : hst_dc12_base
{
	displayName = "Dodge Charger 2012 MD020";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\020_Dodge_Charger_2012.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_dc12_md021 : hst_dc12_base
{
	displayName = "Dodge Charger 2012 MD021";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\021_Dodge_Charger_2012.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};


class red_cvpi_06_p_custom1;
class hst_cvpi_base : red_cvpi_06_p_custom1
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
	fuelCapacity = 10;
	wheelCircumference = 2.277;
	antiRollbarForceCoef = 0.5;
	antiRollbarForceLimit = 0.5;
	antiRollbarSpeedMin = 20;
	antiRollbarSpeedMax = 80;
	idleRpm = 750;
	redRpm = 7000;
	class complexGearbox
	{
			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",2.2,"D2",1.40,"D3",1.0,"D4",0.60};
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
	enginePower = 300;
	maxOmega = 680;
	peakTorque = 800;
	slowSpeedForwardCoef = 0.2;
	normalSpeedForwardCoef = 0.6;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.35;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.178,0.5},{0.25,6},{0.461,1},{0.75,0.9},{1,0.3}};
	changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
	switchTime = 0.35;
	latency = 2;
};
class hst_cvpi_md001 : hst_cvpi_base
{
	displayName = "Crown Victoria 2006 MD001";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\001_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_cvpi_md002 : hst_cvpi_base
{
	displayName = "Crown Victoria 2006 MD002";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\002_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_cvpi_md003 : hst_cvpi_base
{
	displayName = "Crown Victoria 2006 MD003";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\003_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_cvpi_md004 : hst_cvpi_base
{
	displayName = "Crown Victoria 2006 MD004";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\004_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_cvpi_md005 : hst_cvpi_base
{
	displayName = "Crown Victoria 2006 MD005";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\005_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_cvpi_md006 : hst_cvpi_base
{
	displayName = "Crown Victoria 2006 MD006";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\006_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_cvpi_md007 : hst_cvpi_base
{
	displayName = "Crown Victoria 2006 MD007";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\007_Ford_Crown_Victoria.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};



class red_taurus_10_p_sheriff;
class hst_fpi_base : red_taurus_10_p_sheriff
{
	maxSpeed = 300;
};
class hst_fpi_md008 : hst_fpi_base
{
	displayName = "Ford Interceptor 2013 MD008";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\008_Ford_Taurus.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_fpi_md009 : hst_fpi_base
{
	displayName = "Ford Interceptor 2013 MD009";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\009_Ford_Taurus.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_fpi_md010 : hst_fpi_base
{
	displayName = "Ford Interceptor 2013 MD010";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\010_Ford_Taurus.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};
class hst_fpi_md011 : hst_fpi_base
{
	displayName = "Ford Interceptor 2013 MD011";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\011_Ford_Taurus.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};


class kmc_MustangSO_200;
class hst_mustang_base : kmc_MustangSO_200
{
	maxSpeed = 400;
};
class hst_mustang_md051 : hst_mustang_base
{
	displayName = "Ford Mustang SAM MD051";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\051_Ford_Mustang.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};

class red_suburban_15_p_f_ia;
class hst_suburban_base : red_suburban_15_p_f_ia
{
	maxSpeed = 240;
};
class hst_suburban_AIAD901 : hst_suburban_base
{
	displayName = "Suburban AIAD 901";
	hiddenSelectionsTextures[] = {"\hst_veh\textures\901_Chevrolet_Suburban_AIAD.paa","","","","","","","","","","","","","","","","","","","","","","",""};
};