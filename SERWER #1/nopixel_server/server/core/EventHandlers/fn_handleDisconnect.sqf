addMissionEventHandler ["HandleDisconnect",{ _this spawn StanLakesideServer_fnc_statDisconnect; }];
//addMissionEventHandler["HandleDisconnect",{ _this [_this,getUnitLoadout _this] spawn StanLakesideServer_fnc_statSaveDisconnect; }];
//addMissionEventHandler ["HandleDisconnect",{_this call StanLakesideServer_fnc_deleteDeadPlayers; false;}];