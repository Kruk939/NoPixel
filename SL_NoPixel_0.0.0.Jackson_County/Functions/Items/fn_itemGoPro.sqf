params["_type"];
if (isNil "_type") exitWith {diag_log "Type is null in gopro";};
switch (_type) do{
    case 0: {client_gopro = false;};
    case 1: {client_gopro = true;};
    default: {client_gopro = false;};
};