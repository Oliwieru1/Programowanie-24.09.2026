# Lista jednokierunkowa – operacje na liście w C++

## Opis projektu

Program przedstawia działanie listy jednokierunkowej w języku C++. Dane są pobierane z pliku tekstowego `liczby.txt`, a następnie zapisywane w dynamicznie tworzonej liście.

Program umożliwia wykonywanie podstawowych operacji na liście.

## Funkcje programu

1. **Wczytywanie danych** – pobieranie liczb z pliku tekstowego.
2. **Tworzenie listy** – tworzenie elementów i łączenie ich za pomocą wskaźników.
3. **Wyświetlanie listy** – wypisywanie wszystkich zapisanych liczb.
4. **Wyszukiwanie** – sprawdzanie, czy podana liczba znajduje się na liście.
5. **Usuwanie** – usuwanie wybranego elementu z listy.
6. **Odwracanie listy** – zmiana kolejności wszystkich elementów.
7. **Zwalnianie pamięci** – usuwanie wszystkich elementów po zakończeniu programu.

## Wykorzystane biblioteki

- `iostream` – obsługa wejścia i wyjścia.
- `fstream` – odczytywanie danych z pliku tekstowego.

## Budowa listy

Każdy element listy zawiera:
- `liczba` – przechowywaną wartość.
- `next` – wskaźnik na następny element.

W programie wykorzystano wskaźnik `glowa`, który wskazuje pierwszy element listy.

## Plik wejściowy

Program wymaga pliku `liczby.txt` znajdującego się w katalogu roboczym programu.

Przykładowa zawartość:

```txt
10 20 30 40 50 60 70 80 90 100
```

## Cel projektu

Celem projektu jest poznanie działania list jednokierunkowych, nauka korzystania ze wskaźników oraz wykonywania operacji na dynamicznie przydzielanej pamięci.

Projekt pozwala zrozumieć, jak dodawać, wyszukiwać, usuwać i odwracać elementy listy w języku C++.