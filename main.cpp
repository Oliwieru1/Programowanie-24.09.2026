
#include <iostream>
#include <fstream>
using namespace std;

// Struktura jednego elementu drzewa binarnego
struct drzewo {
    int liczba;             // Liczba przechowywana w elemencie
    drzewo *lewy, *prawy;   // Wskazniki na lewe i prawe poddrzewo
};

// Zmienna globalna do liczenia usunietych elementow
int usunieto = 0;

// Funkcja dodajaca liczbe do drzewa
void wstaw(drzewo *&d, int liczba) {

    // Jesli miejsce jest puste, tworzymy nowy element
    if (d == NULL) {
        d = new drzewo;       // Przydzielenie pamieci
        d->liczba = liczba;   // Przypisanie liczby
        d->lewy = NULL;       // Brak lewego dziecka
        d->prawy = NULL;      // Brak prawego dziecka
        return;               // Koniec funkcji
    }

    // Jesli liczba jest wieksza od obecnej, idziemy w prawo
    if (liczba > d->liczba)
        wstaw(d->prawy, liczba);

    // W przeciwnym przypadku idziemy w lewo
    else
        wstaw(d->lewy, liczba);
}

// Funkcja wypisujaca liczby w kolejnosci rosnacej
void wypisz(drzewo *d) {

    // Jesli element nie istnieje, konczymy funkcje
    if (d == NULL)
        return;

    // Najpierw wypisujemy lewe poddrzewo
    wypisz(d->lewy);

    // Nastepnie wypisujemy liczbe z obecnego elementu
    cout << d->liczba << " ";

    // Na koncu wypisujemy prawe poddrzewo
    wypisz(d->prawy);
}

// Funkcja usuwajaca cale drzewo z pamieci
void usun(drzewo *d) {

    // Jesli element nie istnieje, konczymy funkcje
    if (d == NULL)
        return;

    // Najpierw usuwamy lewe poddrzewo
    usun(d->lewy);

    // Nastepnie usuwamy prawe poddrzewo
    usun(d->prawy);

    // Usuwamy obecny element z pamieci
    delete d;

    // Zwiekszamy licznik usunietych elementow
    usunieto++;
}

int main() {

    // Utworzenie pustego drzewa
    drzewo *d = NULL;

    // Otwarcie pliku z liczbami
    ifstream plik("liczby.txt");

    // Sprawdzenie, czy plik zostal otwarty
    if (!plik) {
        cout << "Blad otwarcia pliku!";
        return 1;
    }

    int liczba;  // Zmienna przechowujaca wczytana liczbe
    int ile = 0; // Licznik wczytanych liczb

    // Wczytywanie liczb z pliku po jednej
    while (plik >> liczba) {

        // Dodanie wczytanej liczby do drzewa
        wstaw(d, liczba);

        // Zwiekszenie licznika wczytanych liczb
        ile++;
    }

    // Zamkniecie pliku
    plik.close();

    // Wypisanie liczb z drzewa w kolejnosci rosnacej
    cout << "Liczby posortowane: ";
    wypisz(d);
    cout << endl;

    // Usuniecie calego drzewa z pamieci
    usun(d);

    // Ustawienie wskaznika na NULL
    d = NULL;

    // Wypisanie liczby wczytanych elementow
    cout << "Liczba liczb w pliku: " << ile << endl;

    // Wypisanie liczby usunietych elementow
    cout << "Usunieto: " << usunieto
         << " rekordow z pamieci" << endl;

    return 0; // Zakonczenie programu
}
