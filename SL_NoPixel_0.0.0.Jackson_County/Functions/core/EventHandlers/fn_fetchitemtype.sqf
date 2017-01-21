	/*
	
		Return:
		0: classname
		1: displayname
		2: picture
		3: scope
		4: type
		5: itemInfo Type (if any)
		6: Cfg Location i.e CfgWeapons
		7: Magazines
		8: Muzzles
		9: Short Description
		10: acc_Pointers
		11: acc_Optics
		12: acc_Muzzles
		_item = ["arifle_mas_ww2_mp40"] call client_fnc_fetchItemType;
	*/
	private["_entity","_cfg","_ret","_type","_acc_p","_acc_o","_acc_m","_scope","_displayName","_picture","_config","_itemInfo","_muzzles","_magazines","_desc"];
	_entity = _this select 0;
	if(_entity isEqualTo "") exitWith {[]};
	if(isNil "_entity") exitWith {[]};
	_cfg = if(isNil {_this select 1}) then
	{
		switch (true) do
		{
			case (isClass (configFile >> "CfgMagazines" >> _entity)) : {"CfgMagazines";};
			case (isClass (configFile >> "CfgWeapons" >> _entity)) : {"CfgWeapons";};
			case (isClass (configFile >> "CfgVehicles" >> _entity)) : {"CfgVehicles";};
			case (isClass (configFile >> "CfgGlasses" >> _entity)) : {"CfgGlasses";};
		};
	}
		else
	{
		_this select 1
	};

	//Final Check

	_ret = [];
	if(typeName _cfg != "STRING") exitWith {[]}; //Not a config
	if(!isClass (configFile >> _cfg >> _entity)) exitWith {[]};
	if(_cfg isEqualTo "") exitWith {[]}; //Not a config, who is passing bad data?

	_config = configFile >> _cfg >> _entity;
	_displayName = getText(_config >> "displayName");
	_picture = getText(_config >> "picture");
	_desc = getText(_config >> "descriptionshort");

	switch (_cfg) do
	{
		case "CfgVehicles":
		{
			_type = getText(_config >> "vehicleClass");
			_scope = getNumber(_config >> "scope");
		};
		
		case "CfgWeapons":
		{
			_scope = getNumber(_config >> "scope");
			_type = getNumber(_config >> "type");
			_desc = getText(_config >> "descriptionshort");
			
			//Compatible attachments
			if(isClass (_config >> "WeaponSlotsInfo")) then
			{
				if(isClass (_config >> "WeaponSlotsInfo")) then
				{
					_acc_p = getArray(_config >> "WeaponSlotsInfo" >> "PointerSlot" >> "compatibleItems");
					_acc_o = getArray(_config >> "WeaponSlotsInfo" >> "CowsSlot" >> "compatibleItems");
					_acc_m = getArray(_config >> "WeaponSlotsInfo" >> "MuzzleSlot" >> "compatibleItems");
				};
			};
			
			if(isClass (_config >> "ItemInfo")) then
			{
				_itemInfo = getNumber(_config >> "ItemInfo" >> "Type");
			};
			_muzzles = getArray(_config >> "muzzles");
			_magazines = getArray(_config >> "magazines");
			if(!isNil {_muzzles}) then
			{
				private["_tmp","_base"];
				_base = inheritsFrom (configFile >> "CfgWeapons" >> _entity);
				{
					if(_x != "this") then
					{
						_tmp = getArray(_base >> _x >> "magazines");
						{
							_magazines set[count _magazines, _x];
						} foreach (_tmp);
					};
				} foreach _muzzles;
			};
		};
		
		case "CfgMagazines":
		{
			_scope = getNumber(_config >> "scope");
		};
	};
	if(isNil "_acc_p") then { _acc_p = 1; };
	if(isNil "_acc_o") then { _acc_o = 1; };
	if(isNil "_acc_m") then { _acc_m = 1; };
	if(isNil "_type") then { _type = 1; };
	_ret = [_entity,_displayName,_picture,_scope,_type,_itemInfo,_cfg,_magazines,_muzzles,_desc,_acc_p,_acc_o,_acc_m];
	_ret;
