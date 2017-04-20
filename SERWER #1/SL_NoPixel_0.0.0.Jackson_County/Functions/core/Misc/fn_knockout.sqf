params [["_target", objNull, [objNull]]];

_pos = (getPosASL player);

if(surfaceIsWater _pos) exitwith {};
if(isNull _target) exitWith {};
if(!isPlayer _target) exitWith {};
if(player distance _target > 4) exitWith {};

player switchmove "vvv_anim_weaponHit";
[player,"vvv_anim_weaponHit"] remoteExecCall ["StanLakeside_fnc_animSync"];
	["Remove","Karma",15] call StanLakeside_fnc_sustain;
[name player] remoteExecCall ["StanLakeside_fnc_knockedOut",_target];


