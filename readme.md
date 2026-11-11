# Porównanie wydajności struktur danych w C++

## Opis projektu
Program służy do porównania szybkości działania trzech struktur danych w języku C++:
- `vector` – wektor dynamiczny,
- `tablica` – zwykła tablica statyczna,
- `list` – lista dwukierunkowa.

Program generuje 100 000 losowych liczb, a następnie wykonuje na każdej strukturze te same operacje i mierzy czas ich wykonania za pomocą biblioteki `chrono`.

## Wykonywane operacje
1. **Dodawanie elementów** – wstawienie 100 000 liczb do struktury.
2. **Sortowanie** – uporządkowanie liczb rosnąco.
3. **Usuwanie** – usunięcie elementu znajdującego się na środku struktury.
4. **Wstawianie** – dodanie liczby `123` na środkową pozycję.

## Wykorzystane biblioteki
- `iostream` – wyświetlanie wyników w konsoli.
- `vector` – obsługa wektora dynamicznego.
- `list` – obsługa listy dwukierunkowej.
- `algorithm` – sortowanie elementów.
- `chrono` – pomiar czasu wykonywania operacji.
- `cstdlib` – generowanie losowych liczb.

## Sposób działania
Na początku programu tworzona jest tablica zawierająca 100 000 losowych liczb. Następnie te same dane są kopiowane do trzech struktur: vectora, zwykłej tablicy i listy.

Dla każdej struktury wykonywane są cztery operacje. Czas ich wykonania jest mierzony osobno i wyświetlany w mikrosekundach.

## Cel projektu
Celem projektu jest sprawdzenie, która struktura danych najlepiej radzi sobie z poszczególnymi operacjami oraz poznanie różnic pomiędzy wektorem, tablicą i listą.

## Wnioski
Wyniki pozwalają zauważyć, że poszczególne struktury danych mają różną wydajność w zależności od wykonywanej operacji.

- **Vector** zapewnia szybki dostęp do elementów, ale wstawianie i usuwanie ze środka wymaga przesuwania kolejnych elementów.
- **Tablica** zapewnia szybki dostęp do danych, ale wstawianie i usuwanie również wymaga ręcznego przesuwania elementów.
- **Lista** umożliwia szybkie wstawianie i usuwanie elementów, gdy mamy już odpowiedni iterator, ale znalezienie konkretnej pozycji wymaga przechodzenia przez kolejne elementy.

Program pozwala praktycznie porównać wydajność tych trzech struktur danych.