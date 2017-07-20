class C_Boat_Civil_01_police_F;
class Eventhandlers;
class sl_boat_fire: C_Boat_Civil_01_police_F
{
	author="Jeffrey StanLakeside";
	scope=2;
	displayName="Fire Department Motorboat";
        maxSpeed = 150;
        enginePower = 325;
	class Eventhandlers: Eventhandlers
	{
		init="_this select 0 animate [""HidePoliceSigns"",1,true]; _this select 0 animate [""HideRescueSigns"",1,true]; _this select 0 animate [""HidePolice"",0,true];";
	};
	hiddenSelectionsTextures[]=
	{
		"sl_vehicles_red\tex\boat\fire.paa",
		"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"
	};

};
/*	
Ford F350 SWAT z dildo
*/
class red_swat_08_p_swat;
	class sl_ford350_swat: red_swat_08_p_swat
	{
		displayName = "Ford F350 SWAT z dildosem";
	};
/*	
Lenco Bearcat SERT
*/
class Abruzzi_LencoPD_01;
class sl_bearcat_mat: Abruzzi_LencoPD_01
	{
	displayName = "Lenco Bearcat S.E.R.T.";
	scope=2;
	side=3;
	hiddenSelectionsMaterials[]=
	{"","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","\sl_impala\rvmat\body.rvmat",""};
	hiddenSelectionsTextures[] = {"","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","\sl_vehicles_red\tex\bearcat_lenco\body04.paa",""};
	};
