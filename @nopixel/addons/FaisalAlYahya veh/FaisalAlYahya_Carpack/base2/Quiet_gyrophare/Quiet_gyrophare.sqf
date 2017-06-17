diag_log "LIGHTS WORKING";
private["_vcl","_lights","_light"];
_vcl = _this;
_lights = "#(argb,8,8,3)color(0,0,0.690196,1.0,CO)";
//_light = "#lightpoint" createVehicleLocal getpos _vcl;
//_light lightAttachObject [_vcl,[ 0.54, -0.27, 1.60 ]];
//_light setLightBrightness 0.35;
/*
_lightblue setLightColor [0, 0, 255];
_lightblue setLightAmbient [0, 0, 0];
_lightred setLightColor [0, 0, 255];
_lightred setLightAmbient [0, 0, 0];

_lightblue = "#lightpoint" createVehicleLocal getpos _vcl; 
_lightblue setLightColor [0, 0, 255];
_lightblue setLightBrightness 1.0;
_lightblue setLightAmbient [0, 0, 255];
_lightblue lightAttachObject [_vcl, [0.5, -0.3, 1.75]];
_lightblue setLightAttenuation [0, 0, 0, 0.8];
_lightblue setLightFlareMaxDistance 500;
_lightblue setLightFlareSize 1.0;
_lightblue setLightIntensity 1;
_lightblue setLightUseFlare true;
_lightblue setLightDayLight true;



_lightred = "#lightpoint" createVehicleLocal getpos _vcl; 
_lightred setLightColor [0, 0, 255];
_lightred setLightBrightness 1.0;
_lightred setLightAmbient [0, 0, 255];
_lightred lightAttachObject [_vcl, [0.5, -0.3, 1.75]];
_lightred setLightAttenuation [0, 0, 0, 0.8];
_lightred setLightFlareMaxDistance 500;
_lightred setLightFlareSize 1.0;
_lightred setLightIntensity 1;
_lightred setLightUseFlare true;
_lightred setLightDayLight true;




_light = (alive _vcl);

*/
while {alive _vcl} do {

	_phase = _vcl animationPhase "ani_lightbar";
	_phasetakedown = _vcl animationPhase "ani_takedown";
	_phasedirectional = _vcl animationPhase "ani_directional";

    switch (_phase) do {
	
	case (0.1): { // Mode 1 + 2 NOW -> Double flash for every color. 
	
		//TURN ON BLUE
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];

		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then  { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then  { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];

		sleep 0.1;
	
		//TURN ON RED
	    _vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,_lights];
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];
		sleep 0.1;
		
			
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,_lights];
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		
		sleep 0.2;
		
		//TURN ON BLUE
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];

		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then  { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then  { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];

		sleep 0.1;
		
		//TURN ON RED
	    _vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];
		sleep 0.1;
		
			
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,_lights];
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		
		sleep 0.2;
		
		//TURN ON BLUE
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];

		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then  { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then  { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];

		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then  { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];
		
		sleep 0.1;
	
	    _vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,_lights];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [25,""]; 
		_vcl setObjectTextureGlobal [26,""];
		sleep 0.1;
		
			
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		
		sleep 0.1;
		
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,_lights];
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		};
		_vcl setObjectTextureGlobal [16,_lights];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,_lights];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,_lights];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,_lights];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,_lights];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then  { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 11+12
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		//Turn on 10+11
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 10+15
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,_lights];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		//Turn on 14+15
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_lights];
		_vcl setObjectTextureGlobal [15,_lights];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 13+14
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		//Turn on 14+15
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_lights];
		_vcl setObjectTextureGlobal [15,_lights];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 10+15
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,_lights];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		 //Turn on 10+11
		 if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 11+12
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		//Turn on 10+11
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 10+15
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,_lights];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		//Turn on 14+15
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_lights];
		_vcl setObjectTextureGlobal [15,_lights];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 13+14
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,_lights];
		_vcl setObjectTextureGlobal [14,_lights];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		//Turn on 14+15
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,_lights];
		_vcl setObjectTextureGlobal [15,_lights];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 10+15
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,_lights];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,_lights];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,_lights];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,_lights];
        _vcl setObjectTextureGlobal [6,_lights];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,_lights];
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,_lights]; 
		_vcl setObjectTextureGlobal [25,""];
		 //Turn on 10+11
		 if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,_lights];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;
		
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,_lights];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,_lights];
        _vcl setObjectTextureGlobal [4,_lights];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,_lights];
		_vcl setObjectTextureGlobal [9,""];
		_vcl setObjectTextureGlobal [16,_lights];
		
		_vcl setObjectTextureGlobal [25,_lights]; 
		_vcl setObjectTextureGlobal [26,""];
		//Turn on 11+12
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [11,_lights];
		_vcl setObjectTextureGlobal [12,_lights];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		_vcl setObjectTextureGlobal [15,""];
		};
		
		sleep 0.1;

	};
	
	case (0): {
		_vcl setObjectTextureGlobal [1,""];
		if (_phasetakedown == 0) then { 
        _vcl setObjectTextureGlobal [2,""];
		_vcl setObjectTextureGlobal [7,""];
		};
        _vcl setObjectTextureGlobal [3,""];
        _vcl setObjectTextureGlobal [4,""];
        _vcl setObjectTextureGlobal [5,""];
        _vcl setObjectTextureGlobal [6,""];
		_vcl setObjectTextureGlobal [8,""];
		_vcl setObjectTextureGlobal [9,""];
		if (_phasedirectional < 0.3) then { 
		_vcl setObjectTextureGlobal [10,""];
		_vcl setObjectTextureGlobal [15,""];
		_vcl setObjectTextureGlobal [11,""];
		_vcl setObjectTextureGlobal [12,""];
		_vcl setObjectTextureGlobal [13,""];
		_vcl setObjectTextureGlobal [14,""];
		};
		_vcl setObjectTextureGlobal [16,""];
		_vcl setObjectTextureGlobal [26,""]; 
		_vcl setObjectTextureGlobal [25,""];

        waitUntil {_vcl animationPhase "ani_lightbar" != 0};
    };

	}; //END CASE
	sleep 0.01;
	}; // END WHILE
	

exit;