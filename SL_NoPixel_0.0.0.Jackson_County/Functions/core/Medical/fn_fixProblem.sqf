if(imHealing) exitwith {};
imHealing = true;
_user = _this select 0;
_arrayCount = _this select 1;
_amount = _this select 2;
_myInjuries = _user getVariable "playerInjuries";
if(_arrayCount < 10) then {
	if(_amount isEqualTo 1) then { if("CG_ATF_Bandage_i" in magazines player || myJob isEqualTo "EMS" || myjob isEqualTo "Fire") then {  ["Bandażuję",3,client_fnc_healTime,_user,"AinvPknlMstpSnonWnonDnon_medic_1",[_user,_myInjuries,_arrayCount,"CG_ATF_Bandage_i"],"cg_mission_files\sounds\patdown1.ogg"] spawn client_fnc_dotask; } else { hint "You dont have the required item!"; }; };
	if(_amount isEqualTo 2) then { if("CG_ATF_Bandage_i" in magazines player || myJob isEqualTo "EMS" || myjob isEqualTo "Fire") then { ["Bandażuję",4,client_fnc_healTime,_user,"AinvPknlMstpSnonWnonDnon_medic_1",[_user,_myInjuries,_arrayCount,"CG_ATF_Bandage_i"],"cg_mission_files\sounds\patdown1.ogg"] spawn client_fnc_dotask; } else { hint "You dont have the required items!"; }; };
	if(_amount isEqualTo 3) then { if("CG_ATF_First_Aid_Kit_i" in magazines player || myJob isEqualTo "EMS" || myjob isEqualTo "Fire") then { ["Korzystam z apteczki (Poziom 2)",5,client_fnc_healTime,_user,"AinvPknlMstpSnonWnonDnon_medic_1",[_user,_myInjuries,_arrayCount,"CG_ATF_Bandage_i"],"cg_mission_files\sounds\patdown1.ogg"] spawn client_fnc_dotask; } else { hint "You dont have the required item!"; }; };	
	if(_amount isEqualTo 4) then { if("CG_ATF_First_Aid_Kit_i" in magazines player || myJob isEqualTo "EMS" || myjob isEqualTo "Fire") then { ["Korzystam z apteczki (Poziom 3)",12,client_fnc_healTime,_user,"AinvPknlMstpSnonWnonDnon_medic_1",[_user,_myInjuries,_arrayCount,"CG_ATF_Bandage_i"],"cg_mission_files\sounds\patdown1.ogg"] spawn client_fnc_dotask; } else { hint "You dont have the required item!"; }; };	
};
if(_arrayCount isEqualTo 10) then {
	if(_amount > 0) then { if(myJob isEqualTo "EMS" || myjob isEqualTo "Fire") then { ["Podaję antybiotyk",5,client_fnc_healTime,_user,"AinvPknlMstpSnonWnonDnon_medic_1",[_user,_myInjuries,_arrayCount,"CG_ATF_Bandage_i"],"cg_mission_files\sounds\patdown1.ogg"] spawn client_fnc_dotask; } else { hint "You dont have the required item!"; }; };
};	
closedialog 0;
sleep 3;
imhealing = false;



