disableSerialization;
createDialog "ATMmafia";

_bank = mafiaBank; 
_bank = _bank call StanLakeside_fnc_numberText;
ctrlSetText [1002, _bank];

_cash = player getVariable "sl_wallet_silverlake"; 
_cash = _cash call StanLakeside_fnc_numberText;
ctrlSetText [1004, _cash];