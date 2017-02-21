//params["_type"];
//if("_type" == "") exitWith {diag_log "Type is null in gopro";};
if !(client_gopro) then {
    client_gopro = true;
    ["Włączyłeś Go Pro!", false] spawn domsg;
} else {
    client_gopro = false;
    ["Wyłączyłeś Go Pro!", false] spawn domsg;
};
/*switch (_type) do {
    case 0: {client_gopro = false;};
    case 1: {client_gopro = true;};
    default: {client_gopro = false;};
};*/