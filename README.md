Kolejka osób
Opis programu
Program służy do zarządzania kolejką osób. Każda osoba posiada:

imię,

nazwisko,

numer.

Program pozwala dodawać, usuwać, wyświetlać, sortować oraz zapisywać osoby do pliku.

Dane osób są przechowywane w tablicy o maksymalnym rozmiarze 100 osób.

Funkcje programu
Program posiada menu, w którym dostępne są następujące opcje:

1. Dodaj osobę
Pozwala użytkownikowi dodać nową osobę do kolejki.

Użytkownik podaje:

imię,

nazwisko,

numer.

2. Wczytaj z pliku
Wczytuje osoby z pliku osoby.txt.

Każda osoba powinna znajdować się w osobnej linii:

Jan Kowalski 15
Adam Nowak 7
Anna Kowalska 23

3. Wypisz kolejkę
Wyświetla wszystkie osoby znajdujące się aktualnie w kolejce.

Przykład:

1. Jan Kowalski 15
2. Adam Nowak 7
3. Anna Kowalska 23

4. Zapisz do pliku
Zapisuje wszystkie osoby znajdujące się w kolejce do pliku osoby.txt.

Jeżeli plik już istnieje, jego poprzednia zawartość zostanie zastąpiona aktualnymi danymi.

5. Posortuj
Sortuje osoby według ich numeru.

Sortowanie odbywa się od najmniejszego numeru do największego.

Przykład:

Przed sortowaniem:

Jan Kowalski 15
Adam Nowak 7
Anna Kowalska 23

Po sortowaniu:

Adam Nowak 7
Jan Kowalski 15
Anna Kowalska 23

6. Usuń po numerze
Pozwala usunąć osobę na podstawie jej numeru.

Program wyszukuje osobę posiadającą podany numer, a następnie usuwa ją z kolejki.

0. Koniec
Kończy działanie programu.

Struktura programu
Program składa się ze struktury osoba oraz klasy Kolejka.

Struktura osoba
Przechowuje dane jednej osoby:

struct osoba
{
    string imie;
    string nazwisko;
    int nr;
};

Klasa Kolejka
Klasa przechowuje:

int ile;
osoba tablica[100];

ile oznacza aktualną liczbę osób w kolejce.

tablica[100] przechowuje maksymalnie 100 osób.

Funkcje klasy
Klasa Kolejka posiada następujące funkcje:

dodaj()      - dodaje osobę
wczytaj()    - wczytuje osoby z pliku
wypisz()     - wyświetla osoby
zapisz()     - zapisuje osoby do pliku
posortuj()   - sortuje osoby po numerze
usun()       - usuwa osobę po numerze

Klasa posiada również:

Kolejka()    - konstruktor
~Kolejka()   - destruktor

Plik z danymi
Program korzysta z pliku:

osoby.txt

Format danych w pliku:

imie nazwisko numer

Przykład:

Jan Kowalski 15
Adam Nowak 7
Anna Kowalska 23
Piotr Zielinski 3

Ograniczenia
Maksymalna liczba osób: 100

Imię i nazwisko nie mogą zawierać spacji.

Każda osoba musi posiadać numer.

Dane są przechowywane w pamięci podczas działania programu.

Dane można zapisać do pliku osoby.txt.

Uruchomienie
Po uruchomieniu programu pojawi się menu:

========== MENU ==========
1. Dodaj osobe
2. Wczytaj z pliku
3. Wypisz kolejke
4. Zapisz do pliku
5. Posortuj
6. Usun po numerze
0. Koniec
==========================
Wybierz opcje:

Należy wpisać numer wybranej opcji i zatwierdzić klawiszem Enter.

Technologie
Program został napisany w języku:

C++

Wykorzystane biblioteki:

<iostream>
<fstream>
<string>
