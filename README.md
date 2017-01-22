# NoPixel
1. Każdy plik podpisany moim imieniem i nazwiskiem dalej zwany **plikiem** jest moją własnością intelektualną.
2. Każdy plik podpisany frazą "stanlakeside.pl" również zwany **plikiem** jest własnością intelektualną stanlakeside.pl.
3. **Plik** można wykorzystać wyłącznie w celach edukacyjnych.
4. **Plik** nie może być udostępniany bez mojej zgody.
5. **Pliki** nie mogą być wykorzystywane na innym serwerze niż na tym, który został utworzony przez [stanlakeside.pl](http://stanlakeside.pl)

<hr>
#TODO
* Firmy
* Tablice rejestracyjne dla pojazdów roboczych(policja, ems i prace)
* Naprawić komputer policji(wantedlista - dodawanie)
* Dodanie pracy kierowcy autobusu.
* Panic button'y dla COP, EMS
* Naprawić pracę dziennikarza
* Poprawić skrypty, tzn. dodać zabezpieczenia przed NULL'ami
* Pożary dla strażaków (importnant)
* Naprawić znikanie ubrań

<hr>
#DONE
* Automatycznie przydzielanie ekwipunku przy zaczynaniu pracy (EMS, FIRE, COP).
* Kupowanie licencji na broń (5000$)
* Ilość dostępnych prac w zależności od ilości osób.
* Zapisywanie "wejściówek" dla COP,EMS,MAFIA,LEGAL,MAYOR,FIRE przy promote
* Naprawiono errory w RPT dot. updateHouse, updateShop (wszystko już zapisuje prawidłowo)
* Dodano Doughnuts - czyli firmę z pączkami
* Logowanie serwera (wchodzenie na serwer, wychodzenie, rozpoczynanie i kończenie pracy, kupowanie pojazdów, pobieranie ekwipunku)
* Sync przy wyjściu z gry (Przycisk ABORT)
* Naprawienie burmistrza
* Autokomis (Kruk)
* Ukrywanie swojego steamid gdy jestem niewidzialny (fn_nametags.sqf ; fn_adminexecute.sqf)
* Panel gracza pod nową misję
* Naprawiono bankomat mafii
* Przygotowano misję pod system odszkodowań (w bazie danych czy osoba jest połączona z serwerem ; resetuje się przy restarcie)

<hr>
#DODATKOWY SYSTEM POWIADOMIEŃ (Zamiana za hint)
    1. Sukces - ["Sukces","Tekst",[0,255,0,1],""] call Client_fnc_showNotification;
    2. Błąd - ["Błąd","Tekst",[255,0,0,1],""] call Client_fnc_showNotification;
    3. Ostrzeżenie - ["Ostrzeżenie","Tekst",[255,255,0,1],""] call Client_fnc_showNotification;
    4. Ogólny szablon -  ["Tytuł","Tekst",[R,G,B,A],"Dźwięk"] call Client_fnc_showNotification;


<hr>
#WAŻNE PLIKI
* \Functions\core\Police\fn_vars.sqf - ARSENAL
* \Functions\core\Init\fn_miscvariables.sqf - VARIABLES - ADMIN'S ID
* \Functions\core\Shopping\fn_loadstore.sqf - Config sklepu z ubraniami

<hr>
#POMYSLY
* Zwiekszenie ceny za crafting lockpick'a. Ale wtedy dac mozliwosc sprzedazy auta dla kazdego.
