disableSerialization;

if(myJob in ["none","cop","ems","fire"]) then {
	426 cutfadeout 0; 
} else {
	426 cutRsc ["HUDWork","PLAIN"]; 
};