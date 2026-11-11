# Lista jednokierunkowa – wczytywanie danych z pliku C++

## Opis projektu

Program przedstawia działanie listy jednokierunkowej w języku C++. Jego zadaniem jest odczytanie liczb z pliku tekstowego, zapisanie ich w liście, wyświetlenie zawartości oraz zwolnienie zajętej pamięci.

## Funkcje programu

1. **Wczytywanie danych** – program otwiera plik `liczby.txt` i odczytuje zapisane w nim liczby.
2. **Tworzenie listy** – dla każdej wczytanej liczby tworzy nowy element listy.
3. **Dodawanie elementów** – kolejne liczby są dodawane na koniec listy.
4. **Wyświetlanie danych** – program przechodzi przez listę i wypisuje wszystkie zapisane liczby.
5. **Zwalnianie pamięci** – po zakończeniu działania programu wszystkie elementy listy są usuwane z pamięci.

## Wykorzystane biblioteki

- `iostream` – wyświetlanie danych w konsoli.
- `fstream` – obsługa plików tekstowych.

## Budowa listy

Lista składa się z elementów, które przechowują dwie informacje:

- `id` – wartość liczbowa.
- `next` – wskaźnik na następny element listy.

W programie wykorzystane są dwa wskaźniki:

- `L` – wskazuje początek listy.
- `P` – wskazuje koniec listy.

## Plik wejściowy

Program wymaga pliku `liczby.txt`, który powinien znajdować się w katalogu roboczym programu.

Przykładowa zawartość pliku:

```txt
10 20 30 40 50 60 70 80 90 100
```

## Cel projektu

Celem projektu jest poznanie zasad działania listy jednokierunkowej, obsługi wskaźników, dynamicznego przydzielania pamięci oraz odczytywania danych z plików tekstowych.