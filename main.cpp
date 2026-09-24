#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Definicja struktury przechowuj¹cej dane osoby
struct osoba {
    string imie;
    string nazwisko;
    int nr;
};

// Funkcja wczytuje dane z pliku "dane.txt" do tablicy (maksymalnie 30 rekordów) i zwraca ich liczbê
int wczytajZPliku(osoba tab[], int maxRozmiar) {
    ifstream plik("dane.txt"); // Otwieramy plik do odczytu
    if (!plik.is_open()) {
        cout << "Nie uda³o siê otworzyæ pliku: dane.txt" << endl;
        return 0;
    }

    int licznik = 0;
    // Wczytujemy dane dopóki nie przekroczymy limitu i plik ma kolejne rekordy
    while (licznik < maxRozmiar && plik >> tab[licznik].imie >> tab[licznik].nazwisko >> tab[licznik].nr) {
        licznik++;
    }

    plik.close(); // Zamykamy plik po zakoñczeniu wczytywania
    return licznik; // Zwracamy ile rekordów faktycznie wczytano
}

// Funkcja sortuje tablicê alfabetycznie wed³ug nazwiska
void sortujPoNazwisku(osoba tab[], int rozmiar) {
    sort(tab, tab + rozmiar, [](const osoba& a, const osoba& b) {
        return a.nazwisko < b.nazwisko; // Porównujemy dwa nazwiska
    });
}

// Funkcja zapisuje posortowan¹ tablicê do pliku "wynik.txt"
void zapiszDoPliku(const osoba tab[], int rozmiar) {
    ofstream plik("wynik.txt"); // Otwieramy plik do zapisu
    if (!plik.is_open()) {
        cout << "Nie uda³o siê otworzyæ pliku do zapisu: wynik.txt" << endl;
        return;
    }

    // Zapisujemy ka¿dy element tablicy do pliku w nowej linii
    for (int i = 0; i < rozmiar; ++i) {
        plik << tab[i].imie << " " << tab[i].nazwisko << " " << tab[i].nr << "\n";
    }

    plik.close(); // Zamykamy plik wynikowy
}

int main() {
    const int MAX_REKORDOW = 30;
    osoba tablica[MAX_REKORDOW];

    // Wczytanie danych z pliku "dane.txt" i zliczenie rekordów
    int liczbaRekordow = wczytajZPliku(tablica, MAX_REKORDOW);
    cout << "Wczytano rekordow z pliku dane.txt: " << liczbaRekordow << endl;

    // Jeœli wczytano jakiekolwiek dane, sortujemy je i zapisujemy
    if (liczbaRekordow > 0) {
        sortujPoNazwisku(tablica, liczbaRekordow); // Sortowanie alfabetyczne
        zapiszDoPliku(tablica, liczbaRekordow);    // Zapis do wynik.txt
        cout << "Posortowane dane zostaly zapisane do pliku wynik.txt." << endl;

        // Wyœwietlenie posortowanej listy w konsoli
        cout << "\nPosortowana lista:\n";
        for (int i = 0; i < liczbaRekordow; ++i) {
            cout << i + 1 << ". " << tablica[i].imie << " " << tablica[i].nazwisko << " (Nr: " << tablica[i].nr << ")" << endl;
        }
    } else {
        cout << "Brak danych do przetworzenia. Upewnij siê, ¿e plik 'dane.txt' istnieje i zawiera dane." << endl;
    }

    return 0;
}
