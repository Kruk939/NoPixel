params["_player"];
_all = currentCop + currentEMS + currentFire;
if (myjob isEqualTo "cop" && !(ClientArrested) && !(client_istazed)) then {
    ["Uruchomiłeś panic button!",false] spawn domsg;
    [format["911 PANIC BUTTON: FUNKCJONARIUSZ %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], false] remoteexec ["domsg",currentCop];
    _player setVariable["pbsee",true,true];
    sleep 300;
    _player setVariable["pbsee",nil,true];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentCop];
};
if (myjob isEqualTo "ems" && !(ClientArrested) && !(client_istazed)) then {
    ["Uruchomiłeś panic button!",false] spawn domsg;
    [format["911 PANIC BUTTON: MEDYK %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], false] remoteexec ["domsg",_all];
    _player setVariable["pbsee",true,true];
    sleep 300;
    _player setVariable["pbsee",nil,true];
    ["dpanic"] remoteExec ["client_fnc_playSound", _all];
};
if (myjob isEqualTo "fire" && !(ClientArrested) && !(client_istazed)) then {
    ["Uruchomiłeś panic button!",false] spawn domsg;
    [format["911 PANIC BUTTON: STRAŻAK %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], false] remoteexec ["domsg",_all];
    _player setVariable["pbsee",true,true];
    sleep 300;
    _player setVariable["pbsee",nil,true];
    ["dpanic"] remoteExec ["client_fnc_playSound", _all];
};
if !(myjob IN ["cop","ems","fire"]) then {
    ["Uruchomiłeś panic button!",false] spawn domsg;
    [format["911 PANIC BUTTON: CYWIL %1 URUCHOMIŁ PANIC BUTTON! GPS PRZEZ 5 MINUT BĘDZIE USTALAŁ JEGO POZYCJĘ!", name _player], false] remoteexec ["domsg",currentCop];
    _player setVariable["pbsee",true,true];
    sleep 300;
    _player setVariable["pbsee",nil,true];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentCop];
};