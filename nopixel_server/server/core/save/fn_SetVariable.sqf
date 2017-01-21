_object = _this select 0; 
_variable = _this select 1; 
_new = _this select 2; 
 
if(isNil "_new") exitwith { }; 
 
 
if(_variable isEqualTo "usedgarage") exitwith { 
	if(isNil "_new") exitwith {}; 
	GarageVariableWhore setvariable [_object, _new, false]; 
}; 
 
if(_variable isEqualTo "getunitloadout" && (_object getvariable "sync") isEqualTo 0) exitwith {}; 
 
_object setvariable [_variable, _new, false]; 
