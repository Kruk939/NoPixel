while {true} do {
    uisleep 10;
    if (myjob == "Cop" || myjob == "EMS" || myjob == "Fire") then {
		
    }else{
		_radioright = call TFAR_fnc_haveSWRadio;
	    if(_radioright) then {
	        _channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
		    _channel = _channel + 1;
                if (driver (vehicle player) isEqualTo player && (vehicle player) != player) then {
				    _curfreqsr = [(call TFAR_fnc_activeSwRadio), _channel] call TFAR_fnc_GetChannelFrequency;
				    _curfreqsr = parseNumber _curfreqsr;
					    if(!isNil "_curfreqsr") then {
						    if( _curfreqsr > 33 && _curfreqsr < 34 ) then {
							    ["33.1 - 33.9 to kodowane czestotliwosci.", false] spawn domsg;
							    [(call TFAR_fnc_activeSwRadio), _channel, "40"] call TFAR_fnc_SetChannelFrequency;
						    };
					    };
			    };
        };
	};
};