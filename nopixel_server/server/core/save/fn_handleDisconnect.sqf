//addMissionEventHandler ["HandleDisconnect",{ _this [] spawn Server_fnc_statSaveDisconnect; }];
//addMissionEventHandler["HandleDisconnect",{ _this [player,getUnitLoadout player] spawn Server_fnc_statSaveDisconnect; }];
addMissionEventHandler ["HandleDisconnect",{_this call server_fnc_deleteDeadPlayers; false;}];