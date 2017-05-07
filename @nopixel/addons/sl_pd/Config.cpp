////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.11
//Thu Mar 20 23:07:16 2014 : Source 'file' date Thu Mar 20 23:07:16 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

// ALL SKINS CREATED BY ArmA 3: Life - Kurt/Kelzar http://arma3-life.com

#define _ARMA_

//ndefs=14
enum {
	OrdinalEnum = 2,
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class P:/sl_pd/config.bin{
class CfgPatches
{
	class sl_pd
	{
		units[] = {"B_Competitor_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgFunctions
{
	class Love
	{
		class Authors
		{
			file="\sl_pd";
			class WeLikeAuthors
			{
				preinit=1;
			};
		};
	};
};
class CfgVehicles
{
	class B_Competitor_F;

	
	class sl_Sheriff1: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_deputy1.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff3: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Recrut.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff4: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Officer.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff5: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Detective.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff6: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Sergeant.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff7: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_First_Sergeant.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff8: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Lieutenant.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff9: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_First_Lieutenant.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff10: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Captain.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff11: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Commander.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff12: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Deputy_Chief.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff13: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Assi_Chief.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};
	
	class sl_Sheriff14: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\Sheriff_Chief.paa"};
		displayName = "Sheriff's Uniform 1";
		
	};

	class sl_Sheriff2: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "sheriff_uni2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_deputy2.paa"};
		displayName = "sl_ Sheriff's Uniform 2";
		
	};

	class sl_Police1: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_Officer1.paa"};
		displayName = "Police Uniform 1";
		
	};


	class sl_Police2: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_Officer2.paa"};
		displayName = "Police Uniform 2";
		
	};


	class sl_Police3: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_Officer3.paa"};
		displayName = "Police Uniform 3";
		
	};
	
	class sl_Police4: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Recrut.paa"};
		displayName = "Police Uniform 1";
		
	};
	
		class sl_PO1: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_PO1.paa"};
		displayName = "LSPD Police Officer 1";
		
	};
	
		class sl_PO2: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_PO2.paa"};
		displayName = "LSPD Police Officer 2";
		
	};
	
		class sl_PO3: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_PO3.paa"};
		displayName = "LSPD Police Officer 3";
		
	};
	
		class sl_PO4: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni4";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_PO4.paa"};
		displayName = "LSPD Police Officer 4";
		
	};
	
		class sl_PO5: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni5";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_PO5.paa"};
		displayName = "LSPD Police Officer 5";
		
	};
	
		class sl_PO6: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni6";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_PO6.paa"};
		displayName = "LSPD Police Officer 6";
		
	};
	
		class sl_SGT: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni11";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_SGT.paa"};
		displayName = "LSPD Police SGT";
		
	};
	
	class sl_SSGT: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni12";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_SSGT.paa"};
		displayName = "LSPD Police SSGT";
		
	};
	
	class sl_MSGT: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni13";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_MSGT.paa"};
		displayName = "LSPD Police MSGT";
		
	};
	
	class sl_DTU1: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni7";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_DTU1.paa"};
		displayName = "LSPD DTU1";
		
	};
	
	class sl_DTU2: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni8";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_DTU2.paa"};
		displayName = "LSPD DTU2";
		
	};
	
	class sl_DTU3: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni9";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_DTU3.paa"};
		displayName = "LSPD DTU3";
		
	};
	
	class sl_DTU4: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_kevuni10";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_DTU4.paa"};
		displayName = "LSPD DTU4";
		
	};
	
	class sl_Police5: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Officer.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police6: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Detective.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police7: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Sergeant.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police8: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_First_Sergeant.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police9: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Lieutenant.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police10: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_First_Lieutenant.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police11: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Captain.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police12: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Commander.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police13: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Deputy_Chief.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police14: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Assi_Chief.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police15: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Chief.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police16: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Detective2.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police17: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Detective3.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police18: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Detective4.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police19: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Detective5.paa"};
		displayName = "Police Uniform 1";
		
	};
	
	class sl_Police20: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "police_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\LVPD_Detective6.paa"};
		displayName = "Police Uniform 1";
		
	};

	class sl_FTO: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_FTO.paa"};
		displayName = "Field Training Officer";
		
	};
	
	class sl_SP3: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_Detective.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP4: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_Sergeant.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP5: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_First_Sergeant.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP6: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_Lieutenant.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP7: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_First_Lieutenant.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP8: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_Captain.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP9: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_Commander.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP10: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_Deputy_Chief.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP11: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_Assi_Chief.paa"};
		displayName = "State Police";
		
	};
	
	class sl_SP12: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "fto_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\SP_Chief.paa"};
		displayName = "State Police";
		
	};

	class sl_DoJ: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "doj_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_DoJ.paa"};
		displayName = "Department of Justice";
		
	};

	class sl_Cadet: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "cadet_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_Cadet.paa"};
		displayName = "Cadet";
		
	};

	class sl_FBI: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_FBI.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI1: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_Detective.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI2: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_Sergeant.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI3: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_First_Sergeant.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI4: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_Lieutenant.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI5: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_First_Lieutenant.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI6: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_Captain.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI7: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_Commander.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI8: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_Deputy_Chief.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI9: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_Assi_Chief.paa"};
		displayName = "FBI";
		
	};
	
	class sl_FBI10: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "FBI_uni";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\FBI_Chief.paa"};
		displayName = "FBI";
		
	};

	class sl_Ranger1: B_Competitor_F
	{
		_generalMacro = "B_Competitor_F";
		scope = 2;
		nakedUniform = "U_BasicBody";
		uniformClass = "ranger_uni1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"sl_pd\Data\A3L_ranger1.paa"};
		displayName = "Ranger's Uniform 1";
		
	};
};

