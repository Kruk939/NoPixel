/*
File: gather evidence
*/
private["_curTarget","_unit","_victim","_crime","_target","_revivable","_targetName","_ui","_progressBar","_titleText","_cP","_title"];
_curTarget = currentEvidence;
_target = currentEvidence;

["Zbieram dowody... Zajmie to okolo 10 sekund", false] spawn domsg;

_target setVariable["EVIDO",player,TRUE];
_evidence = _curTarget getVariable "evidence";
_suspect = _evidence select 0;
_victim = _evidence select 1;
_crime = _evidence select 2;
_bad = 0;



[format["Zebrales dowody na %1 za %2.", name _suspect, _crime], false] spawn domsg;
/*
if(_crime == "187") then {
	[getPlayerUID _suspect,_suspect getVariable["realname",name _suspect],"187"] remoteExec ["life_fnc_wantedAdd",2];
};
if(_crime == "211") then {
	[getPlayerUID _suspect,_suspect getVariable["realname",name _suspect],"211"] remoteExec ["life_fnc_wantedAdd",2];
};
if(_crime == "487") then {
	[getPlayerUID _suspect,_suspect getVariable["realname",name _suspect],"487"] remoteExec ["life_fnc_wantedAdd",2];
};
if(_crime == "334") then {
	[getPlayerUID _suspect,_suspect getVariable["realname",name _suspect],"334"] remoteExec ["life_fnc_wantedAdd",2];
};
*/
deleteVehicle _curTarget;