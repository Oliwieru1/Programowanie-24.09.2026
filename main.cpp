#include <iostream>      // Biblioteka potrzebna do cout i cin
#include <fstream>       // Biblioteka potrzebna do obslugi plikow
#include <string>        // Biblioteka potrzebna do uzywania typu string

using namespace std;     // Dzieki temu nie musimy pisac std:: przed cout, cin, string itd.


// ---------------------------------------------------------
// STRUKTURA OSOBA
// ---------------------------------------------------------

// Tworzymy strukture, ktora przechowuje informacje o jednej osobie
struct osoba
{
    string imie;         // Imie osoby
    string nazwisko;     // Nazwisko osoby
    int nr;              // Numer osoby
};


// ---------------------------------------------------------
// KLASA KOLEJKA
// ---------------------------------------------------------

class Kolejka
{
public:

    // Zmienna przechowujaca liczbe osob w kolejce
    int ile;

    // Tablica przechowujaca maksymalnie 100 osob
    osoba tablica[100];


    // -----------------------------------------------------
    // KONSTRUKTOR
    // -----------------------------------------------------

    // Konstruktor uruchamia sie automatycznie
    // podczas tworzenia obiektu klasy Kolejka
    Kolejka()
    {
        // Na poczatku kolejka jest pusta
        // dlatego ustawiamy liczbe osob na 0
        ile = 0;
    }


    // -----------------------------------------------------
    // FUNKCJA DODAJ
    // -----------------------------------------------------

    // Funkcja sluzy do dodawania nowej osoby
    void dodaj()
    {
        // Sprawdzamy, czy w tablicy jest jeszcze miejsce
        if (ile >= 100)
        {
            // Jezeli jest juz 100 osob,
            // wyswietlamy informacje o pelnej kolejce
            cout << "Kolejka jest pelna!" << endl;

            // Konczymy dzialanie funkcji
            return;
        }


        // Pobieramy od uzytkownika imie
        cout << "Podaj imie: ";
        cin >> tablica[ile].imie;


        // Pobieramy od uzytkownika nazwisko
        cout << "Podaj nazwisko: ";
        cin >> tablica[ile].nazwisko;


        // Pobieramy od uzytkownika numer
        cout << "Podaj numer: ";
        cin >> tablica[ile].nr;


        // Zwiekszamy liczbe osob w kolejce o 1
        ile++;


        // Informujemy uzytkownika, ze osoba zostala dodana
        cout << "Dodano osobe." << endl;
    }


    // -----------------------------------------------------
    // FUNKCJA WCZYTAJ
    // -----------------------------------------------------

    // Funkcja sluzy do wczytywania osob z pliku
    void wczytaj()
    {
        // Otwieramy plik osoby.txt do odczytu
        ifstream plik("osoby.txt");


        // Sprawdzamy, czy plik zostal poprawnie otwarty
        if (!plik)
        {
            // Jezeli nie mozna otworzyc pliku,
            // wyswietlamy komunikat
            cout << "Nie mozna otworzyc pliku!" << endl;

            // Konczymy funkcje
            return;
        }


        // Przed wczytaniem zerujemy liczbe osob
        // Dzieki temu wczytujemy plik od poczatku
        ile = 0;


        // Wczytujemy dane z pliku
        // Petla wykonuje sie dopoki:
        // 1. nie przekroczymy 100 osob
        // 2. w pliku znajduja sie dane
        while (ile < 100 &&
               plik >> tablica[ile].imie
                    >> tablica[ile].nazwisko
                    >> tablica[ile].nr)
        {
            // Po poprawnym wczytaniu jednej osoby
            // zwiekszamy licznik osob
            ile++;
        }


        // Zamykamy plik po zakonczeniu odczytu
        plik.close();


        // Informujemy uzytkownika o zakonczeniu wczytywania
        cout << "Wczytano dane." << endl;
    }


    // -----------------------------------------------------
    // FUNKCJA WYPISZ
    // -----------------------------------------------------

