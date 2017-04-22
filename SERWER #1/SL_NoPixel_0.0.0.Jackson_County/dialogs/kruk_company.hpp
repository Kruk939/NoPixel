class kruk_company_garage {
	idd = 666010;
	name = "kruk_company_garage";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[] spawn company_fnc_dialog_garageOpen;";
	class controls {
		class text_title_vehicles: RscText {
			idc = -1;
			text = "Pojazdy"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class edit_vehicle_plate: Client_RscEdit
		{
			idc = 1001;
			text = "";
			autocomplete = "";
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class list_box_vehicles: client_RscListBox
		{
			idc = 1101;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 21 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class button_vehicle_check: client_RscButtonMenu
		{
			idc = 1201;
			text = "Sprawdz"; //--- ToDo: Localize;
			x = 13 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		class button_vehicle_plate_change: client_RscButtonMenu
		{
			idc = 1202;
			text = "Zmien rejestrace"; //--- ToDo: Localize;
			x = 6.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		class button_vehicle_take: client_RscButtonMenu
		{
			idc = 1203;
			text = "Wyciagnij pojazd"; //--- ToDo: Localize;
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		class button_close: client_RscButtonMenu
		{
			idc = 1204;
			text = "Zamknij"; //--- ToDo: Localize;
			x = 30.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		class text_title: RscText
		{
			idc = 1301;
			text = "Przeglad floty firmy: <nazwa firmy>"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
	};
};
class kruk_company_available {
	idd = 666011;
	name = "kruk_company_available";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "";
	class controls {
		class list_box_companies: client_RscListBox {
			idc = 1101;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 2.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 21 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class button_company_start: client_RscButtonMenu {
			idc = 1201;
			text = "Rozpocznij pracę"; //--- ToDo: Localize;
			x = 21 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		class button_close: client_RscButtonMenu
		{
			idc = 1202;
			text = "Zamknij"; //--- ToDo: Localize;
			x = 30.5 * GUI_GRID_W + GUI_GRID_X;
			y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 9.5 * GUI_GRID_W;
			h = 1.5 * GUI_GRID_H;
		};
		class text_title_companies: RscText {
			idc = -1;
			text = "Procownik w firmach:"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 1.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
		class text_title: RscText {
			idc = -1;
			text = "Przegladanie aktualnych firm"; //--- ToDo: Localize;
			x = 0 * GUI_GRID_W + GUI_GRID_X;
			y = 0 * GUI_GRID_H + GUI_GRID_Y;
			w = 40 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.5};
		};
	};
};
class kruk_company_create {
	idd = 666012;
	name = "kruk_company_create";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "";
	class controls {
		
	};
};
class kruk_company_preview {
	idd = 666013;
	name = "kruk_company_preview";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "";
	class controls {
		
	};
};
class kruk_company_atm {
	idd = 666014;
	name = "kruk_company_atm";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "";
	class controls {
		
	};
};