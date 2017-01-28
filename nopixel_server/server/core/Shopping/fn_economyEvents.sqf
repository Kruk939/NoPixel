/*
    Author: KifKick
    Date: 22.01.2017 (Non-retard Units)

    Params: None
    Description: Custom economy events about selling ore's every 1 hour.
    Return: None
    
    _barArray = ["np_copperbar1","np_ironbar1","np_silverbar1","NP_Wood","CG_OilCanister"];
    priceArrayOre = [30,45,75,10,115];

*/

private["_numbers","_selected","_debug"];

_debug = 0;

if (_debug == 1) then {diag_log "Udało mi się wykonać while {true}!";};
        
sleep 180;
//sleep 1800;
if (_debug == 1) then {diag_log "Pomyślnie wykonałem sleep 1800 (fn_economyEvents.sqf)";};
        
_numbers = ["0","1","2","3","4","5"];
_selected = _numbers call BIS_fnc_selectRandom;
if (_debug == 1) then {diag_log "Nie napotkałem problemu z wykonaniem BIS_fnc_selectRandom"; diag_log format["Wylosowana liczba to: %1", _selected];};

switch (_selected) do {
    case "0": {priceArrayOre set [0, 85]; publicVariable "priceArrayOre"; ["Górnicy robią strajk, w zakładach brakuje brązu do produkcji!", false] remoteExec ["domsg",-2]; diag_log "SERWER: Pomyślnie wykonano economyEvent: Copper"; };
    case "1": {priceArrayOre set [1, 90]; publicVariable "priceArrayOre"; ["Naukowcy udowodnili że w ciągu kilku miesięcy dostępność wydobywcza żelaza spadnie to 10%!", false] remoteExec ["domsg",-2]; diag_log "SERWER: Pomyślnie wykonano economyEvent: Iron";};
    case "2": {priceArrayOre set [2, 105]; publicVariable "priceArrayOre"; ["Kobiety zakochały się w srebnej biżuterii! Producenci biżuterii wskupują duże ilości srebra!", false] remoteExec ["domsg",-2]; diag_log "SERWER: Pomyślnie wykonano economyEvent: Silver";};
    case "3": {priceArrayOre set [3, 60]; publicVariable "priceArrayOre"; ["Wzrósł popyt na meble! Firmy produkcyjne mają problem z dostępnością surowca!", false] remoteExec ["domsg",-2]; diag_log "SERWER: Pomyślnie wykonano economyEvent: Wood";};
    case "4": {priceArrayOre set [4, 330]; publicVariable "priceArrayOre"; ["Inwestorzy zawachali rynkiem oraz cena za baryłkę oleju wzrosła trzykrotnie!", false] remoteExec ["domsg",-2]; diag_log "SERWER: Pomyślnie wykonano economyEvent: Oil";};
    case "5": {priceArrayOre = [30,45,75,10,115]; publicVariable "priceArrayOre"; ["Ceny rynkowe wróciły do norm!", false] remoteExec ["domsg",-2]; diag_log "SERWER: Pomyślnie wykonano economyEvent: resetToNormal";};
    default { priceArrayOre = [30,45,75,10,115]; publicVariable "priceArrayOre"; diag_log "Switch to default [30,45,75,10,115] (fn_economyEvents.sqf)";}
};
if (_debug == 1) then {diag_log "Nie napotkałem problemu z wykonaniem switch case";};