	CurrentCaller = _this select 0;
	_type = _this select 1;
	_haltphone = false;
	_radios = player call TFAR_fnc_radiosList;
	if(count _radios > 0) then {
		if(_type == 1) then {
			if( phoneDisabled ) exitwith { _haltphone = true; currentCaller remoteExec ["fnc_busyAnswer",currentCaller]; [format["Połączenie od %1 zostało zapisane w rejestrze! (Telefon wyłączony)","Anonymous"], false] spawn domsg; };	
			if( callInProgress || PhonesRinging ) exitwith { _haltphone = true; currentCaller remoteExec ["fnc_busyAnswer",currentCaller]; [format["Połączenie od %1 zostało zapisane w rejestrze! (Zajęte) ","Anonymous"], false] spawn domsg; };	
			if( client_battery < 5 ) exitwith { _haltphone = true; currentCaller remoteExec ["fnc_busyAnswer",currentCaller]; [format["Połączenie od %1 zostało zapisane w rejestrze! (Niski poziom baterii) ","Anonymous"], false] spawn domsg; };
		} else {
			if( phoneDisabled ) exitwith { _haltphone = true; currentCaller remoteExec ["fnc_busyAnswer",currentCaller]; [format["Połączenie od %1 zostało zapisane w rejestrze! (Telefon wyłączony)",name CurrentCaller], false] spawn domsg; };	
			if( callInProgress || PhonesRinging ) exitwith { _haltphone = true; currentCaller remoteExec ["fnc_busyAnswer",currentCaller]; [format["Połączenie od %1 zostało zapisane w rejestrze! (Zajęte) ",name CurrentCaller], false] spawn domsg; };	
			if( client_battery < 5 ) exitwith { _haltphone = true; currentCaller remoteExec ["fnc_busyAnswer",currentCaller]; [format["Połączenie od %1 zostało zapisane w rejestrze! (Niski poziom baterii) ",name CurrentCaller], false] spawn domsg; };
		};
		PhonesRinging = true;
		_endme = 0;
		if(_haltphone) exitwith {};
		while{PhonesRinging} do {
			_phonering = player getVariable["phonering",0];
			switch (_phonering) do {
				case "0": {playSound3D ["kif_client\sounds\phonerings\0.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "1": {playSound3D ["kif_client\sounds\phonerings\1.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "2": {playSound3D ["kif_client\sounds\phonerings\2.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "3": {playSound3D ["kif_client\sounds\phonerings\3.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "4": {playSound3D ["kif_client\sounds\phonerings\4.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "5": {playSound3D ["kif_client\sounds\phonerings\5.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "6": {playSound3D ["kif_client\sounds\phonerings\6.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "7": {playSound3D ["kif_client\sounds\phonerings\7.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "8": {playSound3D ["kif_client\sounds\phonerings\8.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "9": {playSound3D ["kif_client\sounds\phonerings\9.ogg", player, false, getPosASL player, 1, 1, 5]; };
				case "10": {playSound3D ["kif_client\sounds\phonerings\10.ogg", player, false, getPosASL player, 1, 1, 5]; };
				default: {playSound3D ["kif_client\sounds\phonerings\0.ogg", player, false, getPosASL player, 1, 1, 5]; };
			};
			//playSound "cgphone_call";
			if(_type == 1) then {
				[format["Polaczenie przychodzące od %1!","Numer zastrzezony"], false] spawn domsg; 
			} else {
				[format["Polaczenie przychodzące od %1!",name currentcaller], false] spawn domsg; 
			};
			sleep 5;
			_endme = _endme + 5;
			if(_endme > 20) exitwith { ["Nie odebrales telefonu!", false] spawn domsg;  };
		};

		PhonesRinging = false;		
	} else {
		currentCaller remoteExec ["fnc_busyAnswer",currentCaller];
		["Nie odebrales telefonu!", false] spawn domsg; 
	};