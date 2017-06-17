params ["_vcl"];

while {alive _vcl} do
{
    while {_vcl getVariable ['siren',0] == 1 && !isNull driver _vcl} do
    {
		if(!isNull driver _vcl) then {	
			_vcl say3D "Siren1";
			sleep 10;
		};
		if(!isNull driver _vcl) then {	
			_vcl say3D "Siren2";
			sleep 4;
		};
		if(!isNull driver _vcl) then {	
			_vcl say3D "Siren3";
			sleep 4;
		};
    };
    sleep 1;
};


