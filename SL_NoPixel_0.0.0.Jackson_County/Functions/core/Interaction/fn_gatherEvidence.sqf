/*
File: gather evidence
*/
private["_curTarget","_unit","_victim","_crime","_target","_revivable","_targetName","_ui","_progressBar","_titleText","_cP","_title"];
_curTarget = CurrentCursorTarget;
_evidence = _curTarget getVariable ["evidence",[]];
if((count _evidence) == 0) exitWith { ["Nie znalazłeś żadnych dowodów", false] spawn domsg; };
_index = (count _evidence - 1);
_lastEvidence = _evidence select _index;

_suspect = _lastEvidence select 0;
_suspectUID = _lastEvidence select 1;
_crime = _lastEvidence select 2;
_msg = _lastEvidence select 3;





_evidence deleteAt _index;
_curTarget setVariable ["evidence", _evidence, true];
[_msg, false] spawn domsg;