class cfgWeapons
{
	class ItemCore;	// External class reference
	class Uniform_Base;
	class UniformItem;
	class ItemInfo;
	
	class sheriff_uni1: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff's Uniform 1";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff1";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};

	class sheriff_uni2: Uniform_Base
	{
		scope = 2;
		displayName = "sl_ Sheriff's Uniform 2";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff2";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;
		};
	};

	class police_uni1: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform 1";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police1";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;			
		};
	};
	
	class police_kevuni1: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD PO1";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_PO1";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni2: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD PO2";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_PO2";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni3: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD PO3";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_PO3";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni4: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD PO4";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_PO4";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni5: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD PO5";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_PO5";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni6: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD PO6";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_PO6";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni7: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD DTU1";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_DTU1";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni8: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD DTU2";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_DTU2";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni9: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD DTU3";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_DTU3";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni10: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD DTU4";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_DTU4";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni11: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD SGT";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SGT";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni12: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD SSGT";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SSGT";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_kevuni13: Uniform_Base
	{
		scope = 2;
		displayName = "LSPD MSGT";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_MSGT";
			containerClass = "Supply100";
			mass = 0;
			armor = 70;			
		};
	};
	
	class police_uni2: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform 2";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police2";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;			
		};
	};

	class police_uni3: Uniform_Base
	{
		scope = 2;
		displayName = "Police Uniform 3";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police3";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;			
		};
	};

	class doj_uni: Uniform_Base
	{
		scope = 2;
		displayName = "sl_ Department of Justice";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_DOJ";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;			
		};
	};

	class fto_uni: Uniform_Base
	{
		scope = 2;
		displayName = "Field Training Officer";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FTO";
			containerClass = "Supply100";
			mass = 0;
			armor = 40;			
		};
	};

	class cadet_uni: Uniform_Base
	{
		scope = 2;
		displayName = "Cadet";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Cadet";
			containerClass = "Supply100";
			mass = 0;
			armor = 20;
		};
	};

	class FBI_uni: Uniform_Base
	{
		scope = 2;
		displayName = "FBI";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang1: Uniform_Base
	{
		scope = 2;
		displayName = "FBI Detective";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI1";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang2: Uniform_Base
	{
		scope = 2;
		displayName = "FBI Sergeant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI2";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang3: Uniform_Base
	{
		scope = 2;
		displayName = "FBI First Sergeant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI3";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang4: Uniform_Base
	{
		scope = 2;
		displayName = "FBI Lieutenant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI4";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang5: Uniform_Base
	{
		scope = 2;
		displayName = "FBI First Lieutenant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI5";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang6: Uniform_Base
	{
		scope = 2;
		displayName = "FBI Captain";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI6";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang7: Uniform_Base
	{
		scope = 2;
		displayName = "FBI Commander";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI7";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang8: Uniform_Base
	{
		scope = 2;
		displayName = "FBI Deputy Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI8";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang9: Uniform_Base
	{
		scope = 2;
		displayName = "FBI Assi. Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI9";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class FBI_rang10: Uniform_Base
	{
		scope = 2;
		displayName = "FBI Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_FBI10";
			containerClass = "Supply100";
			mass = 0;
		};
	};

	class Sheriff_rang1: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Recruit";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff3";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang2: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Officer";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff4";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang3: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Detective";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff5";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang4: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Sergeant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff6";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang5: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff First Sergeant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff7";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang6: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Lieutenant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff8";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang7: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff First Lieutenant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff9";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang8: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Captain";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff10";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang9: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Commander";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff11";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang10: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Deputy Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff12";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang11: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Assi Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff13";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class Sheriff_rang12: Uniform_Base
	{
		scope = 2;
		displayName = "Sheriff Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Sheriff14";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang1: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Recruit";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police4";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang2: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Officer";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police5";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang3: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Detective";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police6";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang4: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Sergeant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police7";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang5: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD First Sergeant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police8";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang6: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Lieutenant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police9";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang7: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD First Lieutenant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police10";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang8: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Captain";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police11";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang9: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Commander";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police12";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang10: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Deputy Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police13";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang11: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Assi. Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police14";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang12: Uniform_Base
	{
		scope = 2;
		displayName = "LVPD Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police15";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang13: Uniform_Base
	{
		scope = 2;
		displayName = "PO III";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police16";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang14: Uniform_Base
	{
		scope = 2;
		displayName = "DET III";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police17";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang15: Uniform_Base
	{
		scope = 2;
		displayName = "SGT II";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police18";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class LVPD_rang16: Uniform_Base
	{
		scope = 2;
		displayName = "DET II";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police19";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
		class LVPD_rang17: Uniform_Base
	{
		scope = 2;
		displayName = "DET I";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Police20";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang3: Uniform_Base
	{
		scope = 2;
		displayName = "State Police Detective";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP3";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang4: Uniform_Base
	{
		scope = 2;
		displayName = "State Police Sergeant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP4";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang5: Uniform_Base
	{
		scope = 2;
		displayName = "State Police First Sergeant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP5";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang6: Uniform_Base
	{
		scope = 2;
		displayName = "State Police Lieutenant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP6";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang7: Uniform_Base
	{
		scope = 2;
		displayName = "State Police First Lieutenant";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP7";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang8: Uniform_Base
	{
		scope = 2;
		displayName = "State Police Captain";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP8";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang9: Uniform_Base
	{
		scope = 2;
		displayName = "State Police Commander";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP9";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang10: Uniform_Base
	{
		scope = 2;
		displayName = "State Police Deputy Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP10";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang11: Uniform_Base
	{
		scope = 2;
		displayName = "State Police Assi Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP11";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class sp_rang12: Uniform_Base
	{
		scope = 2;
		displayName = "State Police Chief";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_SP12";
			containerClass = "Supply100";
			mass = 0;
		};
	};
	
	class ranger_uni: Uniform_Base
	{
		scope = 2;
		displayName = "Ranger";
		picture = "\sl_pd\Data\ui\sl_logo.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "sl_Ranger1";
			containerClass = "Supply100";
			mass = 0;
		};
	};

};
//};
