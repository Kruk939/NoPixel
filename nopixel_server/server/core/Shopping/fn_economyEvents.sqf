/*
    Author: KifKick
    Date: 22.01.2017 (Non-retard Units)

    Params: None
    Description: Custom economy events about selling ore's every 1 hour.
    Return: None
    
    _barArray = ["np_copperbar1","np_ironbar1","np_silverbar1","NP_Wood","CG_OilCanister"];
    priceArrayOre = [30,45,75,10,115];

*/

private["_chance"];

priceArrayOre = [30,45,75,10,115];
publicVariable "priceArrayOre";

while {true} do {
    sleep 180;
    //sleep 1800;

    _chance = random(4);
    switch (_chance) do {
        case 0: {priceArrayOre set [0, 85]; publicVariable "priceArrayOre"; ["Górnicy robią strajk, w zakładach brakuje brązu do produkcji!", false] remoteExec ["domsg",-2]; };
         case 1: {priceArrayOre set [1, 90]; publicVariable "priceArrayOre"; ["Naukowcy udowodnili że w ciągu kilku miesięcy dostępność wydobywcza żelaza spadnie to 10%!", false] remoteExec ["domsg",-2];};
        case 2: {priceArrayOre set [2, 105]; publicVariable "priceArrayOre"; ["Kobiety zakochały się w srebnej biżuterii! Producenci biżuterii wskupują duże ilości srebra!", false] remoteExec ["domsg",-2];};
        case 3: {priceArrayOre set [3, 60]; publicVariable "priceArrayOre"; ["Wzrósł popyt na meble! Firmy produkcyjne mają problem z dostępnością surowca!", false] remoteExec ["domsg",-2];};
        case 4: {priceArrayOre set [4, 330]; publicVariable "priceArrayOre"; ["Inwestorzy zawachali rynkiem oraz cena za baryłkę oleju wzrosła trzykrotnie!", false] remoteExec ["domsg",-2];};
    };
};
