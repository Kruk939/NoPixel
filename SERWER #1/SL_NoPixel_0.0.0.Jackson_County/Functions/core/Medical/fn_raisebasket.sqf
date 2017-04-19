if(isNil "basket") exitwith {};
if(ropelength myrope < 1.3) exitwith { [] spawn StanLakesideClient_fnc_loadbasket; };
ropeUnwind [myrope, 0.5, -3, true];	
