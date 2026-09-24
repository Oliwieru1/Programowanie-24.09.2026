# Program C++: Przetwarzanie i Sortowanie Danych z Pliku

Prosty program w języku C++, który odczytuje dane osób z pliku tekstowego, ogranicza je do maksymalnie 30 rekordów, sortuje alfabetycznie według nazwiska, a następnie zapisuje posortowaną listę do nowego pliku.

## 🛠️ Funkcjonalności
- **Wczytywanie z pliku (`dane.txt`)**: Odczytuje strukturę danych składającą się z imienia, nazwiska oraz numeru.
- **Limit rekordów**: Obsługuje maksymalnie do 30 rekordów (zabezpieczenie tablicy).
- **Zliczanie**: Zlicza i informuje, ile rekordów udało się poprawnie wczytać.
- **Sortowanie alfabetyczne**: Porządkuje tablicę obiektów rosnąco według nazwiska.
- **Zapis do pliku (`wynik.txt`)**: Zapisuje gotowy, posortowany wynik do pliku wyjściowego.

## 📂 Struktura danych (`struct osoba`)
Każdy rekord składa się z:
- `imie` (typ `string`)
- `nazwisko` (typ `string`)
- `nr` (typ `int`)

## 📝 Wymagany format pliku wejściowego (`dane.txt`)
Plik `dane.txt` powinien znajdować się w tym samym folderze co program. Dane powinny być oddzielone spacjami (każda osoba w nowej linii):

```text
Jan Kowalski 15
Anna Nowak 8
Piotr Zieliński 22
Katarzyna Wiśniewska 3
