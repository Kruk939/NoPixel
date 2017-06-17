if (local _this) then {
    
	_rnd_license1 = floor random 36;
    _rnd_license2 = floor random 36;
    _rnd_license3 = floor random 36;
    _rnd_license4 = floor random 36;
    _rnd_license5 = floor random 36;
    _rnd_license6 = floor random 36;
	_rnd_license7 = floor random 36;
    
    _license_array = ["\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\0.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\1.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\2.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\3.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\4.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\5.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\6.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\7.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\8.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\9.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\a.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\b.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\c.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\d.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\e.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\f.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\g.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\h.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\i.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\j.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\k.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\l.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\m.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\n.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\o.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\p.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\q.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\r.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\s.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\t.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\u.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\v.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\w.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\x.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\y.paa",
                      "\Quiet_voiture_1\Quiet_base\Quiet_plaque\Quiet_plaque_aleatoire\k.paa"];
    

	_this setObjectTextureGlobal [6,  _license_array select _rnd_license1]; 
	_this setObjectTextureGlobal [7,  _license_array select _rnd_license2];
	_this setObjectTextureGlobal [8,  _license_array select _rnd_license3];
	_this setObjectTextureGlobal [9,  _license_array select _rnd_license4]; 
	_this setObjectTextureGlobal [10, _license_array select _rnd_license5];
	_this setObjectTextureGlobal [11, _license_array select _rnd_license6];
	_this setObjectTextureGlobal [12, _license_array select _rnd_license7];
};