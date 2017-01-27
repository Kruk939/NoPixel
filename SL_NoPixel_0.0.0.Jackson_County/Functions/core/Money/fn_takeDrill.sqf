if(isNull theDrill) exitWith {};

player addItem "NP_drillitem";
deletevehicle theDrill;
["Zabrales wiertlo",false] call domsg;