spawnedVehicle = CurrentCursorTarget;
_information = spawnedVehicle getVariable ["information", 0];

_license = _information select 0;
_color = _information select 2;
_finish = _information select 3;
_rims = _information select 4;
_windows = _information select 5;
_lights = _information select 6; 

_color = getText(configfile >> "CfgIvoryTextures" >> _color >> "texture");
spawnedVehicle setObjectTexture	[0, _color];
_finish = getText(configfile >> "CfgIvoryMaterials" >> _finish >> "material");
spawnedVehicle setObjectMaterial [0, _finish];
_rims = getText(configfile >> "CfgIvoryTextures" >> _rims >> "texture");
spawnedVehicle setObjectTexture	[1, _rims];
spawnedVehicle setObjectTexture [2,"#(argb,8,8,3)color(0,0,0," + str (_windows / 10) + ",ca)"];
spawnedVehicle setObjectTexture [3,"#(argb,8,8,3)color(0,0,0," + str (_lights / 10) + ",ca)"];