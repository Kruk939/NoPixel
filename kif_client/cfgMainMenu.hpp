class CfgWorlds
{
	// Class of your terrain
	class Jackson_County
	{
		cutscenes[] = {"Jackson_kif"}; // Class names of used scenes. When more than one is present, the system will pick one randomly.
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class Jackson_kif // Class referenced in 'cutscenes' property in CfgWorlds
		{
			directory = "\kif_client\other\intro.Jackson_County"; // Path to scenario with the scene
		};
	};
};
class RscStandardDisplay;
class RscDisplayMain: RscStandardDisplay
{
	class Spotlight
	{
		delete Bootcamp;
		delete EastWind;
		delete ApexProtocol;
		class StanLakeside
		{
			text = "WITAJ NA STANLAKESIDE.PL";
			textIsQuote = 0;
			picture = "\kif_client\textures\loading\main_screen.paa";
			video = "";
			action = "_display = ctrlparent(_this select 0); ctrlactivate ((_display) displayctrl 105); _display = findDisplay 8; _control = _display displayctrl 159; ctrlActivate _control;_titleControl = _display displayCtrl 1000;_titleControl ctrlSetText 'Witaj na StanLakeside.pl!';";
			actionText = "ZAGRAJ NA STANLAKESIDE.PL";
			condition = "(getstatvalue 'BCFirstDeployment' == 0)";
		};
	};
	class controls {
			delete Spotlight1;
			//delete Spotlight2;
			delete Spotlight3;
			delete BackgroundSpotlightRight;
			delete BackgroundSpotlightLeft;
			delete BackgroundSpotlight;
		};
};