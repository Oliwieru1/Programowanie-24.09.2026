# Drzewa binarne – C++

## 1. Opis programu

Program służy do obsługi drzewa binarnego wyszukiwania. Jego zadaniem jest wczytanie liczb z pliku tekstowego, umieszczenie ich w drzewie, wypisanie ich w kolejności rosnącej oraz usunięcie wszystkich elementów z pamięci przed zakończeniem programu.

Program wykorzystuje funkcje, wskaźniki, rekurencję oraz dynamiczne przydzielanie pamięci.

## 2. Struktura drzewa

Do przechowywania danych wykorzystano strukturę `drzewo`.

Każdy element zawiera:
- `liczba` – przechowuje wartość liczbową.
- `lewy` – wskaźnik na lewe dziecko.
- `prawy` – wskaźnik na prawe dziecko.

W drzewie obowiązuje zasada:
- Liczby mniejsze lub równe trafiają na lewą stronę.
- Liczby większe trafiają na prawą stronę.

Pierwszy dodany element staje się korzeniem drzewa.

## 3. Opis funkcji

### Funkcja `wstaw()`

```cpp
void wstaw(drzewo *&d, int liczba)
```

Funkcja odpowiada za dodawanie nowych liczb do drzewa binarnego.

Działanie:
1. Sprawdza, czy aktualne miejsce jest puste (`d == NULL`).
2. Jeśli jest puste, tworzy nowy element za pomocą `new`.
3. Przypisuje mu wczytaną liczbę.
4. Ustawia lewe i prawe wskaźniki na `NULL`.
5. Jeśli miejsce nie jest puste, porównuje dodawaną liczbę z wartością aktualnego elementu.
6. Większą liczbę dodaje po prawej stronie, a mniejszą lub równą po lewej.

Funkcja wykorzystuje rekurencję, czyli wywołuje samą siebie, aż znajdzie wolne miejsce.

### Funkcja `wypisz()`

```cpp
void wypisz(drzewo *d)
```

Funkcja odpowiada za wypisywanie wszystkich liczb z drzewa w kolejności rosnącej.

Działanie:
1. Sprawdza, czy element istnieje.
2. Jeśli wskaźnik wynosi `NULL`, kończy działanie.
3. Wywołuje funkcję dla lewego poddrzewa.
4. Wypisuje liczbę z aktualnego elementu.
5. Wywołuje funkcję dla prawego poddrzewa.

Dzięki takiej kolejności otrzymujemy posortowane liczby.

Funkcja również wykorzystuje rekurencję.

### Funkcja `usun()`

```cpp
void usun(drzewo *d)
```

Funkcja odpowiada za usunięcie całego drzewa z pamięci.

Działanie:
1. Sprawdza, czy aktualny element istnieje.
2. Jeśli element nie istnieje, kończy działanie.
3. Usuwa lewe poddrzewo.
4. Usuwa prawe poddrzewo.
5. Usuwa aktualny element za pomocą `delete`.
6. Zwiększa globalny licznik `usunieto` o 1.

Elementy są usuwane od dołu drzewa, dzięki czemu najpierw usuwane są dzieci, a później ich rodzice.

### Funkcja `main()`

```cpp
int main()
```

Jest to główna funkcja programu, która odpowiada za wykonanie wszystkich operacji.

Działanie:
1. Tworzy pusty wskaźnik na drzewo (`drzewo *d = NULL`).
2. Otwiera plik `liczby.txt` za pomocą `ifstream`.
3. Sprawdza, czy plik został poprawnie otwarty.
4. Wczytuje liczby z pliku za pomocą pętli `while`.
5. Każdą wczytaną liczbę przekazuje do funkcji `wstaw()`.
6. Zwiększa licznik wczytanych liczb `ile`.
7. Zamyka plik.
8. Wywołuje funkcję `wypisz()`, aby wyświetlić liczby w kolejności rosnącej.
9. Wywołuje funkcję `usun()`, aby zwolnić pamięć całego drzewa.
10. Ustawia wskaźnik drzewa na `NULL`.
11. Wyświetla liczbę wczytanych oraz usuniętych elementów.

## 4. Zmienne globalne i lokalne

- `usunieto` – zmienna globalna, która zlicza liczbę usuniętych elementów drzewa.
- `d` – wskaźnik na korzeń drzewa.
- `liczba` – przechowuje aktualnie wczytaną liczbę z pliku.
- `ile` – zlicza wszystkie liczby wczytane z pliku.

## 5. Plik wejściowy

Program korzysta z pliku tekstowego `liczby.txt`.

Przykładowa zawartość:

```text
5
4
1
3
6
2
```

Każda liczba znajduje się w osobnym wierszu.

## 6. Przykładowy wynik programu

```text
Liczby posortowane: 1 2 3 4 5 6
Liczba liczb w pliku: 6
Usunieto: 6 rekordow z pamieci
```

## 7. Wykorzystane elementy języka C++

- `struct` – tworzenie struktury przechowującej dane drzewa.
- Wskaźniki – wskazywanie na lewe i prawe poddrzewo.
- Funkcje – podział programu na osobne operacje.
- Rekurencja – wywoływanie funkcji przez samą siebie.
- `new` – dynamiczne przydzielanie pamięci.
- `delete` – zwalnianie przydzielonej pamięci.
- `ifstream` – odczytywanie danych z pliku.
- `while` – wczytywanie kolejnych liczb aż do końca pliku.
- `NULL` – oznaczenie pustego wskaźnika.

## 8. Podsumowanie

Program przedstawia działanie drzewa binarnego wyszukiwania. Umożliwia dodawanie elementów, wypisywanie ich w kolejności rosnącej oraz usuwanie całej struktury z pamięci.

Dodatkowo program sprawdza, czy liczba usuniętych elementów zgadza się z liczbą elementów wczytanych z pliku. Dzięki temu można sprawdzić, czy wszystkie elementy drzewa zostały poprawnie usunięte.
