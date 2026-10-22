FX-Team
Licznik WPF
Opis projektu

FX-Team to projekt aplikacji desktopowej stworzonej w języku C# z wykorzystaniem technologii WPF (Windows Presentation Foundation). Aplikacja umożliwia zwiększanie i zmniejszanie wartości licznika za pomocą dwóch przycisków.

Technologie
C#
WPF
XAML
Visual Studio
Wygląd aplikacji

Interfejs aplikacji składa się z licznika wyświetlającego aktualną wartość oraz dwóch przycisków:

Dodaj 1 – zwiększa wartość licznika o jeden.
Odejmij 1 – zmniejsza wartość licznika o jeden.

Początkowa wartość licznika wynosi 0.

Opis plików
MainWindow.xaml – odpowiada za wygląd okna aplikacji i rozmieszczenie kontrolek.
MainWindow.xaml.cs – zawiera kod C# obsługujący przyciski i zmianę wartości licznika.
Działanie programu

W pliku MainWindow.xaml.cs zadeklarowana jest zmienna count, która przechowuje aktualną wartość licznika.

Po kliknięciu przycisku Dodaj 1 metoda Increment_Click zwiększa wartość zmiennej o jeden i aktualizuje tekst wyświetlany w kontrolce CounterBlock.

Po kliknięciu przycisku Odejmij 1 metoda Decrement_Click zmniejsza wartość licznika o jeden i aktualizuje wyświetlaną wartość.

Do zamiany liczby na tekst wykorzystywana jest metoda ToString().

Uruchomienie projektu
Otwórz projekt w Visual Studio.
Uruchom aplikację, naciskając F5.
Kliknij Dodaj 1, aby zwiększyć licznik.
Kliknij Odejmij 1, aby zmniejszyć licznik.
Cel projektu

Celem projektu jest poznanie podstaw programowania w C# i WPF, tworzenia interfejsu w języku XAML, deklarowania zmiennych oraz obsługi zdarzeń kliknięcia przycisków.

Dokumentacja
Dokumentacja WPF
Dokumentacja języka C#
Kontrolka Button
Kontrolka TextBlock

Rok: 2026