    // Funkcja wyswietla wszystkie osoby znajdujace sie
    // aktualnie w kolejce
    void wypisz()
    {
        // Sprawdzamy, czy kolejka jest pusta
        if (ile == 0)
        {
            // Jezeli nie ma zadnej osoby,
            // wyswietlamy odpowiedni komunikat
            cout << "Kolejka jest pusta." << endl;

            // Konczymy funkcje
            return;
        }


        // Petla przechodzi przez wszystkie osoby
        for (int i = 0; i < ile; i++)
        {
            // Wyswietlamy numer porzadkowy osoby
            cout << i + 1 << ". ";

            // Wyswietlamy imie
            cout << tablica[i].imie << " ";

            // Wyswietlamy nazwisko
            cout << tablica[i].nazwisko << " ";

            // Wyswietlamy numer
            cout << tablica[i].nr << endl;
        }
    }


    // -----------------------------------------------------
    // FUNKCJA ZAPISZ
    // -----------------------------------------------------

    // Funkcja zapisuje wszystkie osoby do pliku
    void zapisz()
    {
        // Otwieramy plik osoby.txt do zapisu
        ofstream plik("osoby.txt");


        // Petla przechodzi przez wszystkie osoby
        for (int i = 0; i < ile; i++)
        {
            // Zapisujemy imie do pliku
            plik << tablica[i].imie << " ";

            // Zapisujemy nazwisko do pliku
            plik << tablica[i].nazwisko << " ";

            // Zapisujemy numer do pliku
            plik << tablica[i].nr << endl;
        }


        // Zamykamy plik
        plik.close();


        // Informujemy uzytkownika o zapisaniu danych
        cout << "Zapisano dane." << endl;
    }


    // -----------------------------------------------------
    // FUNKCJA POSORTUJ
    // -----------------------------------------------------

    // Funkcja sortuje osoby wedlug numeru
    // od najmniejszego do najwiekszego
    void posortuj()
    {
        // Pierwsza petla odpowiada za kolejne przejscia
        // po tablicy
        for (int i = 0; i < ile - 1; i++)
        {
            // Druga petla porownuje osoby znajdujace sie obok siebie
            for (int j = 0; j < ile - 1 - i; j++)
            {
                // Sprawdzamy, czy numer pierwszej osoby
                // jest wiekszy od numeru drugiej osoby
                if (tablica[j].nr > tablica[j + 1].nr)
                {
                    // Tworzymy zmienna pomocnicza
                    // do zamiany miejscami dwoch osob
                    osoba temp;


                    // Kopiujemy pierwsza osobe do zmiennej pomocniczej
                    temp = tablica[j];


                    // Na miejsce pierwszej osoby
                    // wpisujemy druga osobe
                    tablica[j] = tablica[j + 1];


                    // Na miejsce drugiej osoby
                    // wpisujemy osobe zapisana w temp
                    tablica[j + 1] = temp;
                }
            }
        }


        // Informujemy uzytkownika o zakonczeniu sortowania
        cout << "Posortowano kolejke." << endl;
    }


    // -----------------------------------------------------
    // FUNKCJA USUN
    // -----------------------------------------------------

    // Funkcja usuwa osobe na podstawie jej numeru
    void usun()
    {
        // Zmienna przechowujaca numer osoby,
        // ktora chcemy usunac
        int numer;


        // Prosba o podanie numeru
        cout << "Podaj numer osoby do usuniecia: ";

        // Wczytujemy numer
        cin >> numer;


        // Zmienna przechowujaca pozycje znalezionej osoby
        // Ustawiamy -1, poniewaz oznacza to,
        // ze osoba nie zostala jeszcze znaleziona
        int pozycja = -1;


        // Przechodzimy przez cala kolejke
        for (int i = 0; i < ile; i++)
        {
            // Sprawdzamy, czy numer osoby
            // jest taki sam jak podany przez uzytkownika
            if (tablica[i].nr == numer)
            {
                // Zapamietujemy pozycje znalezionej osoby
                pozycja = i;

                // Przerywamy petle,
                // poniewaz znalezlismy osobe
                break;
            }
        }


        // Sprawdzamy, czy osoba zostala znaleziona
        if (pozycja == -1)
        {
            // Jezeli pozycja nadal wynosi -1,
            // oznacza to, ze osoby nie znaleziono
            cout << "Nie znaleziono osoby o takim numerze." << endl;

            // Konczymy funkcje
            return;
        }


        // Przesuwamy wszystkie osoby znajdujace sie
        // za usuwana osoba o jedna pozycje w lewo
        for (int i = pozycja; i < ile - 1; i++)
        {
            // Osoba z nastepnej pozycji
            // zajmuje miejsce usunietej osoby
            tablica[i] = tablica[i + 1];
        }


        // Zmniejszamy liczbe osob w kolejce
        ile--;


        // Informujemy uzytkownika o usunieciu
        cout << "Usunieto osobe." << endl;
    }


