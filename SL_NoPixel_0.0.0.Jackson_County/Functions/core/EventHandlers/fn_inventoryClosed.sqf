/*
	Author: Kajetan "Kruk" Mruk
	Date: 22.01.2017 (Non-retard Units)
	
	Params: none
	Description: Function that sends request to the server to save player inventory
	Return: nothing
*/

[player, getPlayerUID player] remoteExec ["Server_fnc_invSave", 2];