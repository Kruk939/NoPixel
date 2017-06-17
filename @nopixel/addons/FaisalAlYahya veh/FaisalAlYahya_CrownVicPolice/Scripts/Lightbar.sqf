_car = _this select 0;
_red  = "#(argb,8,8,3)color(1,0,0,1.0,CO)";
_blue = "#(argb,8,8,3)color(0,0,1,1.0,CO)";
//hiddenSelections[] = {"camo1","lb-blue-top","lb-red-top","lb-corner-left","lb-corner-right","lb_blue","lb_red","lb-back-red","lb-back-blue","lower-lb-red","lower-lb-blue","front-lb-red","front-lb-blue",22"flasherR",23"FlasherB"};
_lightstage1 = [
[1,_red],
[2,""]
];
_lightsBlank = [
[1,""],
[2,""]
];
_lightstage2 = [
[1,""],
[2,_blue]
];
while{alive _car}do{
  if(_car getVariable ["lightbar",0] == 1)then{
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightstage1;
        sleep 0.1;
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightsBlank;
        sleep 0.1;
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightstage1;
        sleep 0.1;
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightsBlank;
        sleep 0.1;
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightstage2;
        sleep 0.1;
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightsBlank;
        sleep 0.1;
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightstage2;
        sleep 0.1;
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightsBlank;
        sleep 0.1;
    }elsE{
        {
        _car setObjectTexture [(_x select 0),(_x select 1)];
        }forEach _lightsBlank;
        sleep 1;
    };
};