/*
		Author: Kajetan "Kruk" Mruk
		Date: 15.03.2017
		Params: 
			0 - Array, active wanted cases
			1 - Array, last active wanted cases
			2 - Array, last tickets of player
			3 - Array, vehicles of player
			3 - Array, player info 
		Description: Reads personal data and display it on computer screen.
		Return: none
*/
disableSerialization;
_name = format["Imię i nazwisko: %1", name(kruk_slpd_computer_data select 1)];
_display = findDisplay 666005;
_ctr = _display displayCtrl 1301;
_ctrl ctrlSetText _name;