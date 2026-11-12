Sortowanie tablicy i listy dwukierunkowej
Opis projektu

Program napisany w języku C++, którego zadaniem jest generowanie 50 000 losowych liczb, a następnie sortowanie ich za pomocą dwóch struktur danych:

tablicy,
listy dwukierunkowej.

Program sortuje liczby malejąco, czyli od największej do najmniejszej.

Dodatkowo mierzy i porównuje czas sortowania obu struktur.

Funkcjonalności programu
Generowanie 50 000 losowych liczb z zakresu od 0 do 99 999.
Zapisywanie tych samych liczb do tablicy i listy dwukierunkowej.
Wyświetlanie pierwszych 20 liczb przed sortowaniem.
Sortowanie tablicy metodą wyboru (Selection Sort).
Sortowanie listy dwukierunkowej metodą wyboru.
Wyszukiwanie największego elementu w liście i zamienianie go z aktualnym elementem.
Pomiar czasu sortowania tablicy i listy.
Wyświetlanie pierwszych 20 liczb po sortowaniu.
Zwalnianie pamięci po zakończeniu programu.
Zastosowane struktury danych
Tablica

Przechowuje 50 000 liczb całkowitych. Sortowanie odbywa się poprzez wyszukiwanie największego elementu w nieposortowanej części tablicy i zamianę go z aktualnym elementem.

Lista dwukierunkowa

Każdy element listy zawiera:

liczba – przechowywaną wartość,
next – wskaźnik na następny element,
prev – wskaźnik na poprzedni element.

Sortowanie polega na wyszukiwaniu największego elementu w pozostałej części listy i zamianie jego wartości z wartością aktualnego elementu.

Pomiar czasu

Do pomiaru czasu wykorzystano funkcję clock() z biblioteki <ctime>.

Program mierzy osobno:

czas sortowania tablicy,
czas sortowania listy dwukierunkowej.

Generowanie liczb nie jest uwzględniane w pomiarze.

Złożoność algorytmu

Obie metody sortowania mają złożoność czasową:

O(n²)

Oznacza to, że czas sortowania rośnie wraz ze wzrostem liczby elementów.

Wykorzystane biblioteki
<iostream> – obsługa wejścia i wyjścia.
<cstdlib> – generowanie liczb losowych i zwalnianie pamięci tablicy.
<ctime> – inicjalizacja generatora liczb i pomiar czasu.
Uruchomienie programu
Otworzyć projekt w środowisku Code::Blocks.
Skompilować program.
Uruchomić program.
Program automatycznie wygeneruje 50 000 liczb.
Na ekranie zostaną wyświetlone początkowe liczby, liczby po sortowaniu oraz czasy wykonania obu algorytmów.
Język programowania

C++

Podsumowanie

Celem programu jest porównanie czasu sortowania 50 000 liczb w tablicy oraz liście dwukierunkowej przy użyciu algorytmu sortowania przez wybieranie. Program pozwala zaobserwować różnice w czasie działania tego samego algorytmu na dwóch różnych strukturach danych.
