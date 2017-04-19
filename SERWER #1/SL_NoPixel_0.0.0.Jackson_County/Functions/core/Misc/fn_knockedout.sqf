[] spawn {
	[format["%1 ogluszyl Ciebie",_this select 0], false] spawn domsg;
	player playmove "deadstate";
	uisleep 10;

	player switchmove "";
	[player,""] remoteExec ["StanLakesideClient_fnc_animSync"];
};