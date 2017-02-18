params["_player"];
if (myjob isEqualTo "cop" && !(ClientArrested) && !(client_istazed)) then {
    ["Uruchomiłeś panic button!",false] spawn domsg;
    [format["911 PANIC BUTTON: FUNKCJONARIUSZ %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], true] remotexec ["domsg",currentCop];
    _player setVariable["pbsee",true,true];
    sleep 300;
    _player setVariable["pbsee",nil,true];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentCop];
};
if (myjob isEqualTo "ems" && !(ClientArrested) && !(client_istazed)) then {
    ["Uruchomiłeś panic button!",false] spawn domsg;
    [format["911 PANIC BUTTON: MEDYK %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], true] remotexec ["domsg",currentCop];
    [format["911 PANIC BUTTON: MEDYK %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], true] remotexec ["domsg",currentEMS];
    [format["911 PANIC BUTTON: MEDYK %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], true] remotexec ["domsg",currentFire];
    _player setVariable["pbsee",true,true];
    sleep 300;
    _player setVariable["pbsee",nil,true];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentCop];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentEMS];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentFire];
};
if (myjob isEqualTo "fire" && !(ClientArrested) && !(client_istazed)) then {
    ["Uruchomiłeś panic button!",false] spawn domsg;
    [format["911 PANIC BUTTON: STRAŻAK %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], true] remotexec ["domsg",currentCop];
    [format["911 PANIC BUTTON: STRAŻAK %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], true] remotexec ["domsg",currentEMS];
    [format["911 PANIC BUTTON: STRAŻAK %1 JEST W NIEBEZPIECZEŃSTWIE!", name _player], true] remotexec ["domsg",currentFire];
    _player setVariable["pbsee",true,true];
    sleep 300;
    _player setVariable["pbsee",nil,true];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentCop];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentEMS];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentFire];
};
if !(myjob IN ["cop","ems","fire"]) then {
    ["Uruchomiłeś panic button!",false] spawn domsg;
    [format["911 PANIC BUTTON: CYWIL %1 URUCHOMIŁ PANIC BUTTON! GPS PRZEZ 5 MINUT BĘDZIE USTALAŁ JEGO POZYCJĘ!", name _player], true] remotexec ["domsg",currentCop];
    _player setVariable["pbsee",true,true];
    sleep 300;
    _player setVariable["pbsee",nil,true];
    ["dpanic"] remoteExec ["client_fnc_playSound", currentCop];
};