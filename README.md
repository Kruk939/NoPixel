# NoPixel
1. Każdy plik podpisany moim imieniem i nazwiskiem bądź pseudonimem dalej zwany **plikiem** jest moją własnością intelektualną.
2. Każdy plik podpisany frazą "stanlakeside.pl" również zwany **plikiem** jest własnością intelektualną stanlakeside.pl.
3. **Plik** można wykorzystać wyłącznie w celach edukacyjnych.
4. **Plik** nie może być udostępniany bez mojej zgody.
5. **Pliki** nie mogą być wykorzystywane na innym serwerze niż na tym, który został utworzony przez [stanlakeside.pl](http://stanlakeside.pl)

<hr>
#TODO
* Zablkowanie SYNCDATA podczas otwierania skrzynek w domku i w sklepie!!!
* Naprawić komputer policji(wantedlista - dodawanie)
* Malowanie pojazdów
* Firmy
* Tablice rejestracyjne dla pojazdów roboczych(policja, ems i prace)
* Panic button'y dla COP, EMS
* Dodanie pracy kierowcy autobusu.
* Poprawić skrypty, tzn. dodać zabezpieczenia przed NULL'ami
* Naprawić znikanie ubrań - przy syncu reload ubrań
* Przeszukiwanie sklepu / domu dla policji
* Wyregulować cenę za filety ryby oraz sztuki za przerobienie ryb


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
* Zbieranie marichuany - zwiększona ilość, naprawione hodowanie oraz zwiększony czas
* Naprawić zabieranie pieniędzy (brak opcji zabrania podczas gdy jest skuty + zabierający nie dostaje kasy)
* Sprawdzanie właścicela sklepu
* Napady na sklep
* Napady na bank
* Sprawdzić więzienie
* Informacja dla policjantów ze dostają informację o włamie na więzienie - dźwięk straszny i na całą mapę wystarczy?
* Naprawić arsenał dla medyków
* Cykl dnia / nocy
* Pożary dla strażaków (importnant)
* Naprawić pracę dziennikarza
* Samochody taksówkarskie z szansą na pojawienie się ivory_rs4_taxi 10% / ivory_190e_taxi 90%
* Automatyczne upuszczanie pojazdów po wejściu do innego
* Sklep z samolotami
* Eventy, które władają ekonomią serwera
* Przerobiono system rzadkich skór kangura (dodano drop GPS)
* Dodano sklep z samolotami
* Dodano sklep z Harleyami
* Naprawiono błąd currentFire w skryptach od sync'a
* Naprawiono wyświetlanie rejestracji


<hr>
#DODATKOWY SYSTEM POWIADOMIEŃ (Zamiana za hint)
```
    Sukces - ["Sukces","Tekst",[0,255,0,1],""] call Client_fnc_showNotification;
    Błąd - ["Błąd","Tekst",[255,0,0,1],""] call Client_fnc_showNotification;
    Ostrzeżenie - ["Ostrzeżenie","Tekst",[255,255,0,1],""] call Client_fnc_showNotification;
	Informacja - ["Informacja","Tekst",[255,69,0,1],""] call Client_fnc_showNotification;
    Ogólny szablon -  ["Tytuł","Tekst",[R,G,B,A],"Dźwięk"] call Client_fnc_showNotification;
```

<hr>
#SZABLON DO SKRYPTÓW
```
/*
 	Author: XYZ
 	Date: XYZ
 	
 	Params:
 		1 - Object - XYZ
 		2 - String - XYZ
 	Description: XYZ
 	Return: XYZ
 */
 ```


<hr>
#WAŻNE PLIKI
* \Functions\core\Police\fn_vars.sqf - ARSENAL
* \Functions\core\Init\fn_miscvariables.sqf - VARIABLES - ADMIN'S ID
* \Functions\core\Shopping\fn_loadstore.sqf - Config sklepu z ubraniami

<hr>

=======
#POMYSLY
* Kupowalne budynki ([stacje benzynowe](http://stanlakeside.pl/index.php?/topic/10379-ożywienie-stacji-benzynowych/&do=findComment&comment=45468))
* [Nowe prace](http://stanlakeside.pl/index.php?/topic/10376-drobne-modyfikacje-oraz-dodanie-nowej-pracy/)
* jesli osoba zostanie postrzelona jakos mocniej i jest nie przytomna to by medycy mieli coraz mniejszy % szans na podniesienie .Np  dostal gdzie blisko serca i podczas pomocy nagle zaczyna sie krwotok wewnetrzny jakis i jest tylko 10% szans.
* Dodanie dla wszystkich kabure do craftu sab_wwiplanes_pilot_holster https://i.imgur.com/SFWbtPi.jpg
* Dodanie do craftu dla wszystkich gps + lornetke, oraz do wielobranżowego za odpowiednie ceny - żeby taniej było craftować