    // -----------------------------------------------------
    // DESTRUKTOR
    // -----------------------------------------------------

    // Destruktor uruchamia sie automatycznie
    // podczas usuwania obiektu klasy
    ~Kolejka()
    {
        // W tym przypadku nie musimy nic robic,
        // poniewaz tablica jest tworzona automatycznie
    }
};


// ---------------------------------------------------------
// FUNKCJA MAIN
// ---------------------------------------------------------

int main()
{
    // Tworzymy obiekt klasy Kolejka
    // Konstruktor ustawi ile na 0
    Kolejka k;


    // Zmienna przechowujaca wybor uzytkownika
    int wybor;


    // Petla do-while odpowiada za dzialanie menu
    // Menu bedzie wyswietlane dopoki uzytkownik
    // nie wybierze opcji 0
    do
    {
        // Wyswietlamy pusta linie dla czytelnosci
        cout << endl;


        // Wyswietlamy naglowek menu
        cout << "========== MENU ==========" << endl;


        // Wyswietlamy poszczegolne opcje
        cout << "1. Dodaj osobe" << endl;
        cout << "2. Wczytaj z pliku" << endl;
        cout << "3. Wypisz kolejke" << endl;
        cout << "4. Zapisz do pliku" << endl;
        cout << "5. Posortuj" << endl;
        cout << "6. Usun po numerze" << endl;
        cout << "0. Koniec" << endl;


        // Dolna linia menu
        cout << "==========================" << endl;


        // Pytamy uzytkownika o wybor
        cout << "Wybierz opcje: ";

        // Wczytujemy wybor
        cin >> wybor;


        // Switch sprawdza, jaka opcje wybral uzytkownik
        switch (wybor)
        {
            // Jezeli wybrano 1
            case 1:

                // Wywolujemy funkcje dodaj()
                k.dodaj();

                // Konczymy ten przypadek
                break;


            // Jezeli wybrano 2
            case 2:

                // Wywolujemy funkcje wczytaj()
                k.wczytaj();

                // Konczymy ten przypadek
                break;


            // Jezeli wybrano 3
            case 3:

                // Wywolujemy funkcje wypisz()
                k.wypisz();

                // Konczymy ten przypadek
                break;


            // Jezeli wybrano 4
            case 4:

                // Wywolujemy funkcje zapisz()
                k.zapisz();

                // Konczymy ten przypadek
                break;


            // Jezeli wybrano 5
            case 5:

                // Wywolujemy funkcje posortuj()
                k.posortuj();

                // Konczymy ten przypadek
                break;


            // Jezeli wybrano 6
            case 6:

                // Wywolujemy funkcje usun()
                k.usun();

                // Konczymy ten przypadek
                break;


            // Jezeli wybrano 0
            case 0:

                // Informujemy o zakonczeniu programu
                cout << "Koniec programu." << endl;

                // Konczymy ten przypadek
                break;


            // Jezeli uzytkownik wpisal inna liczbe
            default:

                // Informujemy o blednym wyborze
                cout << "Nieprawidlowa opcja!" << endl;
        }


    // Petla wykonuje sie ponownie,
    // jezeli wybor jest rozny od 0
    } while (wybor != 0);


    // Zwracamy 0, co oznacza poprawne zakonczenie programu
    return 0;
}
