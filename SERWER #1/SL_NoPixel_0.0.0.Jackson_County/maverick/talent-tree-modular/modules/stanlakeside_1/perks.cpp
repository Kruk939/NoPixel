//Mechanik
class perk_mechanic_fasterrepair_1 {
	displayName = "Mechanik 1";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Wymagany Poziom 2, 2 Pkt. Umiej.";
	description = "Poznaj techniki samochodowe, aby przyśpieszyć naprawę własnego pojazdu.<br/><br/><t color='#10FF45'>-Naprawa trwa krócej o 5 sekund</t>";
	initScript = "maverick\talent-tree-modular\modules\stanlakeside_1\functions\functions_fasterRepair_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_mechanic_fasterrepair_2 {
	displayName = "Mechanik 2";
	requiredPerkPoints = 4;
	requiredLevel = 5;
	requiredPerk = "perk_mechanic_fasterrepair_1";
	subtitle = "Wymagany Poziom 5, 4 Pkt. Umiej.";
	description = "Poznaj techniki samochodowe, aby przyśpieszyć naprawę własnego pojazdu.<br/><br/><t color='#10FF45'>-Naprawa trwa krócej o 10 sekund</t>";
	initScript = "maverick\talent-tree-modular\modules\stanlakeside_1\functions\functions_fasterRepair_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_mechanic_fasterrepair_3 {
	displayName = "Mechanik 3";
	requiredPerkPoints = 6;
	requiredLevel = 9;
	requiredPerk = "perk_mechanic_fasterrepair_2";
	subtitle = "Wymagany Poziom 9, 6 Pkt. Umiej.";
	description = "Poznaj techniki samochodowe, aby przyśpieszyć naprawę własnego pojazdu.<br/><br/><t color='#10FF45'>-Naprawa trwa krócej o 15 sekund</t>";
	initScript = "maverick\talent-tree-modular\modules\stanlakeside_1\functions\functions_fasterRepair_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_mechanic_fasterrepair_4 {
	displayName = "Mechanik 4";
	requiredPerkPoints = 8;
	requiredLevel = 13;
	requiredPerk = "perk_mechanic_fasterrepair_3";
	subtitle = "Wymagany Poziom 13, 8 Pkt. Umiej.";
	description = "Poznaj techniki samochodowe, aby przyśpieszyć naprawę własnego pojazdu.<br/><br/><t color='#10FF45'>-Naprawa trwa krócej o 20 sekund</t>";
	initScript = "maverick\talent-tree-modular\modules\stanlakeside_1\functions\functions_fasterRepair_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};